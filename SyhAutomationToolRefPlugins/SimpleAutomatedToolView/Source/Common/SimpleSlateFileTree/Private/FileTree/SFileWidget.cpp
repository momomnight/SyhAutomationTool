#include "FileTreeWidget/SFileWidget.h"
#include "Styling/CoreStyle.h"
#include "FileTreeType.h"
#include "Widgets/Text/STextBlock.h"


#define LOCTEXT_NAMESPACE "SFolderWidget"

void SFileWidget::Construct(const FArguments& InArgs, TSharedPtr<SimpleSlateFileTree::FFileTree_File> InFile)
{

	SFileTreeWidgetBase::Construct(
		SFileTreeWidgetBase::FArguments()
		.OnGetCurrentContextMenuTransform(InArgs._OnGetCurrentContextMenuTransform)
		.ContextMenu(InArgs._ContextMenu)
		.DragDropContextMenu(InArgs._DragDropContextMenu),
		InFile
	);
}



#undef LOCTEXT_NAMESPACE
