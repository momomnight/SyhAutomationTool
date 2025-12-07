#pragma once

#include "Base/Entry/BlueprintNodeEntry.h"

struct FBlueprintPin_ExecInput;

struct SIMPLEBLUEPRINTVIEW_API FBlueprintNode_End : public FBlueprintNodeEntry
{
	using Super = FBlueprintNodeEntry;

	FBlueprintNode_End();

	//~Begin FBlueprintEntryBase

	virtual FString GetDefaultName() const noexcept { return TEXT("End"); }

	//~End FBlueprintEntryBase


	//~Begin FBlueprintEntryBase

	//virtual FLinearColor GetTitleGloss() { return FLinearColor(0.2f, 0.2f, 0.2f, 1.f); }
	virtual FLinearColor GetTitleGloss() { return FLinearColor::Gray; }
	//~End FBlueprintEntryBase

protected:
	TSharedPtr<FBlueprintPin_ExecInput> ExecInputPin{ nullptr };
};