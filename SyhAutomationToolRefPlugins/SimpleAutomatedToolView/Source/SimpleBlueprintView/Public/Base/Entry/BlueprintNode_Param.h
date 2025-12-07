#pragma once

#include "Base/Entry/BlueprintNodeEntry.h"

struct FBlueprintPin_ParamOutput;
struct FBlueprintPin_ParamInput;
//至少有一个输出
struct SIMPLEBLUEPRINTVIEW_API FBlueprintNode_Param : public FBlueprintNodeEntry
{
	using Super = FBlueprintNodeEntry;

	FBlueprintNode_Param();

	//~Begin FBlueprintEntryBase

	virtual FString GetDefaultName() const noexcept { return TEXT("Param"); }

	//~End FBlueprintEntryBase

	void AddParamInput(TSharedPtr<FBlueprintPin_ParamInput> NewParamInput);
	void AddParamOutput(TSharedPtr<FBlueprintPin_ParamOutput> NewParamOutput);


	//~Begin FBlueprintEntryBase

	//virtual FLinearColor GetTitleGloss() { return FLinearColor(0.f, 0.7, 0.f, 1.f); }
	virtual FLinearColor GetTitleGloss() { return FLinearColor::Green; }
	//~End FBlueprintEntryBase

protected:
	TArray<TSharedPtr<FBlueprintPin_ParamOutput>> ParamOutputPins;
	TArray<TSharedPtr<FBlueprintPin_ParamInput>> ParamInputPins;
};