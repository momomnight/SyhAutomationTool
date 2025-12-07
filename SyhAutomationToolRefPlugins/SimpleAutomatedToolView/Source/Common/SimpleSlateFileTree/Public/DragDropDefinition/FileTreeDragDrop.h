
#pragma once
#include "FileTreeEvent.h"
#include "DllExports/CommonDragDropOperationDefinition.h"

class SFileTreeWidgetBase;

class SIMPLESLATEFILETREE_API FFileTreeDragDrop : public FFileDragDropOperation
{
public:
	DRAG_DROP_OPERATOR_TYPE(FFileTreeDragDrop, FFileDragDropOperation);

	FFileTreeDragDrop(TSharedRef<SFileTreeWidgetBase> InDragWidget);

	~FFileTreeDragDrop();

	void SetOnEndDragDrop(FOnEndDragDrop InDelegate);

	//获取拖拽实体
	virtual TSharedPtr<SWidget> GetDefaultDecorator() const;

	template<class WidgetObject>
	TSharedPtr<WidgetObject> GetDragObject()
	{
		return StaticCastSharedPtr<WidgetObject>(DragWidget.Pin());
	}

	static TSharedRef<FFileTreeDragDrop> NewFileTreeDragDrop(TSharedRef<SFileTreeWidgetBase> InDragWidget);

private:
	TWeakPtr<SWidget> DragWidget;

	FOnEndDragDrop OnEndDragDrop;
};