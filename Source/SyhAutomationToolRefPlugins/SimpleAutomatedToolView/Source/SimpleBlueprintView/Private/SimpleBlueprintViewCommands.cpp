// Copyright Epic Games, Inc. All Rights Reserved.

#include "SimpleBlueprintViewCommands.h"

#define LOCTEXT_NAMESPACE "FSimpleBlueprintViewModule"

void FSimpleBlueprintViewCommands::RegisterCommands()
{
	UI_COMMAND(OpenPluginWindow, "SimpleBlueprintView", "Bring up SimpleBlueprintView window", EUserInterfaceActionType::Button, FInputChord());
}

#undef LOCTEXT_NAMESPACE
