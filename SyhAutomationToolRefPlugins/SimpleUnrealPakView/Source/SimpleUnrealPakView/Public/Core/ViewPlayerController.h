// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ViewPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class SIMPLEUNREALPAKVIEW_API AViewPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	AViewPlayerController();

	virtual void BeginPlay() override;
};
