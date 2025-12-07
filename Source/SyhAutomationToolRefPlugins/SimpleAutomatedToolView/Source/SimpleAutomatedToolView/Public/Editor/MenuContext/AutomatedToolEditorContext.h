#pragma once


#include "CoreMinimal.h"
#include "Editor/MenuContext/AutomatedToolEditorContextBase.h"
#include "AutomatedToolEditorContext.generated.h"

class FAutomatedToolEditor;

UCLASS()
class UAutomatedToolEditorContext : public UAutomatedToolEditorContextBase
{
	GENERATED_BODY()
public:
	TWeakPtr<FAutomatedToolEditor> EditorInstance;
};
