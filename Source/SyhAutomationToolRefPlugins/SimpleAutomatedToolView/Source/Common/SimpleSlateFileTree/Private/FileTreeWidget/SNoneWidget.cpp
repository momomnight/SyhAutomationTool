#include "FileTreeWidget/SNoneWidget.h"
#include "FileTreeType.h"
#include "Widgets/Text/STextBlock.h"


#define LOCTEXT_NAMESPACE "SNoneWidget"

void SNoneWidget::Construct(const FArguments& InArgs, const TSharedRef<class STableViewBase>& InOwnerTable, TSharedPtr<SlateFileTree::FFileTree_None> InFileNode)
{
	SFileTreeWidgetBase::Construct(
		SFileTreeWidgetBase::FArguments(), 
		InOwnerTable,
		InFileNode
	);
}

TSharedRef<SWidget> SNoneWidget::ConstructChild(TSharedPtr<SlateFileTree::FFileTreeBase> InFileNode)
{
	return SAssignNew(Text, STextBlock)
		.Text(LOCTEXT("ParseFileTree", "none"));
}


#undef LOCTEXT_NAMESPACE
