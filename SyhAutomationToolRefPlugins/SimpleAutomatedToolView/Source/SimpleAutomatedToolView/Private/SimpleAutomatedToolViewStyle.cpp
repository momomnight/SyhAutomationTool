// Copyright Epic Games, Inc. All Rights Reserved.

#include "SimpleAutomatedToolViewStyle.h"
#include "Styling/SlateStyleRegistry.h"
#include "Framework/Application/SlateApplication.h"
#include "Interfaces/IPluginManager.h"
#include "Styling/SlateStyleMacros.h"
#include "Misc/Paths.h"

#if WITH_EDITOR
#include "Slate/SlateGameResources.h"
#endif


#define RootToContentDir Style->RootToContentDir

TSharedPtr<FSlateStyleSet> FSimpleAutomatedToolViewStyle::StyleInstance = nullptr;

void FSimpleAutomatedToolViewStyle::Initialize()
{
	if (!StyleInstance.IsValid())
	{
		StyleInstance = Create();
		FSlateStyleRegistry::RegisterSlateStyle(*StyleInstance);
	}
}

void FSimpleAutomatedToolViewStyle::Shutdown()
{
	FSlateStyleRegistry::UnRegisterSlateStyle(*StyleInstance);
	ensure(StyleInstance.IsUnique());
	StyleInstance.Reset();
}

FName FSimpleAutomatedToolViewStyle::GetStyleSetName()
{
	static FName StyleSetName(TEXT("SimpleAutomatedToolViewStyle"));
	return StyleSetName;
}

const FVector2D Icon16x16(16.0f, 16.0f);
const FVector2D Icon20x20(20.0f, 20.0f);

TSharedRef< FSlateStyleSet > FSimpleAutomatedToolViewStyle::Create()
{
	TSharedRef< FSlateStyleSet > Style = MakeShareable(new FSlateStyleSet("SimpleAutomatedToolViewStyle"));
	if (TSharedPtr<IPlugin> Plugin = IPluginManager::Get().FindPlugin("SimpleAutomatedToolView"))
	{
		Style->SetContentRoot(Plugin->GetBaseDir() / TEXT("Resources"));
	}
	else
	{
		Style->SetContentRoot(FPaths::ProjectDir() / TEXT("Resources"));
	}

	Style->Set("SimpleAutomatedToolView.OpenPluginWindow", new IMAGE_BRUSH_SVG(TEXT("PlaceholderButtonIcon"), Icon20x20));

	return Style;
}

void FSimpleAutomatedToolViewStyle::ReloadTextures()
{
	if (FSlateApplication::IsInitialized())
	{
		FSlateApplication::Get().GetRenderer()->ReloadTextureResources();
	}
}

const ISlateStyle& FSimpleAutomatedToolViewStyle::Get()
{
	return *StyleInstance;
}
