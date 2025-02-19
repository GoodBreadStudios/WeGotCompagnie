// Fill out your copyright notice in the Description page of Project Settings.


#include "MyProjectileMovementComponent.h"


void UMyProjectileMovementComponent::StopSimulating(const FHitResult& HitResult)
{
	Velocity = FVector::ZeroVector;
	ClearPendingForce(true);
	UpdateComponentVelocity();
	OnProjectileStop.Broadcast(HitResult);
}

void UMyProjectileMovementComponent::Activate(bool bReset)
{
	if (bReset || ShouldActivate() == true)
	{
		SetComponentTickEnabled(true);
		SetActiveFlag(true);
		UpdatePlaystyleVelocity(); // <- this is a custom function to sets its velocity back to its initialspeed.

		OnComponentActivated.Broadcast(this, bReset);
	}
}

void UMyProjectileMovementComponent::UpdatePlaystyleVelocity()
{
	// InitialSpeed > 0 overrides initial velocity magnitude.
	if (InitialSpeed > 0.f)
	{
		// Defaulted to just using 1.0 FVector so it resets to our BaseValue every time.
		Velocity = FVector(1.0, 0, 0) * InitialSpeed;
	}

	if (bInitialVelocityInLocalSpace)
	{
		SetVelocityInLocalSpace(Velocity);
	}

	if (bRotationFollowsVelocity)
	{
		if (UpdatedComponent)
		{
			FRotator DesiredRotation = Velocity.Rotation();
			if (bRotationRemainsVertical)
			{
				DesiredRotation.Pitch = 0.0f;
				DesiredRotation.Yaw = FRotator::NormalizeAxis(DesiredRotation.Yaw);
				DesiredRotation.Roll = 0.0f;
			}

			UpdatedComponent->SetWorldRotation(DesiredRotation);
		}
	}

	UpdateComponentVelocity();

	if (UpdatedPrimitive && UpdatedPrimitive->IsSimulatingPhysics())
	{
		UpdatedPrimitive->SetPhysicsLinearVelocity(Velocity);
	}
}

