// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

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

/**
 * 
 */
class WEGOTCOMPAGNIE_API HelperMacros
{
public:
	HelperMacros();
	~HelperMacros();
};
