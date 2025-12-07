// Copyright Epic Games, Inc. All Rights Reserved.

#include "SimpleSlateDetailViewStyle.h"
#include "Framework/Application/SlateApplication.h"
#include "Styling/SlateStyleRegistry.h"
#include "Interfaces/IPluginManager.h"
#include "Styling/SlateStyleMacros.h"

#define RootToContentDir Style->RootToContentDir

TSharedPtr<FSlateStyleSet> FSimpleSlateDetailViewStyle::StyleInstance = nullptr;

void FSimpleSlateDetailViewStyle::Initialize()
{
	if (!StyleInstance.IsValid())
	{
		StyleInstance = Create();
		FSlateStyleRegistry::RegisterSlateStyle(*StyleInstance);
	}
}

void FSimpleSlateDetailViewStyle::Shutdown()
{
	FSlateStyleRegistry::UnRegisterSlateStyle(*StyleInstance);
	ensure(StyleInstance.IsUnique());
	StyleInstance.Reset();
}

FName FSimpleSlateDetailViewStyle::GetStyleSetName()
{
	static FName StyleSetName(TEXT("SimpleSlateDetailViewStyle"));
	return StyleSetName;
}


const FVector2D Icon16x16(16.0f, 16.0f);
const FVector2D Icon20x20(20.0f, 20.0f);

TSharedRef< FSlateStyleSet > FSimpleSlateDetailViewStyle::Create()
{
	TSharedRef< FSlateStyleSet > Style = MakeShareable(new FSlateStyleSet("SimpleSlateDetailViewStyle"));
	if (TSharedPtr<IPlugin> Plugin = IPluginManager::Get().FindPlugin("SimpleAutomatedToolView"))
	{
		Style->SetContentRoot(Plugin->GetBaseDir() / TEXT("Resources"));
	}
	else
	{
		Style->SetContentRoot(FPaths::ProjectDir() / TEXT("Resources"));
	}

	Style->Set("SimpleAutomatedToolView.PluginAction", new IMAGE_BRUSH_SVG(TEXT("PlaceholderButtonIcon"), Icon20x20));

	return Style;
}

void FSimpleSlateDetailViewStyle::ReloadTextures()
{
	if (FSlateApplication::IsInitialized())
	{
		FSlateApplication::Get().GetRenderer()->ReloadTextureResources();
	}
}

const ISlateStyle& FSimpleSlateDetailViewStyle::Get()
{
	return *StyleInstance;
}
