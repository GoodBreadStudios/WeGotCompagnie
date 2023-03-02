// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "HelperMacros.h"
#include "Components/BillboardComponent.h"
#include "Components/WidgetComponent.h"
#include "CommonUI/Public/CommonActivatableWidget.h"
#include "WeGotCompagnieCharacter.generated.h"


// https://forums.unrealengine.com/t/creating-enums-in-c/465555
//// Use the enum in BP, only use this when the design is finalized.
//UENUM(BlueprintType) // Locomotion state (default is Idle)
//enum class EPlayerState : uint8 { Idle, Moving, Jump, UseCurrent };
//UENUM(BlueprintType) // Default is None, is used to either blend (ranged) or overwrite (melee) the current locomotion state
//enum class EPlayerActionState : uint8 { None, Damaged, Dead, KnockedDown, Melee, Flurry, Beam, Dodge, UseCurrent };

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
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void StopJumpUp();

	/** Override to change the current state */
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void JumpUp();

	/** Called for forwards/backward input */
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void MoveForward(float Value);

	/** Called for side to side input */
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void MoveRight(float Value);

	/** 
	 * Called via input to turn at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void LookUpAtRate(float Rate);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ShowLockOnWidget(bool ShouldShow);

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

