// Copyright (C) RenZhai.2020.All Rights Reserved.
#include "SimpleUnrealPakViewType.h"

FSimpleOneParamDelegate SimpleOneParamDelegate;
UStaticMeshComponent *GMeshComponent = nullptr;
USkinnedMeshComponent* SkinnedMeshComponent = nullptr;
UProceduralMeshComponent *GProceduralMeshComponent;
UWorld *ViewProtWorld = nullptr;
TArray<TWeakObjectPtr<AActor>> Actors;

UWorld* GetWorld()
{
	return ViewProtWorld;
}