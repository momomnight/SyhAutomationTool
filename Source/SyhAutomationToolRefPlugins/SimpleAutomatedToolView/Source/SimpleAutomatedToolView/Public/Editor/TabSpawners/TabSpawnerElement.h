#pragma once
#include "Templates/SharedPointer.h"
#include "Framework/Docking/TabManager.h"
#include "ToolMenuEntry.h"

struct FTabSpawnerManager;

struct FTabSpawnerElement : TSharedFromThis<FTabSpawnerElement>
{
	FTabSpawnerElement(const FName& TabName, TSharedRef<FTabSpawnerManager> InTabSpawnerManager);
	virtual ~FTabSpawnerElement(){}

	//用于设置DockTab的Content, DockTab的OnTabClosed会被占用
	virtual void SetDockTabContent(TSharedRef<SDockTab>& InDockTab, const FSpawnTabArgs& InArgs){}
	virtual bool CanSpawnTab(const FSpawnTabArgs& InArgs){ return true;}

	bool OnCanSpawnTab(const FSpawnTabArgs& InArgs){ return CanSpawnTab(InArgs); }
	TSharedRef<SDockTab> OnSpawnDockTab(const FSpawnTabArgs& InArgs);



	void OnTabClosed(TSharedRef<SDockTab> InDockTab);

	bool IsValid() const;
	TSharedPtr<FTabManager> GetTabManager() const;
	TSharedPtr<FTabSpawnerEntry> GetTabSpawnerEntry() const;

	//由Manager传入FTabManager
	void RegisterTab();
	TSharedPtr<SDockTab> InvokerTab();

	FToolMenuEntry MakeCheckBox();

	void ExecuteCheckBoxAction();
	ECheckBoxState GetCheckBoxState();
	void SetCheckBoxState(ECheckBoxState InState);

	bool CheckState();

protected:

	TWeakPtr<FTabSpawnerEntry> ReferencedTabSpawner;
	TWeakPtr<SDockTab> ReferencedTab;
	TWeakPtr<FTabSpawnerManager> ReferencedTabSpawnerManager;
	FName TabName;

	ECheckBoxState CheckBoxState;
};