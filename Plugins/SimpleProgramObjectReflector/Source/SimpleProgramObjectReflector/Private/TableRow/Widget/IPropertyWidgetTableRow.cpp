#include "TableRow/Widget/IPropertyWidgetTableRow.h"
#include "PropertyWidget/SPropertyWidget.h"

void IPropertyWidgetTableRow::Construct(const TSharedRef<STableViewBase>& InOwnerTableView, TSharedPtr<FPropertyInfo> InPropertyInfo)
{
	Super::Construct(Super::FArguments().ShowSelection(false), InOwnerTableView);
	PropertyInfo = InPropertyInfo;
	CommandList = MakeShared<FUICommandList>();
}

//InCommandList外部传入，InExtender可选
void IPropertyWidgetTableRow::ConstructTableRow(TSharedPtr<FUICommandList> InCommandList, TSharedPtr<FExtender> InExtender, 
	TSharedPtr<SPropertyWidget> InPropertyWidget)
{
	BindCommands(CommandList);
	CommandList->Append(InCommandList.ToSharedRef());

	TSharedPtr<SSplitter> Splitter = SAssignNew(Splitter, SSplitter)
		+ SSplitter::Slot()
		[
			SNew(SBorder)
				[
					SNew(STextBlock)//Name
						.Text(GetDisplayName())
				]
		];

	if (InPropertyWidget.IsValid())
	{
		Splitter->AddSlot()
		[
			InPropertyWidget.ToSharedRef()
		];
	}

	//FMultiBoxCustomization暂时无法使用
	//注：使用CommandList，如果没有命令则在父类中寻找，因为FToolBarBuilder使用CommandListStack.Top()
	FToolBarBuilder ToolBarBuilder(CommandList, FMultiBoxCustomization::None, InExtender);

	PropertyInfo->CollectExtraWidget(ToolBarBuilder);

	int32 BlocksNum = ToolBarBuilder.GetMultiBox()->GetBlocks().Num();

	if (BlocksNum > 0)
	{
		TSharedRef<SWidget> ToolBarWidget = ToolBarBuilder.MakeWidget();
		Splitter->AddSlot()
			[
				ToolBarWidget
			];
	}

	SetContent(Splitter.ToSharedRef());	
}
