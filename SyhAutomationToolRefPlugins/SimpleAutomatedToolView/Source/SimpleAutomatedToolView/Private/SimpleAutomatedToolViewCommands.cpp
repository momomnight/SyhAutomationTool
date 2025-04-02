// Copyright Epic Games, Inc. All Rights Reserved.

#include "SimpleAutomatedToolViewCommands.h"
#include "SimpleAutomatedToolViewMacro.h"


#define LOCTEXT_NAMESPACE "FSimpleAutomatedToolViewModule"

GenerateToolMenuTextStruct(MenuBar_File, "AutomatedToolViewMenuBar", "MenuBar_File", "File");
GenerateToolMenuTextStruct(MenuBar_Windows, "AutomatedToolViewMenuBar", "MenuBar_Windows", "Windows");
GenerateToolMenuTextStruct(MenuBar_Editor, "AutomatedToolViewMenuBar", "MenuBar_Editor", "Editor");
GenerateToolMenuTextStruct(MenuBar_Help, "AutomatedToolViewMenuBar", "MenuBar_Help", "Help");

void FSimpleAutomatedToolViewCommands::RegisterCommands()
{
	UI_COMMAND(OpenPluginWindow, "SimpleAutomatedToolView", "Bring up SimpleAutomatedToolView window", EUserInterfaceActionType::Button, FInputChord());


	//下拉菜单以CommandName区分，菜单中以索引区分
	//File
	{
		CreateUICommand(MenuBar_File, 0, TEXT("MenuBar_File_0"), TEXT("MenuBar_File_Description_0"), EUserInterfaceActionType::Button, FInputChord());
		CreateUICommand(MenuBar_File, 1, TEXT("MenuBar_File_1"), TEXT("MenuBar_File_Description_1"), EUserInterfaceActionType::Button, FInputChord());
		CreateUICommand(MenuBar_File, 2, TEXT("MenuBar_File_2"), TEXT("MenuBar_File_Description_2"), EUserInterfaceActionType::Button, FInputChord());
	}

	//Windows
	{
		CreateUICommand(MenuBar_Windows, 0, TEXT("MenuBar_Windows_0"), TEXT("MenuBar_Windows_Description_0"), EUserInterfaceActionType::Button, FInputChord());
	}

	//Editor
	{
		CreateUICommand(MenuBar_Editor, 0, TEXT("MenuBar_Editor_0"), TEXT("MenuBar_Editor_Description_0"), EUserInterfaceActionType::Button, FInputChord());
	}

	//Help
	{
		CreateUICommand(MenuBar_Help, 0, TEXT("MenuBar_Help_0"), TEXT("MenuBar_Help_Description_0"), EUserInterfaceActionType::Button, FInputChord());
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
		TMap<int32, TSharedPtr<FUICommandInfo>> TempMap{{InType, TSharedPtr<FUICommandInfo>()}};
		CommandInfoList.Add(InKey, TempMap);
	}
	return CommandInfoList[InKey][InType];
}

#undef LOCTEXT_NAMESPACE
