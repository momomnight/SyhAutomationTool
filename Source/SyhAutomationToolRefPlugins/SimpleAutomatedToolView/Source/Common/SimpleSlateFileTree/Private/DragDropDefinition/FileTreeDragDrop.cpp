#include "DragDropDefinition/FileTreeDragDrop.h"
#include "Widgets/Images/SImage.h"
#include "FileTreeWidget/SFileTreeWidgetBase.h"
#include "FileTreeType.h"

FFileTreeDragDrop::FFileTreeDragDrop( TSharedRef<SFileTreeWidgetBase> InDragWidget)
	: FFileDragDropOperation()
	, DragWidget(InDragWidget)
{
	TSharedPtr<SlateFileTree::FFileTreeBase> FileData = InDragWidget->GetFileDataNode();
	if (FileData.IsValid())
	{
		SetPath(FileData->GetPath());
	}
}

FFileTreeDragDrop::~FFileTreeDragDrop()
{
	OnEndDragDrop.ExecuteIfBound();
}

void FFileTreeDragDrop::SetOnEndDragDrop(FOnEndDragDrop InDelegate)
{
	OnEndDragDrop = InDelegate;
}

TSharedPtr<SWidget> FFileTreeDragDrop::GetDefaultDecorator() const
{
	if (DragWidget.IsValid())
	{
		if(TSharedPtr<SFileTreeWidgetBase> DragDropWidget = StaticCastSharedPtr<SFileTreeWidgetBase>(DragWidget.Pin()))
		{
			return DragDropWidget->GetDragDropText();
		}
	}
	return SNew(SImage);
}

TSharedRef<FFileTreeDragDrop> FFileTreeDragDrop::NewFileTreeDragDrop(TSharedRef<SFileTreeWidgetBase> InDragWidget)
{
	TSharedRef<FFileTreeDragDrop> Op = MakeShared<FFileTreeDragDrop>(InDragWidget);
	Op->Construct();
	return Op;
}



