#include "Base/Entry/BlueprintNode_End.h"
#include "Base/Entry/BlueprintPin_ExecInput.h"

FBlueprintNode_End::FBlueprintNode_End() : Super(EBlueprintNodeType::End)
{
	ExecInputPin = MakeShareable<FBlueprintPin_ExecInput>(new FBlueprintPin_ExecInput);
	AddChild(ExecInputPin);
}


