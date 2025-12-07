#pragma once


#include "Widget/Core/SAutomatedToolViewWidget.h"


class SAutomatedToolMenuBarView : public SAutomatedToolViewWidget
{

public:
	SLATE_BEGIN_ARGS(SAutomatedToolMenuBarView) {}

	SLATE_ARGUMENT(TSharedPtr<FUICommandList>, CommandList)

	SLATE_END_ARGS()


public:
	SAutomatedToolMenuBarView();

	void Construct(const FArguments& InArgs);

public:

	//用于填充下拉菜单
	void OnFillMenuEntries(FMenuBuilder& InMenuBuilder, FText InKey);

protected:

	TWeakPtr<FUICommandList> CommandList;

};