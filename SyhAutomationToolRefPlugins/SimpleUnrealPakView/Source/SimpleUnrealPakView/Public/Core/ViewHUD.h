// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "ViewHUD.generated.h"

class UUI_ViewWidget;
class UUI_ViewImage;

/**
 * 
 */
UCLASS()
class SIMPLEUNREALPAKVIEW_API AViewHUD : public AHUD
{
	GENERATED_BODY()

public:
	AViewHUD();

	virtual void BeginPlay() override;

	UUI_ViewImage* GetViewImageWidget();
protected:
	TSubclassOf<UUI_ViewWidget> ViewWidgetClass;
	TSubclassOf<UUI_ViewImage> ViewImageClass;
	
	UUI_ViewWidget* ViewWidgetPtr;
};
