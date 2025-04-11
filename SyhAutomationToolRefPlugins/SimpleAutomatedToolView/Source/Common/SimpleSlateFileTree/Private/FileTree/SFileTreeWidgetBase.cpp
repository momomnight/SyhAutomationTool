#include "FileTreeWidget/SFileTreeWidgetBase.h"
#include "Widgets/Input/SButton.h"
#include "FileTreeType.h"
#include "DragDropDefinition/FileTreeDragDrop.h"

#define LOCTEXT_NAMESPACE "FileTreeWidgetBase"

void SFileTreeWidgetBase::Construct(const FArguments& InArgs, TSharedPtr<SimpleSlateFileTree::FFileTreeBase> InFileBase)
{
	FileBase = InFileBase;
	OnRightMouseKeyClick = InArgs._OnRightMouseKeyClick;
	OnLeftMouseKeyClick = InArgs._OnLeftMouseKeyClick;
	OnFileTreeWidgetDrag = InArgs._OnFileTreeWidgetDrag;
	
	FText Temp = InFileBase->GetFileType() == SimpleSlateFileTree::EFileType::Folder ? LOCTEXT("FileTreeWidgetBase.Text.Folder", "Folder") 
		: LOCTEXT("FileTreeWidgetBase.Text.File", "File");

	ChildSlot
	[
		SAssignNew(Button, SButton)
		.OnClicked(FOnClicked::CreateSP(this, &SFileTreeWidgetBase::OnClicked))
		.ButtonColorAndOpacity(FLinearColor::Transparent)
		.ButtonStyle(FCoreStyle::Get(), "NoBorder")
		.HAlign(HAlign_Fill)
		[
			SNew(STextBlock)
				.Text(FText::Format(LOCTEXT("ParseFileTree", "{0}({1})"), FText::FromString(InFileBase->GetFullName()), Temp))
				.TextStyle(FAppStyle::Get(), "FlatButton.DefaultTextStyle")
		]
	];
}


FReply SFileTreeWidgetBase::OnMouseButtonUp(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	//左键无用，因为已经被Button处理了，如果需要左键，直接绑定Button
	FReply Reply = FReply::Unhandled();
	if (MouseEvent.GetEffectingButton() == EKeys::RightMouseButton)
	{
		Reply = OnRightMouseKeyClick.ExecuteIfBound(FileBase.Pin(), MyGeometry, MouseEvent) ? FReply::Handled() : FReply::Unhandled();
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
	if (MouseEvent.GetEffectingButton() == EKeys::LeftMouseButton)
	{
		//MakeShared自动分配内存，只需传参
		TSharedRef<FDragDropOperation> DragDropOp = MakeShared<FFileTreeDragDrop>(this->AsShared());
		return FReply::Handled().BeginDragDrop(DragDropOp);
	}
	return FReply::Unhandled();
}

FReply SFileTreeWidgetBase::OnDrop(const FGeometry& MyGeometry, const FDragDropEvent& DragDropEvent)
{
	if (TSharedPtr<FFileTreeDragDrop> DragDropOp = DragDropEvent.GetOperationAs<FFileTreeDragDrop>())
	{
		SimpleSlateFileTree::FFileTreeDragDefinition From;
		From.Widget = DragDropOp->GetDragObject<SFileTreeWidgetBase>();

		if(From.Widget != this->AsShared().ToSharedPtr())
		{
			SimpleSlateFileTree::FFileTreeDragDefinition To;
			To.Widget = this->AsShared().ToSharedPtr();

			OnFileTreeWidgetDrag.ExecuteIfBound(MyGeometry, DragDropEvent, From, To);
			return FReply::Handled();
		}
	}
	return FReply::Unhandled();
}

FReply SFileTreeWidgetBase::OnClicked()
{
	return OnLeftMouseKeyClick.ExecuteIfBound(FileBase.Pin()) ? FReply::Handled() : FReply::Unhandled();
}

void SFileTreeWidgetBase::SetOnRightMouseKeyClick(FOnRightMouseKeyClick InDelegate)
{
	OnRightMouseKeyClick = InDelegate;
}

void SFileTreeWidgetBase::SetOnLeftMouseKeyClick(FOnLeftMouseKeyClick InDelegate)
{
	OnLeftMouseKeyClick = InDelegate;
}

void SFileTreeWidgetBase::SetOnFileTreeWidgetDrag(FOnFileTreeWidgetDrag InDelegate)
{
	OnFileTreeWidgetDrag = InDelegate;
}


#undef LOCTEXT_NAMESPACE