#include "Widget/DetailPanel/Automated/SAutomatedFileDirectory.h"
#include "Widgets/Layout/SScrollBox.h"
#include "Widgets/Views/STableRow.h"
#include "Widgets/Views/STreeView.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/SBoxPanel.h"
#include "FileTreeWidget/SFileWidget.h"
#include "FileTreeWidget/SFolderWidget.h"
#include "Widgets/Layout/SConstraintCanvas.h"
#include "Widget/ContextMenu/SFileTreeContextMenu.h"
#include "SimpleAutomatedToolViewCommands.h"


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
	TSharedPtr<SimpleSlateFileTree::FFileTree_Folder> Root = MakeShareable(new SimpleSlateFileTree::FFileTree_Folder{
		RootPath.GetCleanFileName(), RootPath.GetRootPath()});
	SimpleSlateFileTree::FindFilesRecursive(Root->GetChildren(), Root);

	FileTreeDataSource.Add(Root);
	
	ConstructChildern();	
}

void SAutomatedFileDirectory::ConstructChildern()
{
	FileContextMenuWidget = SNew(SFileTreeContextMenu).CommandMap(FSimpleAutomatedToolViewCommands::Get().FileTreeContextMenuActions);
	FolderContextMenuWidget = SNew(SFileTreeContextMenu).CommandMap(FSimpleAutomatedToolViewCommands::Get().FileTreeContextMenuActions);

	TSharedRef<SScrollBar> HorizontalScrollBar = SNew(SScrollBar)
		.Orientation(Orient_Horizontal)
		//.AlwaysShowScrollbar(true)
		.Thickness(FVector2f(FAppStyle::Get().GetWidgetStyle<FScrollBoxStyle>("ScrollBox").BarThickness));
	TSharedRef<SScrollBar> VerticalScrollBar = SNew(SScrollBar)
		.Orientation(Orient_Vertical)
		//.AlwaysShowScrollbar(true)
		.Thickness(FVector2f(FAppStyle::Get().GetWidgetStyle<FScrollBoxStyle>("ScrollBox").BarThickness));

	//自动大小（默认值）——指定插槽将根据需要填充空间，但不会超额。插槽内的对齐不重要。
	//填充大小——指定填充系数将使其根据其他插槽的填充系数占据空间。朝着同一方向的插槽对齐不重要。
	ChildSlot
	[
		SNew(SOverlay)
		+ SOverlay::Slot()
		[
			SNew(SVerticalBox)
				+ SVerticalBox::Slot()
				.FillHeight(1.f)
				[
					SNew(SHorizontalBox)
						+ SHorizontalBox::Slot()
						.FillWidth(1.f)
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
										.ExternalScrollbar(VerticalScrollBar)
								]
						]
						+ SHorizontalBox::Slot()
						.AutoWidth()
						[
							VerticalScrollBar
						]
				]
				+ SVerticalBox::Slot()
				.AutoHeight()
				[
					SNew(SHorizontalBox)
						+ SHorizontalBox::Slot()
						[
							HorizontalScrollBar
						]
					+ SHorizontalBox::Slot()
						.AutoWidth()
						[
							SNew(SBox)
								//.HAlign(HAlign_Left)
								//.VAlign(VAlign_Top)
								.WidthOverride(FAppStyle::Get().GetWidgetStyle<FScrollBoxStyle>("ScrollBox").BarThickness)
								.HeightOverride(FAppStyle::Get().GetWidgetStyle<FScrollBoxStyle>("ScrollBox").BarThickness)
						]
				]
		]
		
		+ SOverlay::Slot()
		[
			SNew(SConstraintCanvas)
			+ SConstraintCanvas::Slot()
			.AutoSize(true)
			.Alignment(FVector2D(0.f))
			[
				FileContextMenuWidget.ToSharedRef()
			]	
			+ SConstraintCanvas::Slot()
			.AutoSize(true)
			.Alignment(FVector2D(0.f))
			[
				FolderContextMenuWidget.ToSharedRef()
			]
		]
		
	];
}

void SAutomatedFileDirectory::OnFileNodeClicked(const FString& InFileName)
{
	if(InFileName.IsEmpty()) return;

}

void SAutomatedFileDirectory::InvokeContextMenuOnFileTree(TSharedPtr<SimpleSlateFileTree::FFileTreeBase> InNode, 
	const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	TSharedPtr<SFileTreeContextMenu> Temp;

	if (InNode->GetFileType() == SimpleSlateFileTree::EFileType::Folder)
	{
		Temp = FolderContextMenuWidget;
	}
	else if (InNode->GetFileType() == SimpleSlateFileTree::EFileType::File)
	{
		Temp = FileContextMenuWidget;
	}

	if (Temp.IsValid())
	{
		Temp->Invoke(InNode);

		const FGeometry& Geometry = GetCachedGeometry();
		FVector2D RelativePos = MouseEvent.GetScreenSpacePosition() - Geometry.GetAbsolutePosition();
	
		FTransform2D Transform;
		Transform.SetTranslation(RelativePos);

		Temp->SetRenderTransform(Transform);
	}
}

void SAutomatedFileDirectory::OnContextMenuClicked(TSharedPtr<SimpleSlateFileTree::FFileTreeBase> InNode)
{
}

TSharedRef<class ITableRow> SAutomatedFileDirectory::OnGenerateRow(TSharedPtr<SimpleSlateFileTree::FFileTreeBase> InNode,
	const TSharedRef<class STableViewBase>& InOwnerTable)
{
	if (InNode->GetFileType() == SimpleSlateFileTree::EFileType::File)
	{
		return SNew(STableRow<TSharedPtr<SimpleSlateFileTree::FFileTree_File>>, InOwnerTable)
			[
				SNew(SFileWidget, InNode->CastTo<SimpleSlateFileTree::FFileTree_File>())
				.OnRightMouseKeyClick(FOnRightMouseKeyClick::CreateSP(this, &SAutomatedFileDirectory::InvokeContextMenuOnFileTree))
				.OnLeftMouseKeyClick(FOnLeftMouseKeyClick::CreateSP(this, &SAutomatedFileDirectory::OnContextMenuClicked))
			];
	}
	else if(InNode->GetFileType() == SimpleSlateFileTree::EFileType::Folder)
	{
		TSharedPtr<SimpleSlateFileTree::FFileTree_Folder> Folder = InNode->CastTo<SimpleSlateFileTree::FFileTree_Folder>();
		TSharedPtr<SImage> Image = SNew(SImage);
		Folder->SetWidget(Image);
		
		return SNew(STableRow<TSharedPtr<SimpleSlateFileTree::FFileTree_Folder>>, InOwnerTable)
			[
				SNew(SFolderWidget, Folder)
				.OnRightMouseKeyClick(FOnRightMouseKeyClick::CreateSP(this, &SAutomatedFileDirectory::InvokeContextMenuOnFileTree))
				.OnLeftMouseKeyClick(FOnLeftMouseKeyClick::CreateSP(this, &SAutomatedFileDirectory::OnContextMenuClicked))
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

		if(Folder->IsExpanded())
		{
			OutChildren = Folder->GetChildren();
			if (OutChildren.IsEmpty())
			{
				OutChildren.Add(MakeShareable(new SimpleSlateFileTree::FFileTree_None{ InNode->GetPath(), InNode }));
			}
			else
			{
				for (auto& Temp : Folder->GetChildren())
				{
					SetItemExpansion(Temp);
				}
			}
		}
		else
		{
			OutChildren.Add(MakeShareable(new SimpleSlateFileTree::FFileTree_None{ InNode->GetPath(), InNode }));
		}		
	}
}

void SAutomatedFileDirectory::OnExpansionChanged(TSharedPtr<SimpleSlateFileTree::FFileTreeBase> InNode, bool bIsExpanded)
{
	if (InNode->GetFileType() == SimpleSlateFileTree::EFileType::Folder)
	{
		TSharedPtr<SimpleSlateFileTree::FFileTree_Folder> TempNode = InNode->CastTo<SimpleSlateFileTree::FFileTree_Folder>();

		if (bIsExpanded)
		{
			//只是为了更新文件是否新增或删除
			bool PreState = false;
			if(bIsLoading.compare_exchange_strong(PreState, true))
			{
				//重新加载并比对更新数据
				AsyncTask(ENamedThreads::GameThread, [this, TempNode]()
					{
						TempNode->SetExpandedState(true);
						TempNode->OperationWidget(FOperationWidget::CreateSP(this, &SAutomatedFileDirectory::GetFileIcon, true));
						TempNode->Update();
						bIsLoading.exchange(false);
						FileTreeView->RequestTreeRefresh();
				});
			}
		}
		else
		{
			TempNode->SetExpandedState(false);
			TempNode->OperationWidget(FOperationWidget::CreateSP(this, &SAutomatedFileDirectory::GetFileIcon, false));
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
}

void SAutomatedFileDirectory::SetItemExpansion(TSharedPtr<SimpleSlateFileTree::FFileTreeBase> InNode)
{
	if (InNode.IsValid() && InNode->IsFolder())
	{
		TSharedPtr<SimpleSlateFileTree::FFileTree_Folder> Folder = InNode->CastTo<SimpleSlateFileTree::FFileTree_Folder>();
		if (Folder->IsExpanded())
		{
			Folder->OperationWidget(FOperationWidget::CreateSP(this, &SAutomatedFileDirectory::GetFileIcon, true));
			FileTreeView->SetItemExpansion(InNode, true);
			for (auto& Temp : Folder->GetChildren())
			{
				SetItemExpansion(Temp);
			}
		}
	}
}

FReply SAutomatedFileDirectory::OnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	return FReply::Handled();
}

FReply SAutomatedFileDirectory::OnMouseButtonUp(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	return FReply::Handled();
}


#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

#undef LOCTEXT_NAMESPACE