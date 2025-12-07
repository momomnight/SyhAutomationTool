#pragma once
#include "Editor/Base/AutomatedToolWorkFlow.h"


class FWorkFlow_Automation : public FAutomatedToolWorkFlow
{

public:
	using Super = FAutomatedToolWorkFlow;

	FWorkFlow_Automation(TSharedRef<FAutomatedToolEditor> InEditor);


public:

	//~Begin FAutomatedToolEditorBase Interface
	virtual void RegisterMenuContextObject(FToolMenuContext& InMenuContext) override;
	//~End FAutomatedToolEditorBase Interface

	//~Begin FAutomatedToolWorkFlow Interface
	virtual void RegisterWorkModes();
	//~End FAutomatedToolWorkFlow Interface
};