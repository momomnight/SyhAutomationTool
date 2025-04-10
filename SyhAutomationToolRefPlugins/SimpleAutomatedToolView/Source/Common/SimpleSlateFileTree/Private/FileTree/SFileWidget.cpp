#include "FileTreeWidget/SFileWidget.h"
#include "Styling/CoreStyle.h"
#include "FileTreeType.h"
#include "Widgets/Text/STextBlock.h"


#define LOCTEXT_NAMESPACE "SFolderWidget"

void SFileWidget::Construct(const FArguments& InArgs, TSharedPtr<SimpleSlateFileTree::FFileTree_File> InFile)
{
	ChildSlot
	[
		SAssignNew(Button, SButton)
		.ButtonColorAndOpacity(FLinearColor::Transparent)
		.ButtonStyle(FCoreStyle::Get(), "NoBorder")
		.HAlign(HAlign_Fill)
		[
			SNew(STextBlock)
			.Text(FText::Format(LOCTEXT("ParseFileTree", "{0}(file)"), FText::FromString(InFile->GetFullName())))
			.TextStyle(FAppStyle::Get(), "FlatButton.DefaultTextStyle")
		]
	];
	SFileTreeWidgetBase::Construct(SFileTreeWidgetBase::FArguments()
		.OnLeftMouseKeyClick(InArgs._OnLeftMouseKeyClick)
		.OnRightMouseKeyClick(InArgs._OnRightMouseKeyClick)
		, InFile);
}


#undef LOCTEXT_NAMESPACE