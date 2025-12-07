// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "SimpleBlueprintViewStyle.h"

class FSimpleBlueprintViewCommands : public TCommands<FSimpleBlueprintViewCommands>
{
public:

	FSimpleBlueprintViewCommands()
		: TCommands<FSimpleBlueprintViewCommands>(TEXT("SimpleBlueprintView"), NSLOCTEXT("Contexts", "SimpleBlueprintView", "SimpleBlueprintView Plugin"), NAME_None, FSimpleBlueprintViewStyle::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;

public:
	TSharedPtr< FUICommandInfo > OpenPluginWindow;
};