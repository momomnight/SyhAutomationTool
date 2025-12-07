#include "Widget/DragDropDefinition/FileToNodeDragDropAction.h"
#include "Base/Entry/BlueprintNodeEntry.h"
#include "Base/Entry/BlueprintNode_Param.h"
#include "Base/Entry/BlueprintPin_ParamOutput.h"

FFileToNodeDragDropAction::FFileToNodeDragDropAction(TSharedRef<SFileTreeWidgetBase> InDragWidget) 
	: FFileTreeDragDrop(InDragWidget), IBlueprintViewDragDropInterface()
{
	//使用父类的
	MyDecorator = FFileTreeDragDrop::GetDefaultDecorator();
}

TSharedPtr<SWidget> FFileToNodeDragDropAction::GetDefaultDecorator() const
{
	return MyDecorator;
}

TSharedPtr<FBlueprintNodeEntry> FFileToNodeDragDropAction::MakeNode() const
{
	TSharedPtr<FBlueprintNode_Param> FileNode = MakeShared<FBlueprintNode_Param>();
	TSharedPtr<FBlueprintPin_ParamOutput> InputPin = MakeShared<FBlueprintPin_ParamOutput>();
	InputPin->SetValueType(EBlueprintPinValueType::FString);
	FileNode->AddParamOutput(InputPin);
	return FileNode;
}

void FFileToNodeDragDropAction::ChangeDecorator(TSharedPtr<SWidget> InDecorator)
{
	//DestroyCursorDecoratorWindow();
	MyDecorator = InDecorator;
	//CreateCursorDecoratorWindow();
}

TSharedRef<FFileTreeDragDrop> FFileToNodeDragDropAction::NewDragDropAction(TSharedRef<SFileTreeWidgetBase> InDragWidget)
{
	TSharedRef<FFileToNodeDragDropAction> Action = MakeShared<FFileToNodeDragDropAction>(InDragWidget);
	Action->Construct();
	return Action;
}

TSharedPtr<IBlueprintViewDragDropInterface> FFileToNodeDragDropAction::CastToDragDropInterface(TSharedPtr<FDragDropOperation> InOperation)
{
	TSharedPtr<IBlueprintViewDragDropInterface> Result = nullptr;
	if (InOperation.IsValid() && InOperation->IsOfType<FFileToNodeDragDropAction>())
	{
		return StaticCastSharedPtr<FFileToNodeDragDropAction>(InOperation);
	}

	return Result;
}