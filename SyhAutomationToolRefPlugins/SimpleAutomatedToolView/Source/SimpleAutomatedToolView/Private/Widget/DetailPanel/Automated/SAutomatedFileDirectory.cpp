#include "Widget/DetailPanel/Automated/SAutomatedFileDirectory.h"
#include "Widgets/Layout/SScrollBox.h"
#include "Widgets/Views/STreeView.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/SBoxPanel.h"
#include "FileTreeWidget/SFileWidget.h"
#include "FileTreeWidget/SFolderWidget.h"
#include "FileTreeWidget/SInvalidWidget.h"
#include "FileTreeWidget/SNoneWidget.h"
#include "DllExports/AutomatedExecutionPath.h"
#include "SFileTreeView.h"



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
		RootPath.SetRootPath(AutomatedExecutionPath::GetCommandPath());
	}
	else
	{
		RootPath.SetRootPath(InArgs._RootPath);
	}
	TSharedPtr<SlateFileTree::FFileTree_Folder> Root = MakeShareable(new SlateFileTree::FFileTree_Folder{
		RootPath.GetCleanFileName(), RootPath.GetRootPath()});
	SlateFileTree::FindFilesRecursive(Root->GetChildren(), Root);

	FileTreeDataSource.Add(Root);
	
	ConstructChildern();	
}

void SAutomatedFileDirectory::ConstructChildern()
{
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
									SAssignNew(FileTreeView, SFileTreeView)
										.TreeItemsSource(&FileTreeDataSource)
										.OnGenerateRow(this, &SAutomatedFileDirectory::OnGenerateRow)
										.OnGetChildren(this, &SAutomatedFileDirectory::OnGetChildren)
										.OnExpansionChanged(this, &SAutomatedFileDirectory::OnExpansionChanged)
										.ExternalScrollbar(VerticalScrollBar)		
										.OnRefreshFileTree(FOnRefreshFileTree::CreateSP(this, &SAutomatedFileDirectory::AsyncUpdateFileTree))
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
		
		//+ SOverlay::Slot()
		//[
		//	SNew(SConstraintCanvas)
		//	+ SConstraintCanvas::Slot()
		//	.AutoSize(true)
		//	.Alignment(FVector2D(0.f))
		//	[
		//		FileContextMenuWidget.ToSharedRef()
		//	]
		//]
		
	];
}

void SAutomatedFileDirectory::AsyncUpdateFileTree(TSharedPtr<SlateFileTree::FFileTreeBase> InNode)
{
	if(!InNode.IsValid()) return;

	TSharedPtr<SlateFileTree::FFileTree_Folder> FolderNode = StaticCastSharedPtr<SlateFileTree::FFileTree_Folder>(InNode);

	//只是为了更新文件是否新增或删除
	//重新加载并比对更新数据
	if(FolderNode.IsValid())
	{
		AsyncTask(ENamedThreads::GameThread, [this, FolderNode]()
			{
				while (true)
				{
					bool PreState = false;
					if (this->bIsLoading.compare_exchange_strong(PreState, true, std::memory_order_acq_rel, std::memory_order_relaxed))
					{
						FolderNode->Update();
						FileTreeView->RequestTreeRefresh();
						bIsLoading.exchange(false, std::memory_order_release);
						break;
					}
					else
					{
						FPlatformProcess::Yield();
					}
				}
			});
	}
}

FTransform2D SAutomatedFileDirectory::GetCurrentContextMenuTransform(const FPointerEvent& MouseEvent)
{
	const FGeometry& Geometry = GetCachedGeometry();
	FVector2D RelativePos = MouseEvent.GetScreenSpacePosition() - Geometry.GetAbsolutePosition();
	FTransform2D Transform;
	Transform.SetTranslation(RelativePos);
	return Transform;
}

TSharedRef<class ITableRow> SAutomatedFileDirectory::OnGenerateRow(TSharedPtr<SlateFileTree::FFileTreeBase> InNode,
	const TSharedRef<class STableViewBase>& InOwnerTable)
{
	if (InNode->GetFileType() == SlateFileTree::EFileType::File)
	{
		return SNew(SFileWidget, InOwnerTable, InNode->CastTo<SlateFileTree::FFileTree_File>());
	}
	else if(InNode->GetFileType() == SlateFileTree::EFileType::Folder)
	{
		TSharedPtr<SlateFileTree::FFileTree_Folder> Folder = InNode->CastTo<SlateFileTree::FFileTree_Folder>();
		TSharedPtr<SImage> Image = SNew(SImage);
		Folder->SetWidget(Image);
		
		return SNew(SFolderWidget, InOwnerTable, Folder);
	}
	else if(InNode->GetFileType() == SlateFileTree::EFileType::Invalid)
	{
		return SNew(SInvalidWidget, InOwnerTable, InNode->CastTo<SlateFileTree::FFileTree_Invalid>());
	}
	else
	{
		return SNew(SNoneWidget, InOwnerTable, InNode->CastTo<SlateFileTree::FFileTree_None>());
	}
}

void SAutomatedFileDirectory::OnGetChildren(TSharedPtr<SlateFileTree::FFileTreeBase> InNode, 
	TArray<TSharedPtr<SlateFileTree::FFileTreeBase>>& OutChildren)
{
	if(!InNode.IsValid() || InNode->GetFileType() == SlateFileTree::EFileType::File) return;

	if (InNode->GetFileType() == SlateFileTree::EFileType::Folder)
	{
		TSharedPtr<SlateFileTree::FFileTree_Folder> Folder = InNode->CastTo<SlateFileTree::FFileTree_Folder>();

		if(Folder->IsExpanded())
		{
			OutChildren = Folder->GetChildren();
			if (OutChildren.IsEmpty())
			{
				OutChildren.Add(MakeShareable(new SlateFileTree::FFileTree_None{ InNode->GetPath(), InNode }));
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
			OutChildren.Add(MakeShareable(new SlateFileTree::FFileTree_None{ InNode->GetPath(), InNode }));
		}		
	}
}

void SAutomatedFileDirectory::OnExpansionChanged(TSharedPtr<SlateFileTree::FFileTreeBase> InNode, bool bIsExpanded)
{
	if (InNode->GetFileType() == SlateFileTree::EFileType::Folder)
	{
		TSharedPtr<SlateFileTree::FFileTree_Folder> FolderNode = InNode->CastTo<SlateFileTree::FFileTree_Folder>();
		FolderNode->SetExpandedState(bIsExpanded);
		
		if (bIsExpanded)
		{			
			FolderNode->OperationWidget(FOperationWidget::CreateSP(this, &SAutomatedFileDirectory::GetFileIcon, true));
			AsyncUpdateFileTree(FolderNode);
		}
		else
		{
			FolderNode->OperationWidget(FOperationWidget::CreateSP(this, &SAutomatedFileDirectory::GetFileIcon, false));
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

void SAutomatedFileDirectory::SetItemExpansion(TSharedPtr<SlateFileTree::FFileTreeBase> InNode)
{
	if (InNode.IsValid() && InNode->IsFolder())
	{
		TSharedPtr<SlateFileTree::FFileTree_Folder> Folder = InNode->CastTo<SlateFileTree::FFileTree_Folder>();
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