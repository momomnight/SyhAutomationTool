#pragma once
#include "Base/Entry/BlueprintEntryBase.h"

struct FBlueprintPinEntry;

struct SIMPLEBLUEPRINTVIEW_API FBlueprintNodeEntry : public FBlueprintEntryBase
{
	using Super = FBlueprintEntryBase;

	FBlueprintNodeEntry();
	FBlueprintNodeEntry(EBlueprintNodeType InNodeType);

	//~Begin FBlueprintEntryBase
	//~Begin FBlueprintEntryBase
	//~Begin FBlueprintEntryBase
private:
	//初始化自己
	virtual bool InitializeSelf();
	virtual void DeinitializeSelf();

public:
	//具有继承关系，可以使用协变，不要使用堆变量
	virtual const FNodeWidgetFactory& GetWidgetFactory();

	virtual EBlueprintEntryType GetBlueprintEntryType() const noexcept override { return EBlueprintEntryType::Node; }

	virtual TArray<TSharedPtr<const FBlueprintEntryBase>> GetChildren() const override;
	virtual TArray<TSharedPtr<FBlueprintEntryBase>> GetChildren() override;

	virtual FString GetDefaultName() const noexcept { return TEXT("DefaultNodeEntry"); }

	virtual TSharedPtr<const FBlueprintEntryBase> FindChild(int32 Index) const override;
	virtual TSharedPtr<FBlueprintEntryBase> FindChild(int32 Index) override;
	virtual int32 FindChild(TSharedPtr<FBlueprintEntryBase> InChild) const override;
	virtual bool Contains(TSharedPtr<FBlueprintEntryBase> InChild) const override;
	virtual int32 AddChild(TSharedPtr<FBlueprintEntryBase> InChild) override;

	virtual TSharedPtr<FBlueprintEntryBase> RemoveChild(TSharedPtr<FBlueprintEntryBase> InChild) override;
	virtual TSharedPtr<FBlueprintEntryBase> RemoveChild(int32 Index) override;
	virtual void ClearChildren() override;

	virtual void UpdateForAllChildren(ExecutionMethod InExecution) override;
	virtual void UpdateForChildren(ExecutionMethod InExecution, ConditionMethod InCondition) override;
	virtual bool JudgeAllChildren(JudgementMethod InJudgement) const override;
	virtual bool JudgeChildren(JudgementMethod InJudgement, ConditionMethod InCondition) const override;

	//~End FBlueprintEntryBase
	//~End FBlueprintEntryBase
	//~End FBlueprintEntryBase

	virtual FLinearColor GetTitleGloss() { return FLinearColor::Transparent;}
	virtual bool HasTitleRow() { return true; }

	EBlueprintNodeType GetNodeType() const noexcept { return NodeType; }

	void SetOffsetPosition(const FVector2D& InOffsetPosition) { OffsetPosition = InOffsetPosition;}
	FVector2D GetOffsetPosition() {return OffsetPosition;}

protected:
	FVector2D OffsetPosition {0, 0};//GraphPosition

private:
	EBlueprintNodeType NodeType{ EBlueprintNodeType::None };
	TArray<TSharedPtr<FBlueprintPinEntry>> Pins;
};