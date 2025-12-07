#pragma once
#include "Templates/SharedPointer.h"
#include "Editor/Base/AutomatedToolMenu.h"

class FAutomatedToolWorkFlow;

class FAutomatedToolWorkFlowMenu : public FAutomatedToolMenu
{

public:
	//FAutomatedToolWorkFlowMenu(TSharedRef<FAutomatedToolWorkFlow> InEditor);

protected:
	TWeakPtr<FAutomatedToolWorkFlow> WorkFlowInstacne;
};