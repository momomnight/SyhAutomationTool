#include "FileTreeWidget/SFileWidget.h"
#include "FileTreeType.h"
#include "Widgets/Text/STextBlock.h"


#define LOCTEXT_NAMESPACE "SFolderWidget"

void SFileWidget::Construct(const FArguments& InArgs, const TSharedRef<class STableViewBase>& InOwnerTable, TSharedPtr<SlateFileTree::FFileTree_File> InFileNode)
{
	SFileTreeWidgetBase::Construct(
		SFileTreeWidgetBase::FArguments(),
		InOwnerTable,
		InFileNode
	);
}

TSharedRef<SWidget> SFileWidget::ConstructChild(TSharedPtr<SlateFileTree::FFileTreeBase> InFileNode)
{
	return SAssignNew(Text, STextBlock)
		.Text(FText::Format(LOCTEXT("ParseFileTree", "{0}(file)"), FText::FromString(InFileNode->GetFullName())))
		.TextStyle(FAppStyle::Get(), "FlatButton.DefaultTextStyle");
}


#undef LOCTEXT_NAMESPACE
