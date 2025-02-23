// Fill out your copyright notice in the Description page of Project Settings.

#include "Core/ViewHUD.h"
#include "UObject/ConstructorHelpers.h"
#include "UMG/UI_ViewWidget.h"
#include "UMG/UI_ViewImage.h"

AViewHUD::AViewHUD()
{
	static ConstructorHelpers::FClassFinder<UUI_ViewWidget> ViewWidget_Class(TEXT("/Game/ViewWidget"));
	if (ViewWidget_Class.Class != NULL)
	{
		ViewWidgetClass = ViewWidget_Class.Class;
	}	

	static ConstructorHelpers::FClassFinder<UUI_ViewImage> ViewImage_Class(TEXT("/Game/ViewImage"));
	if (ViewImage_Class.Class != NULL)
	{
		ViewImageClass = ViewImage_Class.Class;
	}
}

void AViewHUD::BeginPlay()
{
	Super::BeginPlay();

	if (ViewWidgetClass)
	{
		ViewWidgetPtr = CreateWidget<UUI_ViewWidget>(GetWorld(),ViewWidgetClass);
		if (ViewWidgetPtr)
		{
			ViewWidgetPtr->AddToViewport();
		}
	}
}

UUI_ViewImage* AViewHUD::GetViewImageWidget()
{
	if (ViewImageClass)
	{
		if (UUI_ViewImage* InViewImage = CreateWidget<UUI_ViewImage>(GetWorld(), ViewImageClass))
		{
			return InViewImage;
		}
	}

	return NULL;
}
