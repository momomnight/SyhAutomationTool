#include "WorkMode/WorkMode_VisualAutomation.h"
#include "WorkMode/WorkModeContext_VisualAutomation.h"
#include "SimpleAutomatedToolViewEditorID.h"

FWorkMode_VisualAutomation::FWorkMode_VisualAutomation(TSharedRef<FAutomatedToolEditor> InWidgetEditor, 
	TSharedRef<FAutomatedToolWorkFlow> InWorkFlow)
	: Super(InWidgetEditor, InWorkFlow, FName("VisualAutomation"))
{

	TSharedRef<FTabManager::FLayout> Layout = FTabManager::NewLayout("VisualAutomation_V1");
	Layout->AddArea(
		FTabManager::NewPrimaryArea()->SetOrientation(Orient_Vertical)
		->Split(
			FTabManager::NewSplitter()->SetOrientation(Orient_Horizontal)
			->Split(
				FTabManager::NewSplitter()->SetOrientation(Orient_Vertical)->SetSizeCoefficient(0.22)
				->Split(
					FTabManager::NewStack()
						->AddTab(FEditorTabType::FileDirectoryTabName, ETabState::OpenedTab)
				)
				//->Split(

				//)
			)
			->Split(
				FTabManager::NewSplitter()->SetOrientation(Orient_Vertical)->SetSizeCoefficient(0.76)
				->Split(
					FTabManager::NewStack()
					->AddTab(FEditorTabType::GraphTabName, ETabState::OpenedTab)
				)
				//->Split(

				//)
			)
			->Split(
				FTabManager::NewSplitter()->SetOrientation(Orient_Vertical)->SetSizeCoefficient(0.22)
				->Split(
					FTabManager::NewStack()
					->AddTab(FEditorTabType::NodeListTabName, ETabState::OpenedTab)
				)
				//->Split(

				//)
			)
		)

	);

	SetWorkModeLayout(Layout);
}

void FWorkMode_VisualAutomation::RegisterMenuContextObject(FToolMenuContext& InMenuContext)
{
	UWorkModeContext_VisualAutomation* VisualAutomationContext = NewObject<UWorkModeContext_VisualAutomation>();
	VisualAutomationContext->WorkModeInstance = StaticCastSharedRef<FWorkMode_VisualAutomation>(this->AsShared());
	InMenuContext.AddObject(VisualAutomationContext);
}

void FWorkMode_VisualAutomation::RegisterTabSpawner(TSharedRef<FTabManager> InTabManager)
{
	FEditorTabType::RegisterTabSpawner<ETabType::FileDirectoryTabName>(InTabManager);
	FEditorTabType::RegisterTabSpawner<ETabType::GraphTabName>(InTabManager);
	FEditorTabType::RegisterTabSpawner<ETabType::NodeListTabName>(InTabManager);
}

void FWorkMode_VisualAutomation::UnregisterTabSpawner(TSharedRef<FTabManager> InTabManager)
{
	FEditorTabType::UnregisterTabSpawner<ETabType::FileDirectoryTabName>(InTabManager);
	FEditorTabType::UnregisterTabSpawner<ETabType::GraphTabName>(InTabManager);
	FEditorTabType::UnregisterTabSpawner<ETabType::NodeListTabName>(InTabManager);
}

void FWorkMode_VisualAutomation::InvokeTabs(TSharedRef<FTabManager> InTabManager)
{
	FEditorTabType::InvokeTab<ETabType::FileDirectoryTabName>(InTabManager);
	FEditorTabType::InvokeTab<ETabType::GraphTabName>(InTabManager);
	FEditorTabType::InvokeTab<ETabType::NodeListTabName>(InTabManager);
}

void FWorkMode_VisualAutomation::AddTabSummonerMenuEntryInGiveMenu(UToolMenu* InMenu)
{
	UWorkModeContext_VisualAutomation* Context = InMenu->FindContext<UWorkModeContext_VisualAutomation>();
	if (Context && Context->WorkModeInstance.Pin().Get() == this)
	{
		FToolMenuSection& Section = InMenu->FindOrAddSection(GetRealName());

		//AddCheckBoxInSection(Section, ETabType::FileDirectoryTabName);
		//AddCheckBoxInSection(Section, ETabType::GraphTabName);
		//AddCheckBoxInSection(Section, ETabType::NodeListTabName);
	}
}
