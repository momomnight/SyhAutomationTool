#include "FileTreeWidget/SFolderWidget.h"

#include "Styling/SlateBrush.h"
#include "Widgets/Input/SButton.h"
#include "Styling/AppStyle.h"
#include "Widgets/SBoxPanel.h"
#include "FileTreeType.h"


#define LOCTEXT_NAMESPACE "SFolderWidget"

void SFolderWidget::Construct(const FArguments& InArgs, TSharedPtr<SimpleSlateFileTree::FFileTree_Folder> InFolder)
{
	ChildSlot
	[
		SAssignNew(Button, SButton)
		.OnClicked(FOnClicked::CreateSP(this, &SFolderWidget::OnClicked))
		.ButtonColorAndOpacity(FLinearColor::Transparent)
		.ButtonStyle(FAppStyle::Get(), "NoBorder")
		.HAlign(HAlign_Fill)
		[
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()
			.AutoWidth()
			[
				InFolder->GetWidget().IsValid() ? InFolder->GetWidget().ToSharedRef() : SNew(SImage)
			]
			+ SHorizontalBox::Slot()
			.AutoWidth()
			[
				SNew(STextBlock)
					.Text(FText::Format(LOCTEXT("ParseFileTree", "{0}(folder)"), FText::FromString(InFolder->GetFullName())))
			]
		]
	];
	
	SFileTreeWidgetBase::Construct(SFileTreeWidgetBase::FArguments()
		.OnLeftMouseKeyClick(InArgs._OnLeftMouseKeyClick)
		.OnRightMouseKeyClick(InArgs._OnRightMouseKeyClick)
	, InFolder);
}



#undef LOCTEXT_NAMESPACE