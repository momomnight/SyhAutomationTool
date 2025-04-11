#include "FileTreeWidget/SFileWidget.h"
#include "Styling/CoreStyle.h"
#include "FileTreeType.h"
#include "Widgets/Text/STextBlock.h"


#define LOCTEXT_NAMESPACE "SFolderWidget"

void SFileWidget::Construct(const FArguments& InArgs, TSharedPtr<SimpleSlateFileTree::FFileTree_File> InFile)
{
	
	SFileTreeWidgetBase::Construct(
		SFileTreeWidgetBase::FArguments()
		.OnLeftMouseKeyClick(InArgs._OnLeftMouseKeyClick)
		.OnRightMouseKeyClick(InArgs._OnRightMouseKeyClick)
		.OnFileTreeWidgetDrag(InArgs._OnFileTreeWidgetDrag),
		InFile
	);
}


#undef LOCTEXT_NAMESPACE