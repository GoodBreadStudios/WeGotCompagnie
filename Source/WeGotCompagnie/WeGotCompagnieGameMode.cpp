// Copyright Epic Games, Inc. All Rights Reserved.

#include "WeGotCompagnieGameMode.h"
#include "WeGotCompagnieCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/PlayerStart.h"

// Should move the macros into a seperate HelperMacros class
// TEXT() is used for FName, TChar and FString
// FName can generate FString with ToString
// Fstring must be dereferenced to TChar* for formated printing to avoid compilation issue
#define Print(fstring) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 1.5, FColor::Green, fstring)
// Normal log
#define Log(tchar) UE_LOG(LogTemp, Warning, tchar)
// Formatted log
#define Logf(tchar_format, ...) UE_LOG_REF(LogTemp, Warning, tchar_format, ##__VA_ARGS__)
#define BoolToText(boolean) boolean ? TEXT("true") : TEXT("false")
#define GetVarName(var) TEXT(#var)
#define CheckNull(ptr) if(!ptr) { Print(FString::Printf(TEXT("%s is an nullptr"), GetVarName(var))); return; }

AWeGotCompagnieGameMode::AWeGotCompagnieGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

