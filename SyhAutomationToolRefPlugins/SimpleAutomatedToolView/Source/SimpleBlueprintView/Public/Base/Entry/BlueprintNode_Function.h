#pragma once

#include "Base/Entry/BlueprintNode_HookPoint.h"

struct FBlueprintPin_ExecInput;
struct FBlueprintPin_ExecOutput;
struct FBlueprintPin_ParamInput;
struct FBlueprintPin_ParamOutput;

struct SIMPLEBLUEPRINTVIEW_API FBlueprintNode_Function : public FBlueprintNode_HookPoint
{
	using Super = FBlueprintNode_HookPoint;

	FBlueprintNode_Function();

	//~Begin FBlueprintEntryBase

	virtual FString GetDefaultName() const noexcept { return TEXT("Function"); }

	//~End FBlueprintEntryBase

	//~Begin FBlueprintEntryBase

	virtual FLinearColor GetTitleGloss() { return FLinearColor::Blue; }

	//~End FBlueprintEntryBase

	void AddParamInput(TSharedPtr<FBlueprintPin_ParamInput> NewParamInput);
	void AddParamOutput(TSharedPtr<FBlueprintPin_ParamOutput> NewParamOutput);
protected:
	TArray<TSharedPtr<FBlueprintPin_ParamInput>> ParamInputPins;
	TArray<TSharedPtr<FBlueprintPin_ParamOutput>> ParamOutputPins;
};