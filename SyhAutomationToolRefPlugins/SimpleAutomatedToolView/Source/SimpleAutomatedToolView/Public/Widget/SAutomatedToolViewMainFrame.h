#pragma once
#include "Widget/Core/SAutomatedToolViewWidget.h"


class SAutomatedToolViewMainFrame : public SAutomatedToolViewWidget
{
public:
	SLATE_BEGIN_ARGS(SAutomatedToolViewMainFrame) {}



	SLATE_END_ARGS()


public:
	SAutomatedToolViewMainFrame();

	void Construct(const FArguments& InArgs);
	void ConstructChild();
	void Initialize();
public:
	class FReply OnSearch() const;

	//ComboBox
	TSharedRef<SWidget> MakeComboBoxItemWidget(TSharedPtr<FString> InItem);
	void OnSelectionChanged(TSharedPtr<FString> InItem, ESelectInfo::Type InType);
	FText GetSelectedModeText() const;
	void OnModeMenuOpening();	//点开模式菜单调用
	
	FReply OnClicked(int32 InWidgetIndex, enum class EToolViewModePages InPageType);
	void CallButtonAction(TFunction<bool (TSharedPtr<class SButton>)> InMethod);


public:
	void RefreshModePageButtonBar();
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

	//WrapBox
	TSharedPtr<class SWrapBox> WrapBox;
	TArray<TSharedPtr<class SButton>> Buttons;
};