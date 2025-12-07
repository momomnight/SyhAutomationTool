// Copyright Epic Games, Inc. All Rights Reserved.

#include "SPropertyDetailViewCommands.h"

#define LOCTEXT_NAMESPACE "FSPropertyDetailViewModule"

void FSPropertyDetailViewCommands::RegisterCommands()
{
	UI_COMMAND(OpenPluginWindow, "SPropertyDetailView", "Bring up SPropertyDetailView window", EUserInterfaceActionType::Button, FInputChord());
}

#undef LOCTEXT_NAMESPACE
