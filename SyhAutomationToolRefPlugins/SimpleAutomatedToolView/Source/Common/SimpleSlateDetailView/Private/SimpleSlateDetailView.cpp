// Copyright Epic Games, Inc. All Rights Reserved.

#include "SimpleSlateDetailView.h"
#include "SimpleSlateDetailViewCommands.h"
#include "SimpleSlateDetailViewStyle.h"

#define LOCTEXT_NAMESPACE "FSimpleSlateDetailViewModule"

void FSimpleSlateDetailViewModule::StartupModule()
{
	FSimpleSlateDetailViewStyle::Initialize();
	FSimpleSlateDetailViewStyle::ReloadTextures();

	FSimpleSlateDetailViewCommands::Register();
}

void FSimpleSlateDetailViewModule::ShutdownModule()
{
	FSimpleSlateDetailViewStyle::Shutdown();

	FSimpleSlateDetailViewCommands::Unregister();

}



#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FSimpleSlateDetailViewModule, SimpleSlateDetailView)