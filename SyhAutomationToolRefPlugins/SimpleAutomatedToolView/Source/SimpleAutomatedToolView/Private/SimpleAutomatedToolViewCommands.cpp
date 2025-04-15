// Copyright Epic Games, Inc. All Rights Reserved.

#include "SimpleAutomatedToolViewCommands.h"
#include "SimpleAutomatedToolViewMacro.h"
#include "SimpleAutomatedToolViewEditorID.h"
#include "ISlateReflectorModule.h"


TMap<FText, TMap<int32, TSharedPtr<FUICommandInfo>>> FSimpleAutomatedToolViewCommands::CommandInfoList;
TMap<FText, TMap<int32, FUIAction>> FSimpleAutomatedToolViewCommands::UIActions;
TMap<FText, FSpawnMenuEntries> FSimpleAutomatedToolViewCommands::MenuEntries;

#define LOCTEXT_NAMESPACE "FSimpleAutomatedToolViewModule"

GenerateToolMenuTextStruct(MenuBar_File,	"AutomatedToolViewMenuBar", "MenuBar.File",		"File");
GenerateToolMenuTextStruct(MenuBar_Windows, "AutomatedToolViewMenuBar", "MenuBar.Windows",	"Windows");
GenerateToolMenuTextStruct(MenuBar_Editor,	"AutomatedToolViewMenuBar", "MenuBar.Editor",	"Editor");
GenerateToolMenuTextStruct(MenuBar_Debug,	"AutomatedToolViewMenuBar", "MenuBar.Debug",	"Debug");
GenerateToolMenuTextStruct(MenuBar_Help,	"AutomatedToolViewMenuBar", "MenuBar.Help",		"Help");


void FSimpleAutomatedToolViewCommands::RegisterCommands()
{
	UI_COMMAND(OpenPluginWindow, "SimpleAutomatedToolView", "Bring up SimpleAutomatedToolView window", EUserInterfaceActionType::Button, FInputChord());

	//下拉菜单以CommandName区分，菜单中以索引区分
	//File
	{
		{
			CreateUICommand(MenuBar_File, 0, TEXT("MenuBar_File_0"), TEXT("MenuBar_File_Description_0"), EUserInterfaceActionType::Button, FInputChord());
			BindMenuSpawner(MenuBar_File, SimpleAutomatedToolViewDelegateFactory::CreateMenuEntryDelegate_WidgetReflector(
				FName(TEXT("File.MenuEntries")), GetRealCommandName(MenuBar_File, 0)));
		}
		{
			CreateUICommand(MenuBar_File, 1, TEXT("MenuBar_File_1"), TEXT("MenuBar_File_Description_1"), EUserInterfaceActionType::Button, FInputChord());
			BindMenuSpawner(MenuBar_File, SimpleAutomatedToolViewDelegateFactory::CreateMenuEntryDelegate_WidgetReflector(
				FName(TEXT("File.MenuEntries")), GetRealCommandName(MenuBar_File, 1)));

		}
		{
			CreateUICommand(MenuBar_File, 2, TEXT("MenuBar_File_2"), TEXT("MenuBar_File_Description_2"), EUserInterfaceActionType::Button, FInputChord());
			BindMenuSpawner(MenuBar_File, SimpleAutomatedToolViewDelegateFactory::CreateMenuEntryDelegate_WidgetReflector(
				FName(TEXT("File.MenuEntries")), GetRealCommandName(MenuBar_File, 2)));
		}
	}

	//Windows
	{
		{
			CreateUICommand(MenuBar_Windows, 0, TEXT("MenuBar_Windows_0"), TEXT("MenuBar_Windows_Description_0"), EUserInterfaceActionType::Button, FInputChord());
			BindMenuSpawner(MenuBar_Windows, SimpleAutomatedToolViewDelegateFactory::CreateMenuEntryDelegate_WidgetReflector(
				FName(TEXT("Windows.MenuEntries")), GetRealCommandName(MenuBar_Windows, 0)));
		}
	}

	//Editor
	{
		{
			CreateUICommand(MenuBar_Editor, 0, TEXT("MenuBar_Editor_0"), TEXT("MenuBar_Editor_Description_0"), EUserInterfaceActionType::Button, FInputChord());
			BindMenuSpawner(MenuBar_Editor, SimpleAutomatedToolViewDelegateFactory::CreateMenuEntryDelegate_WidgetReflector(
				FName(TEXT("Editor.MenuEntries")), GetRealCommandName(MenuBar_Editor, 0)));
		}
	}

	//Debug
	{
		//Debug.WidgetReflector
		{
			//会创建FUICommandInfo, 映射需要FUICommandList
			CreateUICommand(MenuBar_Debug, 0, TEXT("Widget Reflector"), TEXT("open a widget reflector"), 
				EUserInterfaceActionType::Button, FInputChord());

			//绑定对应菜单项的Action
			BindUIAction(MenuBar_Debug, 0, SimpleAutomatedToolViewDelegateFactory::CreateUIActionDelegate_WidgetReflector());

			//绑定用于生成下拉菜单菜单项的Action
			BindMenuSpawner(MenuBar_Debug, SimpleAutomatedToolViewDelegateFactory::CreateMenuEntryDelegate_WidgetReflector(
				FName(TEXT("Debug.MenuEntries")), GetRealCommandName(MenuBar_Debug, 0)));
		}
	}

	//Help
	{
		{
			CreateUICommand(MenuBar_Help, 0, TEXT("MenuBar_Help_0"), TEXT("MenuBar_Help_Description_0"), EUserInterfaceActionType::Button, FInputChord());
			BindMenuSpawner(MenuBar_Help, SimpleAutomatedToolViewDelegateFactory::CreateMenuEntryDelegate_WidgetReflector(
				FName(TEXT("Help.MenuEntries")), GetRealCommandName(MenuBar_Help, 0)));
		}
	}
}

TSharedPtr<FUICommandInfo>& FSimpleAutomatedToolViewCommands::CreateCommandInfo(const FText& InKey, int32 InType)
{
	if (CommandInfoList.Contains(InKey))
	{
		if (!CommandInfoList[InKey].Contains(InType))
		{
			CommandInfoList[InKey].Add({ InType, TSharedPtr<FUICommandInfo>() });
		}
	}
	else
	{
		CommandInfoList.Add(InKey, TMap<int32, TSharedPtr<FUICommandInfo>>{{InType, TSharedPtr<FUICommandInfo>()}});
	}

	if (!MenuEntries.Contains(InKey))
	{
		MenuEntries.Add(InKey, FSpawnMenuEntries());
	}

	if (UIActions.Contains(InKey))
	{
		if (!UIActions[InKey].Contains(InType))
		{
			UIActions[InKey].Add(InType, FUIAction());
		}
	}
	else
	{
		UIActions.Add(InKey, TMap<int32, FUIAction>{{InType, FUIAction()}});
	}

	return CommandInfoList[InKey][InType];
}


#undef LOCTEXT_NAMESPACE
