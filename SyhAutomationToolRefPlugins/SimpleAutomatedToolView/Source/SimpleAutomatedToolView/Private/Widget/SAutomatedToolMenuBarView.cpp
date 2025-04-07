#include "Widget/SAutomatedToolMenuBarView.h"
#include "SimpleAutomatedToolViewCommands.h"
#include "Widgets/SBoxPanel.h"

#define LOCTEXT_NAMESPACE "SAutomatedToolMenuBarView"

//Construct中绑定映射命令, 包括FText对应的下拉菜单绑定OnFillMenuEntries, FText和int32对应的按钮绑定的OnButtonPressd
//OnFillMenuEntries中填充下拉菜单
//OnButtonPressd执行对应的命令

SAutomatedToolMenuBarView::SAutomatedToolMenuBarView()
{
}

void SAutomatedToolMenuBarView::Construct(const FArguments& InArgs)
{
	CommandList = InArgs._CommandList;

	TSharedPtr<FUICommandList> Commands = CommandList.Pin();

	//横向菜单栏构建
	FMenuBarBuilder MenuBarBuilder(Commands);

	//绑定MenuBar的命令
	for (auto& Command : FSimpleAutomatedToolViewCommands::Get().CommandInfoList)
	{
		//设置菜单栏
		MenuBarBuilder.AddPullDownMenu
		(
			Command.Key,
			Command.Key,
			//参数在前，Payload在后
			FNewMenuDelegate::CreateSP(this, &SAutomatedToolMenuBarView::OnFillMenuEntries, Command.Key)
		);

		//对每个菜单子命令进行绑定
		for (auto& SubCommand : Command.Value)
		{
			//FUIBindingMap UICommandBindingMap; <FUICommandInfo, FUIAction>
			if(	FSimpleAutomatedToolViewCommands::Get().UIActions.Contains(Command.Key) && 
				FSimpleAutomatedToolViewCommands::Get().UIActions[Command.Key].Contains(SubCommand.Key) &&
				FSimpleAutomatedToolViewCommands::Get().UIActions[Command.Key][SubCommand.Key].IsBound())
			{
				Commands->MapAction
				(
					SubCommand.Value,
					FSimpleAutomatedToolViewCommands::Get().UIActions[Command.Key][SubCommand.Key]
				);
			}
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

void SAutomatedToolMenuBarView::OnFillMenuEntries(FMenuBuilder& InMenuBuilder, FText InKey)
{
	if (FSimpleAutomatedToolViewCommands::Get().CommandInfoList.Contains(InKey))
	{
		FSimpleAutomatedToolViewCommands::Get().MenuEntries[InKey].Broadcast(InMenuBuilder);
	}

}

#undef LOCTEXT_NAMESPACE