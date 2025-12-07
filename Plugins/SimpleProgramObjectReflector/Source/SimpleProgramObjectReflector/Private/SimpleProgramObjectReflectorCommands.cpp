// Copyright Epic Games, Inc. All Rights Reserved.

#include "SimpleProgramObjectReflectorCommands.h"

#define LOCTEXT_NAMESPACE "FSimpleProgramObjectReflectorModule"

void FSimpleProgramObjectReflectorCommands::RegisterCommands()
{
	UI_COMMAND(OpenPluginWindow, "SimpleProgramObjectReflector", "Bring up SimpleProgramObjectReflector window", EUserInterfaceActionType::Button, FInputChord());
}

#undef LOCTEXT_NAMESPACE
