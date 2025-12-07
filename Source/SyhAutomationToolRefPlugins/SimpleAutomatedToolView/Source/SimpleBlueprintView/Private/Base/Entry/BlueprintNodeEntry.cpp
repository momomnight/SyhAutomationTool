#include "Base/Entry/BlueprintNodeEntry.h"
#include "Base/Entry/BlueprintPinEntry.h"



#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT


FBlueprintNodeEntry::FBlueprintNodeEntry() : FBlueprintEntryBase()
{
}

FBlueprintNodeEntry::FBlueprintNodeEntry(EBlueprintNodeType InNodeType) : FBlueprintEntryBase(), NodeType(InNodeType)
{
}

bool FBlueprintNodeEntry::InitializeSelf()
{
	//此处加入反序列化？

	//this的Root设置快于子节点
	for (auto& Pin : Pins)
	{
		if (!Pin->IsInitialized())
		{
			Pin->Initialize(this->AsShared(), this->GetRoot());
			if (!Pin->IsInitialized())
			{
				return false;
			}
		}
	}

	return true;
}

void FBlueprintNodeEntry::DeinitializeSelf()
{
	//此处加入序列化？
	//OffsetPosition = FVector2D(0, 0);
	this->ClearChildren();
}

const FNodeWidgetFactory& FBlueprintNodeEntry::GetWidgetFactory()
{
	static FNodeWidgetFactory NodeWidgetFactory;
	return NodeWidgetFactory;
}

TArray<TSharedPtr<const FBlueprintEntryBase>> FBlueprintNodeEntry::GetChildren() const
{
	return TArray<TSharedPtr<const FBlueprintEntryBase>>(Pins);
}

TArray<TSharedPtr<FBlueprintEntryBase>> FBlueprintNodeEntry::GetChildren()
{
	return TArray<TSharedPtr<FBlueprintEntryBase>>(Pins);
}

TSharedPtr<const FBlueprintEntryBase> FBlueprintNodeEntry::FindChild(int32 Index) const 
{ return Super::FindChild(Pins, Index); }

TSharedPtr<FBlueprintEntryBase> FBlueprintNodeEntry::FindChild(int32 Index) 
{ return Super::FindChild(Pins, Index); }

int32 FBlueprintNodeEntry::FindChild(TSharedPtr<FBlueprintEntryBase> InChild) const 
{ return Super::FindChild(Pins, GetTypeSP<FBlueprintPinEntry>(InChild)); }

bool FBlueprintNodeEntry::Contains(TSharedPtr<FBlueprintEntryBase> InChild) const 
{ return Super::Contains(Pins, GetTypeSP<FBlueprintPinEntry>(InChild)); }

int32 FBlueprintNodeEntry::AddChild(TSharedPtr<FBlueprintEntryBase> InChild) 
{ return Super::AddChild(Pins, GetTypeSP<FBlueprintPinEntry>(InChild)); }

TSharedPtr<FBlueprintEntryBase> FBlueprintNodeEntry::RemoveChild(TSharedPtr<FBlueprintEntryBase> InChild) 
{ return Super::RemoveChild(Pins, GetTypeSP<FBlueprintPinEntry>(InChild)); }

TSharedPtr<FBlueprintEntryBase> FBlueprintNodeEntry::RemoveChild(int32 Index) 
{ return Super::RemoveChild(Pins, Index); }

void FBlueprintNodeEntry::ClearChildren()
{
	TSharedPtr<IBlueprintWidgetBase> ThisView = GetView();
	if (ThisView.IsValid())
	{
		ClearChildrenWidget(ThisView);
	}
	Super::ClearChildren(Pins);
}

void FBlueprintNodeEntry::UpdateForAllChildren(ExecutionMethod InExecution) 
{ Super::UpdateForAllChildren(Pins, InExecution); }

void FBlueprintNodeEntry::UpdateForChildren(ExecutionMethod InExecution, ConditionMethod InCondition) 
{ Super::UpdateForChildren(Pins, InExecution, InCondition); }

bool FBlueprintNodeEntry::JudgeAllChildren(JudgementMethod InJudgement) const 
{ return Super::JudgeAllChildren(Pins, InJudgement); }

bool FBlueprintNodeEntry::JudgeChildren(JudgementMethod InJudgement, ConditionMethod InCondition) const 
{ return Super::JudgeChildren(Pins, InJudgement, InCondition); }



#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT