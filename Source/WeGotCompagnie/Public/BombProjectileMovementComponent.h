// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "BombProjectileMovementComponent.generated.h"

/**
 * 
 */
UCLASS()
class WEGOTCOMPAGNIE_API UBombProjectileMovementComponent : public UProjectileMovementComponent
{
	GENERATED_BODY()
	
	public:
		virtual void StopSimulating(const FHitResult& HitResult);
		virtual void Activate(bool bReset);
		void UpdateBombVelocity();
	
	
};
