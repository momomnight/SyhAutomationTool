
#pragma once

#include "CoreMinimal.h"
#include "Input/DragAndDrop.h"

class SIMPLESLATEEXTEND_API FFileDragDrop :public FDragDropOperation
{
public:
	DRAG_DROP_OPERATOR_TYPE(FFileDragDrop, FDragDropOperation)

	FFileDragDrop(TSharedPtr<SWidget> InDragWidget);

	//获取拖拽实体
	virtual TSharedPtr<SWidget> GetDefaultDecorator() const;

	template<class WidgetObject>
	TSharedPtr<WidgetObject> GetDragObject()
	{
		return StaticCastSharedPtr<WidgetObject>(DragWidget.Pin());
	}

private:

	TWeakPtr<SWidget> DragWidget;
};