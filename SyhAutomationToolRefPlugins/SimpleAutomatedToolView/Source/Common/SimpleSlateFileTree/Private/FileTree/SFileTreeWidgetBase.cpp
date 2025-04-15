#include "FileTreeWidget/SFileTreeWidgetBase.h"
#include "FileTreeType.h"
#include "DragDropDefinition/FileTreeDragDrop.h"
#include "Widgets/Views/STableViewBase.h"
#include "Widgets/Text/STextBlock.h"
#include "SFileTreeView.h"

#define LOCTEXT_NAMESPACE "FileTreeWidgetBase"

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

void SFileTreeWidgetBase::Construct(const FArguments& InArgs, const TSharedRef<class STableViewBase>& InOwnerTable, TSharedPtr<SlateFileTree::FFileTreeBase> InFileNode)
{
	check(InFileNode.IsValid());
	
	Super::Construct(
		Super::FArguments()
		.Content()
		[
			ConstructChild(InFileNode)
		],
		InOwnerTable
	);
	OnDragDetected_Handler.BindSP(this, &SFileTreeWidgetBase::DragDetected);
	OnDrop_Handler.BindSP(this, &SFileTreeWidgetBase::Drop);
}

TSharedRef<SWidget> SFileTreeWidgetBase::ConstructChild(TSharedPtr<SlateFileTree::FFileTreeBase> InFileNode)
{
	return SAssignNew(Text, STextBlock)
		.Text(FText::Format(LOCTEXT("ParseFileTree", "{0}({1})"), FText::FromString(InFileNode->GetFullName()), InFileNode->GetFileTypeText()));
}

FReply SFileTreeWidgetBase::OnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	FReply Reply = Super::OnMouseButtonDown(MyGeometry, MouseEvent);

	if (MouseEvent.GetEffectingButton() == EKeys::LeftMouseButton)
	{
		return Reply.DetectDrag(this->AsShared(), EKeys::LeftMouseButton);
	}

	return FReply::Unhandled();
}

FReply SFileTreeWidgetBase::DragDetected(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	if(TSharedPtr<SFileTreeView> FileTreeView = GetOwnerTable())
	{
		TSharedRef<FDragDropOperation> DragDropOp = MakeShared<FFileTreeDragDrop>(this->AsShared().ToSharedPtr());
		FileTreeView->StartDragDrop();
		return FReply::Handled().BeginDragDrop(DragDropOp);
	}
	return FReply::Unhandled();
}

FReply SFileTreeWidgetBase::Drop(const FDragDropEvent& DragDropEvent)
{
	TSharedPtr<FFileTreeDragDrop> DragDropOp = DragDropEvent.GetOperationAs<FFileTreeDragDrop>();

	if (DragDropOp && (DragDropOp->GetDragObject<SFileTreeWidgetBase>() != this->AsShared().ToSharedPtr()))
	{
		if(TSharedPtr<SFileTreeView> FileTreeView = GetOwnerTable())
		{
			//同级目录，由具体操作决定
			//相比与事先创建的ContextMenu, 临时创建更加灵活，无需在ContextMenu关闭后才EndDragDrop
			FileTreeView->OpenContextMenu(DragDropEvent);
			//通过GetSelectedItems可以获得被选中的节点，拖拽到本节点可以直接获得
			TArray<TSharedPtr<SlateFileTree::FFileTreeBase>> Items = FileTreeView->GetSelectedItems();
			FileTreeView->EndDragDrop();
			return FReply::Handled().EndDragDrop();
		}
	}
	return FReply::Unhandled();
}

TSharedPtr<class STextBlock> SFileTreeWidgetBase::GetDragDropText() const
{
	return Text.IsValid() ? Text.Pin() : nullptr;
}

TSharedPtr<SFileTreeView> SFileTreeWidgetBase::GetOwnerTable()
{
	return StaticCastSharedPtr<SFileTreeView>(OwnerTablePtr.IsValid() ? OwnerTablePtr.Pin() : nullptr);
}



#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

#undef LOCTEXT_NAMESPACE