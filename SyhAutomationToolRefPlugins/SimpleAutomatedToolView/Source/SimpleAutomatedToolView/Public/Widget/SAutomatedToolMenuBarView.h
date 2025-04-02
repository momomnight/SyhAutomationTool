#pragma once


#include "Widgets/SCompoundWidget.h"


class SAutomatedToolMenuBarView : public SCompoundWidget
{

public:
	SLATE_BEGIN_ARGS(SAutomatedToolMenuBarView) {}

	SLATE_ARGUMENT(TSharedPtr<FUICommandList>, CommandList)

	SLATE_END_ARGS()


public:
	SAutomatedToolMenuBarView();

	void Construct(const FArguments& InArgs);

public:
	bool IsButtonEnabled(FText InKey, int32 InType) { return true; }
	bool IsButtonChecked(FText InKey, int32 InType) { return true; }
	void OnButtonPressd(FText InKey, int32 InType);
	void OnFillMenuEntries(FMenuBuilder& InMenuBuilder, FText InKey);

protected:

	TWeakPtr<FUICommandList> CommandList;

};