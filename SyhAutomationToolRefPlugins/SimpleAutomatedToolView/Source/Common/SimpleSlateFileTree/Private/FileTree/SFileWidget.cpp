#include "FileTree/SFileWidget.h"
#include "FileTree/FileParse.h"
#include "Styling/CoreStyle.h"


#define LOCTEXT_NAMESPACE "SFolderWidget"

void SFileWidget::Construct(const FArguments& InArgs, const SimpleSlateFileTree::FFileTree_File& InFile)
{	
	AssetPaths = InFile.GetFullName();
	ChildSlot
	[
		SNew(SButton)
		.Text(FText::Format(LOCTEXT("ParseFileTree", "{0}(file)"), FText::FromString(AssetPaths)))
		.HAlign(HAlign_Fill)
		.OnClicked(this, &SFileWidget::OnClicked)
		//.ButtonStyle(FCoreStyle::Get(), "NoBorder")
		.TextStyle(FAppStyle::Get(), "FlatButton.DefaultTextStyle")
	];
}

FReply SFileWidget::OnClicked()
{
	return FReply::Handled();
}


#undef LOCTEXT_NAMESPACE