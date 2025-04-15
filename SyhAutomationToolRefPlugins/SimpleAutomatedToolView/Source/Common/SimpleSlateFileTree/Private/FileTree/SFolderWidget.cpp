#include "FileTreeWidget/SFolderWidget.h"

#include "Styling/SlateBrush.h"
#include "Widgets/Input/SButton.h"
#include "Styling/AppStyle.h"
#include "Widgets/SBoxPanel.h"
#include "FileTreeType.h"


#define LOCTEXT_NAMESPACE "SFolderWidget"

void SFolderWidget::Construct(const FArguments& InArgs, const TSharedRef<class STableViewBase>& InOwnerTable, TSharedPtr<SlateFileTree::FFileTree_Folder> InFolder)
{
	SFileTreeWidgetBase::Construct(SFileTreeWidgetBase::FArguments(),
		InOwnerTable,
		InFolder
	);
}

TSharedRef<SWidget> SFolderWidget::ConstructChild(TSharedPtr<SlateFileTree::FFileTreeBase> InFileNode)
{
	return SNew(SHorizontalBox)
		+ SHorizontalBox::Slot()
		.AutoWidth()
		[
			InFileNode->GetWidget().IsValid() ? InFileNode->GetWidget().ToSharedRef() : SNew(SImage)
		]
		+ SHorizontalBox::Slot()
		.AutoWidth()
		[
			SAssignNew(Text, STextBlock)
				.Text(FText::Format(LOCTEXT("ParseFileTree", "{0}(folder)"), FText::FromString(InFileNode->GetFullName())))
		];
}



#undef LOCTEXT_NAMESPACE


