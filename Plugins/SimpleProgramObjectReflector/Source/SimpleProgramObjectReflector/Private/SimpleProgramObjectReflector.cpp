// Copyright Epic Games, Inc. All Rights Reserved.

#include "SimpleProgramObjectReflector.h"
#include "SimpleProgramObjectReflectorStyle.h"
#include "SimpleProgramObjectReflectorCommands.h"

#include "Widgets/Docking/SDockTab.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Text/STextBlock.h"
#include "ToolMenus.h"

#if !IS_PROGRAM
#include "LevelEditor.h"
#endif

static const FName SimpleProgramObjectReflectorTabName("SimpleProgramObjectReflector");

#define LOCTEXT_NAMESPACE "FSimpleProgramObjectReflectorModule"

void FSimpleProgramObjectReflectorModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
	FSimpleProgramObjectReflectorStyle::Initialize();
	FSimpleProgramObjectReflectorStyle::ReloadTextures();

	FSimpleProgramObjectReflectorCommands::Register();
	
	PluginCommands = MakeShareable(new FUICommandList);

	PluginCommands->MapAction(
		FSimpleProgramObjectReflectorCommands::Get().OpenPluginWindow,
		FExecuteAction::CreateRaw(this, &FSimpleProgramObjectReflectorModule::PluginButtonClicked),
		FCanExecuteAction());

	UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::CreateRaw(this, &FSimpleProgramObjectReflectorModule::RegisterMenus));
	
	FGlobalTabmanager::Get()->RegisterNomadTabSpawner(SimpleProgramObjectReflectorTabName, FOnSpawnTab::CreateRaw(this, &FSimpleProgramObjectReflectorModule::OnSpawnPluginTab))
		.SetDisplayName(LOCTEXT("FSimpleProgramObjectReflectorTabTitle", "SimpleProgramObjectReflector"))
		.SetMenuType(ETabSpawnerMenuType::Hidden);
}

void FSimpleProgramObjectReflectorModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	UToolMenus::UnRegisterStartupCallback(this);

	UToolMenus::UnregisterOwner(this);

	FSimpleProgramObjectReflectorStyle::Shutdown();

	FSimpleProgramObjectReflectorCommands::Unregister();

	FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(SimpleProgramObjectReflectorTabName);
}

TSharedRef<SDockTab> FSimpleProgramObjectReflectorModule::OnSpawnPluginTab(const FSpawnTabArgs& SpawnTabArgs)
{
	FText WidgetText = FText::Format(
		LOCTEXT("WindowWidgetText", "Add code to {0} in {1} to override this window's contents"),
		FText::FromString(TEXT("FSimpleProgramObjectReflectorModule::OnSpawnPluginTab")),
		FText::FromString(TEXT("SimpleProgramObjectReflector.cpp"))
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

void FSimpleProgramObjectReflectorModule::PluginButtonClicked()
{
	FGlobalTabmanager::Get()->TryInvokeTab(SimpleProgramObjectReflectorTabName);
}

void FSimpleProgramObjectReflectorModule::RegisterMenus()
{
	// Owner will be used for cleanup in call to UToolMenus::UnregisterOwner
	FToolMenuOwnerScoped OwnerScoped(this);

	{
		UToolMenu* Menu = UToolMenus::Get()->ExtendMenu("LevelEditor.MainMenu.Window");
		{
			FToolMenuSection& Section = Menu->FindOrAddSection("WindowLayout");
			Section.AddMenuEntryWithCommandList(FSimpleProgramObjectReflectorCommands::Get().OpenPluginWindow, PluginCommands);
		}
	}

	{
		UToolMenu* ToolbarMenu = UToolMenus::Get()->ExtendMenu("LevelEditor.LevelEditorToolBar");
		{
			FToolMenuSection& Section = ToolbarMenu->FindOrAddSection("Settings");
			{
				FToolMenuEntry& Entry = Section.AddEntry(FToolMenuEntry::InitToolBarButton(FSimpleProgramObjectReflectorCommands::Get().OpenPluginWindow));
				Entry.SetCommandList(PluginCommands);
			}
		}
	}
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FSimpleProgramObjectReflectorModule, SimpleProgramObjectReflector)