#pragma once
#include "Editor/Base/AutomatedToolEditorBase.h"

class SWidget;
class FAutomatedToolWorkFlow;
class FAutomatedToolWorkMode;
class FTabManager;
class SAutomatedToolEditorWidget;
class FJsonObject;

class FAutomatedToolEditor : public FAutomatedToolEditorBase
{
public:
	using Super = FAutomatedToolEditorBase;

	FAutomatedToolEditor(const FName& InEditorName = NAME_None);
	void InitializeEditor();

protected:
	//完成与本类相关的初始化，如命令的注册与绑定等
	virtual void Initialize() override;
	virtual void RegisterWorkFlows();
	void GenerateWindow();

public:
	void RegisterMainMenu();
	const FName& GetMainMenuName() const;

	void RegisterWorkFlowToolBar();
	void RegisterActionToolBar();

	void SetWorkModeSelector(TSharedPtr<SWidget> InWidget);
	
	TSharedRef<SWidget> GenerateToolBar();
	TSharedRef<SWidget> GenerateWorkModeSelectorToolbarWidget();

	TSharedRef<SWidget> GenerateWorkFlowSelectorToolbarWidget();
	TSharedRef<SWidget> GenerateActionToolbarWidget();

	//		UToolMenu						Section					Entry
	//AutomatedTool.ToolBar.WorkFlow	WorkFlowSection			WorkFlowSelector + WorkModeSelector
	//AutomatedTool.ToolBar.Action		CommonActionSection		CommonActions
	//AutomatedTool.ToolBar.Action		WorkFlowActionSection	WorkFlowActions
	//AutomatedTool.ToolBar.Action		WorkModeActionSection	WorkModeActions
	virtual void RegisterToolBar();
	const FName& GetWorkFlowToolBarName() const;
	const FName& GetActionToolBarName() const;

	FString GetLayoutSaveFilePath(const FString& InWorkFlowName);

	void SaveLayoutState(const TSharedRef<FTabManager::FLayout>& InLayout);
	int32 LoadLayoutState();

	TSharedRef<FTabManager::FLayout> LoadSavedCurrentWorkMode();

	TSharedRef<FTabManager::FLayout> LoadWorkModeLayout();
	void SaveWorkModeLayout(const TSharedRef<FTabManager::FLayout>& InLayout);
	void OnMainTabClosed(TSharedRef<SDockTab> InTab);

	void NotifyActivateWorkMode(TSharedPtr<FAutomatedToolWorkMode> InWorkMode);
	void NotifyDeactivateWorkMode(TSharedPtr<FAutomatedToolWorkMode> InWorkMode);
	void NotifyActivateWorkFlow(TSharedPtr<FAutomatedToolWorkFlow> InWorkFlow);
	void NotifyDeactivateWorkFlow(TSharedPtr<FAutomatedToolWorkFlow> InWorkFlow);
public:

	//~Begin FAutomatedToolEditorBase Interface
	virtual FName GetDefaultName() const override;
	virtual void RegisterMenuContextObject(FToolMenuContext& InMenuContext) override;
	virtual void RegisterCommand() override;
	virtual void BindCommand() override;
	virtual void RegisterEditorStateSection() override;
	//~End FAutomatedToolEditorBase Interface

public:
	void OnEditMenu(UToolMenu* InMenu);

	void SetShowExtensionPoint(bool InBool);
	bool GetShowExtensionPoint();

	void SetShowMultiBoxHooks(bool InBool);
	bool GetShowMultiBoxHooks();

public:
	void AddNewWorkFlow(TSharedPtr<FAutomatedToolWorkFlow> InNewWorkFlow);
	void RegisterWorkFlow(TSharedRef<FAutomatedToolWorkFlow> InWorkFlow);

	void SetCurrentWorkFlow(TSharedPtr<FAutomatedToolWorkFlow> InNewWorkFlow);
	void SetCurrentWorkFlow(FName InWorkFlowName);

	struct FSavedEditorState
	{
		TSharedPtr<FAutomatedToolWorkFlow> LastWorkFlow;
		bool bShowExtensionPoint{false};
		void Clear()
		{
			LastWorkFlow = nullptr;
			bShowExtensionPoint = false;
		}
	};

	void OnSaveEditorState(TSharedRef<FJsonObject> InJsonObject);
	void OnLoadEditorState(TSharedRef<FJsonObject> InJsonObject);

public:
	TSharedPtr<FAutomatedToolWorkFlow> GetCurrentWorkFlow() const;
	TSharedPtr<FAutomatedToolWorkMode> GetCurrentWorkMode() const;
	TSharedPtr<FTabManager> GetTabManager() const { return MyTabManager; }

private:
	void RegisterFileMenu();
	void RegisterEditMenu();
	void RegisterAssetMenu();
	void RegisterWindowMenu();
	void RegisterWorkFlowMenu();
	void RegisterWorkModeMenu();
	void RegisterToolsMenu();
	void RegisterHelpMenu();

protected:
	bool bShowExtensionPoint{false};
	bool bShowMultiBoxHooks{ false };
protected:
	
	//WorkFlows
	TArray<TSharedPtr<FAutomatedToolWorkFlow>> WorkFlows;
	TSharedPtr<FAutomatedToolWorkFlow> CurrentWorkFlow;
	TArray<FName> WorkFlowsNames;

	TSharedPtr<SBorder> WorkModeSelector;

	TSharedPtr<SDockTab> MainTab;
	TSharedPtr<FTabManager> MyTabManager;

	TWeakPtr<SAutomatedToolEditorWidget> EditorWidget;

	//加载的编辑器状态，避免直接设置编辑器状态
	FSavedEditorState SavedEditorState;

};