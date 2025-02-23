// Copyright (C) RenZhai.2020.All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "ProceduralMeshComponent.h"

DECLARE_DELEGATE_OneParam(FSimpleOneParamDelegate, const TArray<FString> &);

extern UProceduralMeshComponent *GProceduralMeshComponent;
extern UStaticMeshComponent *GMeshComponent;
extern USkinnedMeshComponent* SkinnedMeshComponent;
extern FSimpleOneParamDelegate SimpleOneParamDelegate;
extern UWorld *ViewProtWorld;

extern TArray<TWeakObjectPtr<AActor>> Actors;
extern UWorld *GetWorld();