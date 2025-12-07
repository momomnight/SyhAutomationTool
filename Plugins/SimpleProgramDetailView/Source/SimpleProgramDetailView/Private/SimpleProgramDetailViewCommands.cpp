// Copyright Epic Games, Inc. All Rights Reserved.

#include "SimpleProgramDetailViewCommands.h"

#define LOCTEXT_NAMESPACE "FSimpleProgramDetailViewModule"

void FSimpleProgramDetailViewCommands::RegisterCommands()
{
	UI_COMMAND(OpenPluginWindows, "SimpleProgramDetailView", "Bring up SimpleProgramDetailView window", EUserInterfaceActionType::Button, FInputChord());
}

#undef LOCTEXT_NAMESPACE
