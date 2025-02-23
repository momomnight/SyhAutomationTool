// Copyright (C) RenZhai.2020.All Rights Reserved.
#include "FileTree/SFolder.h"
#include "FileTree/SFile.h"
#include "Widgets/Layout/SExpandableArea.h"
#include "Widgets/SBoxPanel.h"
#include "Widgets/Images/SImage.h"
#include "Widgets/Text/STextBlock.h"
#include "Widgets/Layout/SSpacer.h"
#include "SimpleSimpleSlateExtendStyle.h"

#define LOCTEXT_NAMESPACE "Folder"

void SFolder::Construct(const FArguments& InArgs, const SimpleSlateExtend::FFileList &FileList)
{
	SFileTreeWidget::Construct(InArgs, FileList);

	TSharedPtr<SVerticalBox> FileArray = SNew(SVerticalBox);

	for (const auto &Tmp : FileList.Children)
	{
		if (Tmp.GetFileType() == SimpleSlateExtend::EFileType::FOLDER)
		{
			FileArray->AddSlot()
			.AutoHeight()
			[
				SNew(SFolder, Tmp)
				.OnOneStringCliked(OnOneStringCliked)
				.OnGeometryDelegate(OnGeometryDelegate)
				.OnFileDragDelegate(OnFileDragDelegate)
				.OnDragDelegate(OnDragDelegate)
			];
		}
		else
		{
			FileArray->AddSlot()
			.AutoHeight()
			[
				SNew(SFile, Tmp)
				.OnClickedDelegate(this,&SFolder::OnFileCliked,Tmp.FullFilename)
				.OnGeometryDelegate(OnGeometryDelegate)
				.OnFileDragDelegate(OnFileDragDelegate)
				.OnOneStringCliked(OnOneStringCliked)
				.OnDragDelegate(OnDragDelegate)
			];
		}
	}

	ChildSlot
	[
		SAssignNew(Area, SExpandableArea)
		.BorderBackgroundColor(FLinearColor::Transparent)
		.InitiallyCollapsed(false)
		.Padding(FMargin(0.0f, 1.0f, 0.0f, 8.0f))
		.HeaderContent()
		[
			SNew(SHorizontalBox)

			+ SHorizontalBox::Slot()
			.AutoWidth()
			[
				SNew(SBox)
				.WidthOverride(20.f)
				.HeightOverride(18.f)
				[
					SNew(SImage)
					.Image(this, &SFolder::GetFileTypeICO)
				]
			]

			+ SHorizontalBox::Slot()
			.AutoWidth()
			[
				SNew(STextBlock)
				.Text(FText::Format(LOCTEXT("AnalyzingFilename", "{0}"), FText::FromString(FileList.Filename)))
				.TextStyle(FSimpleSimpleSlateExtendStyle::Get(), "FlatButton.DefaultTextStyle")
			]
		]
		.BodyContent()
		[
			SNew(SHorizontalBox)

			+ SHorizontalBox::Slot()
			.AutoWidth()
			[
				SNew(SSpacer)
				.Size(FVector2D(20.f, 1.f))
			]

			+ SHorizontalBox::Slot()
			.AutoWidth()
			[
				FileArray.ToSharedRef()
			]
		]
	];
}

const FSlateBrush* SFolder::GetFileTypeICO() const
{
	return Area->IsExpanded() ?
		FSimpleSimpleSlateExtendStyle::Get().GetBrush(TEXT("SceneOutliner.FolderOpen")) : 
		FSimpleSimpleSlateExtendStyle::Get().GetBrush(TEXT("SceneOutliner.FolderClosed"));
}

FReply SFolder::OnMouseButtonUp(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	OnGeometryDelegate.ExecuteIfBound(SimpleSlateExtend::EFileType::FOLDER,MyGeometry, MouseEvent, FullAssetPaths);

	return SFileTreeWidget::OnMouseButtonUp(MyGeometry, MouseEvent);
}

FReply SFolder::OnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	return SFileTreeWidget::OnMouseButtonDown(MyGeometry, MouseEvent);
}

void SFolder::OnFileCliked(const FString InFilename)
{
	OnOneStringCliked.ExecuteIfBound(InFilename);
}

#undef LOCTEXT_NAMESPACE