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

protected:

	void OnCommandButtonClicked(ECommandProtocol InProtocol);

private:

};