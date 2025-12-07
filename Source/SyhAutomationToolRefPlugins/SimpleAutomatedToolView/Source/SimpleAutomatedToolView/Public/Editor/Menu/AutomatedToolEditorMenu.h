#pragma once
#include "Templates/SharedPointer.h"
#include "Editor/Base/AutomatedToolMenu.h"

class FAutomatedToolEditor;

class FAutomatedToolEditorMenu : public FAutomatedToolMenu
{

public:
	FAutomatedToolEditorMenu(TSharedRef<FAutomatedToolEditor> InEditor);

protected:
	TWeakPtr<FAutomatedToolEditor> EditorInstacne;
};