#include "Widget/BlueprintWidget/Core/SBlueprintMoveableWidget.h"




#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT


SBlueprintMoveableWidget::SBlueprintMoveableWidget() : SBlueprintBaseWidget(), 
	bStartMove(false), ParentWidget(nullptr)
{
}

void SBlueprintMoveableWidget::StartMove(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	this->bStartMove = true;
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


	AbsolutePosition = this->GetCachedGeometry().GetAbsolutePosition();

	//MouseEvent.GetScreenSpacePosition()	鼠标位置
	//AbsolutePosition						控件左上角坐标
	this->SetOffsetPosition(MouseEvent.GetScreenSpacePosition() - AbsolutePosition);
}

void SBlueprintMoveableWidget::Move(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	if (bStartMove)
	{
		FVector2D CurOffsetPosition = MouseEvent.GetScreenSpacePosition() - AbsolutePosition;
		FVector2D IncreOffsetPosition = CurOffsetPosition - this->GetOffsetPosition();

		FVector2D CurPosition = IncreOffsetPosition + LastOriginPosition;
		if (ParentWidget.IsValid())
		{
			UpdateRenderTransform(GetRaw<SBlueprintBaseWidget>(ParentWidget), CurPosition);
		}
		else
		{
			UpdateRenderTransform(this, CurPosition);
		}
	}
}

void SBlueprintMoveableWidget::EndMove(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	bStartMove = false;
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
