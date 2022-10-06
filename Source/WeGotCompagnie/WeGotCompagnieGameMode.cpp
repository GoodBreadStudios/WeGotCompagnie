// Copyright Epic Games, Inc. All Rights Reserved.

#include "WeGotCompagnieGameMode.h"
#include "WeGotCompagnieCharacter.h"
#include "UObject/ConstructorHelpers.h"

AWeGotCompagnieGameMode::AWeGotCompagnieGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
