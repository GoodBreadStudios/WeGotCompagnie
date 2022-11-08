// Fill out your copyright notice in the Description page of Project Settings.


#include "ComboTree.h"
#include "HelperMacros.h"

ComboTree::ComboTree() :
	// Make sure the init list matched with the init order
	// CurrentSubTree = nullptr is at the root
	CurrentSubTree(nullptr),
	TimeSinceTransition(-1.0f),
	MaxWaitTime(0.4f) {}

ComboTree::~ComboTree() {}

void ComboTree::AddComboSubTree(ComboSubTree SubTree)
{
	// The subtree first key has to be unique. Each subtrees' first key has to be the same
	if (SubTreeMap.Find(SubTree.Key)) return;

	SubTreeMap.Add(SubTree.Key, SubTree);
}

void ComboTree::KeyPressed(FKey Key, float WorldTime)
{
	if (!CurrentSubTree) // At the root
	{
		if (!SubTreeMap.Find(Key)) {
			// Print("Input is subscribed for processing, but is not the beginning of a combo");
			Print("Combo Key couldn't be found");
			TimeSinceTransition = -1.0f;
			return;
		}
		Print("Combo Key Found");
		TimeSinceTransition = WorldTime;
		// Print("CurrentState is at the root");
		CurrentSubTree = SubTreeMap.Find(Key);
		// Print(FString::Printf(TEXT("State transitioned into key %s"), *CurrentSubTree->Key.ToString()));
		// Call all of its callbacks
		CurrentSubTree->EventCallbacks.Broadcast();
	}
	else
	{
		bool isTransitioned = false;
		if ((WorldTime - TimeSinceTransition) <= MaxWaitTime)
		{
			for (const ComboSubTree& Child : CurrentSubTree->Childs)
			{
				if (Child.Key == Key)
				{
					TimeSinceTransition = WorldTime;
					CurrentSubTree = &Child;
					// Print(FString::Printf(TEXT("State transitioned into key %s"), *CurrentSubTree->Key.ToString()));
					CurrentSubTree->EventCallbacks.Broadcast();
					isTransitioned = true;
					break;
				}
			}
		}
		if (!isTransitioned)
		{
			TimeSinceTransition = -1.0f;
			// Try again at the root
			// Print("Child key missing or invalid pressed time, now retry at the root");
			CurrentSubTree = nullptr;
			KeyPressed(Key, WorldTime);
		}
	}
};



