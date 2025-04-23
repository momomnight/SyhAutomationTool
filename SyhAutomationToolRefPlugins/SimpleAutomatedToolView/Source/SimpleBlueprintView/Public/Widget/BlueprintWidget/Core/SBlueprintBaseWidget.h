#pragma once

#include "Widgets/SCompoundWidget.h"
#include "SimpleBlueprintViewType.h"
#include "Containers/UnrealString.h"


class SIMPLEBLUEPRINTVIEW_API SBlueprintBaseWidget : public SCompoundWidget
{
	using Super = SCompoundWidget;
public:
	SBlueprintBaseWidget();


public:
	void SetOffsetPosition(const FVector2D& InPos) noexcept { OffsetPosition = InPos;}
	FVector2D GetOffsetPosition() const noexcept { return OffsetPosition; }
	
	void SetOriginPosition(const FVector2D& InPos) noexcept { OriginPosition = InPos; }
	FVector2D GetOriginPosition() const noexcept { return OriginPosition; }
	
	FVector2D GetNormalizedSize() const noexcept { return NormalizedSize; }

	const FString& GetNodeName() const {return NodeName;}
	void SetNodeName(const FString& InNodeName) { NodeName = InNodeName;}

public:
	static FVector2D GetPosition(const SBlueprintBaseWidget* InWidget);
	FVector2D GetPosition() const noexcept { return GetPosition(this); }

public:
	static void UpdateRenderTransform(SBlueprintBaseWidget* InWidget, const FVector2D& InPos,
		float WheelDelta = 0.f, float Min = 10.f, float Max = 20.f);

protected:
	float GetRatio() const noexcept {return Ratio;}
	void SetRatio(float Value) noexcept {Ratio = Value;}

	float GetParentRatio() const noexcept { return ParentRatio; }
	void SetParentRatio(float Value) noexcept { ParentRatio = Value; }

	void SetNormalizedSize(const FVector2D& InSize) noexcept { NormalizedSize = InSize; }

	void CalculateNormalizedSizeAndRatio(float WheelDelta, float Min, float Max);

public:


protected:
	FString NodeName;

	FVector2D OriginPosition;
	FVector2D LastOriginPosition;
	FVector2D OffsetPosition;//相对位置


	FVector2D NormalizedSize;//默认为1
	float Ratio;
	float ParentRatio;

};
