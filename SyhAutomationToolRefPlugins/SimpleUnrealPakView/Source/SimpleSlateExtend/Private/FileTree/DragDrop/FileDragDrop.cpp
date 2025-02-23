#include "FileTree/DragDrop/FileDragDrop.h"
#include "Widgets/Images/SImage.h"

FFileDragDrop::FFileDragDrop( TSharedPtr<SWidget> InDragWidget)
	: FDragDropOperation()
	, DragWidget(InDragWidget)
{
	Construct();
}

TSharedPtr<SWidget> FFileDragDrop::GetDefaultDecorator() const
{
	return DragWidget.IsValid() ? DragWidget.Pin() : SNew(SImage);
}

