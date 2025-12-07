#pragma once
#include "Editor/Base/AutomatedToolEditorBase.h"

class FAutomatedToolWorkFlowMenu;
class FAutomatedToolEditor;
class FAutomatedToolWorkMode;

class FAutomatedToolWorkFlow : public FAutomatedToolEditorBase
{
public:
	using Super = FAutomatedToolEditorBase;

	FAutomatedToolWorkFlow(TSharedRef<FAutomatedToolEditor> InEditor, const FName& InWorkFlowName = NAME_None);

	virtual void Initialize() override;
	virtual void RegisterWorkModes();

public:

	//~Begin FAutomatedToolEditorBase Interface
	virtual FName GetDefaultName() const override;
	virtual void RegisterMenuContextObject(FToolMenuContext& InMenuContext) override;
	virtual void RegisterCommand() override;
	virtual void BindCommand() override;

	virtual void RegisterEditorStateSection() override;
	//~End FAutomatedToolEditorBase Interface

	virtual void RegisterToolBar(const FName& InParentName);
	virtual void RegisterMenu(UToolMenu* InMenu);

	TSharedRef<SWidget> GenerateWorkModeSelectorToolbarWidget();

public:

	struct FSavedWorkFlowState
	{
		TSharedPtr<FAutomatedToolWorkMode> LastWorkMode;
		void Clear()
		{
			LastWorkMode = nullptr;
		}
	};

	void SetCurrentWorkMode(FName InWorkModeName);
	void SetCurrentWorkMode(TSharedPtr<FAutomatedToolWorkMode> InWorkMode);

	void ActivateWorkFlow();
	void DeactivateWorkFlow();

	void OnSaveEditorState(TSharedRef<FJsonObject> InJsonObject);
	void OnLoadEditorState(TSharedRef<FJsonObject> InJsonObject);

public:
	void AddNewWorkMode(TSharedPtr<FAutomatedToolWorkMode> InNewWorkMode);

public:
	TSharedPtr<FAutomatedToolWorkMode> GetCurrentWorkMode() const { return CurrentWorkMode;}
	virtual const FName& GetToolBarName() const;
protected:
	TWeakPtr<FAutomatedToolEditor> EditorInstance;

	TArray<TSharedPtr<FAutomatedToolWorkMode>> WorkModes;
	TSharedPtr<FAutomatedToolWorkMode> CurrentWorkMode;

	FSavedWorkFlowState SavedWorkFlowState;
};