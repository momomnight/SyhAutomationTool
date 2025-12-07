#pragma once
#include "Base/Entry/BlueprintPinEntry.h"

struct FBlueprintPin_ExecOutput;


struct SIMPLEBLUEPRINTVIEW_API FBlueprintPin_ExecInput : public FBlueprintPinEntry
{
	using Super = FBlueprintPinEntry;

	FBlueprintPin_ExecInput();

	virtual FString GetDefaultName() const noexcept { return TEXT("ExecInput"); }

	//virtual void LinkFrom(TSharedPtr<FBlueprintPin_ExecOutput> Pin);

protected:
	TArray<TWeakPtr<FBlueprintPin_ExecOutput>> FromOthers;
};
