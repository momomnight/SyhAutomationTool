#pragma once
#include "Editor/Base/AutomatedToolWorkMode.h"


class FWorkMode_VisualAutomation : public FAutomatedToolWorkMode
{
public:
	using Super = FAutomatedToolWorkMode;

	FWorkMode_VisualAutomation(TSharedRef<FAutomatedToolEditor> InWidgetEditor, TSharedRef<FAutomatedToolWorkFlow> InWorkFlow);

public:
	//~Begin FAutomatedToolEditorBase Interface
	virtual void RegisterMenuContextObject(FToolMenuContext& InMenuContext) override;
	//~End FAutomatedToolEditorBase Interface

	//~Begin FAutomatedToolWorkMode Interface
	virtual void RegisterTabSpawner(TSharedRef<FTabManager> InTabManager) override;
	virtual void UnregisterTabSpawner(TSharedRef<FTabManager> InTabManager) override;
	virtual void InvokeTabs(TSharedRef<FTabManager> InTabManager) override;
	virtual void AddTabSummonerMenuEntryInGiveMenu(UToolMenu* InMenu) override;
	//~End FAutomatedToolWorkMode Interface
};