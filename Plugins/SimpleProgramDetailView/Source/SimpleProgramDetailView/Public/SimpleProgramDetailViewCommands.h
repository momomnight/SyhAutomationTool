// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "SimpleProgramDetailViewStyle.h"

class FSimpleProgramDetailViewCommands : public TCommands<FSimpleProgramDetailViewCommands>
{
public:

	FSimpleProgramDetailViewCommands()
		: TCommands<FSimpleProgramDetailViewCommands>(TEXT("SimpleProgramDetailView"), NSLOCTEXT("Contexts", "SimpleProgramDetailView", "SimpleProgramDetailView Plugin"), NAME_None, FSimpleProgramDetailViewStyle::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;

public:
	TSharedPtr< FUICommandInfo > OpenPluginWindows;
};