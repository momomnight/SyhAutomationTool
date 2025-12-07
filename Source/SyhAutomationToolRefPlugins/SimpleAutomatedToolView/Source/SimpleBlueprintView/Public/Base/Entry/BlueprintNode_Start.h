#pragma once

#include "Base/Entry/BlueprintNodeEntry.h"


struct FBlueprintPin_ExecOutput;

struct SIMPLEBLUEPRINTVIEW_API FBlueprintNode_Start : public FBlueprintNodeEntry
{
	using Super = FBlueprintNodeEntry;

	FBlueprintNode_Start();
	FBlueprintNode_Start(EBlueprintNodeType NodeType);

	//~Begin FBlueprintEntryBase

	virtual FString GetDefaultName() const noexcept { return TEXT("Start"); }

	//~End FBlueprintEntryBase


	//~Begin FBlueprintEntryBase

	//virtual FLinearColor GetTitleGloss() { return FLinearColor(0.6f, 0.f, 0.f, 1.f); }
	virtual FLinearColor GetTitleGloss() { return FLinearColor::Red; }
	//~End FBlueprintEntryBase

protected:
	TSharedPtr<FBlueprintPin_ExecOutput> ExecOutputPin{ nullptr };
};