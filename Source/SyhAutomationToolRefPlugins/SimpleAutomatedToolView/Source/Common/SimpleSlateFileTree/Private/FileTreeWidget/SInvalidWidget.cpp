#include "FileTreeWidget/SInvalidWidget.h"
#include "FileTreeType.h"


#define LOCTEXT_NAMESPACE "SInvalidWidget"


void SInvalidWidget::Construct(const FArguments& InArgs, const TSharedRef<class STableViewBase>& InOwnerTable,
	TSharedPtr<SlateFileTree::FFileTree_Invalid> InFileNode)
{
	SFileTreeWidgetBase::Construct(SFileTreeWidgetBase::FArguments(),
		InOwnerTable,
		InFileNode
	);
}

TSharedRef<SWidget> SInvalidWidget::ConstructChild(TSharedPtr<SlateFileTree::FFileTreeBase> InFileNode)
{
	return SAssignNew(Text, STextBlock)
		.Text(LOCTEXT("FileTreeText.Invalid", "invalid"));
}

#undef LOCTEXT_NAMESPACE
