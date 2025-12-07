#pragma once
#include "Base/Entry/BlueprintPinEntry.h"

struct FBlueprintPin_ParamInput;

struct SIMPLEBLUEPRINTVIEW_API FBlueprintPin_ParamOutput : public FBlueprintPinEntry
{
	using Super = FBlueprintPinEntry;

	FBlueprintPin_ParamOutput();


	TArray<TWeakPtr<FBlueprintPin_ParamInput>> ToOthers;
};