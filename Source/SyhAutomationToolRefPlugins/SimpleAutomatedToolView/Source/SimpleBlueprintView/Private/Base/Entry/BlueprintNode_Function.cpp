#include "Base/Entry/BlueprintNode_Function.h"
#include "Base/Entry/BlueprintPin_ParamInput.h"
#include "Base/Entry/BlueprintPin_ParamOutput.h"

FBlueprintNode_Function::FBlueprintNode_Function() : Super(EBlueprintNodeType::Function)
{

}

void FBlueprintNode_Function::AddParamInput(TSharedPtr<FBlueprintPin_ParamInput> NewParamInput)
{
	if (NewParamInput.IsValid() && NewParamInput->GetPinType() == EBlueprintPinType::Param_Input)
	{
		ParamInputPins.Add(NewParamInput);
		AddChild(NewParamInput);
	}
}

void FBlueprintNode_Function::AddParamOutput(TSharedPtr<FBlueprintPin_ParamOutput> NewParamOutput)
{
	if (NewParamOutput.IsValid() && NewParamOutput->GetPinType() == EBlueprintPinType::Param_Output)
	{
		ParamOutputPins.Add(NewParamOutput);
		AddChild(NewParamOutput);
	}
}
