// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "SimpleSlateDetailViewStyle.h"
#include "Internationalization/Internationalization.h"

class FSimpleSlateDetailViewCommands : public TCommands<FSimpleSlateDetailViewCommands>
{
public:

	FSimpleSlateDetailViewCommands()
		: TCommands<FSimpleSlateDetailViewCommands>(TEXT("SimpleSlateDetailView"), 
			NSLOCTEXT("Contexts", "SimpleSlateDetailView", "SimpleSlateDetailView Module"), 
			NAME_None, FSimpleSlateDetailViewStyle::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;

public:
	TSharedPtr<FUICommandList> PluginCommands;
};
