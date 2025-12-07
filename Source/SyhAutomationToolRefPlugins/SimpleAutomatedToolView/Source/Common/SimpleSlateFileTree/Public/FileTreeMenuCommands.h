// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "FileTreeMenuStyle.h"
#include "FileTreeTool.h"
#include "FileTreeCommand.h"
#include "Internationalization/Internationalization.h"



extern const FTextStruct MenuEntry_Open;
extern const FTextStruct MenuEntry_Rename;
extern const FTextStruct MenuEntry_Cut;
extern const FTextStruct MenuEntry_Copy;
extern const FTextStruct MenuEntry_Paste;
extern const FTextStruct MenuEntry_Duplicate;
extern const FTextStruct MenuEntry_Delete;
extern const FTextStruct MenuEntry_CopyTo;
extern const FTextStruct MenuEntry_MoveTo;

class FFileTreeMenuCommands : public TCommands<FFileTreeMenuCommands>
{
public:

	FFileTreeMenuCommands()
		: TCommands<FFileTreeMenuCommands>(TEXT("FileTreeMenu"), NSLOCTEXT("Contexts", "FileTree", "FileTree Module"), NAME_None, FFileTreeMenuStyle::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;

public:
	TSharedPtr<FUICommandList> PluginCommands;

	TSharedPtr<FFileTreeMenuSectionInfo> MenuCommand_General;
	TSharedPtr<FFileTreeMenuSectionInfo> MenuCommand_DragDrop;
};
