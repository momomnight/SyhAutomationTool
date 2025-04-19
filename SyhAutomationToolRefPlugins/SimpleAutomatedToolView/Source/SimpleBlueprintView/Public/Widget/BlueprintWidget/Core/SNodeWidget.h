#pragma once

#include "Widgets/SCompoundWidget.h"
#include "SimpleBlueprintViewType.h"
#include "Containers/UnrealString.h"


class SNodeWidget : public SCompoundWidget
{
public:
	SNodeWidget();


public:
	void SetOffsetPosition(const FVector2D& InPos){ OffsetPosition = InPos;}
	void SetOriginPosition(const FVector2D& InPos) { OriginPosition = InPos; }

	FVector2D GetOffsetPosition() const { return OffsetPosition; }
	FVector2D GetOriginPosition() const { return OriginPosition; }
	FVector2D GetNormalizedSize() const { return NormalizedSize; }
public:
	static FVector2D GetPosition(const SNodeWidget* InWidget);
	FVector2D GetPosition() const { return GetPosition(this); }

public:
	void UpdateRenderTransform(SWidget* InWidget, const FVector2D& InPos, 
		float WheelDelta = 0.f, float Min = 10.f, float Max = 20.f);

protected:
	float GetRatio() const {return Ratio;}
	float GetParentRatio() const { return ParentRatio; }

protected:
	FString NodeName;

	FVector2D OriginPosition;
	FVector2D LastOriginPosition;
	FVector2D OffsetPosition;//相对位置

	FVector2D NormalizedSize;//默认为1
	float Ratio;
	float ParentRatio;

	bool bStartMove;
};