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
#include "SimpleBlueprintView.h"
#include "ISlateReflectorModule.h"
#include "Editor/Base/AutomatedToolEditor.h"

#if !IS_PROGRAM
#include "LevelEditor.h"
#endif

#define LOCTEXT_NAMESPACE "FSimpleAutomatedToolViewModule"

FString FSimpleAutomatedToolViewModule::EditorLayoutJson = TEXT("");
FName FSimpleAutomatedToolViewModule::MainLayoutName = "SimpleAutomatedToolView";
void FSimpleAutomatedToolViewModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
	EditorLayoutJson = FPaths::ConvertRelativePathToFull(FPaths::ProjectConfigDir()) / FEditorTabType::MainTabName.ToString() + TEXT("_EditorLayout.json");
	FPaths::NormalizeFilename(EditorLayoutJson);
	FPaths::RemoveDuplicateSlashes(EditorLayoutJson);

	FSimpleAutomatedToolViewStyle::Initialize();
	FSimpleAutomatedToolViewStyle::ReloadTextures();

	FSimpleAutomatedToolViewCommands::Register();
	
	//PluginCommands = MakeShareable(new FUICommandList);

	//PluginCommands->MapAction(
	//	FSimpleAutomatedToolViewCommands::Get().OpenPluginWindow,
	//	FExecuteAction::CreateRaw(this, &FSimpleAutomatedToolViewModule::PluginButtonClicked),
	//	FCanExecuteAction());

	//FEditorTabType::RegisterMainTabSpawner(PluginCommands);
	
	
	FSimpleSlateFileTreeModule& AutomatedToolViewModule = FModuleManager::Get().LoadModuleChecked<FSimpleSlateFileTreeModule>("SimpleSlateFileTree");
	FSimpleBlueprintViewModule& SimpleBlueprintView = FModuleManager::Get().LoadModuleChecked<FSimpleBlueprintViewModule>("SimpleBlueprintView");


	EditorInstance = MakeShareable(new FAutomatedToolEditor);
	EditorInstance->InitializeEditor();
}

void FSimpleAutomatedToolViewModule::ShutdownModule()
{

	FSimpleAutomatedToolViewStyle::Shutdown();

	FSimpleAutomatedToolViewCommands::Unregister();

	//FEditorTabType::UnregisterMainTabSpawner();

	//FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(FEditorTabType::MainTabName);

	FModuleManager::Get().UnloadModule("SimpleSlateFileTree");
}

void FSimpleAutomatedToolViewModule::PluginButtonClicked()
{
	FGlobalTabmanager::Get()->TryInvokeTab(FEditorTabType::MainTabName);
}

TSharedRef<FTabManager::FLayout> FSimpleAutomatedToolViewModule::GetLayout()
{
	TSharedRef<FTabManager::FLayout> Layout = FTabManager::NewLayout(MainLayoutName)
		->AddArea(
			FTabManager::NewPrimaryArea()
			->Split
			(
				FTabManager::NewSplitter()
				->Split(
					FTabManager::NewStack()
					->AddTab(FEditorTabType::MainTabName, ETabState::OpenedTab)
					->SetHideTabWell(false)
				)
			)
		)
		->AddArea
		(
			FTabManager::NewArea(1280, 960)
			->Split
			(
				FTabManager::NewSplitter()
				->Split(
					FTabManager::NewStack()
					->AddTab("SlateReflector", ETabState::ClosedTab)
				)
			)
		);
	return Layout;
}

TSharedPtr<SDockTab> FSimpleAutomatedToolViewModule::InvokeTab(bool bInvokeAsInactive)
{
	return FGlobalTabmanager::Get()->TryInvokeTab(FTabId(FEditorTabType::MainTabName), bInvokeAsInactive);
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FSimpleAutomatedToolViewModule, SimpleAutomatedToolView)