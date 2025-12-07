// Copyright Epic Games, Inc. All Rights Reserved.

#include "FileTreeMenuStyle.h"
#include "Framework/Application/SlateApplication.h"
#include "Styling/SlateStyleRegistry.h"
#include "Interfaces/IPluginManager.h"
#include "Styling/SlateStyleMacros.h"

#define RootToContentDir Style->RootToContentDir

TSharedPtr<FSlateStyleSet> FFileTreeMenuStyle::StyleInstance = nullptr;

void FFileTreeMenuStyle::Initialize()
{
	if (!StyleInstance.IsValid())
	{
		StyleInstance = Create();
		FSlateStyleRegistry::RegisterSlateStyle(*StyleInstance);
	}
}

void FFileTreeMenuStyle::Shutdown()
{
	FSlateStyleRegistry::UnRegisterSlateStyle(*StyleInstance);
	ensure(StyleInstance.IsUnique());
	StyleInstance.Reset();
}

FName FFileTreeMenuStyle::GetStyleSetName()
{
	static FName StyleSetName(TEXT("FileTreeMenuStyle"));
	return StyleSetName;
}


const FVector2D Icon16x16(16.0f, 16.0f);
const FVector2D Icon20x20(20.0f, 20.0f);

TSharedRef< FSlateStyleSet > FFileTreeMenuStyle::Create()
{
	TSharedRef< FSlateStyleSet > Style = MakeShareable(new FSlateStyleSet("FileTreeMenuStyle"));
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

void FFileTreeMenuStyle::ReloadTextures()
{
	if (FSlateApplication::IsInitialized())
	{
		FSlateApplication::Get().GetRenderer()->ReloadTextureResources();
	}
}

const ISlateStyle& FFileTreeMenuStyle::Get()
{
	return *StyleInstance;
}
