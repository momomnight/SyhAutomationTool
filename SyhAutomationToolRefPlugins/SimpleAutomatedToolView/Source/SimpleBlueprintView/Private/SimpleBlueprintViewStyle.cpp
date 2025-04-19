// Copyright Epic Games, Inc. All Rights Reserved.

#include "SimpleBlueprintViewStyle.h"
#include "Styling/SlateStyleRegistry.h"
#include "Framework/Application/SlateApplication.h"
#include "Interfaces/IPluginManager.h"
#include "Styling/SlateStyleMacros.h"
#include "Misc/Paths.h"

#if !IS_PROGRAM
#include "Slate/SlateGameResources.h"
#endif

#define RootToContentDir Style->RootToContentDir

TSharedPtr<FSlateStyleSet> FSimpleBlueprintViewStyle::StyleInstance = nullptr;

void FSimpleBlueprintViewStyle::Initialize()
{
	if (!StyleInstance.IsValid())
	{
		StyleInstance = Create();
		FSlateStyleRegistry::RegisterSlateStyle(*StyleInstance);
	}
}

void FSimpleBlueprintViewStyle::Shutdown()
{
	FSlateStyleRegistry::UnRegisterSlateStyle(*StyleInstance);
	ensure(StyleInstance.IsUnique());
	StyleInstance.Reset();
}

FName FSimpleBlueprintViewStyle::GetStyleSetName()
{
	static FName StyleSetName(TEXT("SimpleBlueprintViewStyle"));
	return StyleSetName;
}

const FVector2D Icon16x16(16.0f, 16.0f);
const FVector2D Icon20x20(20.0f, 20.0f);

TSharedRef< FSlateStyleSet > FSimpleBlueprintViewStyle::Create()
{
	TSharedRef< FSlateStyleSet > Style = MakeShareable(new FSlateStyleSet("SimpleBlueprintViewStyle"));
	if (TSharedPtr<IPlugin> Plugin = IPluginManager::Get().FindPlugin("SimpleAutomatedToolView"))
	{
		Style->SetContentRoot(Plugin->GetBaseDir() / TEXT("Resources"));
	}
	else
	{
		Style->SetContentRoot(FPaths::ProjectDir() / TEXT("Resources"));
	}

	Style->Set("SimpleBlueprintView.OpenPluginWindow", new IMAGE_BRUSH_SVG(TEXT("PlaceholderButtonIcon"), Icon20x20));

	return Style;
}

void FSimpleBlueprintViewStyle::ReloadTextures()
{
	if (FSlateApplication::IsInitialized())
	{
		FSlateApplication::Get().GetRenderer()->ReloadTextureResources();
	}
}

const ISlateStyle& FSimpleBlueprintViewStyle::Get()
{
	return *StyleInstance;
}
