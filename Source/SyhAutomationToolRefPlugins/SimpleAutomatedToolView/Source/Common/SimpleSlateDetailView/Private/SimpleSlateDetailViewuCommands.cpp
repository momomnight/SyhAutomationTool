// Copyright Epic Games, Inc. All Rights Reserved.

#include "SimpleSlateDetailViewCommands.h"

#define LOCTEXT_NAMESPACE "SimpleSlateDetailView"

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT


void FSimpleSlateDetailViewCommands::RegisterCommands()
{
	PluginCommands = MakeShareable(new FUICommandList);
}

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT	

#undef LOCTEXT_NAMESPACE
