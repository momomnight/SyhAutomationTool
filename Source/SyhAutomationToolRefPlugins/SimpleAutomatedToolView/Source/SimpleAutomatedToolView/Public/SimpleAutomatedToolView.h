// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FToolBarBuilder;
class FMenuBuilder;
class FAutomatedToolEditor;

class FSimpleAutomatedToolViewModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	
	/** This function will be bound to Command (by default it will bring up plugin window) */
	void PluginButtonClicked();
	
	TSharedRef<FTabManager::FLayout> GetLayout();

	TSharedPtr<SDockTab> InvokeTab(bool bInvokeAsInactive = false);

public:
	static FString EditorLayoutJson;
	static FName MainLayoutName;

	TSharedPtr<FAutomatedToolEditor> EditorInstance;

private:

	TSharedRef<class SDockTab> OnSpawnPluginTab(const class FSpawnTabArgs& SpawnTabArgs);

private:
	TSharedPtr<class FUICommandList> PluginCommands;
	TSharedPtr<class SAutomatedToolViewMainFrame> AutomatedToolViewMainFrame;


};
