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
	TMap<FText, TMap<int32, TSharedPtr<FUICommandInfo>>> CommandInfoList;
	TMap<FText, TMap<int32, FUIAction>> UIActions;
	TMap<FText, FSpawnMenuEntries> MenuEntries;

};