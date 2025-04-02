// Copyright Epic Games, Inc. All Rights Reserved.

#include "SimpleAutomatedToolView.h"
#include "SimpleAutomatedToolViewStyle.h"
#include "SimpleAutomatedToolViewCommands.h"
#include "Widgets/Docking/SDockTab.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Text/STextBlock.h"
#include "ToolMenus.h"
#include "SimpleAutomatedToolViewEditorID.h"
#include "Widget/SAutomatedToolMenuBarView.h"
#include "Widget/SAutomatedToolViewMainFrame.h"
#include "Widgets/SBoxPanel.h"
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

	UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::CreateRaw(this, &FSimpleAutomatedToolViewModule::RegisterMenus));
	
	FGlobalTabmanager::Get()->RegisterNomadTabSpawner(FSimpleAutomatedToolViewEditorID::TabName, FOnSpawnTab::CreateRaw(this, &FSimpleAutomatedToolViewModule::OnSpawnPluginTab))
		.SetDisplayName(LOCTEXT("FSimpleAutomatedToolViewTabTitle", "SimpleAutomatedToolView"))
		.SetMenuType(ETabSpawnerMenuType::Hidden);
}

void FSimpleAutomatedToolViewModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	UToolMenus::UnRegisterStartupCallback(this);

	UToolMenus::UnregisterOwner(this);

	FSimpleAutomatedToolViewStyle::Shutdown();

	FSimpleAutomatedToolViewCommands::Unregister();

	FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(FSimpleAutomatedToolViewEditorID::TabName);
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
					SNew(SAutomatedToolViewMainFrame)
				]
		];
}

void FSimpleAutomatedToolViewModule::PluginButtonClicked()
{
	FGlobalTabmanager::Get()->TryInvokeTab(FSimpleAutomatedToolViewEditorID::TabName);
}

void FSimpleAutomatedToolViewModule::RegisterMenus()
{
	// Owner will be used for cleanup in call to UToolMenus::UnregisterOwner
	FToolMenuOwnerScoped OwnerScoped(this);

	{
		UToolMenu* Menu = UToolMenus::Get()->ExtendMenu("LevelEditor.MainMenu.Window");
		{
			FToolMenuSection& Section = Menu->FindOrAddSection("WindowLayout");
			Section.AddMenuEntryWithCommandList(FSimpleAutomatedToolViewCommands::Get().OpenPluginWindow, PluginCommands);
		}
	}

	{
		UToolMenu* ToolbarMenu = UToolMenus::Get()->ExtendMenu("LevelEditor.LevelEditorToolBar");
		{
			FToolMenuSection& Section = ToolbarMenu->FindOrAddSection("Settings");
			{
				FToolMenuEntry& Entry = Section.AddEntry(FToolMenuEntry::InitToolBarButton(FSimpleAutomatedToolViewCommands::Get().OpenPluginWindow));
				Entry.SetCommandList(PluginCommands);
			}
		}
	}
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FSimpleAutomatedToolViewModule, SimpleAutomatedToolView)