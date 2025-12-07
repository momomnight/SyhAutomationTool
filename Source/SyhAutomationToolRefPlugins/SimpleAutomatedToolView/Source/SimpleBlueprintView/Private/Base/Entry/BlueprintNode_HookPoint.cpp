#include "Base/Entry/BlueprintNode_HookPoint.h"
#include "Base/Entry/BlueprintPin_ExecInput.h"
#include "Base/Entry/BlueprintPin_ExecOutput.h"

FBlueprintNode_HookPoint::FBlueprintNode_HookPoint() : Super(EBlueprintNodeType::HookPoint)
{
	CreateExecPin();
}

FBlueprintNode_HookPoint::FBlueprintNode_HookPoint(EBlueprintNodeType NodeType) : Super(NodeType)
{
	CreateExecPin();
}

void FBlueprintNode_HookPoint::CreateExecPin()
{
	ExecInputPin = MakeShareable<FBlueprintPin_ExecInput>(new FBlueprintPin_ExecInput);
	ExecOutputPin = MakeShareable<FBlueprintPin_ExecOutput>(new FBlueprintPin_ExecOutput);
	AddChild(ExecInputPin);
	AddChild(ExecOutputPin);
}
