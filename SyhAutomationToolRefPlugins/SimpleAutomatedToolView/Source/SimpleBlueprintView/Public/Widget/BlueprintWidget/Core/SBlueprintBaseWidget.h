#pragma once

#include "Widgets/SCompoundWidget.h"
#include "SimpleBlueprintViewType.h"
#include "Containers/UnrealString.h"
#include "SimpleBlueprintViewType.h"


class SIMPLEBLUEPRINTVIEW_API SBlueprintBaseWidget : public SCompoundWidget
{
	using Super = SCompoundWidget;
public:
	SBlueprintBaseWidget();
	
	//class FBlueprintNodeSlot : public TSlotBase<FBlueprintNodeSlot>, public TAlignmentWidgetSlotMixin<FBlueprintNodeSlot>
	//{
	//public:
	//	/** Default values for a slot. */
	//	FBlueprintNodeSlot() :
	//		TSlotBase<FBlueprintNodeSlot>(),
	//		TAlignmentWidgetSlotMixin<FBlueprintNodeSlot>(HAlign_Fill, VAlign_Fill),
	//		PinType(EBlueprintPinType::None) {
	//	}
	//	FBlueprintNodeSlot(EBlueprintPinType InPinType)
	//		: TSlotBase<FBlueprintNodeSlot>(),
	//		TAlignmentWidgetSlotMixin<FBlueprintNodeSlot>(HAlign_Fill, VAlign_Fill),
	//		PinType(InPinType)
	//	{
	//	}
	//	//融合了TSlotBase<FBlueprintNodeSlot>::FSlotArguments和TAlignmentWidgetSlotMixin<FBlueprintNodeSlot>::FSlotArgumentsMixin
	//	SLATE_SLOT_BEGIN_ARGS_OneMixin(FBlueprintNodeSlot, TSlotBase<FBlueprintNodeSlot>, TAlignmentWidgetSlotMixin<FBlueprintNodeSlot>)

	//	SLATE_ATTRIBUTE(FMargin, SlotPadding);
	//	SLATE_ATTRIBUTE(EBlueprintPinType, PinType);

	//	SLATE_SLOT_END_ARGS()

	//	void Construct(const FChildren& SlotOwner, FSlotArguments&& InArgs)
	//	{
	//		TSlotBase<FBlueprintNodeSlot>::Construct(SlotOwner, MoveTemp(InArgs));
	//		TAlignmentWidgetSlotMixin<FBlueprintNodeSlot>::ConstructMixin(SlotOwner, MoveTemp(InArgs));

	//	}
	//private:
	//	EBlueprintPinType PinType;
	//	TAttribute<FMargin> SlotPadding;

	//};

	//static FBlueprintNodeSlot::FSlotArguments Slot()
	//{
	//	return FBlueprintNodeSlot::FSlotArguments(MakeUnique<FBlueprintNodeSlot>());
	//}

	//FBlueprintNodeSlot& GetSlot(EBlueprintWidgetType InContentType, int32 SlotIndex);
	//const FBlueprintNodeSlot& GetSlot(EBlueprintWidgetType InContentType, int32 SlotIndex) const;

	//FBlueprintNodeSlot& GetNodeSlot(int32 SlotIndex);
	//const FBlueprintNodeSlot& GetNodeSlot(int32 SlotIndex) const;

	//FBlueprintNodeSlot& GetConnectionSlot(int32 SlotIndex);
	//const FBlueprintNodeSlot& GetConnectionSlot(int32 SlotIndex) const;

public:
	void SetOffsetPosition(const FVector2D& InPos) noexcept { LastOffsetPosition = OffsetPosition; OffsetPosition = InPos;}
	FVector2D GetOffsetPosition() const noexcept { return OffsetPosition; }
	FVector2D GetLastOffsetPosition() const noexcept { return LastOffsetPosition; }

	EBlueprintWidgetType GetWidgetType() { return WidgetType; }

	FVector2D GetLocalSize() const
	{
		return GetCachedGeometry().GetLocalSize();
	}

	FVector2D GetAbsoluteSize() const
	{
		return GetCachedGeometry().GetAbsoluteSize();
	}

	//void SetOriginPosition(const FVector2D& InPos) noexcept { OriginPosition = InPos; }
	//FVector2D GetOriginPosition() const noexcept { return OriginPosition; }
	
	//FVector2D GetNormalizedSize() const noexcept { return NormalizedSize; }

	const FString& GetNodeName() const {return NodeName;}
	void SetNodeName(const FString& InNodeName) { NodeName = InNodeName;}

public:
	static void UpdateRenderTransform(SWidget* InWidget, const FVector2D& InPos,
		float WheelDelta = 0.f, float Min = 10.f, float Max = 20.f);
	static void UpdateRenderTransform(SWidget* InWidget, const FVector2D& InPos,
		const FScale2D& InScale);

public:
	virtual void InvokeContextMenu(){}

protected:
	//float GetRatio() const noexcept {return Ratio;}
	//void SetRatio(float Value) noexcept {Ratio = Value;}

	//float GetParentRatio() const noexcept { return ParentRatio; }
	//void SetParentRatio(float Value) noexcept { ParentRatio = Value; }

	//void SetNormalizedSize(const FVector2D& InSize) noexcept { NormalizedSize = InSize; }

	//void CalculateNormalizedSizeAndRatio(float WheelDelta, float Min, float Max);

public:


protected:
	FString NodeName;
	
	//相对于逻辑坐标的偏移
	FVector2D OffsetPosition;
	FVector2D LastOffsetPosition;

	FVector2D RealPosition;

	EBlueprintWidgetType WidgetType;
};
