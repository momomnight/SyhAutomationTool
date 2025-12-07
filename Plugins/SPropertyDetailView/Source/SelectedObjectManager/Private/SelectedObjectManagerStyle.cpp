// Copyright Epic Games, Inc. All Rights Reserved.

#include "SelectedObjectManagerStyle.h"
#include "Styling/SlateStyleRegistry.h"
#include "Framework/Application/SlateApplication.h"
#include "Interfaces/IPluginManager.h"
#include "Styling/SlateStyleMacros.h"

#define RootToContentDir Style->RootToContentDir

TSharedPtr<FSlateStyleSet> FSelectedObjectManagerStyle::StyleInstance = nullptr;

void FSelectedObjectManagerStyle::Initialize()
{
	if (!StyleInstance.IsValid())
	{
		StyleInstance = Create();
		FSlateStyleRegistry::RegisterSlateStyle(*StyleInstance);
	}
}

void FSelectedObjectManagerStyle::Shutdown()
{
	FSlateStyleRegistry::UnRegisterSlateStyle(*StyleInstance);
	ensure(StyleInstance.IsUnique());
	StyleInstance.Reset();
}

FName FSelectedObjectManagerStyle::GetStyleSetName()
{
	static FName StyleSetName(TEXT("SelectedObjectManagerStyle"));
	return StyleSetName;
}

const FVector2D Icon16x16(16.0f, 16.0f);
const FVector2D Icon20x20(20.0f, 20.0f);

TSharedRef< FSlateStyleSet > FSelectedObjectManagerStyle::Create()
{
	TSharedRef< FSlateStyleSet > Style = MakeShareable(new FSlateStyleSet("SelectedObjectManagerStyle"));
	
	if (TSharedPtr<IPlugin> Plugin = IPluginManager::Get().FindPlugin("SPropertyDetailView"))
	{
		Style->SetContentRoot(Plugin->GetBaseDir() / TEXT("Resources"));
	}
	else
	{
		Style->SetContentRoot(FPaths::ProjectDir() / TEXT("Resources"));
	}

	Style->Set("SPropertyDetailView.PluginAction", new IMAGE_BRUSH_SVG(TEXT("PlaceholderButtonIcon"), Icon20x20));

	return Style;
}

void FSelectedObjectManagerStyle::ReloadTextures()
{
	if (FSlateApplication::IsInitialized())
	{
		FSlateApplication::Get().GetRenderer()->ReloadTextureResources();
	}
}

const ISlateStyle& FSelectedObjectManagerStyle::Get()
{
	return *StyleInstance;
}
