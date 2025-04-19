#include "Widget/BlueprintWidget/Core/SNodeWidget.h"


#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT



SNodeWidget::SNodeWidget() :OriginPosition(0.f), OffsetPosition(0.f), NormalizedSize(1.f)
	, Ratio(1.f), ParentRatio(1.f), bStartMove(false)
{
}

FVector2D SNodeWidget::GetPosition(const SNodeWidget* InWidget)
{
	if (const TOptional<FSlateRenderTransform>& SlateRenderTransform = InWidget->GetRenderTransform())
	{
		return SlateRenderTransform->GetTranslation() * InWidget->GetParentRatio();
	}
	return InWidget->GetOriginPosition() * InWidget->GetParentRatio();
}

void SNodeWidget::UpdateRenderTransform(SWidget* InWidget, const FVector2D& InPos, 
	float WheelDelta, float Min, float Max)
{
	if (WheelDelta != 0.f)
	{//计算Ratio
		NormalizedSize += FVector2D(WheelDelta);

		if (WheelDelta > 0.f)
		{
			if (NormalizedSize.X < Max)
			{
				Ratio = NormalizedSize.X / Max;
			}
			else
			{
				NormalizedSize = FVector2D(Max);
				Ratio = 1.f;
			}
		}
		else if (WheelDelta < 0.f)
		{
			if (NormalizedSize.X >= Min)
			{
				Ratio = NormalizedSize.X / Max;
			}
			else
			{
				NormalizedSize = FVector2D(Min);
				Ratio = Min/Max;
			}
		}

	}

	FVector2D NewPosition = InPos / ParentRatio;

	InWidget->SetRenderTransform(::Concatenate(FScale2D(FVector2D(Ratio)), NewPosition));
	
	SetOriginPosition(NewPosition);
}


#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
