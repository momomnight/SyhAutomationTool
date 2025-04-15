// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "FileTreeMenuStyle.h"
#include "FileTreeEvent.h"
#include "FileTreeCommand.h"

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
