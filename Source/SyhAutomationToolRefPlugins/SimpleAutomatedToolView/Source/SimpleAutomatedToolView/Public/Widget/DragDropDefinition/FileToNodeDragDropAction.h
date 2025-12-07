#pragma once

#include "DllExport/SimpleBlueprintViewDragDropInterface.h"
#include "DragDropDefinition/FileTreeDragDrop.h"

class SWidget;

class FFileToNodeDragDropAction : public FFileTreeDragDrop, public IBlueprintViewDragDropInterface
{
public:
	DRAG_DROP_OPERATOR_TYPE(FFileToNodeDragDropAction, FFileTreeDragDrop);

	FFileToNodeDragDropAction(TSharedRef<SFileTreeWidgetBase> InDragWidget);

	virtual TSharedPtr<SWidget> GetDefaultDecorator() const;
	virtual TSharedPtr<FBlueprintNodeEntry> MakeNode() const;

	void ChangeDecorator(TSharedPtr<SWidget> InDecorator);

	//一下两个静态函数目的是为了解耦，以防止FileTree模块和BlueprintView模块的耦合

	//用于绑定到FileTree的FOnCreateDragDropOp上，以创建可创建节点的Operation
	static TSharedRef<FFileTreeDragDrop> NewDragDropAction(TSharedRef<SFileTreeWidgetBase> InDragWidget);

	//用于绑定到SBlueprintEntryPanelWidget的FOnGetDragDropInterface上，以获得可创建节点的OperationInterface
	static TSharedPtr<IBlueprintViewDragDropInterface> CastToDragDropInterface(TSharedPtr<FDragDropOperation> InOperation);

private:
	TSharedPtr<SWidget> MyDecorator; 
};