// Copyright Epic Games, Inc. All Rights Reserved.

#include "SPropertyDetailViewStyle.h"
#include "Styling/SlateStyleRegistry.h"
#include "Framework/Application/SlateApplication.h"
#include "Interfaces/IPluginManager.h"
#include "Styling/SlateStyleMacros.h"

#define RootToContentDir Style->RootToContentDir

TSharedPtr<FSlateStyleSet> FSPropertyDetailViewStyle::StyleInstance = nullptr;

void FSPropertyDetailViewStyle::Initialize()
{
	if (!StyleInstance.IsValid())
	{
		StyleInstance = Create();
		FSlateStyleRegistry::RegisterSlateStyle(*StyleInstance);
	}
}

void FSPropertyDetailViewStyle::Shutdown()
{
	FSlateStyleRegistry::UnRegisterSlateStyle(*StyleInstance);
	ensure(StyleInstance.IsUnique());
	StyleInstance.Reset();
}

FName FSPropertyDetailViewStyle::GetStyleSetName()
{
	static FName StyleSetName(TEXT("SPropertyDetailViewStyle"));
	return StyleSetName;
}

const FVector2D Icon16x16(16.0f, 16.0f);
const FVector2D Icon20x20(20.0f, 20.0f);

TSharedRef< FSlateStyleSet > FSPropertyDetailViewStyle::Create()
{
	TSharedRef< FSlateStyleSet > Style = MakeShareable(new FSlateStyleSet("SPropertyDetailViewStyle"));
	Style->SetContentRoot(IPluginManager::Get().FindPlugin("SPropertyDetailView")->GetBaseDir() / TEXT("Resources"));

	Style->Set("SPropertyDetailView.OpenPluginWindow", new IMAGE_BRUSH_SVG(TEXT("PlaceholderButtonIcon"), Icon20x20));

	return Style;
}

void FSPropertyDetailViewStyle::ReloadTextures()
{
	if (FSlateApplication::IsInitialized())
	{
		FSlateApplication::Get().GetRenderer()->ReloadTextureResources();
	}
}

const ISlateStyle& FSPropertyDetailViewStyle::Get()
{
	return *StyleInstance;
}
