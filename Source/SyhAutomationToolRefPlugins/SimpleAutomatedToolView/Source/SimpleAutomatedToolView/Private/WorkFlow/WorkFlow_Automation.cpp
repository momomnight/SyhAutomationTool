#include "WorkFlow/WorkFlow_Automation.h"
#include "WorkFlow/WorkFlowContext_Automation.h"
#include "WorkMode/WorkMode_VisualAutomation.h"

FWorkFlow_Automation::FWorkFlow_Automation(TSharedRef<FAutomatedToolEditor> InEditor)
	: Super(InEditor, FName("Automation"))
{
}

void FWorkFlow_Automation::RegisterMenuContextObject(FToolMenuContext& InMenuContext)
{
	UWorkFlowContext_Automation* AutomationContext = NewObject<UWorkFlowContext_Automation>();
	InMenuContext.AddObject(AutomationContext);
	if(CurrentWorkMode.IsValid())
	{
		CurrentWorkMode->RegisterMenuContextObject(InMenuContext);
	}
}

void FWorkFlow_Automation::RegisterWorkModes()
{
	TSharedRef<FAutomatedToolWorkMode> WorkMode_1 = MakeShared<FWorkMode_VisualAutomation>
		(EditorInstance.Pin().ToSharedRef(), StaticCastSharedRef<FWorkFlow_Automation>(this->AsShared()));
	WorkMode_1->Initialize();
	WorkModes.Add(WorkMode_1);
}