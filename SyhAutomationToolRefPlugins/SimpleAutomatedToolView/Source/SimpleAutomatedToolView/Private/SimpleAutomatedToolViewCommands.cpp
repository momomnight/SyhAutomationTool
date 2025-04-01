// Copyright Epic Games, Inc. All Rights Reserved.

#include "SimpleAutomatedToolViewCommands.h"
#include "SimpleAutomatedToolViewMacro.h"


#define LOCTEXT_NAMESPACE "FSimpleAutomatedToolViewModule"

GenerateToolBarTextStruct(ToolBar_File, "AutomatedToolViewToolBar", "ToolBar_File", "File");
GenerateToolBarTextStruct(ToolBar_Windows, "AutomatedToolViewToolBar", "ToolBar_Windows", "Windows");
GenerateToolBarTextStruct(ToolBar_Editor, "AutomatedToolViewToolBar", "ToolBar_Windows", "Windows");

void FSimpleAutomatedToolViewCommands::RegisterCommands()
{
	UI_COMMAND(OpenPluginWindow, "SimpleAutomatedToolView", "Bring up SimpleAutomatedToolView window", EUserInterfaceActionType::Button, FInputChord());


	//下拉菜单以CommandName区分，菜单中以索引区分
	//File
	{
		CreateCommand(ToolBar_File, 0, TEXT("ToolBar_File_0"), TEXT("ToolBar_File_Description_0"), EUserInterfaceActionType::Button, FInputChord());
		CreateCommand(ToolBar_File, 1, TEXT("ToolBar_File_1"), TEXT("ToolBar_File_Description_1"), EUserInterfaceActionType::Button, FInputChord());
		CreateCommand(ToolBar_File, 2, TEXT("ToolBar_File_2"), TEXT("ToolBar_File_Description_2"), EUserInterfaceActionType::Button, FInputChord());
	}

	//Windows
	{
		CreateCommand(ToolBar_Windows, 0, TEXT("ToolBar_Windows_0"), TEXT("ToolBar_Windows_Description_0"), EUserInterfaceActionType::Button, FInputChord());
	}

	//Editor
	{
		CreateCommand(ToolBar_Editor, 0, TEXT("ToolBar_Editor_0"), TEXT("ToolBar_Editor_Description_0"), EUserInterfaceActionType::Button, FInputChord());
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
