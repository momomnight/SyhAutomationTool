// Copyright Epic Games, Inc. All Rights Reserved.

#include "FileTreeMenuCommands.h"
#include "FileTreeCommand.h"
#include "FileTreeMacro.h"

#define LOCTEXT_NAMESPACE "FileTreeMenuCommand"

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

GenerateMenuEntryTextStruct(MenuEntry_Open, LOCTEXT_NAMESPACE, "FileTreeCommand.Open", "Open");
GenerateMenuEntryTextStruct(MenuEntry_Rename, LOCTEXT_NAMESPACE, "FileTreeCommand.Rename", "Rename");
GenerateMenuEntryTextStruct(MenuEntry_Cut, LOCTEXT_NAMESPACE, "FileTreeCommand.Cut", "Cut");
GenerateMenuEntryTextStruct(MenuEntry_Copy, LOCTEXT_NAMESPACE, "FileTreeCommand.Copy", "Copy");
GenerateMenuEntryTextStruct(MenuEntry_Paste, LOCTEXT_NAMESPACE, "FileTreeCommand.Paste", "Paste");
GenerateMenuEntryTextStruct(MenuEntry_Duplicate, LOCTEXT_NAMESPACE, "FileTreeCommand.Duplicate", "Duplicate");
GenerateMenuEntryTextStruct(MenuEntry_Delete, LOCTEXT_NAMESPACE, "FileTreeCommand.Delete", "Delete");

GenerateMenuEntryTextStruct(MenuEntry_CopyTo, LOCTEXT_NAMESPACE, "FileTreeCommand.CopyTo", "CopyTo");
GenerateMenuEntryTextStruct(MenuEntry_MoveTo, LOCTEXT_NAMESPACE, "FileTreeCommand.MoveTo", "MoveTo");



void FFileTreeMenuCommands::RegisterCommands()
{
	PluginCommands = MakeShareable(new FUICommandList);
	MenuCommand_General = MakeShareable(new FFileTreeMenuSectionInfo(FName("ContextMenu.General"), LOCTEXT("ContextMenu.General", "General")));
	MenuCommand_DragDrop = MakeShareable(new FFileTreeMenuSectionInfo(FName("ContextMenu.DragDrop"), LOCTEXT("ContextMenu.DragDrop", "DragDrop")));
	
	{
		CreateUICommand(MenuEntry_Open, TEXT("Open"), TEXT("Open a file."), EUserInterfaceActionType::Button, FInputChord());
		FFileTreeMenuGenerationInfo Info{};
		Info.CommandInfo = GetUICommandInfoName(MenuEntry_Open);

		Info.ExtensionHook = FName("ContextMenu.General.Open");
		Info.Label = FText(MenuEntry_Open);
		Info.Spawner = FFileTreeContextMenuSpawners::BuildButton(Info);
		Info.UIActionGenerator = FFileTreeContextMenuUIActionSpawner::GenerateOpen();
		
		MenuCommand_General->GenerationInfo.Add(FText(MenuEntry_Open), Info);
	}

	{
		CreateUICommand(MenuEntry_Rename, TEXT("Rename"), TEXT("Rename a file."), EUserInterfaceActionType::Button, FInputChord());
		FFileTreeMenuGenerationInfo Info{};
		Info.CommandInfo = GetUICommandInfoName(MenuEntry_Rename);

		Info.ExtensionHook = FName("ContextMenu.General.Rename");
		Info.Label = FText(MenuEntry_Rename);
		Info.Spawner = FFileTreeContextMenuSpawners::BuildButton(Info);
		Info.UIAction;

		MenuCommand_General->GenerationInfo.Add(FText(MenuEntry_Rename), Info);
	}
	{
		CreateUICommand(MenuEntry_Cut, TEXT("Cut"), TEXT("Cut a file."), EUserInterfaceActionType::Button, FInputChord());
		FFileTreeMenuGenerationInfo Info{};
		Info.CommandInfo = GetUICommandInfoName(MenuEntry_Cut);

		Info.ExtensionHook = FName("ContextMenu.General.Cut");
		Info.Label = FText(MenuEntry_Cut);
		Info.Spawner = FFileTreeContextMenuSpawners::BuildButton(Info);
		Info.UIAction;

		MenuCommand_General->GenerationInfo.Add(FText(MenuEntry_Cut), Info);
	}
	{
		CreateUICommand(MenuEntry_Copy, TEXT("Copy"), TEXT("Copy a file."), EUserInterfaceActionType::Button, FInputChord());
		FFileTreeMenuGenerationInfo Info{};
		Info.CommandInfo = GetUICommandInfoName(MenuEntry_Copy);

		Info.ExtensionHook = FName("ContextMenu.General.Copy");
		Info.Label = FText(MenuEntry_Copy);
		Info.Spawner = FFileTreeContextMenuSpawners::BuildButton(Info);
		Info.UIAction;

		MenuCommand_General->GenerationInfo.Add(FText(MenuEntry_Copy), Info);
	}
	{
		CreateUICommand(MenuEntry_Paste, TEXT("Paste"), TEXT("Paste a file."), EUserInterfaceActionType::Button, FInputChord());
		FFileTreeMenuGenerationInfo Info{};
		Info.CommandInfo = GetUICommandInfoName(MenuEntry_Paste);


		Info.ExtensionHook = FName("ContextMenu.General.Paste");
		Info.Label = FText(MenuEntry_Paste);
		Info.Spawner = FFileTreeContextMenuSpawners::BuildButton(Info);
		Info.UIAction;

		MenuCommand_General->GenerationInfo.Add(FText(MenuEntry_Paste), Info);
	}
	{
		CreateUICommand(MenuEntry_Duplicate, TEXT("Duplicate"), TEXT("Duplicate files in local folder."), EUserInterfaceActionType::Button, FInputChord());
		FFileTreeMenuGenerationInfo Info{};
		Info.CommandInfo = GetUICommandInfoName(MenuEntry_Duplicate);

		Info.ExtensionHook = FName("ContextMenu.General.Duplicate");
		Info.Label = FText(MenuEntry_Duplicate);
		Info.Spawner = FFileTreeContextMenuSpawners::BuildButton(Info);
		Info.UIAction;

		MenuCommand_General->GenerationInfo.Add(FText(MenuEntry_Duplicate), Info);
	}
	{
		CreateUICommand(MenuEntry_Delete, TEXT("Delete"), TEXT("Delete files."), EUserInterfaceActionType::Button, FInputChord());
		FFileTreeMenuGenerationInfo Info{};
		Info.CommandInfo = GetUICommandInfoName(MenuEntry_Delete);


		Info.ExtensionHook = FName("ContextMenu.General.Delete");
		Info.Label = FText(MenuEntry_Delete);
		Info.Spawner = FFileTreeContextMenuSpawners::BuildButton(Info);
		Info.UIAction;

		MenuCommand_General->GenerationInfo.Add(FText(MenuEntry_Delete), Info);
	}

	{
		CreateUICommand(MenuEntry_CopyTo, TEXT("CopyTo"), TEXT("Copy files to other folder."), EUserInterfaceActionType::Button, FInputChord());
		FFileTreeMenuGenerationInfo Info{};
		Info.CommandInfo = GetUICommandInfoName(MenuEntry_CopyTo);

		Info.ExtensionHook = FName("ContextMenu.General.CopyTo");
		Info.Label = FText(MenuEntry_CopyTo);
		Info.Spawner = FFileTreeContextMenuSpawners::BuildButton(Info);
		Info.UIAction;

		MenuCommand_DragDrop->GenerationInfo.Add(FText(MenuEntry_CopyTo), Info);
	}
	{
		CreateUICommand(MenuEntry_MoveTo, TEXT("MoveTo"), TEXT("Move files to other folder."), EUserInterfaceActionType::Button, FInputChord());
		FFileTreeMenuGenerationInfo Info{};
		Info.CommandInfo = GetUICommandInfoName(MenuEntry_MoveTo);

		Info.ExtensionHook = FName("ContextMenu.General.MoveTo");
		Info.Label = FText(MenuEntry_MoveTo);
		Info.Spawner = FFileTreeContextMenuSpawners::BuildButton(Info);
		Info.UIAction;

		MenuCommand_DragDrop->GenerationInfo.Add(FText(MenuEntry_MoveTo), Info);
	}
}

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT	

#undef LOCTEXT_NAMESPACE
