#include "Widget/BlueprintWidget/SBlueprintPin.h"
#include "Widget/WidgetCommonMethod.h"
#include "Widget/BlueprintWidget/SBlueprintFramework.h"
#include "Widget/BlueprintWidget/SBlueprintNode.h"

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT



void SBlueprintPin::Construct(const FArguments& InArgs)
{
	Framework = GetWidgetWP<SBlueprintFramework>(InArgs._Framework);
	Owner = GetWidgetWP<SBlueprintNode>(InArgs._Owner);

	PinConnectionDirection = InArgs._PinConnectionDirection;
	PinEdge = InArgs._PinEdge;
	PinType = InArgs._PinType;

	Name = InArgs._Name;

	ChildSlot
	[
		SNew(SBox)
		.WidthOverride(15.f)
		.HeightOverride(15.f)
		[
			SNew(SOverlay)
			+ SOverlay::Slot()
			.HAlign(HAlign_Fill)
			.VAlign(VAlign_Fill)
			[
				SNew(SButton)
			]
		]
	];

}

FReply SBlueprintPin::OnMouseButtonUp(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	return Super::OnMouseButtonUp(MyGeometry, MouseEvent);
}

FReply SBlueprintPin::OnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	return Super::OnMouseButtonDown(MyGeometry, MouseEvent);
}

FReply SBlueprintPin::OnMouseMove(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	return Super::OnMouseMove(MyGeometry, MouseEvent);
}

FReply SBlueprintPin::OnMouseButtonDoubleClick(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	return Super::OnMouseButtonDoubleClick(MyGeometry, MouseEvent);
}

FReply SBlueprintPin::OnDragDetected(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	return Super::OnDragDetected(MyGeometry, MouseEvent);
}

FReply SBlueprintPin::OnDrop(const FGeometry& MyGeometry, const FDragDropEvent& DragDropEvent)
{
	return Super::OnDrop(MyGeometry, DragDropEvent);
}


#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
