#pragma once
#include "Templates/SharedPointer.h"

class FAutomatedToolMenu : public TSharedFromThis<FAutomatedToolMenu>
{

public:
	FAutomatedToolMenu();
	virtual ~FAutomatedToolMenu(){}
	virtual void RegisterMenu() = 0;

	FName GetMenuName() { return MenuName; }

protected:
	FName MenuName;
	TSharedPtr<FAutomatedToolMenu> ParentMenu;
};