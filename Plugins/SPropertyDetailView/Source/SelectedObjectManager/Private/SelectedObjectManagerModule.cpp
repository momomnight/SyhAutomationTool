// Copyright Epic Games, Inc. All Rights Reserved.

#include "SelectedObjectManagerModule.h"
#include "SelectedObjectManagerStyle.h"
#include "SelectedObjectManagerCommands.h"
#include "Widgets/Docking/SDockTab.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Text/STextBlock.h"
#include "ToolMenus.h"

static const FName SelectedObjectManagerTabName("SelectedObjectManager");

#define LOCTEXT_NAMESPACE "SelectedObjectManagerModule"

void FSelectedObjectManagerModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
	FSelectedObjectManagerStyle::Initialize();
	FSelectedObjectManagerStyle::ReloadTextures();

	FSelectedObjectManagerCommands::Register();
	
	PluginCommands = MakeShareable(new FUICommandList);

	PluginCommands->MapAction(
		FSelectedObjectManagerCommands::Get().OpenPluginWindow,
		FExecuteAction::CreateRaw(this, &FSelectedObjectManagerModule::PluginButtonClicked),
		FCanExecuteAction());

	UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::CreateRaw(this, &FSelectedObjectManagerModule::RegisterMenus));
	
	FGlobalTabmanager::Get()->RegisterNomadTabSpawner(SelectedObjectManagerTabName, FOnSpawnTab::CreateRaw(this, &FSelectedObjectManagerModule::OnSpawnPluginTab))
		.SetDisplayName(LOCTEXT("FSelectedObjectManagerTabTitle", "SelectedObjectManager"))
		.SetMenuType(ETabSpawnerMenuType::Hidden);
}

void FSelectedObjectManagerModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	UToolMenus::UnRegisterStartupCallback(this);

	UToolMenus::UnregisterOwner(this);

	FSelectedObjectManagerStyle::Shutdown();

	FSelectedObjectManagerCommands::Unregister();

	FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(SelectedObjectManagerTabName);
}

TSharedRef<SDockTab> FSelectedObjectManagerModule::OnSpawnPluginTab(const FSpawnTabArgs& SpawnTabArgs)
{
	FText WidgetText = FText::Format(
		LOCTEXT("WindowWidgetText", "Add code to {0} in {1} to override this window's contents"),
		FText::FromString(TEXT("FSPropertyDetailViewModule::OnSpawnPluginTab")),
		FText::FromString(TEXT("SPropertyDetailView.cpp"))
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

void FSelectedObjectManagerModule::PluginButtonClicked()
{
	FGlobalTabmanager::Get()->TryInvokeTab(SelectedObjectManagerTabName);
}

void FSelectedObjectManagerModule::RegisterMenus()
{
	// Owner will be used for cleanup in call to UToolMenus::UnregisterOwner
	FToolMenuOwnerScoped OwnerScoped(this);

	{
		UToolMenu* Menu = UToolMenus::Get()->ExtendMenu("LevelEditor.MainMenu.Window");
		{
			FToolMenuSection& Section = Menu->FindOrAddSection("WindowLayout");
			Section.AddMenuEntryWithCommandList(FSelectedObjectManagerCommands::Get().OpenPluginWindow, PluginCommands);
		}
	}

	{
		UToolMenu* ToolbarMenu = UToolMenus::Get()->ExtendMenu("LevelEditor.LevelEditorToolBar");
		{
			FToolMenuSection& Section = ToolbarMenu->FindOrAddSection("Settings");
			{
				FToolMenuEntry& Entry = Section.AddEntry(FToolMenuEntry::InitToolBarButton(FSelectedObjectManagerCommands::Get().OpenPluginWindow));
				Entry.SetCommandList(PluginCommands);
			}
		}
	}
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FSelectedObjectManagerModule, SelectedObjectManager)