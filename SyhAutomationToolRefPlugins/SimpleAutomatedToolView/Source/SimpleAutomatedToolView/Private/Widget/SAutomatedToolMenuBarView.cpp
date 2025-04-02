#include "Widget/SAutomatedToolMenuBarView.h"
#include "SimpleAutomatedToolViewCommands.h"
#include "Widgets/SBoxPanel.h"

#define LOCTEXT_NAMESPACE "SAutomatedToolMenuBarView"

SAutomatedToolMenuBarView::SAutomatedToolMenuBarView()
{
}

void SAutomatedToolMenuBarView::Construct(const FArguments& InArgs)
{
	CommandList = InArgs._CommandList;
	FMenuBarBuilder MenuBarBuilder(CommandList.Pin());

	//绑定MenuBar的命令
	for (auto& Command : FSimpleAutomatedToolViewCommands::Get().CommandInfoList)
	{
		//设置菜单栏
		MenuBarBuilder.AddPullDownMenu(
			Command.Key,
			Command.Key,
			//参数在前，Payload在后
			FNewMenuDelegate::CreateSP(this, &SAutomatedToolMenuBarView::OnFillMenuEntries, Command.Key)
		);

		//对每个菜单子命令进行绑定
		for (auto& SubCommand : Command.Value)
		{
			//FUIBindingMap UICommandBindingMap; <FUICommandInfo, FUIAction>
			CommandList.Pin()->MapAction(
				SubCommand.Value,
				FExecuteAction::CreateSP(this, &SAutomatedToolMenuBarView::OnButtonPressd, Command.Key, SubCommand.Key),
				FCanExecuteAction::CreateSP(this, &SAutomatedToolMenuBarView::IsButtonEnabled, Command.Key, SubCommand.Key),
				FIsActionChecked::CreateSP(this, &SAutomatedToolMenuBarView::IsButtonChecked, Command.Key, SubCommand.Key)
			);
		}
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

void SAutomatedToolMenuBarView::OnButtonPressd(FText InKey, int32 InType)
{
}

void SAutomatedToolMenuBarView::OnFillMenuEntries(FMenuBuilder& InMenuBuilder, FText InKey)
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