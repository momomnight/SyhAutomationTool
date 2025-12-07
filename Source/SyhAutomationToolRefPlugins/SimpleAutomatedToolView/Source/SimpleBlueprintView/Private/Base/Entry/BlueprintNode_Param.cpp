#include "Base/Entry/BlueprintNode_Param.h"
#include "Base/Entry/BlueprintPin_ParamInput.h"
#include "Base/Entry/BlueprintPin_ParamOutput.h"

FBlueprintNode_Param::FBlueprintNode_Param() : Super(EBlueprintNodeType::Param)
{
}

void FBlueprintNode_Param::AddParamInput(TSharedPtr<FBlueprintPin_ParamInput> NewParamInput)
{
	if (NewParamInput.IsValid() && NewParamInput->GetPinType() == EBlueprintPinType::Param_Input)
	{
		ParamInputPins.Add(NewParamInput);
		AddChild(NewParamInput);
	}
}

void FBlueprintNode_Param::AddParamOutput(TSharedPtr<FBlueprintPin_ParamOutput> NewParamOutput)
{
	if (NewParamOutput.IsValid() && NewParamOutput->GetPinType() == EBlueprintPinType::Param_Output)
	{
		ParamOutputPins.Add(NewParamOutput);
		AddChild(NewParamOutput);
	}
}

