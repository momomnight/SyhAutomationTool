#include "Widget/BlueprintWidget/SBlueprintFramework.h"
#include "Widgets/Layout/SConstraintCanvas.h"

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

SBlueprintFramework::SBlueprintFramework() : SBlueprintMoveableWidget(), 
	ConstraintCanvas(nullptr), bLeftCtrl(false), bSelectedBySelectionArea(false),
	SelectedWidget(nullptr)
{
}

void SBlueprintFramework::Construct(const FArguments& InArgs)
{
}

void SBlueprintFramework::Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime)
{
	Super::Tick(AllottedGeometry, InCurrentTime, InDeltaTime);
}

void SBlueprintFramework::AddSelectedWidget(TSharedPtr<SWidget> InWidget)
{
}

void SBlueprintFramework::StartMoveSelectedWidget(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
}

void SBlueprintFramework::MoveSelectedWidget(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
}

void SBlueprintFramework::EndMoveSelectedWidget(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
}

FReply SBlueprintFramework::OnDrop(const FGeometry& MyGeometry, const FDragDropEvent& DragDropEvent)
{
	FReply Reply = Super::OnDrop(MyGeometry, DragDropEvent);
	
	
	return Reply;
}

FReply SBlueprintFramework::OnKeyDown(const FGeometry& MyGeometry, const FKeyEvent& KeyEvent)
{
	FReply Reply = Super::OnKeyDown(MyGeometry, KeyEvent);


	return Reply;
}

FReply SBlueprintFramework::OnKeyUp(const FGeometry& MyGeometry, const FKeyEvent& KeyEvent)
{
	FReply Reply = Super::OnKeyUp(MyGeometry, KeyEvent);


	return Reply;
}

FReply SBlueprintFramework::OnMouseButtonUp(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	FReply Reply = Super::OnMouseButtonUp(MyGeometry, MouseEvent);


	return Reply;
}

FReply SBlueprintFramework::OnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	FReply Reply = Super::OnMouseButtonDown(MyGeometry, MouseEvent);


	return Reply;
}

FReply SBlueprintFramework::OnMouseMove(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	FReply Reply = Super::OnMouseMove(MyGeometry, MouseEvent);


	return Reply;
}

FReply SBlueprintFramework::OnMouseWheel(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	FReply Reply = Super::OnMouseWheel(MyGeometry, MouseEvent);


	return Reply;
}

void SBlueprintFramework::OnMouseEnter(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	Super::OnMouseEnter(MyGeometry, MouseEvent);
}

void SBlueprintFramework::OnMouseLeave(const FPointerEvent& MouseEvent)
{
	Super::OnMouseLeave(MouseEvent);
}

void SBlueprintFramework::BuildSlot(TSharedPtr<SWidget> InWidget)
{
}

void SBlueprintFramework::BuildBlueprintNodeSlot()
{
}

void SBlueprintFramework::AddSlot(TSharedPtr<SWidget>& InWidget)
{
}

TSharedPtr<SWidget> SBlueprintFramework::GetCanvas() const
{
	return ConstraintCanvas;
}

void SBlueprintFramework::UpdateChildrenWidgets(TFunction<bool(TSharedRef<SBlueprintMoveableWidget>)> InMethod)
{
}

void SBlueprintFramework::UpdateChildrenNodes(TSharedPtr<SWidget> InNode, TFunction<bool(class FBlueprintWidgetInfo&)> InMethod)
{
}


#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

