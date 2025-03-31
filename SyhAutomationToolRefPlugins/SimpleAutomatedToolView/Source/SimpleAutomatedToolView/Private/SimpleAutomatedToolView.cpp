// Copyright Epic Games, Inc. All Rights Reserved.

#include "SimpleAutomatedToolView.h"
#include "SimpleAutomatedToolViewStyle.h"
#include "SimpleAutomatedToolViewCommands.h"
#include "Widgets/Docking/SDockTab.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Text/STextBlock.h"
#include "ToolMenus.h"

#if WITH_EDITOR
#include "LevelEditor.h"
#endif

static const FName SimpleAutomatedToolViewTabName("SimpleAutomatedToolView");

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
	
	FGlobalTabmanager::Get()->RegisterNomadTabSpawner(SimpleAutomatedToolViewTabName, FOnSpawnTab::CreateRaw(this, &FSimpleAutomatedToolViewModule::OnSpawnPluginTab))
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

	FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(SimpleAutomatedToolViewTabName);
}

TSharedRef<SDockTab> FSimpleAutomatedToolViewModule::OnSpawnPluginTab(const FSpawnTabArgs& SpawnTabArgs)
{
	FText WidgetText = FText::Format(
		LOCTEXT("WindowWidgetText", "Add code to {0} in {1} to override this window's contents"),
		FText::FromString(TEXT("FSimpleAutomatedToolViewModule::OnSpawnPluginTab")),
		FText::FromString(TEXT("SimpleAutomatedToolView.cpp"))
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

void FSimpleAutomatedToolViewModule::PluginButtonClicked()
{
	FGlobalTabmanager::Get()->TryInvokeTab(SimpleAutomatedToolViewTabName);
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