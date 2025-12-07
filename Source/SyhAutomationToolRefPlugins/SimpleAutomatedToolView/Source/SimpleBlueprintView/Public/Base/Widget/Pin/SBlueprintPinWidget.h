#pragma once
#include "Base/Widget/Core/IBlueprintWidgetBase.h"

struct FBlueprintEntryBase;
struct FBlueprintPinEntry;

class SBlueprintPinWidget : public SBorder, public IBlueprintWidgetBase
{
	using Super = SBorder;
public:
	SLATE_BEGIN_ARGS(SBlueprintPinWidget):
		_DisplayName(TEXT(""))
		{}

	SLATE_ARGUMENT(FString, DisplayName)

	SLATE_END_ARGS()

	SBlueprintPinWidget();
	void Construct(const FArguments& InArgs);

public:
	//virtual FReply OnMouseButtonUp(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override;

	virtual FReply OnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override;

	//virtual FReply OnMouseMove(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override;

	//virtual FReply OnMouseButtonDoubleClick(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override;

	//virtual FReply OnDragDetected(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override;

	//virtual FReply OnDrop(const FGeometry& MyGeometry, const FDragDropEvent& DragDropEvent) override;

	virtual void OnMouseEnter(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override;
	virtual void OnMouseLeave(const FPointerEvent& MouseEvent) override;

public:
	//~ Begin IBlueprintWidgetBase

	virtual EBlueprintWidgetType GetBlueprintWidgetType() const noexcept override { return EBlueprintWidgetType::Pin; }
	virtual TSharedPtr<SWidget> GetSWidget() noexcept override;
	virtual TSharedPtr<IBlueprintWidgetBase> GetWidgetBase() noexcept override;

private:
	virtual bool InitializeSelf() override;
	virtual bool DeinitializeSelf() override;

	virtual int32 FindChildWidget(TSharedPtr<IBlueprintWidgetBase>) const override { return INDEX_NONE;};
	virtual void AddChildWidget(TSharedPtr<IBlueprintWidgetBase>) override {};
	virtual void RemoveChildWidget(TSharedPtr<IBlueprintWidgetBase>) override {};
	virtual void ClearChildrenWidget() override {};

	//~ End IBlueprintWidgetBase

public:
	const FSlateBrush* GetPinIcon() const;

	EBlueprintPinType GetBlueprintPinType() const;

	TSharedPtr<FBlueprintPinEntry> GetPinEntry();
	const TSharedPtr<FBlueprintPinEntry> GetPinEntry() const;

protected:

	TSharedPtr<FBlueprintPinEntry> PinEntry;
};