// Copyright (C) RenZhai.2020.All Rights Reserved.

#include "FileTree/SFile.h"
#include "Styling/CoreStyle.h"
#include "Widgets/Input/SButton.h"
#include "SimpleSlateExtendType.h"
#include "SimpleSimpleSlateExtendStyle.h"
#include "Misc/MessageDialog.h"

#define LOCTEXT_NAMESPACE "File"

void SFile::Construct(const FArguments& InArgs, const SimpleSlateExtend::FFileList &FileList)
{
	SFileTreeWidget::Construct(InArgs, FileList);

	//AssetPaths = FileList.Filename;
	//{
	//	AssetPaths.RemoveFromEnd(FPaths::GetExtension(FileList.Filename, true));
	//}

	// /Game/SS/A.usset
	FString AssetName = FPackageName::GetShortName(FileList.Filename);
	ChildSlot
	[
		SNew(SButton)
		//.Text(FText::Format(LOCTEXT("AnalyzingFilename", "{0}"), FText::FromString(AssetName)))
		.HAlign(HAlign_Fill)
		.OnClicked(this, &SFile::OnButtonClicked)
		.ButtonStyle(FCoreStyle::Get(), "NoBorder")
		.TextStyle(FSimpleSimpleSlateExtendStyle::Get(), "FlatButton.FileTextStyle")
		[
			SNew(STextBlock)
			.Text(FText::FromString(AssetName))
		]
	];
}

FReply SFile::OnButtonClicked()
{
	OnClickedDelegate.ExecuteIfBound();

	return FReply::Handled();
}

FReply SFile::OnMouseButtonUp(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	OnGeometryDelegate.ExecuteIfBound(SimpleSlateExtend::EFileType::FILE, MyGeometry, MouseEvent, FullAssetPaths);

	return SFileTreeWidget::OnMouseButtonUp(MyGeometry, MouseEvent);
}

FReply SFile::OnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	return SFileTreeWidget::OnMouseButtonDown(MyGeometry, MouseEvent);
}

#undef LOCTEXT_NAMESPACE