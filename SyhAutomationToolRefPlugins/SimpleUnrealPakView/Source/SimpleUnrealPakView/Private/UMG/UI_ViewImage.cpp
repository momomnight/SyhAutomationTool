// Fill out your copyright notice in the Description page of Project Settings.

#include "UMG/UI_ViewImage.h"
#include "Components/Image.h"

#define LOCTEXT_NAMESPACE "UI_ViewImge"

void UUI_ViewImage::NativeConstruct()
{
	Super::NativeConstruct();

}

void UUI_ViewImage::NativeDestruct()
{
	Super::NativeDestruct();

}

void UUI_ViewImage::SetImage(UTexture2D* InImage)
{
	ImageBox->SetBrushFromTexture(InImage);
}

#undef LOCTEXT_NAMESPACE