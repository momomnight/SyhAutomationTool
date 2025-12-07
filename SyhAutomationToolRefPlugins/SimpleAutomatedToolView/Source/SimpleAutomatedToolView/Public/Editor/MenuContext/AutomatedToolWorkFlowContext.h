#pragma once


#include "CoreMinimal.h"
#include "Editor/MenuContext/AutomatedToolEditorContextBase.h"
#include "AutomatedToolWorkFlowContext.generated.h"

class FAutomatedToolWorkFlow;

UCLASS()
class UAutomatedToolWorkFlowContext : public UAutomatedToolEditorContextBase
{
	GENERATED_BODY()
public:

	TWeakPtr<FAutomatedToolWorkFlow> WorkFlowInstance;

};
