// Copyright Epic Games, Inc. All Rights Reserved.

#include "SimpleAutomatedToolViewCommands.h"

#define LOCTEXT_NAMESPACE "FSimpleAutomatedToolViewModule"

void FSimpleAutomatedToolViewCommands::RegisterCommands()
{
	UI_COMMAND(OpenPluginWindow, "SimpleAutomatedToolView", "Bring up SimpleAutomatedToolView window", EUserInterfaceActionType::Button, FInputChord());
}

#undef LOCTEXT_NAMESPACE
