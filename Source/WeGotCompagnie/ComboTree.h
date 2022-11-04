// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

DECLARE_MULTICAST_DELEGATE(FComboEventCallbacks); // Need multicast for cases like flurry and beam

/**
 * 
 */
class WEGOTCOMPAGNIE_API ComboTree
{
public:
	struct ComboSubTree
	{
		FKey Key;
		FComboEventCallbacks EventCallbacks;
		TArray<ComboSubTree> Childs; // Childs[0] is always the root of the subtree
	};
	const ComboSubTree* CurrentSubTree; // Keep this order of initialization
	float TimeSinceTransition; // World time after the CurrentSubTree is transitioned
	float MaxWaitTime; // Max wait time allowed per transition from one subtree to its child
	TMap<FKey, ComboSubTree> SubTreeMap; // The first key of the combo and its subtree(s), SubTreeMap[0] is the root of the subtree

	ComboTree();
	~ComboTree();

	template <typename UserClass>
	static FComboEventCallbacks CreateCallbacks(UserClass* InUserObject, TArray<void(UserClass::*)()> Callbacks);

	 // Left the arg non-const so we can add move it into the map, then point to it
	 // with the const pointer CurrentSubTree
	void AddComboSubTree(ComboSubTree SubTree);

	void KeyPressed(FKey Key, float WorldTime);
};

// Static members init
template <typename UserClass>
FComboEventCallbacks ComboTree::CreateCallbacks(UserClass* InUserObject, TArray<void(UserClass::*)()> Callbacks)
{
	FComboEventCallbacks RetCallbacks{};

	typedef void(UserClass::* CallbackType)();

	for (CallbackType& UserCallback : Callbacks)
	{
		RetCallbacks.AddUObject(InUserObject, UserCallback);
	}

	return RetCallbacks;
}


