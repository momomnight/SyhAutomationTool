#include "Widget/BlueprintWidget/Core/SBlueprintBaseWidget.h"


#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT



SBlueprintBaseWidget::SBlueprintBaseWidget() :
	OffsetPosition(0.f), LastOffsetPosition(0.f), WidgetType(EBlueprintWidgetType::None)
{
}

void SBlueprintBaseWidget::UpdateRenderTransform(SWidget* InWidget, const FVector2D& InPos,
	float WheelDelta, float Min, float Max)
{
	/*if (WheelDelta != 0.f)
	{	
		InWidget->CalculateNormalizedSizeAndRatio(WheelDelta, Min, Max);
	}*/
	if(InWidget)
	{
		InWidget->SetRenderTransform(::Concatenate(FScale2D(1), InPos));
	}

	//InWidget->SetOriginPosition(NewPosition);
}

void SBlueprintBaseWidget::UpdateRenderTransform(SWidget* InWidget, const FVector2D& InPos, const FScale2D& InScale)
{
	//InWidget->LastOriginPosition = InPos;
	if (InWidget)
	{
		InWidget->SetRenderTransform(::Concatenate(InScale, InPos));
	}
	//InWidget->SetOriginPosition(InPos);
}

//void SBlueprintBaseWidget::CalculateNormalizedSizeAndRatio(float WheelDelta, float Min, float Max)
//{
//
//	float Value = FMath::Clamp<float>((NormalizedSize + FVector2D(WheelDelta)).X, Min, Max);
//
//	//	Min <= NormalizedSize < Max
//	NormalizedSize.Set(Value, Value);
//
//	//	(Min / Max) <= Ratio <= 1
//	Ratio = FMath::Clamp<float>(NormalizedSize.X / Max, Min / Max, 1.f);
//}


#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
