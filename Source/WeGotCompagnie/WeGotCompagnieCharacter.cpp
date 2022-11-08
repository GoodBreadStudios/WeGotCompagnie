// Copyright Epic Games, Inc. All Rights Reserved.

#include "WeGotCompagnieCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "HelperMacros.h"
#include "GameFramework/SpringArmComponent.h"

//////////////////////////////////////////////////////////////////////////
// AWeGotCompagnieCharacter

AWeGotCompagnieCharacter::AWeGotCompagnieCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// set our turn rate for input
	TurnRateGamepad = 50.f;

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f); // ...at this rotation rate

	// Note: For faster iteration times these variables, and many more, can be tweaked in the Character Blueprint
	// instead of recompiling to adjust them
	GetCharacterMovement()->JumpZVelocity = 800.f;
	GetCharacterMovement()->GravityScale = .5f;
	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 400.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named ThirdPersonCharacter (to avoid direct content references in C++)

	// Init
	CurrentLocomotionState = EPlayerState::Idle;
	CurrentActionState = EPlayerActionState::None;
	bLockOn = false;
	BossMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BossMesh"));
	PlayerComboTree = TUniquePtr<ComboTree>{new ComboTree{}};
}

//////////////////////////////////////////////////////////////////////////
// Input

void AWeGotCompagnieCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AWeGotCompagnieCharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &AWeGotCompagnieCharacter::StopJumping);
	PlayerInputComponent->BindAction("LockOn", IE_Pressed, this, &AWeGotCompagnieCharacter::ToggleLockOn);

	PlayerInputComponent->BindAxis("Move Forward / Backward", this, &AWeGotCompagnieCharacter::MoveForward);
	PlayerInputComponent->BindAxis("Move Right / Left", this, &AWeGotCompagnieCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn Right / Left Mouse", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("Look Up / Down Mouse", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("Turn Right / Left Gamepad", this, &AWeGotCompagnieCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("Look Up / Down Gamepad", this, &AWeGotCompagnieCharacter::LookUpAtRate);

	// Combo buttons, these will be processed on the combo tree
	//PlayerInputComponent->BindKey(EKeys::Gamepad_FaceButton_Top, IE_Pressed, this, &AWeGotCompagnieCharacter::KeyPressed);
	//PlayerInputComponent->BindKey(EKeys::Gamepad_FaceButton_Left, IE_Pressed, this, &AWeGotCompagnieCharacter::KeyPressed);
	//PlayerInputComponent->BindKey(EKeys::Gamepad_RightShoulder, IE_Pressed, this, &AWeGotCompagnieCharacter::KeyPressed);
	//PlayerInputComponent->BindKey(EKeys::Gamepad_RightTrigger, IE_Pressed, this, &AWeGotCompagnieCharacter::KeyPressed);
	//PlayerInputComponent->BindKey(EKeys::Gamepad_LeftShoulder, IE_Pressed, this, &AWeGotCompagnieCharacter::KeyPressed);
	//PlayerInputComponent->BindKey(EKeys::Gamepad_LeftTrigger, IE_Pressed, this, &AWeGotCompagnieCharacter::KeyPressed);

	//using Node = ComboTree::ComboSubTree;
	//using Childs = TArray<Node>;
	//using Callback = FComboEventCallbacks;

	//PlayerComboTree->AddComboSubTree(
	//	Node{ EKeys::Gamepad_LeftShoulder, Callback{}, Childs {
	//		Node { EKeys::Gamepad_RightShoulder, ComboTree::CreateCallbacks(this, TArray{&AWeGotCompagnieCharacter::CustomFunc}), Childs{}}
	//	}}
	//);
}

void AWeGotCompagnieCharacter::StopJumping()
{
	ACharacter::StopJumping();

	// Update the player state
	UpdateLocomotionState();
}

void AWeGotCompagnieCharacter::Jump()
{
	ACharacter::Jump();

	// Update the player state
	UpdateLocomotionState();
}

void AWeGotCompagnieCharacter::ToggleLockOn()
{
	if (!bLockOn && IsValid(BossMesh))
	{
		bLockOn = true;
		ShowLockOnWidget(true);
	}
	else
	{
		bLockOn = false;
		ShowLockOnWidget(false);
	}
}

void AWeGotCompagnieCharacter::TurnAtRate(float Rate)
{
	if (Rate != 0.0f)
	{
		// calculate delta for this frame from the rate information
		AddControllerYawInput(Rate * TurnRateGamepad * GetWorld()->GetDeltaSeconds());
		if (bLockOn)
		{
			bLockOn = false; // disengage lockon on camera turned
			ShowLockOnWidget(false);
		}
	}
	else if (bLockOn)
	{
		FVector LockOnLocation{ BossMesh->GetSocketLocation(TEXT("Neck_LowSocket")) };
		FVector LookAt{ LockOnLocation - GetActorLocation() };
		GetController()->SetControlRotation(FMath::RInterpTo(GetController()->GetControlRotation(), LookAt.Rotation(), 0.5f, 0.5f));
	}
}

void AWeGotCompagnieCharacter::LookUpAtRate(float Rate)
{
	if (Rate != 0.0f)
	{
		// calculate delta for this frame from the rate information
		AddControllerPitchInput(Rate * TurnRateGamepad * GetWorld()->GetDeltaSeconds());
		if (bLockOn)
		{
			bLockOn = false; // disengage lockon on camera turned
			ShowLockOnWidget(false);
		}
	}
	 // See TurnAtRate for lockon implementation
}

void AWeGotCompagnieCharacter::MoveForward(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}

	// Update the player state
	UpdateLocomotionState();
}

void AWeGotCompagnieCharacter::MoveRight(float Value)
{
	if ( (Controller != nullptr) && (Value != 0.0f) )
	{
		// find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
	
		// get right vector 
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, Value);
	}

	// Update the player state
	UpdateLocomotionState();
}

void AWeGotCompagnieCharacter::BeginPlay()
{
	Super::BeginPlay();
}

void AWeGotCompagnieCharacter::Tick(float DeltaSecond)
{
	Super::Tick(DeltaSecond);

	// Debug
	//DrawDebugDirectionalArrow(GetWorld(), GetActorLocation(), GetActorLocation() + GetMovementComponent()->Velocity, 10.0f, FColor::Red, false, -1.0f, (uint8)0U, 3.0f);
	//DrawDebugCoordinateSystem(GetWorld(), GetActorLocation(), GetActorRotation(), 20.0f, false, -1.0f, (uint8)1U, 5.0f);
}

// Put this function at the bottom of all of the key-delegated movement function
 void AWeGotCompagnieCharacter::UpdateLocomotionState()
 {
 	if (GetMovementComponent()->Velocity.Dot(GetActorUpVector()) == 0.0f)
 	{
 		if (GetMovementComponent()->Velocity.Length() == 0.0f)
 		{
			CurrentLocomotionState = EPlayerState::Idle;
 		}
		else
		{
			CurrentLocomotionState = EPlayerState::Moving;
		}
 	}
 	else
 	{
 		CurrentLocomotionState = EPlayerState::Jump;
 	}
 }

void AWeGotCompagnieCharacter::KeyPressed(FKey Key)
{
	PlayerComboTree->KeyPressed(Key, GetWorld()->TimeSeconds);
}

