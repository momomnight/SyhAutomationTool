#include "SFileTreeView.h"
#include "FileTreeMenuCommands.h"
#include "Misc/LazySingleton.h"
#include "FileTreeTool.h"
#include "ModalWindow/SSelectModalWindow.h"
#include "ModalWindow/ModalWindowFactory.h"
#include "FileTreeOperation.h"
#include "Misc/ScopeExit.h"

#define LOCTEXT_NAMESPACE "SFileTreeView"

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

class FFileTreeContextMenu
{
	friend class SFileTreeView;

	friend class FLazySingleton;

	void InitializeContextMenu(TWeakPtr<SFileTreeView> FileTreeView)
	{
		check(FileTreeView.IsValid());
		Widget = FileTreeView;
		for (auto& Temp : FFileTreeMenuCommands::Get().MenuCommand_General->GenerationInfo)
		{
			if (Temp.Value.UIActionGenerator.IsBound())
			{
				//Temp.Value.UIAction = Temp.Value.UIActionGenerator.Execute(FileTreeView);
				FFileTreeMenuCommands::Get().PluginCommands->MapAction(Temp.Value.CommandInfo, 
					Temp.Value.UIActionGenerator.Execute(FileTreeView));
			}
		}

		for (auto& Temp : FFileTreeMenuCommands::Get().MenuCommand_DragDrop->GenerationInfo)
		{
			if (Temp.Value.UIActionGenerator.IsBound())
			{
				Temp.Value.UIAction = Temp.Value.UIActionGenerator.Execute(FileTreeView);
				FFileTreeMenuCommands::Get().PluginCommands->MapAction(Temp.Value.CommandInfo, Temp.Value.UIAction);
			}
		}
	}

	TSharedPtr<SWidget> MakeWidget(EShowMark Filter)
	{
		FMenuBuilder Builder(true, FFileTreeMenuCommands::Get().PluginCommands);
		if (bIsDragDroping)
		{
			return FFileTreeMenuCommands::Get().MenuCommand_DragDrop->MakeWidget(Builder, Filter);
		}
		else
		{
			return FFileTreeMenuCommands::Get().MenuCommand_General->MakeWidget(Builder, Filter);
		}
	}

	void SetCommandShowMark(EShowMark InMark, const FText& InCommandName)
	{
		if (bIsDragDroping)
		{
			for (auto& Temp : FFileTreeMenuCommands::Get().MenuCommand_DragDrop->GenerationInfo)
			{
				if (Temp.Key == InCommandName)
				{
					Temp.Value.ShowMark |= InMark;
				}
			}
		}
		else
		{
			for (auto& Temp : FFileTreeMenuCommands::Get().MenuCommand_General->GenerationInfo)
			{
				if (Temp.Key == InCommandName)
				{
					Temp.Value.ShowMark |= InMark;
				}
			}
		}
	}

	void EraseCommandShowMark(EShowMark InMark, const FText& InCommandName)
	{
		if (bIsDragDroping)
		{
			for (auto& Temp : FFileTreeMenuCommands::Get().MenuCommand_DragDrop->GenerationInfo)
			{
				if (Temp.Key == InCommandName)
				{
					Temp.Value.ShowMark &= ~InMark;
				}
			}
		}
		else
		{
			for (auto& Temp : FFileTreeMenuCommands::Get().MenuCommand_General->GenerationInfo)
			{
				if (Temp.Key == InCommandName)
				{
					Temp.Value.ShowMark &= ~InMark;
				}
			}
		}
	}

	bool IsDragDroping() { return bIsDragDroping; }
	void StartDragDrop() { bIsDragDroping = true;}
	void EndDragDrop(TWeakPtr<SlateFileTree::FFileTreeBase> InFileNode) { bIsDragDroping = false; CachedTargetNode = InFileNode.Pin();}
	void EndDragDrop() { bIsDragDroping = false;}

	bool ExecuteCombine(SlateFileTree::EFileExecutionCode InExecutionCode, TSharedPtr<SlateFileTree::FFileTreeBase> InFileNodes)
	{
		bool bExecResult = false;

		if (InExecutionCode & SlateFileTree::EFileExecutionCode::CopyTo)
		{
			if (InFileNodes.IsValid())
			{
				if (InFileNodes->IsFolder())
				{
					TSharedPtr<bool> Result = MakeShareable(new bool{ false });
					FText HintText = FText::Format(LOCTEXT("FileTreeView.CopyTo.HintText",
						"Are you sure to copy these files to {0}?"), FText::FromString(CachedTargetNode.Pin()->GetPath()));
					ModalWindowFactory::CreateSelect(LOCTEXT("FileTreeView.CopyTo.Title", "Copy"), HintText, Result);
					if (*Result)
					{
						//拷贝到文件夹
						bExecResult = SlateFileTree::FFileTreeOperation::CopyTo(CachedSourceNodes, InFileNodes);
						GetFileTreeView()->RefreshFileTree(InFileNodes);
					}
				}
				else if (InFileNodes->IsFile() && InFileNodes->GetParent().IsValid())
				{
					TSharedPtr<bool> Result = MakeShareable(new bool{ false });
					FText HintText = FText::Format(LOCTEXT("FileTreeView.CopyTo.HintText",
						"Are you sure to copy these files to {0}?"), FText::FromString(CachedTargetNode.Pin()->GetParent().Pin()->GetPath()));
					ModalWindowFactory::CreateSelect(LOCTEXT("FileTreeView.CopyTo.Title", "Copy"), HintText, Result);
					if(*Result)
					{
						//拷贝到文件的父级目录
						bExecResult = SlateFileTree::FFileTreeOperation::CopyTo(CachedSourceNodes, InFileNodes->GetParent().Pin());
						GetFileTreeView()->RefreshFileTree(InFileNodes->GetParent().Pin());
					}
				}
			}
		}
		else if (InExecutionCode & SlateFileTree::EFileExecutionCode::MoveTo)
		{
			if (InFileNodes.IsValid())
			{
				if (InFileNodes->IsFolder())
				{
					TSharedPtr<bool> Result = MakeShareable(new bool{ false });
					FText HintText = FText::Format(LOCTEXT("FileTreeView.MoveTo.HintText",
						"Are you sure to move these files to {0}?"), FText::FromString(CachedTargetNode.Pin()->GetPath()));
					if(*Result)
					{
						ModalWindowFactory::CreateSelect(LOCTEXT("FileTreeView.MoveTo.Title", "Move"), HintText, Result);
						//拷贝到文件夹
						bExecResult = SlateFileTree::FFileTreeOperation::MoveTo(CachedSourceNodes, InFileNodes);
						//文件可能非常多，直接从根节点刷新
						GetFileTreeView()->RefreshFileTree(GetFileTreeView()->GetRootItems()[0]);
					}
				}
				else if (InFileNodes->IsFile() && InFileNodes->GetParent().IsValid())
				{
					TSharedPtr<bool> Result = MakeShareable(new bool{ false });
					FText HintText = FText::Format(LOCTEXT("FileTreeView.MoveTo.HintText",
						"Are you sure to move these files to {0}?"), FText::FromString(CachedTargetNode.Pin()->GetParent().Pin()->GetPath()));
					ModalWindowFactory::CreateSelect(LOCTEXT("FileTreeView.MoveTo.Title", "Move"), HintText, Result);
					if(*Result)
					{
						//拷贝到文件的父级目录
						bExecResult = SlateFileTree::FFileTreeOperation::MoveTo(CachedSourceNodes, InFileNodes->GetParent().Pin());
						GetFileTreeView()->RefreshFileTree(GetFileTreeView()->GetRootItems()[0]);
					}
				}
			}
		}
		return bExecResult;
	}

	bool ExecuteImmediately(SlateFileTree::EFileExecutionCode InExecutionCode, const TArray<TSharedPtr<SlateFileTree::FFileTreeBase>>& InFileNodes)
	{
		bool bExecResult = false;
		if (InExecutionCode & SlateFileTree::EFileExecutionCode::Open)
		{
			if (InFileNodes.Num() == 1)
			{
				bExecResult = SlateFileTree::FFileTreeOperation::Open(InFileNodes[0]);
			}
		}
		else if (InExecutionCode & SlateFileTree::EFileExecutionCode::Rename)
		{
			if (InFileNodes.Num() == 1)
			{
				//重命名
				TSharedPtr<FString> Result = MakeShareable(new FString);
				ModalWindowFactory::CreateSelect(LOCTEXT("FileTreeView.Rename.Title","Rename"), LOCTEXT("FileTreeView.Rename.HintText",
					"Please enter a new name."), Result);
				if (Result->IsEmpty())
				{
					return true;
				}
				else
				{
					bExecResult = SlateFileTree::FFileTreeOperation::Rename(InFileNodes[0], *Result);
					GetFileTreeView()->RefreshFileTree(InFileNodes[0]->GetParent().IsValid() ? InFileNodes[0]->GetParent().Pin() : nullptr);
				}
			}
		}
		else if (InExecutionCode & SlateFileTree::EFileExecutionCode::Delete)
		{
			TSharedPtr<bool> Result = MakeShareable(new bool{false});
			ModalWindowFactory::CreateSelect(LOCTEXT("FileTreeView.Delete.Title", "Delete"), LOCTEXT("FileTreeView.Delete.HintText",
				"Are you sure to delete these files?"), Result);
			if(*Result)
			{
				bExecResult = SlateFileTree::FFileTreeOperation::Delete(InFileNodes);
				GetFileTreeView()->RefreshFileTree(GetFileTreeView()->GetRootItems()[0]);
			}
		}
		else if (InExecutionCode & SlateFileTree::EFileExecutionCode::CopyTo)
		{
			if(CachedTargetNode.IsValid())
			{
				if(CachedTargetNode.Pin()->IsFolder())
				{
					TSharedPtr<bool> Result = MakeShareable(new bool{ false });
					FText HintText = FText::Format(LOCTEXT("FileTreeView.CopyTo.HintText",
						"Are you sure to copy these files to {0}?"), FText::FromString(CachedTargetNode.Pin()->GetPath()));
					ModalWindowFactory::CreateSelect(LOCTEXT("FileTreeView.CopyTo.Title", "Copy"), HintText, Result);
					if(*Result)
					{
						//拷贝到文件夹
						bExecResult = SlateFileTree::FFileTreeOperation::CopyTo(InFileNodes, CachedTargetNode.Pin());
						GetFileTreeView()->RefreshFileTree(CachedTargetNode.Pin());
					}
				}
				else if (CachedTargetNode.Pin()->IsFile() && CachedTargetNode.Pin()->GetParent().IsValid())
				{
					TSharedPtr<bool> Result = MakeShareable(new bool{ false });
					FText HintText = FText::Format(LOCTEXT("FileTreeView.CopyTo.HintText",
						"Are you sure to copy these files to {0}?"), FText::FromString(CachedTargetNode.Pin()->GetParent().Pin()->GetPath()));
					ModalWindowFactory::CreateSelect(LOCTEXT("FileTreeView.CopyTo.Title", "Copy"), HintText, Result);
					//拷贝到文件的父级目录
					if (*Result)
					{
						bExecResult = SlateFileTree::FFileTreeOperation::CopyTo(InFileNodes, CachedTargetNode.Pin()->GetParent().Pin());
						GetFileTreeView()->RefreshFileTree(CachedTargetNode.Pin()->GetParent().Pin());
					}
				}
			}
		}
		else if (InExecutionCode & SlateFileTree::EFileExecutionCode::MoveTo)
		{
			if (CachedTargetNode.IsValid())
			{
				if (CachedTargetNode.Pin()->IsFolder())
				{
					TSharedPtr<bool> Result = MakeShareable(new bool{ false });
					FText HintText = FText::Format(LOCTEXT("FileTreeView.MoveTo.HintText",
						"Are you sure to move these files to {0}?"), FText::FromString(CachedTargetNode.Pin()->GetPath()));
					ModalWindowFactory::CreateSelect(LOCTEXT("FileTreeView.MoveTo.Title", "Move"), HintText, Result);
					if(*Result)
					{
						//拷贝到文件夹
						bExecResult = SlateFileTree::FFileTreeOperation::MoveTo(InFileNodes, CachedTargetNode.Pin());
						GetFileTreeView()->RefreshFileTree(GetFileTreeView()->GetRootItems()[0]);
					}
				}
				else if (CachedTargetNode.Pin()->IsFile() && CachedTargetNode.Pin()->GetParent().IsValid())
				{
					TSharedPtr<bool> Result = MakeShareable(new bool{ false });
					FText HintText = FText::Format(LOCTEXT("FileTreeView.MoveTo.HintText",
						"Are you sure to move these files to {0}?"), FText::FromString(CachedTargetNode.Pin()->GetParent().Pin()->GetPath()));
					ModalWindowFactory::CreateSelect(LOCTEXT("FileTreeView.MoveTo.Title", "Move"), HintText, Result);
					if(*Result)
					{
						//拷贝到文件的父级目录
						bExecResult = SlateFileTree::FFileTreeOperation::MoveTo(InFileNodes, CachedTargetNode.Pin()->GetParent().Pin());
						GetFileTreeView()->RefreshFileTree(GetFileTreeView()->GetRootItems()[0]);
					}
				}
			}

			return false;
		}
		else if (InExecutionCode & SlateFileTree::EFileExecutionCode::Duplicate)
		{
			TSharedPtr<bool> Result = MakeShareable(new bool{ false });
			ModalWindowFactory::CreateSelect(LOCTEXT("FileTreeView.Duplicate.Title", "Duplicate"), LOCTEXT("FileTreeView.Duplicate.HintText",
				"Are you sure to duplicate these files?"), Result);
			if(*Result)
			{
				//MoveTo
				bExecResult = SlateFileTree::FFileTreeOperation::Duplicate(InFileNodes);
				GetFileTreeView()->RefreshFileTree(GetFileTreeView()->GetRootItems()[0]);
			}
		}
		return  bExecResult;
	}

	//InFileNodes 为外部传入的获取的当前被选中的节点
	bool ExecuteCode(SlateFileTree::EFileExecutionCode InExecutionCode, const TArray<TSharedPtr<SlateFileTree::FFileTreeBase>>& InFileNodes)
	{
		if ((InExecutionCode & SlateFileTree::EFileExecutionCode::NoEmpty) && InFileNodes.Num() > 0)
		{
			if (InExecutionCode & SlateFileTree::EFileExecutionCode::DelayExec)
			{
				//延迟执行
				if (InExecutionCode & SlateFileTree::EFileExecutionCode::CombineExec)
				{
					LastExecutionCode = InExecutionCode;
					CachedSourceNodes.Empty();
					CachedSourceNodes = InFileNodes;
					return true;
				}
			}
			else
			{
				//立即执行
				if (InExecutionCode & SlateFileTree::EFileExecutionCode::CombineExec)
				{
					if (InExecutionCode & LastExecutionCode)
					{
						return ExecuteCombine(LastExecutionCode, InFileNodes[0]);
					}
					else
					{
						//逻辑出错
					}
				}
				else
				{
					return ExecuteImmediately(InExecutionCode, InFileNodes);
				}
			}
		}
		return false;
	}

	TSharedPtr<SFileTreeView> GetFileTreeView(){ return Widget.IsValid() ? Widget.Pin() : nullptr; }

	bool bIsDragDroping{false};
	
	//储存上一次未执行代码和节点
	//如拖拽，目标为Drop的目标，如Copy-Paste， 目标为临时获取，源为CachedSourceNodes;
	TWeakPtr<SlateFileTree::FFileTreeBase> CachedTargetNode;
	SlateFileTree::EFileExecutionCode LastExecutionCode;
	TArray<TSharedPtr<SlateFileTree::FFileTreeBase>> CachedSourceNodes{};

	TWeakPtr<SFileTreeView> Widget;
};

SFileTreeView::SFileTreeView()
{
	LogicImp = TLazySingleton<FFileTreeContextMenu>::TryGet();
}

void SFileTreeView::Construct(const FArguments& InArgs)
{

	LogicImp->InitializeContextMenu(StaticCastWeakPtr<SFileTreeView>(this->AsShared().ToWeakPtr()));
	OnRefreshFileTree = InArgs._OnRefreshFileTree;
	Super::Construct(
		Super::FArguments()
		.OnGenerateRow(InArgs._OnGenerateRow)
		.OnGetChildren(InArgs._OnGetChildren)
		.TreeItemsSource(InArgs._TreeItemsSource)
		.OnExpansionChanged(InArgs._OnExpansionChanged)
		.ExternalScrollbar(InArgs._ExternalScrollbar)
		.OnContextMenuOpening(FOnContextMenuOpening::CreateSP(this, &SFileTreeView::OnContextMenuOpening))
	);
	
}

void SFileTreeView::OpenContextMenu(const FDragDropEvent& PointerEvent)
{
	FVector2f SummonLocation = PointerEvent.GetScreenSpacePosition();
	TSharedPtr<SWidget> MenuContent = OnContextMenuOpening();

	if (MenuContent.IsValid())
	{
		FWidgetPath WidgetPath = PointerEvent.GetEventPath() != nullptr ? *PointerEvent.GetEventPath() : FWidgetPath();
		FSlateApplication::Get().PushMenu(AsShared(), WidgetPath, MenuContent.ToSharedRef(), SummonLocation, FPopupTransitionEffect(FPopupTransitionEffect::ContextMenu));
	}
}

void SFileTreeView::StartDragDrop()
{
	LogicImp->StartDragDrop();
}

void SFileTreeView::EndDragDrop(TWeakPtr<SlateFileTree::FFileTreeBase> InFileNode)
{
	LogicImp->EndDragDrop(InFileNode);
}

void SFileTreeView::EndDragDrop()
{
	LogicImp->EndDragDrop();
}

bool SFileTreeView::IsDragDroping()
{
	return LogicImp->IsDragDroping();
}

void SFileTreeView::ExecuteCode(SlateFileTree::EFileExecutionCode InExecCode)
{
	LogicImp->ExecuteCode(InExecCode, GetSelectedItems());
}

void SFileTreeView::SetCommandShowMark(EShowMark InMark, const FText& InCommandName)
{
	LogicImp->SetCommandShowMark(InMark, InCommandName);
}


void SFileTreeView::EraseCommandShowMark(EShowMark InMark, const FText& InCommandName)
{
	LogicImp->EraseCommandShowMark(InMark, InCommandName);
}

void SFileTreeView::RefreshFileTree(TSharedPtr<SlateFileTree::FFileTreeBase> InFileNode)
{
	OnRefreshFileTree.ExecuteIfBound(InFileNode);
}

TSharedPtr<SWidget> SFileTreeView::OnContextMenuOpening()
{
	if (GetNumItemsSelected() > 1)
	{
		return LogicImp->MakeWidget(EShowMark::MultiplyFile);
	}
	else
	{
		return LogicImp->MakeWidget(EShowMark::SingleFile);
	}

}


#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

#undef LOCTEXT_NAMESPACE