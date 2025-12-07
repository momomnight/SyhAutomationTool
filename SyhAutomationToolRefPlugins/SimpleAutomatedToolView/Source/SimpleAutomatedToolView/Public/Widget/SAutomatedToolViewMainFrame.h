#pragma once
#include "Widget/Core/SAutomatedToolViewWidget.h"
#include "SimpleAutomatedToolViewType.h"
#include "Misc/EnumClassFlags.h"

class SAutomatedToolViewMainFrame : public SAutomatedToolViewWidget
{
public:
	SLATE_BEGIN_ARGS(SAutomatedToolViewMainFrame) {}


	SLATE_END_ARGS()

public:
	SAutomatedToolViewMainFrame();

	void Construct(const FArguments& InArgs, TSharedRef<SDockTab> InOwnerTab, TSharedRef<SWindow> Window);
	void ConstructChild();
	void Initialize();

	void SaveLayoutState(const TSharedRef<FTabManager::FLayout>& InLayout);

	int32 LoadLayoutState();

public:
	//ComboBox
	TSharedRef<SWidget> MakeComboBoxItemWidget(TSharedPtr<FString> InItem);
	void OnSelectionChanged(TSharedPtr<FString> InItem, ESelectInfo::Type InType);
	FText GetSelectedModeText() const;
	FReply OnClicked(int32 InWidgetIndex);

public:
	void RefreshCurrentModePageButtonBar();
	void RefreshWorkMode();
	void SetCurrentMode(TSharedPtr<FString> InStr);
	void SetCurrentMode(int32 Index);
	void SetCurrentPage(int32 Index);
private:
	void ReplaceNullWidget(int32 WorkModeIndex, int32 PageButtonIndex);
	void OnWorkModeListChanged(EWorkModeListActionType ActionType, const FText& WorkModeName, int32 WorkModeIndex,
		const FText& PageButtonName, int32 PageButtonIndex);

	bool CheckConsistency(bool bCheckCurrentState) const;
	bool CheckCurrentStateConsistency() const;
protected:
	TSharedPtr<class SNotificationList> NotificationList;

	//WorkMode的View
	TSharedPtr<class SWidgetSwitcher> WorkModeSwitcher;
	TArray<TSharedPtr<class SWidgetSwitcher>> WorkPageSwitcher;

	//ComboBox
	TSharedPtr<class SComboBox<TSharedPtr<FString>>> ModeSelector;
	TArray<TSharedPtr<FString>> Modes;

	static TSharedPtr<FString> InvalidMode;

	//WrapBox
	TSharedPtr<class SWrapBox> WrapBox;
	TArray<TSharedPtr<class SButton>> Buttons;

	TWeakPtr<SDockTab> OwnerTab;
	TWeakPtr<SWindow> OwnerWindow;
protected:
	class FSimpleAutomatedToolViewWorkMode& WorkModeInstanceRef;
	FDelegateHandle DelegateHandle;

	TSharedPtr<FString> CurrentMode;
	int32 CurrentModeIndex;

	FText CurrentPage;
	int32 CurrentPageIndex;
};