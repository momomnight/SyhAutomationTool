
#pragma once
#include "Input/DragAndDrop.h"
#include "FileTreeEvent.h"


class SIMPLESLATEFILETREE_API FFileTreeDragDrop : public FDragDropOperation
{
public:
	DRAG_DROP_OPERATOR_TYPE(FFileTreeDragDrop, FDragDropOperation);

	FFileTreeDragDrop(TSharedPtr<SWidget> InDragWidget);

	~FFileTreeDragDrop();

	void SetOnEndDragDrop(FOnEndDragDrop InDelegate);

	//获取拖拽实体
	virtual TSharedPtr<SWidget> GetDefaultDecorator() const;

	template<class WidgetObject>
	TSharedPtr<WidgetObject> GetDragObject()
	{
		return StaticCastSharedPtr<WidgetObject>(DragWidget.Pin());
	}

private:
	TWeakPtr<SWidget> DragWidget;

	FOnEndDragDrop OnEndDragDrop;
};