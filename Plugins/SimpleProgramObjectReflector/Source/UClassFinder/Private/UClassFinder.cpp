// Copyright Epic Games, Inc. All Rights Reserved.

#include "UClassFinder.h"
#include "ClassFinder.h"

#define LOCTEXT_NAMESPACE "FUClassFinderModule"


TSharedPtr<IClassFinder> FUClassFinderModule::ClassFinder = nullptr;

void FUClassFinderModule::StartupModule()
{
}

void FUClassFinderModule::ShutdownModule()
{
}


TSharedPtr<IClassFinder> FUClassFinderModule::Get()
{
	if (!ClassFinder.IsValid())
	{
		ClassFinder = MakeShareable(new FClassFinder);
	}
	return ClassFinder;
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FUClassFinderModule, UClassFinder)