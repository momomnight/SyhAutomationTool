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


extern const FTextStruct MenuEntry_Open{ TEXT("FileTreeCommand") , TEXT("FileTreeCommand.Open") , TEXT("Open") };
extern const FTextStruct MenuEntry_Rename{ TEXT("FileTreeCommand") , TEXT("FileTreeCommand.Rename") , TEXT("Rename") };
extern const FTextStruct MenuEntry_Cut{ TEXT("FileTreeCommand") , TEXT("FileTreeCommand.Cut") , TEXT("Cut") };
extern const FTextStruct MenuEntry_Copy{ TEXT("FileTreeCommand") , TEXT("FileTreeCommand.Copy") , TEXT("Copy") };
extern const FTextStruct MenuEntry_Paste{ TEXT("FileTreeCommand") , TEXT("FileTreeCommand.Paste") , TEXT("Paste") };
extern const FTextStruct MenuEntry_Duplicate{ TEXT("FileTreeCommand") , TEXT("FileTreeCommand.Duplicate") , TEXT("Duplicate") };
extern const FTextStruct MenuEntry_Delete{ TEXT("FileTreeCommand") , TEXT("FileTreeCommand.Delete") , TEXT("Delete") };
extern const FTextStruct MenuEntry_CopyTo{ TEXT("FileTreeCommand") , TEXT("FileTreeCommand.CopyTo") , TEXT("CopyTo") };
extern const FTextStruct MenuEntry_MoveTo{ TEXT("FileTreeCommand") , TEXT("FileTreeCommand.MoveTo") , TEXT("MoveTo") };

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
		Info.Label = MenuEntry_Open.ToText();
		Info.Spawner = FFileTreeContextMenuSpawners::BuildButton(Info);
		Info.UIActionGenerator = FFileTreeContextMenuUIActionSpawner::GenerateOpen();
		Info.ShowMark = EShowMark::SingleFile | EShowMark::Show;
		
		MenuCommand_General->GenerationInfo.Add(MenuEntry_Open.ToText(), Info);
	}

	{
		CreateUICommand(MenuEntry_Rename, TEXT("Rename"), TEXT("Rename a file."), EUserInterfaceActionType::Button, FInputChord());
		FFileTreeMenuGenerationInfo Info{};
		Info.CommandInfo = GetUICommandInfoName(MenuEntry_Rename);

		Info.ExtensionHook = FName("ContextMenu.General.Rename");
		Info.Label = MenuEntry_Rename.ToText();
		Info.Spawner = FFileTreeContextMenuSpawners::BuildButton(Info);
		Info.UIActionGenerator = FFileTreeContextMenuUIActionSpawner::GenerateRename();
		Info.ShowMark = EShowMark::SingleFile | EShowMark::Show;

		MenuCommand_General->GenerationInfo.Add(MenuEntry_Rename.ToText(), Info);
	}
	{
		CreateUICommand(MenuEntry_Cut, TEXT("Cut"), TEXT("Cut a file."), EUserInterfaceActionType::Button, FInputChord());
		FFileTreeMenuGenerationInfo Info{};
		Info.CommandInfo = GetUICommandInfoName(MenuEntry_Cut);

		Info.ExtensionHook = FName("ContextMenu.General.Cut");
		Info.Label = MenuEntry_Cut.ToText();
		Info.Spawner = FFileTreeContextMenuSpawners::BuildButton(Info);
		Info.UIActionGenerator = FFileTreeContextMenuUIActionSpawner::GenerateCut();
		Info.ShowMark = EShowMark::SingleFile | EShowMark::MultiplyFile | EShowMark::Show;

		MenuCommand_General->GenerationInfo.Add(MenuEntry_Cut.ToText(), Info);
	}
	{
		CreateUICommand(MenuEntry_Copy, TEXT("Copy"), TEXT("Copy a file."), EUserInterfaceActionType::Button, FInputChord());
		FFileTreeMenuGenerationInfo Info{};
		Info.CommandInfo = GetUICommandInfoName(MenuEntry_Copy);

		Info.ExtensionHook = FName("ContextMenu.General.Copy");
		Info.Label = MenuEntry_Copy.ToText();
		Info.Spawner = FFileTreeContextMenuSpawners::BuildButton(Info);
		Info.UIActionGenerator = FFileTreeContextMenuUIActionSpawner::GenerateCopy();
		Info.ShowMark = EShowMark::SingleFile | EShowMark::MultiplyFile | EShowMark::Show;
		MenuCommand_General->GenerationInfo.Add(MenuEntry_Copy.ToText(), Info);
	}
	{
		CreateUICommand(MenuEntry_Paste, TEXT("Paste"), TEXT("Paste a file."), EUserInterfaceActionType::Button, FInputChord());
		FFileTreeMenuGenerationInfo Info{};
		Info.CommandInfo = GetUICommandInfoName(MenuEntry_Paste);


		Info.ExtensionHook = FName("ContextMenu.General.Paste");
		Info.Label = MenuEntry_Paste.ToText();
		Info.Spawner = FFileTreeContextMenuSpawners::BuildButton(Info);
		Info.UIActionGenerator = FFileTreeContextMenuUIActionSpawner::GeneratePaste();
		Info.ShowMark = EShowMark::SingleFile | EShowMark::MultiplyFile;

		MenuCommand_General->GenerationInfo.Add(MenuEntry_Paste.ToText(), Info);
	}
	{
		CreateUICommand(MenuEntry_Duplicate, TEXT("Duplicate"), TEXT("Duplicate files in local folder."), EUserInterfaceActionType::Button, FInputChord());
		FFileTreeMenuGenerationInfo Info{};
		Info.CommandInfo = GetUICommandInfoName(MenuEntry_Duplicate);

		Info.ExtensionHook = FName("ContextMenu.General.Duplicate");
		Info.Label = MenuEntry_Duplicate.ToText();
		Info.Spawner = FFileTreeContextMenuSpawners::BuildButton(Info);
		Info.UIActionGenerator = FFileTreeContextMenuUIActionSpawner::GenerateDuplicate();
		Info.ShowMark = EShowMark::SingleFile | EShowMark::MultiplyFile | EShowMark::Show;

		MenuCommand_General->GenerationInfo.Add(MenuEntry_Duplicate.ToText(), Info);
	}
	{
		CreateUICommand(MenuEntry_Delete, TEXT("Delete"), TEXT("Delete files."), EUserInterfaceActionType::Button, FInputChord());
		FFileTreeMenuGenerationInfo Info{};
		Info.CommandInfo = GetUICommandInfoName(MenuEntry_Delete);


		Info.ExtensionHook = FName("ContextMenu.General.Delete");
		Info.Label = MenuEntry_Delete.ToText();
		Info.Spawner = FFileTreeContextMenuSpawners::BuildButton(Info);
		Info.UIActionGenerator = FFileTreeContextMenuUIActionSpawner::GenerateDelete();
		Info.ShowMark = EShowMark::SingleFile | EShowMark::MultiplyFile | EShowMark::Show;
		MenuCommand_General->GenerationInfo.Add(MenuEntry_Delete.ToText(), Info);
	}

	{
		CreateUICommand(MenuEntry_CopyTo, TEXT("CopyTo"), TEXT("Copy files to other folder."), EUserInterfaceActionType::Button, FInputChord());
		FFileTreeMenuGenerationInfo Info{};
		Info.CommandInfo = GetUICommandInfoName(MenuEntry_CopyTo);

		Info.ExtensionHook = FName("ContextMenu.General.CopyTo");
		Info.Label = MenuEntry_CopyTo.ToText();
		Info.Spawner = FFileTreeContextMenuSpawners::BuildButton(Info);
		Info.UIActionGenerator = FFileTreeContextMenuUIActionSpawner::GenerateCopyTo();
		Info.ShowMark = EShowMark::SingleFile | EShowMark::MultiplyFile | EShowMark::Show;

		MenuCommand_DragDrop->GenerationInfo.Add(MenuEntry_CopyTo.ToText(), Info);
	}
	{
		CreateUICommand(MenuEntry_MoveTo, TEXT("MoveTo"), TEXT("Move files to other folder."), EUserInterfaceActionType::Button, FInputChord());
		FFileTreeMenuGenerationInfo Info{};
		Info.CommandInfo = GetUICommandInfoName(MenuEntry_MoveTo);

		Info.ExtensionHook = FName("ContextMenu.General.MoveTo");
		Info.Label = MenuEntry_MoveTo.ToText();
		Info.Spawner = FFileTreeContextMenuSpawners::BuildButton(Info);
		Info.UIActionGenerator = FFileTreeContextMenuUIActionSpawner::GenerateMoveTo();
		Info.ShowMark = EShowMark::SingleFile | EShowMark::MultiplyFile | EShowMark::Show;

		MenuCommand_DragDrop->GenerationInfo.Add(MenuEntry_MoveTo.ToText(), Info);
	}
}

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT	

#undef LOCTEXT_NAMESPACE
