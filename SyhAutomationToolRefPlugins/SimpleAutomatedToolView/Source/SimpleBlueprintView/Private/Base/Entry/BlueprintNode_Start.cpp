#include "Base/Entry/BlueprintNode_Start.h"
#include "Base/Entry/BlueprintPin_ExecOutput.h"

FBlueprintNode_Start::FBlueprintNode_Start() : Super(EBlueprintNodeType::Start)
{
	ExecOutputPin = MakeShareable<FBlueprintPin_ExecOutput>(new FBlueprintPin_ExecOutput);
	AddChild(ExecOutputPin);
}

FBlueprintNode_Start::FBlueprintNode_Start(EBlueprintNodeType NodeType) : Super(NodeType)
{
	ExecOutputPin = MakeShareable<FBlueprintPin_ExecOutput>(new FBlueprintPin_ExecOutput);
	AddChild(ExecOutputPin);
}
