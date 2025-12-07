// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "SimpleProgramObjectReflectorStyle.h"

class FSimpleProgramObjectReflectorCommands : public TCommands<FSimpleProgramObjectReflectorCommands>
{
public:

	FSimpleProgramObjectReflectorCommands()
		: TCommands<FSimpleProgramObjectReflectorCommands>(TEXT("SimpleProgramObjectReflector"), NSLOCTEXT("Contexts", "SimpleProgramObjectReflector", "SimpleProgramObjectReflector Plugin"), NAME_None, FSimpleProgramObjectReflectorStyle::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;

public:
	TSharedPtr< FUICommandInfo > OpenPluginWindow;
};