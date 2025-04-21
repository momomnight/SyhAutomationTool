#pragma once

#include "Widgets/SCompoundWidget.h"
#include "SimpleBlueprintViewType.h"
#include "Containers/UnrealString.h"


class SBlueprintBaseWidget : public SCompoundWidget
{
	using Super = SCompoundWidget;
public:
	SBlueprintBaseWidget();


public:
	void SetOffsetPosition(const FVector2D& InPos){ OffsetPosition = InPos;}
	void SetOriginPosition(const FVector2D& InPos) { OriginPosition = InPos; }

	FVector2D GetOffsetPosition() const { return OffsetPosition; }
	FVector2D GetOriginPosition() const { return OriginPosition; }
	FVector2D GetNormalizedSize() const { return NormalizedSize; }
public:
	static FVector2D GetPosition(const SBlueprintBaseWidget* InWidget);
	FVector2D GetPosition() const { return GetPosition(this); }

public:
	static void UpdateRenderTransform(SBlueprintBaseWidget* InWidget, const FVector2D& InPos,
		float WheelDelta = 0.f, float Min = 10.f, float Max = 20.f);

protected:
	float GetRatio() const {return Ratio;}
	float GetParentRatio() const { return ParentRatio; }

	void CalculateNormalizedSizeAndRatio(float WheelDelta, float Min, float Max);

public:

	template <class ReturnWidget, class InWidget>
	static TSharedPtr<ReturnWidget> GetSP(TWeakPtr<InWidget> Wp)
	{	
		return Wp.IsValid() ? StaticCastSharedPtr<ReturnWidget>(Wp.Pin()) : TSharedPtr<ReturnWidget>();
	}

	template <class ReturnWidget, class InWidget>
	static ReturnWidget* GetRaw(TWeakPtr<InWidget> Wp)
	{
		return static_cast<ReturnWidget*>(GetSP<ReturnWidget, InWidget>(Wp).Get());
	}

protected:
	FString NodeName;

	FVector2D OriginPosition;
	FVector2D LastOriginPosition;
	FVector2D OffsetPosition;//相对位置

	FVector2D NormalizedSize;//默认为1
	float Ratio;
	float ParentRatio;

};
