#pragma once
#include "Widget/Core/SAutomatedToolViewWidget.h"
#include "SimpleAutomatedToolType.h"

class SAutomatedDetailEditorWidget : public SAutomatedToolViewWidget
{
public:
	SLATE_BEGIN_ARGS(SAutomatedDetailEditorWidget) {}
	SLATE_END_ARGS()

	SAutomatedDetailEditorWidget();
	void Construct(const FArguments& InArgs);


public:
	void ResetState();
protected:

	void OnCommandButtonClicked(ECommandProtocol InProtocol);

private:
	TSharedPtr<class SAutomatedFileDirectory> AutomatedFileDirectory;
	TSharedPtr<class SAutomatedBlueprintOutline> AutomatedBlueprintOutline;
};