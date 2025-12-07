#pragma once

#include "Base/Entry/BlueprintNode_Start.h"



struct SIMPLEBLUEPRINTVIEW_API FBlueprintNode_Tick : public FBlueprintNode_Start
{
	using Super = FBlueprintNode_Start;

	FBlueprintNode_Tick();

	//~Begin FBlueprintEntryBase

	virtual FString GetDefaultName() const noexcept { return TEXT("Tick"); }

	//~End FBlueprintEntryBase

};