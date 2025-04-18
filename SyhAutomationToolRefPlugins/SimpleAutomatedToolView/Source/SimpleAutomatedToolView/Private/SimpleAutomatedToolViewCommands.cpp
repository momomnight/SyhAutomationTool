// Copyright Epic Games, Inc. All Rights Reserved.

#include "SimpleAutomatedToolViewCommands.h"
#include "SimpleAutomatedToolViewMacro.h"
#include "FileTreeTool.h"


#define LOCTEXT_NAMESPACE "FSimpleAutomatedToolViewModule"

extern const FTextStruct MenuBar_File{ TEXT("AutomatedToolViewMenuBar") , TEXT("MenuBar.File") , TEXT("File") };
extern const FTextStruct MenuBar_Window{ TEXT("AutomatedToolViewMenuBar") , TEXT("MenuBar.Windows") , TEXT("Windows") };
extern const FTextStruct MenuBar_Editor{ TEXT("AutomatedToolViewMenuBar") , TEXT("MenuBar.Editor") , TEXT("Editor") };
extern const FTextStruct MenuBar_Debug{ TEXT("AutomatedToolViewMenuBar") , TEXT("MenuBar.Debug") , TEXT("Debug") };
extern const FTextStruct MenuBar_Help{ TEXT("AutomatedToolViewMenuBar") , TEXT("MenuBar.Help") , TEXT("Help") };

void FSimpleAutomatedToolViewCommands::RegisterCommands()
{
	UI_COMMAND(OpenPluginWindow, "SimpleAutomatedToolView", "Bring up SimpleAutomatedToolView window", EUserInterfaceActionType::Button, FInputChord());

	//下拉菜单以CommandName区分，菜单中以索引区分
	//File
	{
		{
			CreateUICommand(MenuBar_File, 0, TEXT("MenuBar_File_0"), TEXT("MenuBar_File_Description_0"), EUserInterfaceActionType::Button, FInputChord());

			CreateMenuSpawner(MenuBar_File, SimpleAutomatedToolViewDelegateFactory::CreateMenuEntryDelegate_WidgetReflector(
				FName("File.MenuEntries"), GetRealCommandInfoName(MenuBar_File, 0)));
		}
		{
			CreateUICommand(MenuBar_File, 1, TEXT("MenuBar_File_1"), TEXT("MenuBar_File_Description_1"), EUserInterfaceActionType::Button, FInputChord());

			CreateMenuSpawner(MenuBar_File, SimpleAutomatedToolViewDelegateFactory::CreateMenuEntryDelegate_WidgetReflector(
				FName("File.MenuEntries"), GetRealCommandInfoName(MenuBar_File, 1)));
		}
		{
			CreateUICommand(MenuBar_File, 2, TEXT("MenuBar_File_2"), TEXT("MenuBar_File_Description_2"), EUserInterfaceActionType::Button, FInputChord());

			CreateMenuSpawner(MenuBar_File, SimpleAutomatedToolViewDelegateFactory::CreateMenuEntryDelegate_WidgetReflector(
				FName("File.MenuEntries"), GetRealCommandInfoName(MenuBar_File, 2)));
		}
	}

	//Windows
	{
		{
			CreateUICommand(MenuBar_Window, 0, TEXT("MenuBar_Window_0"), TEXT("MenuBar_Window_Description_0"), EUserInterfaceActionType::Button, FInputChord());

			CreateMenuSpawner(MenuBar_Window, SimpleAutomatedToolViewDelegateFactory::CreateMenuEntryDelegate_WidgetReflector(
				FName("Window.MenuEntries"), GetRealCommandInfoName(MenuBar_Window, 0)));
		}
	}

	//Editor
	{
		{
			CreateUICommand(MenuBar_Editor, 0, TEXT("MenuBar_Editor_0"), TEXT("MenuBar_Editor_Description_0"), EUserInterfaceActionType::Button, FInputChord());

			CreateMenuSpawner(MenuBar_Editor, SimpleAutomatedToolViewDelegateFactory::CreateMenuEntryDelegate_WidgetReflector(
				FName("Editor.MenuEntries"), GetRealCommandInfoName(MenuBar_Editor, 0)));
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
			CreateUIAction(MenuBar_Debug, 0, SimpleAutomatedToolViewDelegateFactory::CreateUIActionDelegate_WidgetReflector());

			//绑定用于生成下拉菜单菜单项的Action
			CreateMenuSpawner(MenuBar_Debug, SimpleAutomatedToolViewDelegateFactory::CreateMenuEntryDelegate_WidgetReflector(
				FName("Debug.MenuEntries"), GetRealCommandInfoName(MenuBar_Debug, 0)));
		}
	}

	//Help
	{
		{
			CreateUICommand(MenuBar_Help, 0, TEXT("MenuBar_Help_0"), TEXT("MenuBar_Help_Description_0"), EUserInterfaceActionType::Button, FInputChord());

			CreateMenuSpawner(MenuBar_Help, SimpleAutomatedToolViewDelegateFactory::CreateMenuEntryDelegate_WidgetReflector(
				FName("Help.MenuEntries"), GetRealCommandInfoName(MenuBar_Help, 0)));
		}
	}
}

TSharedPtr<FUICommandInfo>& FSimpleAutomatedToolViewCommands::CreateCommandInfo(const FText& InKey, int32 InType)
{
	if (TMap<int32, TSharedPtr<FUICommandInfo>>* CommandInfos = CommandInfoList.Find(InKey))
	{
		if (TSharedPtr<FUICommandInfo>* CommandInfo = CommandInfos->Find(InType); !CommandInfo)
		{
			CommandInfos->Add({ InType, TSharedPtr<FUICommandInfo>() });
		}
	}
	else
	{
		CommandInfoList.Add(InKey, TMap<int32, TSharedPtr<FUICommandInfo>>{{InType, TSharedPtr<FUICommandInfo>()}});
	}
	return CommandInfoList[InKey][InType];
}

FUIAction& FSimpleAutomatedToolViewCommands::CreateAction(const FText& InKey, int32 InType)
{

	if (TMap<int32, FUIAction>* Actions = UIActions.Find(InKey))
	{
		if (FUIAction* Action = Actions->Find(InType); !Action)
		{
			Actions->Add(InType, FUIAction());
		}
	}
	else
	{
		UIActions.Add(InKey, TMap<int32, FUIAction>{{InType, FUIAction()}});
	}
	return UIActions[InKey][InType];
}

FSpawnMenuEntries& FSimpleAutomatedToolViewCommands::CreateSpawner(const FText& InKey)
{
	if (FSpawnMenuEntries* MenuSpawner = MenuEntries.Find(InKey); !MenuSpawner)
	{
		MenuEntries.Add(InKey, FSpawnMenuEntries());
	}

	return MenuEntries[InKey];
}


#undef LOCTEXT_NAMESPACE
