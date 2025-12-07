#pragma once
#include "Base/Entry/BlueprintPinEntry.h"


struct FBlueprintPin_ExecInput;

struct SIMPLEBLUEPRINTVIEW_API FBlueprintPin_ExecOutput : public FBlueprintPinEntry
{
	FBlueprintPin_ExecOutput();

	virtual FString GetDefaultName() const noexcept { return TEXT("ExecOutput"); }

	TWeakPtr<FBlueprintPin_ExecInput> ToOther;
};
