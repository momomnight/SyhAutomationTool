// Copyright Epic Games, Inc. All Rights Reserved.

#include "SimpleAutomatedToolView.h"
#include "SimpleAutomatedToolViewStyle.h"
#include "SimpleAutomatedToolViewCommands.h"
#include "Widgets/Docking/SDockTab.h"
#include "SimpleAutomatedToolViewEditorID.h"
#include "Widget/SAutomatedToolMenuBarView.h"
#include "Widget/SAutomatedToolViewMainFrame.h"
#include "Widgets/SBoxPanel.h"
#include "SimpleSlateFileTree.h"

#if WITH_EDITOR
#include "LevelEditor.h"
#endif

#define LOCTEXT_NAMESPACE "FSimpleAutomatedToolViewModule"

void FSimpleAutomatedToolViewModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
	FSimpleAutomatedToolViewStyle::Initialize();
	FSimpleAutomatedToolViewStyle::ReloadTextures();

	FSimpleAutomatedToolViewCommands::Register();
	
	PluginCommands = MakeShareable(new FUICommandList);

	PluginCommands->MapAction(
		FSimpleAutomatedToolViewCommands::Get().OpenPluginWindow,
		FExecuteAction::CreateRaw(this, &FSimpleAutomatedToolViewModule::PluginButtonClicked),
		FCanExecuteAction());

	//UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::CreateRaw(this, &FSimpleAutomatedToolViewModule::RegisterMenus));
	
	FGlobalTabmanager::Get()->RegisterNomadTabSpawner(FSimpleAutomatedToolViewEditorID::TabName, FOnSpawnTab::CreateRaw(this, &FSimpleAutomatedToolViewModule::OnSpawnPluginTab))
		.SetDisplayName(LOCTEXT("FSimpleAutomatedToolViewTabTitle", "SimpleAutomatedToolView"))
		.SetMenuType(ETabSpawnerMenuType::Hidden);
	
	FSimpleSlateFileTreeModule& AutomatedToolViewModule = FModuleManager::Get().LoadModuleChecked<FSimpleSlateFileTreeModule>("SimpleSlateFileTree");

}

void FSimpleAutomatedToolViewModule::ShutdownModule()
{

	FSimpleAutomatedToolViewStyle::Shutdown();

	FSimpleAutomatedToolViewCommands::Unregister();

	FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(FSimpleAutomatedToolViewEditorID::TabName);

	FModuleManager::Get().UnloadModule("SimpleSlateFileTree");
}

TSharedRef<SDockTab> FSimpleAutomatedToolViewModule::OnSpawnPluginTab(const FSpawnTabArgs& SpawnTabArgs)
{
	return SNew(SDockTab)
		.TabRole(ETabRole::NomadTab)
		[
			SNew(SVerticalBox)
				+ SVerticalBox::Slot()
				.AutoHeight()
				[
					SNew(SAutomatedToolMenuBarView).CommandList(PluginCommands)
				]
				+ SVerticalBox::Slot()
				.FillHeight(1.f)
				[
					SAssignNew(AutomatedToolViewMainFrame, SAutomatedToolViewMainFrame)
				]
		];
}

void FSimpleAutomatedToolViewModule::PluginButtonClicked()
{
	FGlobalTabmanager::Get()->TryInvokeTab(FSimpleAutomatedToolViewEditorID::TabName);
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FSimpleAutomatedToolViewModule, SimpleAutomatedToolView)