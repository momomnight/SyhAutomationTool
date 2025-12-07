// Copyright Epic Games, Inc. All Rights Reserved.

#include "SelectedObjectManagerCommands.h"

#define LOCTEXT_NAMESPACE "FSelectedObjectManagerModule"

void FSelectedObjectManagerCommands::RegisterCommands()
{
	UI_COMMAND(OpenPluginWindow, "SelectedObjectManager", "Bring up SelectedObjectManager window", EUserInterfaceActionType::Button, FInputChord());
}

#undef LOCTEXT_NAMESPACE
