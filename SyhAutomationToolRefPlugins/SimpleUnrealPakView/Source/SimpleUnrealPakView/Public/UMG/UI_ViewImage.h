// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UI_ViewImage.generated.h"

class UImage;
/**
 * 
 */
UCLASS()
class SIMPLEUNREALPAKVIEW_API UUI_ViewImage : public UUserWidget
{
	GENERATED_BODY()

	UPROPERTY(meta = (BindWidget))
	UImage* ImageBox;

public:
	virtual void NativeConstruct();
	virtual void NativeDestruct();
	
public:
	void SetImage(UTexture2D *InImage);
};
