#pragma once
#include "Editor/Base/AutomatedToolEditorBase.h"

class FAutomatedToolEditor;
class FAutomatedToolWorkFlow;
class FAutomatedToolWorkModeMenu;

class FAutomatedToolWorkMode : public FAutomatedToolEditorBase
{
public:
	using Super = FAutomatedToolEditorBase;

	//完成ModeName/ModeLayout/WorkspaceMenuCategory的初始化
	FAutomatedToolWorkMode(TSharedRef<FAutomatedToolEditor> InWidgetEditor, TSharedRef<FAutomatedToolWorkFlow> InWorkFlow,
		FName InModeName = NAME_None);
	
	//编译器在编译时根据指针/引用的静态类型确定默认参数值。
	virtual void Initialize() override;

	virtual ~FAutomatedToolWorkMode(){}
	
	TSharedRef<FTabManager::FLayout> GetWorkModeLayout() const { return WorkModeLayout.IsValid() ? WorkModeLayout.ToSharedRef() : FTabManager::FLayout::NullLayout; }
	void SetWorkModeLayout(TSharedRef<FTabManager::FLayout> InLayout) 
	{
		WorkModeLayout = InLayout; 
	}

public:
	//~Begin FAutomatedToolEditorBase Interface
	virtual FName GetDefaultName() const override;
	virtual void RegisterMenuContextObject(FToolMenuContext& InMenuContext) override;
	virtual void RegisterCommand() override;
	virtual void BindCommand() override;
	//~End FAutomatedToolEditorBase Interface

	virtual void RegisterMenu(UToolMenu* InMenu);

	TSharedRef<SWidget> GenerateWorkModeInvokerWidget();

public:
	void ActivateWorkMode();
	void DeactivateWorkMode();

	virtual void RegisterTabSpawner(TSharedRef<FTabManager> InTabManager);
	virtual void UnregisterTabSpawner(TSharedRef<FTabManager> InTabManager);
	virtual void InvokeTabs(TSharedRef<FTabManager> InTabManager);

	virtual void AddTabSummonerMenuEntryInGiveMenu(UToolMenu* InMenu);

protected:
	TWeakPtr<FAutomatedToolWorkFlow> WorkFlowInstance;
	TWeakPtr<FAutomatedToolEditor> EditorInstance;

	TSharedPtr<FTabManager::FLayout> WorkModeLayout;

};