// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "SimpleAutomatedToolViewStyle.h"
#include "SimpleAutomatedToolViewType.h"
#include "SimpleAutomatedToolViewDelegateFactory.h"


class FSimpleAutomatedToolViewCommands : public TCommands<FSimpleAutomatedToolViewCommands>
{
public:

	FSimpleAutomatedToolViewCommands()
		: TCommands<FSimpleAutomatedToolViewCommands>(TEXT("SimpleAutomatedToolView"), NSLOCTEXT("Contexts", "SimpleAutomatedToolView", "SimpleAutomatedToolView Plugin"), NAME_None, FSimpleAutomatedToolViewStyle::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;

public:
	TSharedPtr<FUICommandInfo>& CreateCommandInfo(const FText& InKey, int32 InType);


public:
	TSharedPtr< FUICommandInfo > OpenPluginWindow;
	//FText--下拉菜单 int32--菜单Button索引 FUICommandInfo--Action
	//FName无法本地化
	static TMap<FText, TMap<int32, TSharedPtr<FUICommandInfo>>> CommandInfoList;
	static TMap<FText, TMap<int32, FUIAction>> UIActions;
	static TMap<FText, FSpawnMenuEntries> MenuEntries;

	//ContextMenu具体操作
	static TMap<FText, FOnFileTreeContextMenuClicked> FileTree_RightMouseButtonClickContextMenuActions;
	static TMap<FText, FOnFileTreeDragDropContextMenuClicked> FileTree_DragDropContextMenuActions;
};