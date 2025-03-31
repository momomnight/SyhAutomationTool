// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "SimpleAutomatedToolViewStyle.h"

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
	TSharedPtr< FUICommandInfo > OpenPluginWindow;
};