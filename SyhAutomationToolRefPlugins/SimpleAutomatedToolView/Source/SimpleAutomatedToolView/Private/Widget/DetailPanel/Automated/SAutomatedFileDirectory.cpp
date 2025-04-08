#include "Widget/DetailPanel/Automated/SAutomatedFileDirectory.h"
#include "Widgets/Layout/SScrollBox.h"
#include "Widgets/Views/STableRow.h"
#include "Widgets/Views/STreeView.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/SBoxPanel.h"

#define LOCTEXT_NAMESPACE "SAutomatedFileDirectory"

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT


SAutomatedFileDirectory::SAutomatedFileDirectory()
{
}

void SAutomatedFileDirectory::Construct(const FArguments& InArgs)
{
	if (InArgs._RootPath.IsEmpty())
	{
		RootPath.SetRootPath(TEXT("C:\\MyProgram\\UnrealEngine-5.3.2-release\\SyhAutomaitonTool"));
	}
	else
	{
		RootPath.SetRootPath(InArgs._RootPath);
	}

	FileTreeDataSource.Add(MakeShareable(new SimpleSlateFileTree::FFileTree_Folder{ 
		FPaths::GetCleanFilename(RootPath.GetRootPath()), RootPath.GetRootPath() }));

	SAssignNew(HorizontalScrollBar, SScrollBar)
		.Orientation(Orient_Horizontal)
		//.AlwaysShowScrollbar(true)
		.Thickness(FVector2f(FAppStyle::Get().GetWidgetStyle<FScrollBoxStyle>("ScrollBox").BarThickness));
	SAssignNew(VerticalScrollBar, SScrollBar)
		.Orientation(Orient_Vertical)
		//.AlwaysShowScrollbar(true)
		.Thickness(FVector2f(FAppStyle::Get().GetWidgetStyle<FScrollBoxStyle>("ScrollBox").BarThickness));

	ChildSlot
	[
		SNew(SVerticalBox)
		+ SVerticalBox::Slot()
		.FillHeight(1.f)
		[
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()
			.FillWidth(1.f)
			[
				SNew(SScrollBox) // 外层：垂直滚动
				.Orientation(Orient_Vertical)
				.ExternalScrollbar(VerticalScrollBar) // 绑定垂直滚动条
				+ SScrollBox::Slot()
				[
					SNew(SScrollBox) // 内层：水平滚动
					.Orientation(Orient_Horizontal)
					.ExternalScrollbar(HorizontalScrollBar) // 绑定水平滚动条
					.ConsumeMouseWheel(EConsumeMouseWheel::Never)
					+ SScrollBox::Slot()
					.FillSize(1.f)
					[
						SAssignNew(FileTreeView, STreeView<TSharedPtr<SimpleSlateFileTree::FFileTreeBase>>)
							.TreeItemsSource(&FileTreeDataSource)
							.OnGenerateRow(this, &SAutomatedFileDirectory::OnGenerateRow)
							.OnGetChildren(this, &SAutomatedFileDirectory::OnGetChildren)
							.OnExpansionChanged(this, &SAutomatedFileDirectory::OnExpansionChanged)
					]
				]
			]
			+ SHorizontalBox::Slot()
			.AutoWidth()
			.HAlign(HAlign_Left)
			[
				VerticalScrollBar.ToSharedRef()
			]
		]
		+ SVerticalBox::Slot()
		.AutoHeight()
		.VAlign(VAlign_Top)
		[
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()
			[
				HorizontalScrollBar.ToSharedRef()
			]
			+ SHorizontalBox::Slot()
			.AutoWidth()
			.HAlign(HAlign_Right)
			[
				SNew(SBox)
				.HAlign(HAlign_Left)
				.VAlign(VAlign_Top)
				.WidthOverride(FAppStyle::Get().GetWidgetStyle<FScrollBoxStyle>("ScrollBox").BarThickness)
				.HeightOverride(FAppStyle::Get().GetWidgetStyle<FScrollBoxStyle>("ScrollBox").BarThickness)
			]
		]
	];
}

void SAutomatedFileDirectory::OnClicked(const FString& InFileName)
{
	if(InFileName.IsEmpty()) return;

}

TSharedRef<class ITableRow> SAutomatedFileDirectory::OnGenerateRow(TSharedPtr<SimpleSlateFileTree::FFileTreeBase> InNode,
	const TSharedRef<class STableViewBase>& InOwnerTable)
{
	if (InNode->GetFileType() == SimpleSlateFileTree::EFileType::File)
	{
		return SNew(STableRow<TSharedPtr<SimpleSlateFileTree::FFileTree_File>>, InOwnerTable)
			[
				SNew(SButton)
				.ButtonColorAndOpacity(FLinearColor::Transparent)
				.ButtonStyle(FCoreStyle::Get(), "NoBorder")
				.HAlign(HAlign_Fill)
				[
					SNew(STextBlock)

						.Text(FText::Format(LOCTEXT("ParseFileTree", "{0}(file)"), FText::FromString(InNode->GetFullName())))
						.TextStyle(FAppStyle::Get(), "FlatButton.DefaultTextStyle")
				]
			];
	}
	else if(InNode->GetFileType() == SimpleSlateFileTree::EFileType::Folder)
	{
		TSharedPtr<SimpleSlateFileTree::FFileTree_Folder> Folder = InNode->CastTo<SimpleSlateFileTree::FFileTree_Folder>();
		TSharedPtr<SImage> Image = SNew(SImage);
		Folder->SetWidget(Image);
		
		return SNew(STableRow<TSharedPtr<SimpleSlateFileTree::FFileTree_Folder>>, InOwnerTable)
			[
				SNew(SButton)
				.ButtonColorAndOpacity(FLinearColor::Transparent)
				.ButtonStyle(FCoreStyle::Get(), "NoBorder")
				.HAlign(HAlign_Fill)
				[
					SNew(SHorizontalBox)
					+ SHorizontalBox::Slot()
					.AutoWidth()
					[
						Image.ToSharedRef()
					]
					+ SHorizontalBox::Slot()
					.AutoWidth()
					[
						SNew(STextBlock)
						.Text(FText::Format(LOCTEXT("ParseFileTree", "{0}(folder)"), FText::FromString(InNode->GetFullName())))
					]
				]
			];
	}
	else if(InNode->GetFileType() == SimpleSlateFileTree::EFileType::Invalid)
	{
		return SNew(STableRow<TSharedPtr<SimpleSlateFileTree::FFileTree_Invalid>>, InOwnerTable)[
			SNew(STextBlock).Text(FText::Format(LOCTEXT("ParseFileTree", "{0}"), FText::FromString(InNode->GetFullName())))
		];
	}
	else
	{
		return SNew(STableRow<TSharedPtr<SimpleSlateFileTree::FFileTree_None>>, InOwnerTable)[
			SNew(STextBlock).Text(FText::Format(LOCTEXT("ParseFileTree", "{0}"), FText::FromString(InNode->GetFullName())))
		];
	}

	
}

void SAutomatedFileDirectory::OnGetChildren(TSharedPtr<SimpleSlateFileTree::FFileTreeBase> InNode, 
	TArray<TSharedPtr<SimpleSlateFileTree::FFileTreeBase>>& OutChildren)
{
	if(!InNode.IsValid() || InNode->GetFileType() == SimpleSlateFileTree::EFileType::File) return;

	if (InNode->GetFileType() == SimpleSlateFileTree::EFileType::Folder)
	{
		TSharedPtr<SimpleSlateFileTree::FFileTree_Folder> Folder = InNode->CastTo<SimpleSlateFileTree::FFileTree_Folder>();
		OutChildren = Folder->GetChildren();
		//InNode单纯是为了提供数据，OutChildren从InNode提取数据
		if (OutChildren.IsEmpty())
		{
			OutChildren.Add(MakeShareable(new SimpleSlateFileTree::FFileTree_Invalid));
		}
	}
}

void SAutomatedFileDirectory::OnExpansionChanged(TSharedPtr<SimpleSlateFileTree::FFileTreeBase> InNode, bool bIsExpanded)
{
	if (InNode->GetFileType() == SimpleSlateFileTree::EFileType::Folder)
	{
		TSharedPtr<SimpleSlateFileTree::FFileTree_Folder> TempNode = InNode->CastTo<SimpleSlateFileTree::FFileTree_Folder>();
		TempNode->SetExpandedState(bIsExpanded);

		TempNode->OperationWidget(SimpleSlateFileTree::FOperationWidget::CreateSP(this, &SAutomatedFileDirectory::GetFileIcon, bIsExpanded));

		if (TempNode->IsExpanded() && !TempNode->IsLoading())
		{
			TempNode->SetLoadingState(true);

			AsyncTask(ENamedThreads::GameThread, [this, TempNode]() 
			{
				TempNode->GetChildren().Empty();
				SimpleSlateFileTree::FindFiles(
					TempNode->GetChildren(), TempNode, [](const FString&) {return true; }
				);
				TempNode->SetLoadingState(false);
				FileTreeView->RequestTreeRefresh();

			});
		}


	}
}

void SAutomatedFileDirectory::GetFileIcon(TSharedPtr<SWidget> Widget, bool bIsExpanded) const
{
	TSharedPtr<SImage> Image = StaticCastSharedPtr<SImage>(Widget);

	if (Image.IsValid())
	{
		const FSlateBrush* Brush = bIsExpanded ? FAppStyle::Get().GetBrush(TEXT("SceneOutliner.FolderOpen"))
			: FAppStyle::Get().GetBrush(TEXT("SceneOutliner.FolderClosed"));
		Image->SetImage(Brush);
	}

	
	/*return bIsExpanded ? FAppStyle::Get().GetBrush(TEXT("SceneOutliner.FolderClosed"))
		: FAppStyle::Get().GetBrush(TEXT("SceneOutliner.FolderOpen"));*/
}


#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

#undef LOCTEXT_NAMESPACE