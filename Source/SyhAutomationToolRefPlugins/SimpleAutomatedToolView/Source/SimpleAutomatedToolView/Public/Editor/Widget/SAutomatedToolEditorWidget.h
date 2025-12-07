#pragma once

#include "Widgets/SCompoundWidget.h"

class FAutomatedToolEditor;
class FTabManager;
class SDockTab;
class SVerticalBox::FSlot;
class SHorizontalBox::FSlot;

class SAutomatedToolEditorWidget : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SAutomatedToolEditorWidget) {}

	SLATE_END_ARGS()

	SAutomatedToolEditorWidget();

public:
	void Construct(const FArguments& InArgs, TSharedRef<FAutomatedToolEditor> InEditorInstance, TSharedRef<FTabManager> InTabManager);

	void StartUpEditorView(const TSharedRef<FTabManager::FLayout>& DefaultLayout, TSharedRef<SDockTab> InMainTab);
	
	void GenerateMenus();
	void RegenerateMenusAndToolBar();

	void RestoreFromLayout(const TSharedRef<FTabManager::FLayout>& DefaultLayout);
	void ClearLayout();

	//All
	void RegenerateMenus();
	void RegenerateToolbar();

	//WorkFlowSelector + WorkModeSelector
	void RegenerateWorkFlowSelectorToolbar();

	//WorkModeSelector
	void RegenerateWorkModeSelectorToolbar();
	
	//CommonAction + WorkFlowAction + WorkModeAction
	void RegenerateActionToolbar();

	void SetWorkFlowSelectorToolBarWidget(TSharedPtr<SWidget> InWidget);
	void SetWorkModeSelectorToolBarWidget(TSharedPtr<SWidget> InWidget);
	void SetMainBodyWidget(TSharedPtr<SWidget> InWidget);
	void SetActionToolBarWidget(TSharedPtr<SWidget> InWidget);
private:
	TSharedPtr<FAutomatedToolEditor> EditorInstance;
	TSharedPtr<FTabManager> MyTabManager;
	TWeakPtr<SDockTab> MainTab;

	SHorizontalBox::FSlot* WorkFlowSelectorSlot;
	SHorizontalBox::FSlot* ActionToolBarSlot;
	SVerticalBox::FSlot* MainBodySlot;
};