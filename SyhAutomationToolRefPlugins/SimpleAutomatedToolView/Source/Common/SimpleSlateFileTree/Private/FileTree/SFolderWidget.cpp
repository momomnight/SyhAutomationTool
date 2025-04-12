#include "FileTreeWidget/SFolderWidget.h"

#include "Styling/SlateBrush.h"
#include "Widgets/Input/SButton.h"
#include "Styling/AppStyle.h"
#include "Widgets/SBoxPanel.h"
#include "FileTreeType.h"


#define LOCTEXT_NAMESPACE "SFolderWidget"

void SFolderWidget::Construct(const FArguments& InArgs, TSharedPtr<SimpleSlateFileTree::FFileTree_Folder> InFolder)
{
	SFileTreeWidgetBase::Construct(SFileTreeWidgetBase::FArguments()
		.OnGetCurrentContextMenuTransform(InArgs._OnGetCurrentContextMenuTransform)
		.ContextMenu(InArgs._ContextMenu)
		.DragDropContextMenu(InArgs._DragDropContextMenu),
		InFolder
	);
}

void SFolderWidget::ConstructChild()
{
	SButton::Construct(SButton::FArguments()
		.ButtonColorAndOpacity(FLinearColor::Transparent)
		.ButtonStyle(FAppStyle::Get(), "NoBorder")
		.HAlign(HAlign_Fill)
		[
			SNew(SHorizontalBox)
				+ SHorizontalBox::Slot()
				.AutoWidth()
				[
					FileBase.Pin()->GetWidget().IsValid() ? FileBase.Pin()->GetWidget().ToSharedRef() : SNew(SImage)
				]
				+ SHorizontalBox::Slot()
				.AutoWidth()
				[
					SNew(STextBlock)
						.Text(FText::Format(LOCTEXT("ParseFileTree", "{0}(folder)"), FText::FromString(FileBase.Pin()->GetFullName())))
				]
		]
	);
}



#undef LOCTEXT_NAMESPACE


