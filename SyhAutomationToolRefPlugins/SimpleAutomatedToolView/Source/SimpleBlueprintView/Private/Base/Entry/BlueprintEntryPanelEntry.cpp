#include "Base/Entry/BlueprintEntryPanelEntry.h"
#include "Base/Entry/BlueprintNodeEntry.h"
#include "Base/CommonMethod.h"



#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

static constexpr TCHAR PanelName[] = TEXT("Panel");

FBlueprintEntryPanelEntry::FBlueprintEntryPanelEntry() : FBlueprintEntryBase()
{
}

FBlueprintEntryPanelEntry::~FBlueprintEntryPanelEntry()
{

}

void FBlueprintEntryPanelEntry::Initialize()
{
	//View, 属性数据由MakeWidget()设置
	this->Super::Initialize(nullptr, this->AsShared(), PanelName);
}

void FBlueprintEntryPanelEntry::Deinitialize()
{
	this->Super::Deinitialize();
}

bool FBlueprintEntryPanelEntry::InitializeSelf()
{
	//this的Root设置快于子节点
	for (auto& Node : Nodes)
	{
		if (!Node->IsInitialized())
		{
			Node->Initialize(this->AsShared(), this->GetRoot());
			if (!Node->IsInitialized())
			{
				return false;
			}
		}
	}

	//反序列化？
	return true;
}

void FBlueprintEntryPanelEntry::DeinitializeSelf()
{
	//序列化？
	this->ClearChildren();
}

const FPanelWidgetFactory& FBlueprintEntryPanelEntry::GetWidgetFactory()
{
	static FPanelWidgetFactory PanelWidgetFactory;
	return PanelWidgetFactory;
}

TArray<TSharedPtr<const FBlueprintEntryBase>> FBlueprintEntryPanelEntry::GetChildren() const
{
	return TArray<TSharedPtr<const FBlueprintEntryBase>>(Nodes);
}

TArray<TSharedPtr<FBlueprintEntryBase>> FBlueprintEntryPanelEntry::GetChildren()
{
	return TArray<TSharedPtr<FBlueprintEntryBase>>(Nodes);
}

TSharedPtr<const FBlueprintEntryBase> FBlueprintEntryPanelEntry::FindChild(int32 Index) const  
{ return Super::FindChild(Nodes, Index); }

TSharedPtr<FBlueprintEntryBase> FBlueprintEntryPanelEntry::FindChild(int32 Index)  
{ return Super::FindChild(Nodes, Index); }

int32 FBlueprintEntryPanelEntry::FindChild(TSharedPtr<FBlueprintEntryBase> InChild) const  
{ return Super::FindChild(Nodes, GetTypeSP<FBlueprintNodeEntry>(InChild)); }

bool FBlueprintEntryPanelEntry::Contains(TSharedPtr<FBlueprintEntryBase> InChild) const  
{ return Super::Contains(Nodes, GetTypeSP<FBlueprintNodeEntry>(InChild)); }

int32 FBlueprintEntryPanelEntry::AddChild(TSharedPtr<FBlueprintEntryBase> InChild)  
{ return Super::AddChild(Nodes, GetTypeSP<FBlueprintNodeEntry>(InChild)); }

TSharedPtr<FBlueprintEntryBase> FBlueprintEntryPanelEntry::RemoveChild(TSharedPtr<FBlueprintEntryBase> InChild)  
{ return Super::RemoveChild(Nodes, GetTypeSP<FBlueprintNodeEntry>(InChild)); }

TSharedPtr<FBlueprintEntryBase> FBlueprintEntryPanelEntry::RemoveChild(int32 Index)  
{ return Super::RemoveChild(Nodes, Index); }

void FBlueprintEntryPanelEntry::ClearChildren()
{
	TSharedPtr<IBlueprintWidgetBase> ThisView = GetView();
	if (ThisView.IsValid())
	{
		ClearChildrenWidget(ThisView);
	}
	Super::ClearChildren(Nodes);
}

void FBlueprintEntryPanelEntry::UpdateForAllChildren(ExecutionMethod InExecution) 
{ 
	Super::UpdateForAllChildren(Nodes, InExecution); 
}
void FBlueprintEntryPanelEntry::UpdateForChildren(ExecutionMethod InExecution, ConditionMethod InCondition) 
{ 
	Super::UpdateForChildren(Nodes, InExecution, InCondition); 
}
bool FBlueprintEntryPanelEntry::JudgeAllChildren(JudgementMethod InJudgement) const 
{ 
	return Super::JudgeAllChildren(Nodes, InJudgement); 
}
bool FBlueprintEntryPanelEntry::JudgeChildren(JudgementMethod InJudgement, ConditionMethod InCondition) const 
{ 
	return Super::JudgeChildren(Nodes, InJudgement, InCondition); 
}

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

#include "Base/Entry/BlueprintNode_End.h"
#include "Base/Entry/BlueprintNode_Function.h"
#include "Base/Entry/BlueprintNode_HookPoint.h"
#include "Base/Entry/BlueprintNode_Param.h"
#include "Base/Entry/BlueprintNode_Start.h"
#include "Base/Entry/BlueprintNode_Tick.h"

#include "Base/Entry/BlueprintPin_ExecInput.h"
#include "Base/Entry/BlueprintPin_ExecOutput.h"
#include "Base/Entry/BlueprintPin_ParamInput.h"
#include "Base/Entry/BlueprintPin_ParamOutput.h"

#include "Base/Widget/Panel/SBlueprintEntryPanelWidget.h"
#include "Base/Widget/Pin/SBlueprintPinWidget.h"
#include "Base/Widget/Node/SBlueprintNodeWidget.h"

TSharedPtr<SWidget> FBlueprintEntryPanelEntry::TestCreate()
{
	//先初始化
	this->Initialize();

	TSharedPtr<FBlueprintNode_End> NodeEnd				= MakeShareable(new FBlueprintNode_End);
	TSharedPtr<FBlueprintNode_Function> NodeFunction	= MakeShareable(new FBlueprintNode_Function);
	TSharedPtr<FBlueprintNode_HookPoint> NodeHookPoint	= MakeShareable(new FBlueprintNode_HookPoint);
	TSharedPtr<FBlueprintNode_Param> NodeParam			= MakeShareable(new FBlueprintNode_Param);
	TSharedPtr<FBlueprintNode_Start> NodeStart			= MakeShareable(new FBlueprintNode_Start);
	TSharedPtr<FBlueprintNode_Tick> NodeTick			= MakeShareable(new FBlueprintNode_Tick);


	this->AddChild(NodeEnd);
	this->AddChild(NodeFunction);
	this->AddChild(NodeHookPoint);
	this->AddChild(NodeParam);
	this->AddChild(NodeStart);
	this->AddChild(NodeTick);
	TSharedPtr<FBlueprintPin_ParamOutput> StringOutput1 = MakeShareable(new FBlueprintPin_ParamOutput);
	TSharedPtr<FBlueprintPin_ParamOutput> StringOutput2 = MakeShareable(new FBlueprintPin_ParamOutput);
	TSharedPtr<FBlueprintPin_ParamInput> StringInput3 = MakeShareable(new FBlueprintPin_ParamInput);

	NodeParam->AddParamOutput(StringOutput1);
	NodeParam->AddParamOutput(StringOutput2);
	NodeParam->AddParamInput(StringInput3);
	return this->MakeSWidget();
}

void FBlueprintEntryPanelEntry::TestDestory()
{
	if(Nodes.IsValidIndex(0))
	{
		this->DestoryChild(0);
	}

}

#endif




#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT