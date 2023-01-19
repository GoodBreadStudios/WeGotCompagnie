// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "HelperMacros.h"
#include "ComboTree.h"
#include "Components/BillboardComponent.h"
#include "Components/WidgetComponent.h"
#include "WeGotCompagnieCharacter.generated.h"

// https://forums.unrealengine.com/t/creating-enums-in-c/465555
// Use the enum in BP, only use this when the design is finalized.
UENUM(BlueprintType) // Locomotion state (default is Idle)
enum class EPlayerState : uint8 { Idle, Moving, Jump, UseCurrent };
UENUM(BlueprintType) // Default is None, is used to either blend (ranged) or overwrite (melee) the current locomotion state
enum class EPlayerActionState : uint8 { None, Damaged, Dead, KnockedDown, Melee, Flurry, Beam, Dodge, UseCurrent };

UCLASS(config=Game)
class AWeGotCompagnieCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;

public:
	AWeGotCompagnieCharacter();

	// Blueprint can only override if BeginPlay is public
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaSecond) override;

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Input)
	float TurnRateGamepad;

protected:

	/** Override to change the current state */
	virtual void StopJumping() override;

	/** Override to change the current state */
	virtual void Jump() override;

	virtual void ToggleLockOn();

	/** Called for forwards/backward input */
	void MoveForward(float Value);

	/** Called for side to side input */
	void MoveRight(float Value);

	/** 
	 * Called via input to turn at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bLockOn;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bForceNoLockOn; // this is used to override bLockOn = true if the boss jumped
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	USkeletalMeshComponent* BossMesh;  // used to extract the boss' socket location for lock-on
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ShowLockOnWidget(bool ShouldShow);

	// Player State
	void  UpdateLocomotionState();
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	EPlayerState CurrentLocomotionState;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	EPlayerActionState CurrentActionState;

	void KeyPressed(FKey Key);

	// Combo and bind funtions
	TUniquePtr<ComboTree> PlayerComboTree;
	//UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	//void CustomFunc();

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	// End of APawn interface

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }
};

