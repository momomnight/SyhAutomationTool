#pragma once
#include "Base/Entry/BlueprintPinEntry.h"


struct FBlueprintPin_ParamOutput;

struct SIMPLEBLUEPRINTVIEW_API FBlueprintPin_ParamInput : public FBlueprintPinEntry
{
	using Super = FBlueprintPinEntry;

	FBlueprintPin_ParamInput();

	virtual FString GetDefaultName() const noexcept { return TEXT("ParamInput"); }

	TWeakPtr<FBlueprintPin_ParamOutput> FromOther;
};
