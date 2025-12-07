// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "SimpleAutomatedToolViewStyle.h"
#include "FileTreeTool.h"
#include "SimpleAutomatedToolViewDelegateFactory.h"

extern const FTextStruct MenuBar_File;
extern const FTextStruct MenuBar_Window;
extern const FTextStruct MenuBar_Editor;
extern const FTextStruct MenuBar_Debug;
extern const FTextStruct MenuBar_Help;

//FSimpleAutomatedToolViewCommands代表一个Context
class FSimpleAutomatedToolViewCommands : public TCommands<FSimpleAutomatedToolViewCommands>
{
public:

	FSimpleAutomatedToolViewCommands()
		//const FName InContextName 上下文名称, const FText& InContextDesc 上下文描述
		//const FName InContextParent 上级上下文, const FName InStyleSetName 风格集
		: TCommands<FSimpleAutomatedToolViewCommands>(TEXT("SimpleAutomatedToolView"), NSLOCTEXT("Contexts", "SimpleAutomatedToolView", "SimpleAutomatedToolView Plugin"), NAME_None, FSimpleAutomatedToolViewStyle::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;

public:
	TSharedPtr<FUICommandInfo>& CreateCommandInfo(const FText& InKey, int32 InType);
	FUIAction& CreateAction(const FText& InKey, int32 InType);
	FSpawnMenuEntries& CreateSpawner(const FText& InKey);
public:
	TSharedPtr< FUICommandInfo > OpenPluginWindow;
	//FText--下拉菜单 int32--菜单Button索引 FUICommandInfo--Action
	//FName无法本地化
	TMap<FText, TMap<int32, TSharedPtr<FUICommandInfo>>> CommandInfoList;
	TMap<FText, TMap<int32, FUIAction>> UIActions;
	TMap<FText, FSpawnMenuEntries> MenuEntries;
};