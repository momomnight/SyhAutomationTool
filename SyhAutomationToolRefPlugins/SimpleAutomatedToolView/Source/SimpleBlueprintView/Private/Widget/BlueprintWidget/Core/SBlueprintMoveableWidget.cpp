#include "Widget/BlueprintWidget/Core/SBlueprintMoveableWidget.h"
#include "Widget/WidgetCommonMethod.h"



#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT


SBlueprintMoveableWidget::SBlueprintMoveableWidget() : SBlueprintBaseWidget(), 
	bStartMove(false), MoveableWidget(nullptr)
{
}

void SBlueprintMoveableWidget::StartMove(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	this->bStartMove = true;
}

void SBlueprintMoveableWidget::Move(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{	
	if (bStartMove && MouseEvent.GetCursorDelta() != 0)
	{
		bIsMoved = true;
		SetOffsetPosition(GetOffsetPosition() + MouseEvent.GetCursorDelta());
	}
}

void SBlueprintMoveableWidget::EndMove(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	bStartMove = false;
	bIsMoved = false;
}

void SBlueprintMoveableWidget::Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime)
{
	Super::Tick(AllottedGeometry, InCurrentTime, InDeltaTime);
}

void SBlueprintMoveableWidget::ClearAllState()
{
	bIsMoved = false;
	bStartMove = false;
}

void SBlueprintMoveableWidget::Update()
{
	if (GetLastOffsetPosition() != GetOffsetPosition())
	{

		if (MoveableWidget.IsValid())
		{
			UpdateRenderTransform(GetWidgetRaw<SWidget>(MoveableWidget), GetOffsetPosition());
		}
		else
		{
			UpdateRenderTransform(this, GetOffsetPosition());
		}
		SetOffsetPosition(GetOffsetPosition());
	}

}






#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
