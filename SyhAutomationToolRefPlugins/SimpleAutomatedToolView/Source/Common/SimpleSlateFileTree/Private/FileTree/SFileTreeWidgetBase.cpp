#include "FileTreeWidget/SFileTreeWidgetBase.h"
#include "Widgets/Input/SButton.h"
#include "FileTreeType.h"
#include "DragDropDefinition/FileTreeDragDrop.h"
#include "ContextMenu/SFileTreeDragDropContextMenu.h"
#include "ContextMenu/SFileTreeContextMenu.h"
#define LOCTEXT_NAMESPACE "FileTreeWidgetBase"

void SFileTreeWidgetBase::Construct(const FArguments& InArgs, TSharedPtr<SimpleSlateFileTree::FFileTreeBase> InFileBase)
{
	check(InFileBase.IsValid());
	FileBase = InFileBase;
	ContextMenu = InArgs._ContextMenu;
	DragDropContextMenu = InArgs._DragDropContextMenu;
	OnGetCurrentContextMenuTransform = InArgs._OnGetCurrentContextMenuTransform;
	SetOnClicked(FOnClicked::CreateSP(this, &SFileTreeWidgetBase::OnClicked));

	this->ConstructChild();
}


void SFileTreeWidgetBase::ConstructChild()
{
	FText Temp = FileBase.Pin()->GetFileType() == SimpleSlateFileTree::EFileType::Folder ? LOCTEXT("FileTreeWidgetBase.Text.Folder", "Folder")
		: LOCTEXT("FileTreeWidgetBase.Text.File", "File");

	SButton::Construct(SButton::FArguments()
		.ButtonColorAndOpacity(FLinearColor::Transparent)
		.ButtonStyle(FCoreStyle::Get(), "NoBorder")
		.HAlign(HAlign_Fill)
		[
			SNew(STextBlock)
				.Text(FText::Format(LOCTEXT("ParseFileTree", "{0}({1})"), FText::FromString(FileBase.Pin()->GetFullName()), Temp))
				.TextStyle(FAppStyle::Get(), "FlatButton.DefaultTextStyle")
		]
	);
}

FReply SFileTreeWidgetBase::OnMouseButtonUp(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	FReply Reply = FReply::Unhandled();
	Reply = SButton::OnMouseButtonUp(MyGeometry, MouseEvent);

	if (MouseEvent.GetEffectingButton() == EKeys::RightMouseButton)
	{
		this->InvokeContextMenu(MouseEvent);
	}
	return Reply;
}

FReply SFileTreeWidgetBase::OnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	if (MouseEvent.GetEffectingButton() == EKeys::LeftMouseButton)
	{
		return FReply::Handled().DetectDrag(this->AsShared(), EKeys::LeftMouseButton);
	}

	return FReply::Unhandled();
}

FReply SFileTreeWidgetBase::OnDragDetected(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	TSharedRef<FDragDropOperation> DragDropOp = MakeShared<FFileTreeDragDrop>(this->AsShared());
	return FReply::Handled().BeginDragDrop(DragDropOp);
}

FReply SFileTreeWidgetBase::OnDrop(const FGeometry& MyGeometry, const FDragDropEvent& DragDropEvent)
{
	if (TSharedPtr<FFileTreeDragDrop> DragDropOp = DragDropEvent.GetOperationAs<FFileTreeDragDrop>())
	{
		if(DragDropOp->GetDragObject<SFileTreeWidgetBase>() != this->AsShared().ToSharedPtr())
		{
			SimpleSlateFileTree::FFileTreeDragDropDefinition DragDropData;
			DragDropData.From = DragDropOp->GetDragObject<SFileTreeWidgetBase>()->GetFileTreeData();
			DragDropData.To = this->GetFileTreeData();
			InvokeDragDropContextMenu(DragDropEvent, DragDropData);
			return FReply::Handled().EndDragDrop();
		}
	}
	return FReply::Unhandled();
}

FReply SFileTreeWidgetBase::OnClicked()
{
	return FReply::Handled();
}

void SFileTreeWidgetBase::SetOnGetCurrentContextMenuTransform(FOnGetCurrentContextMenuTransform InDelegate)
{
	OnGetCurrentContextMenuTransform = InDelegate;
}

//SFileTreeWidgetBase::OnDrop -> SFileTreeWidgetBase::InvokeDragDropContextMenu
// -> (手动)SButton::OnClicked -> FSimpleAutomatedToolViewCommands::FileTree_DragDropContextMenuActions
void SFileTreeWidgetBase::InvokeContextMenu(const FPointerEvent& PointerEvent)
{
	if (ContextMenu.IsValid())
	{
		ContextMenu.Pin()->InvokeContextMenu( FileBase.IsValid() ? FileBase.Pin() :nullptr );
		
		if (OnGetCurrentContextMenuTransform.IsBound())
		{
			FTransform2D Transform;
			Transform = OnGetCurrentContextMenuTransform.Execute(PointerEvent);
			ContextMenu.Pin()->SetRenderTransform(Transform);
		}
	}
}

void SFileTreeWidgetBase::InvokeDragDropContextMenu(const FPointerEvent& PointerEvent, SimpleSlateFileTree::FFileTreeDragDropDefinition InData)
{
	if (DragDropContextMenu.IsValid())
	{
		DragDropContextMenu.Pin()->InvokeContextMenu(InData);

		if (OnGetCurrentContextMenuTransform.IsBound())
		{
			FTransform2D Transform;
			Transform = OnGetCurrentContextMenuTransform.Execute(PointerEvent);
			DragDropContextMenu.Pin()->SetRenderTransform(Transform);
		}
	}
}


#undef LOCTEXT_NAMESPACE