#pragma once
#include "Templates/SharedPointer.h"
#include "Editor/Base/AutomatedToolMenu.h"

class FAutomatedToolWorkMode;

class FAutomatedToolWorkModeMenu : public FAutomatedToolMenu
{

public:
	//FAutomatedToolWorkModeMenu(TSharedRef<FAutomatedToolWorkMode> InWorkMode);

protected:
	TWeakPtr<FAutomatedToolWorkMode> WorkModeInstacne;
};