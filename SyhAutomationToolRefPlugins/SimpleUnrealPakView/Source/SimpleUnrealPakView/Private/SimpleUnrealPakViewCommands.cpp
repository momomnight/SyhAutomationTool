// Copyright (C) RenZhai.2020.All Rights Reserved.

#include "SimpleUnrealPakViewCommands.h"

#define LOCTEXT_NAMESPACE "FSimpleUnrealPakViewModule"

void FSimpleUnrealPakViewCommands::RegisterCommands()
{
	UI_COMMAND(OpenPluginWindow, "View", "You can view packaged resources that are not cook.", EUserInterfaceActionType::Button, FInputGesture());
}

#undef LOCTEXT_NAMESPACE
