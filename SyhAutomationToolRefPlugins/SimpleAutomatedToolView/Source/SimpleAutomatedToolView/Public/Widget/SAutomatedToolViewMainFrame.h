#pragma once


#include "Widgets/SCompoundWidget.h"


class SAutomatedToolViewMainFrame : public SCompoundWidget
{

public:
	SLATE_BEGIN_ARGS(SAutomatedToolViewMainFrame) {}



	SLATE_END_ARGS()


public:
	SAutomatedToolViewMainFrame();

	void Construct(const FArguments& InArgs);

public:
	class FReply OnSearch() const;
	TSharedRef<SWidget> MakeComboBoxItemWidget(TSharedPtr<FString> InItem);
	void OnSelectionChanged(TSharedPtr<FString> InItem, ESelectInfo::Type InType);
	FText GetSelectedModeText() const;

	//点开模式菜单调用
	void OnModeMenuOpening();
	void RefreshText();

	void SetCurrentMode(TSharedPtr<FString> InStr);

protected:
	TSharedPtr<class SNotificationList> NotificationList;
	TSharedPtr<class SWidgetSwitcher> EditorSwitcher;
	TSharedPtr<class SWidgetSwitcher> ToolBarSwitcher;

	//ComboBox
	TSharedPtr<class SComboBox<TSharedPtr<FString>>> ModeSelector;
	TArray<TSharedPtr<FString>> Modes;
	TSharedPtr<FString> CurrentMode;


};