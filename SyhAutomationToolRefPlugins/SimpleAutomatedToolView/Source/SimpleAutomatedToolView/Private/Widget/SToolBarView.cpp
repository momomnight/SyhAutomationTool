#include "Widget/SToolBarView.h"
#include "SimpleAutomatedToolViewCommands.h"
#include "Widgets/SBoxPanel.h"

#define LOCTEXT_NAMESPACE "SToolBarView"

SToolBarView::SToolBarView()
{
}

void SToolBarView::Construct(const FArguments& InArgs)
{
	CommandList = InArgs._CommandList;

	//绑定Toolbar的命令
	for (auto& Command : FSimpleAutomatedToolViewCommands::Get().CommandInfoList)
	{
		for (auto& SubCommand : Command.Value)
		{
			CommandList.Pin()->MapAction(
				SubCommand.Value,
				FExecuteAction::CreateSP(this, &SToolBarView::OnButtonPressd, Command.Key, SubCommand.Key),
				FCanExecuteAction::CreateSP(this, &SToolBarView::IsButtonEnabled, Command.Key, SubCommand.Key),
				FIsActionChecked::CreateSP(this, &SToolBarView::IsButtonChecked, Command.Key, SubCommand.Key)
			);
		}
	}

	FMenuBarBuilder MenuBarBuilder(CommandList.Pin());

	for (auto& Command : FSimpleAutomatedToolViewCommands::Get().CommandInfoList)
	{
		MenuBarBuilder.AddPullDownMenu(
			Command.Key,
			Command.Key,
			//参数在前，Payload在后
			FNewMenuDelegate::CreateSP(this, &SToolBarView::OnFillMenuEntries, Command.Key)
		);
	}


	this->ChildSlot
		[
			SNew(SVerticalBox)
			+ SVerticalBox::Slot()
			.AutoHeight()
			[
				MenuBarBuilder.MakeWidget()
			]
		];

}

void SToolBarView::OnButtonPressd(FText InKey, int32 InType)
{
}

void SToolBarView::OnFillMenuEntries(FMenuBuilder& InMenuBuilder, FText InKey)
{

	if (FSimpleAutomatedToolViewCommands::Get().CommandInfoList.Contains(InKey))
	{
		for (auto& SubCommand : FSimpleAutomatedToolViewCommands::Get().CommandInfoList[InKey])
		{
			InMenuBuilder.BeginSection(TEXT("MenuEntries"));
			InMenuBuilder.AddMenuEntry(SubCommand.Value);
			InMenuBuilder.EndSection();
		}
	}

}

#undef LOCTEXT_NAMESPACE