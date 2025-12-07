// Copyright Epic Games, Inc. All Rights Reserved.

#include "SimpleBlueprintView.h"
#include "SimpleBlueprintViewStyle.h"
#include "SimpleBlueprintViewCommands.h"
#include "Widgets/Docking/SDockTab.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Text/STextBlock.h"

#if !IS_PROGRAM
#include "LevelEditor.h"
#endif



static const FName SimpleBlueprintViewTabName("SimpleBlueprintView");

#define LOCTEXT_NAMESPACE "FSimpleBlueprintViewModule"

void FSimpleBlueprintViewModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
	FSimpleBlueprintViewStyle::Initialize();
	FSimpleBlueprintViewStyle::ReloadTextures();

	FSimpleBlueprintViewCommands::Register();
	
	PluginCommands = MakeShareable(new FUICommandList);

	PluginCommands->MapAction(
		FSimpleBlueprintViewCommands::Get().OpenPluginWindow,
		FExecuteAction::CreateRaw(this, &FSimpleBlueprintViewModule::PluginButtonClicked),
		FCanExecuteAction());
	
	FGlobalTabmanager::Get()->RegisterNomadTabSpawner(SimpleBlueprintViewTabName, FOnSpawnTab::CreateRaw(this, &FSimpleBlueprintViewModule::OnSpawnPluginTab))
		.SetDisplayName(LOCTEXT("FSimpleBlueprintViewTabTitle", "SimpleBlueprintView"))
		.SetMenuType(ETabSpawnerMenuType::Hidden);
}

void FSimpleBlueprintViewModule::ShutdownModule()
{
	FSimpleBlueprintViewStyle::Shutdown();

	FSimpleBlueprintViewCommands::Unregister();

	FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(SimpleBlueprintViewTabName);
}

TSharedRef<SDockTab> FSimpleBlueprintViewModule::OnSpawnPluginTab(const FSpawnTabArgs& SpawnTabArgs)
{
	FText WidgetText = FText::Format(
		LOCTEXT("WindowWidgetText", "Add code to {0} in {1} to override this window's contents"),
		FText::FromString(TEXT("FSimpleBlueprintViewModule::OnSpawnPluginTab")),
		FText::FromString(TEXT("SimpleBlueprintView.cpp"))
		);

	return SNew(SDockTab)
		.TabRole(ETabRole::NomadTab)
		[
			// Put your tab content here!
			SNew(SBox)
			.HAlign(HAlign_Center)
			.VAlign(VAlign_Center)
			[
				SNew(STextBlock)
				.Text(WidgetText)
			]
		];
}

void FSimpleBlueprintViewModule::PluginButtonClicked()
{
	FGlobalTabmanager::Get()->TryInvokeTab(SimpleBlueprintViewTabName);
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FSimpleBlueprintViewModule, SimpleBlueprintView)