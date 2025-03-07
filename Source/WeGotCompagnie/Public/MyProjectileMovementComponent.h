// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "MyProjectileMovementComponent.generated.h"

/**
 * 
 */
UCLASS()
class WEGOTCOMPAGNIE_API UMyProjectileMovementComponent : public UProjectileMovementComponent
{
	GENERATED_BODY()
	
	UMyProjectileMovementComponent(){
		bAutoActivate = true;
		bAutoUpdateTickRegistration = false;
	};

	
	public:

		void StopSimulating(const FHitResult& HitResult);
		void Activate(bool bReset);
		void UpdatePlaystyleVelocity();
	
	private:

		
};
