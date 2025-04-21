#include "Widget/BlueprintWidget/Core/SBlueprintBaseWidget.h"


#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT



SBlueprintBaseWidget::SBlueprintBaseWidget() :
	OriginPosition(0.f), OffsetPosition(0.f), 
	NormalizedSize(1.f), Ratio(1.f), ParentRatio(1.f)
{
}

FVector2D SBlueprintBaseWidget::GetPosition(const SBlueprintBaseWidget* InWidget)
{
	if (const TOptional<FSlateRenderTransform>& SlateRenderTransform = InWidget->GetRenderTransform())
	{
		return SlateRenderTransform->GetTranslation() * InWidget->GetParentRatio();
	}
	return InWidget->GetOriginPosition() * InWidget->GetParentRatio();
}

void SBlueprintBaseWidget::UpdateRenderTransform(SBlueprintBaseWidget* InWidget, const FVector2D& InPos,
	float WheelDelta, float Min, float Max)
{
	if (WheelDelta != 0.f)
	{	
		InWidget->CalculateNormalizedSizeAndRatio(WheelDelta, Min, Max);
	}

	FVector2D NewPosition = InPos / InWidget->ParentRatio;

	InWidget->SetRenderTransform(::Concatenate(FScale2D(InWidget->Ratio), NewPosition));

	InWidget->SetOriginPosition(NewPosition);
}

void SBlueprintBaseWidget::CalculateNormalizedSizeAndRatio(float WheelDelta, float Min, float Max)
{

	float Value = FMath::Clamp<float>((NormalizedSize + FVector2D(WheelDelta)).X, Min, Max);

	//	Min <= NormalizedSize < Max
	NormalizedSize.Set(Value, Value);

	//	(Min / Max) <= Ratio <= 1
	Ratio = FMath::Clamp<float>(NormalizedSize.X / Max, Min / Max, 1.f);
}


#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
