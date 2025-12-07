#pragma once

#include "Base/Entry/BlueprintNodeEntry.h"

struct FBlueprintPin_ExecInput;
struct FBlueprintPin_ExecOutput;

struct SIMPLEBLUEPRINTVIEW_API FBlueprintNode_HookPoint : public FBlueprintNodeEntry
{
	using Super = FBlueprintNodeEntry;

	FBlueprintNode_HookPoint();
	FBlueprintNode_HookPoint(EBlueprintNodeType NodeType);

	//~Begin FBlueprintEntryBase

	virtual FString GetDefaultName() const noexcept { return TEXT("HookPoint"); }
	
	virtual bool HasTitleRow() {
#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
		return false;
#elif
		return false;
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT	
	}

private:
	void CreateExecPin();
	//~End FBlueprintEntryBase
protected:
	TSharedPtr<FBlueprintPin_ExecInput> ExecInputPin{ nullptr };
	TSharedPtr<FBlueprintPin_ExecOutput> ExecOutputPin{ nullptr };
};