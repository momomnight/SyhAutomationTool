#include "Widget/BlueprintWidget/Core/SBlueprintMoveableWidget.h"
#include "Widget/WidgetCommonMethod.h"



#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT


SBlueprintMoveableWidget::SBlueprintMoveableWidget() : SBlueprintBaseWidget(), 
	bStartMove(false), ParentWidget(nullptr), ViewOffset(0), OldViewOffset(0)
{
}

void SBlueprintMoveableWidget::StartMove(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	this->bStartMove = true;
	//ScreenSpacePosition以屏幕左上角为原点
	//MyGeometry.GetAbsolutePosition()目前以屏幕左上角为原点

	if (ParentWidget.IsValid())
	{
		if (const TOptional<FSlateRenderTransform>& ParentTransform = ParentWidget.Pin()->GetRenderTransform())
		{
			LastOriginPosition = ParentTransform->GetTranslation() * ParentRatio;
		}
		else
		{
			LastOriginPosition = this->GetOriginPosition() * ParentRatio;
		}
	}
	else
	{
		LastOriginPosition = this->GetPosition();
	}


	//AbsolutePosition = this->GetCachedGeometry().GetAbsolutePosition();

	//MouseEvent.GetScreenSpacePosition()	鼠标位置
	//AbsolutePosition						控件左上角坐标
	this->SetOffsetPosition(MouseEvent.GetScreenSpacePosition() - AbsolutePosition);


}

void SBlueprintMoveableWidget::Move(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{	
	if (bStartMove)
	{
		ViewOffset = OldViewOffset + MouseEvent.GetCursorDelta() * 3.f;
	}
}

void SBlueprintMoveableWidget::EndMove(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	bStartMove = false;
}

void SBlueprintMoveableWidget::Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime)
{
	Super::Tick(AllottedGeometry, InCurrentTime, InDeltaTime);

	if(ViewOffset != OldViewOffset)
	{
		if (ParentWidget.IsValid())
		{
			UpdateRenderTransform(GetWidgetRaw<SBlueprintBaseWidget>(ParentWidget), ViewOffset);
		}
		else
		{
			UpdateRenderTransform(this, ViewOffset);
		}
		OldViewOffset = ViewOffset;
	}

}

void SBlueprintMoveableWidget::OnMouseLeave(const FPointerEvent& MouseEvent)
{
	//if(MouseEvent.GetEffectingButton() == EKeys::LeftMouseButton)

	bStartMove = false;
}





#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
