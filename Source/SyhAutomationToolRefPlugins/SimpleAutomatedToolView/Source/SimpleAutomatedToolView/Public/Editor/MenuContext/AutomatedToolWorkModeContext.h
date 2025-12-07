#pragma once


#include "CoreMinimal.h"
#include "Editor/MenuContext/AutomatedToolEditorContextBase.h"
#include "AutomatedToolWorkModeContext.generated.h"

class FAutomatedToolWorkMode;

UCLASS()
class UAutomatedToolWorkModeContext : public UAutomatedToolEditorContextBase
{
	GENERATED_BODY()
public:

	TWeakPtr<FAutomatedToolWorkMode> WorkModeInstance;

};