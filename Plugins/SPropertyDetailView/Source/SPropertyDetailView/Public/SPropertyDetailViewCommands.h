// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "SPropertyDetailViewStyle.h"

class FSPropertyDetailViewCommands : public TCommands<FSPropertyDetailViewCommands>
{
public:

	FSPropertyDetailViewCommands()
		: TCommands<FSPropertyDetailViewCommands>(TEXT("SPropertyDetailView"), NSLOCTEXT("Contexts", "SPropertyDetailView", "SPropertyDetailView Plugin"), NAME_None, FSPropertyDetailViewStyle::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;

public:
	TSharedPtr< FUICommandInfo > OpenPluginWindow;
};