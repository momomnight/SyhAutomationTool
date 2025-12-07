// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "SelectedObjectManagerStyle.h"

class FSelectedObjectManagerCommands : public TCommands<FSelectedObjectManagerCommands>
{
public:

	FSelectedObjectManagerCommands()
		: TCommands<FSelectedObjectManagerCommands>(TEXT("SelectedObjectManager"), NSLOCTEXT("Contexts", "SelectedObjectManager", "SelectedObjectManager Plugin"), NAME_None, FSelectedObjectManagerStyle::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;

public:
	TSharedPtr< FUICommandInfo > OpenPluginWindow;
};