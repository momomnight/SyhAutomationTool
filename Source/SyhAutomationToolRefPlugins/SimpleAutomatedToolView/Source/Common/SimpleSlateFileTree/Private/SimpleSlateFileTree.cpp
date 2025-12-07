// Copyright Epic Games, Inc. All Rights Reserved.

#include "SimpleSlateFileTree.h"
#include "FileTreeMenuCommands.h"
#include "FileTreeMenuStyle.h"

#define LOCTEXT_NAMESPACE "FSimpleSlateFileTreeModule"

void FSimpleSlateFileTreeModule::StartupModule()
{
	FFileTreeMenuStyle::Initialize();
	FFileTreeMenuStyle::ReloadTextures();

	FFileTreeMenuCommands::Register();
}

void FSimpleSlateFileTreeModule::ShutdownModule()
{
	FFileTreeMenuStyle::Shutdown();

	FFileTreeMenuCommands::Unregister();

}



#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FSimpleSlateFileTreeModule, SimpleSlateFileTree)