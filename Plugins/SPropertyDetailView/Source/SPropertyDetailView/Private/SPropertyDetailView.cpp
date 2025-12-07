// Copyright Epic Games, Inc. All Rights Reserved.

#include "SPropertyDetailView.h"
#include "SPropertyDetailViewStyle.h"
#include "SPropertyDetailViewCommands.h"
#include "Widgets/Docking/SDockTab.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Text/STextBlock.h"
#include "ToolMenus.h"
#include "Modules/ModuleManager.h"
#include "Test.h"

static const FName SPropertyDetailViewTabName("SPropertyDetailView");

#define LOCTEXT_NAMESPACE "FSPropertyDetailViewModule"


void FSPropertyDetailViewModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
	FSPropertyDetailViewStyle::Initialize();
	FSPropertyDetailViewStyle::ReloadTextures();

	FSPropertyDetailViewCommands::Register();
	
	PluginCommands = MakeShareable(new FUICommandList);

	PluginCommands->MapAction(
		FSPropertyDetailViewCommands::Get().OpenPluginWindow,
		FExecuteAction::CreateRaw(this, &FSPropertyDetailViewModule::PluginButtonClicked),
		FCanExecuteAction());

	UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::CreateRaw(this, &FSPropertyDetailViewModule::RegisterMenus));
	
	FGlobalTabmanager::Get()->RegisterNomadTabSpawner(SPropertyDetailViewTabName, FOnSpawnTab::CreateRaw(this, &FSPropertyDetailViewModule::OnSpawnPluginTab))
		.SetDisplayName(LOCTEXT("FSPropertyDetailViewTabTitle", "SPropertyDetailView"))
		.SetMenuType(ETabSpawnerMenuType::Hidden);

}

void FSPropertyDetailViewModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	UToolMenus::UnRegisterStartupCallback(this);

	UToolMenus::UnregisterOwner(this);

	FSPropertyDetailViewStyle::Shutdown();

	FSPropertyDetailViewCommands::Unregister();

	FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(SPropertyDetailViewTabName);
}

TSharedRef<SDockTab> FSPropertyDetailViewModule::OnSpawnPluginTab(const FSpawnTabArgs& SpawnTabArgs)
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

void FSPropertyDetailViewModule::PluginButtonClicked()
{
	FGlobalTabmanager::Get()->TryInvokeTab(SPropertyDetailViewTabName);
}

void FSPropertyDetailViewModule::RegisterMenus()
{
	// Owner will be used for cleanup in call to UToolMenus::UnregisterOwner
	FToolMenuOwnerScoped OwnerScoped(this);

	{
		UToolMenu* Menu = UToolMenus::Get()->ExtendMenu("LevelEditor.MainMenu.Window");
		{
			FToolMenuSection& Section = Menu->FindOrAddSection("WindowLayout");
			Section.AddMenuEntryWithCommandList(FSPropertyDetailViewCommands::Get().OpenPluginWindow, PluginCommands);
		}
	}

	{
		UToolMenu* ToolbarMenu = UToolMenus::Get()->ExtendMenu("LevelEditor.LevelEditorToolBar");
		{
			FToolMenuSection& Section = ToolbarMenu->FindOrAddSection("Settings");
			{
				FToolMenuEntry& Entry = Section.AddEntry(FToolMenuEntry::InitToolBarButton(FSPropertyDetailViewCommands::Get().OpenPluginWindow));
				Entry.SetCommandList(PluginCommands);
			}
		}
	}
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FSPropertyDetailViewModule, SPropertyDetailView)