#include "Base/WidgetFactory.h"
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

TSharedPtr<IBlueprintWidgetBase> FPanelWidgetFactory::CreateWidget(TSharedPtr<FBlueprintEntryBase> InEntry) const
{
	TSharedPtr<IBlueprintWidgetBase> Widget = nullptr;

	if (InEntry.IsValid() && InEntry->GetBlueprintEntryType() == EBlueprintEntryType::Panel)
	{
		Widget = SNew(SBlueprintEntryPanelWidget);
	}

	return Widget;
}

TSharedPtr<IBlueprintWidgetBase> FNodeWidgetFactory::CreateWidget(TSharedPtr<FBlueprintEntryBase> InEntry) const
{
	TSharedPtr<IBlueprintWidgetBase> Result = nullptr;
	if (InEntry.IsValid() && InEntry->GetBlueprintEntryType() == EBlueprintEntryType::Node)
	{
		TSharedPtr<FBlueprintNodeEntry> NodeEntry = StaticCastSharedPtr<FBlueprintNodeEntry>(InEntry);
		switch (NodeEntry->GetNodeType())
		{
		case EBlueprintNodeType::Start:
		{
			Result = SNew(SBlueprintNodeWidget);
			break;
		}
		case EBlueprintNodeType::Tick:
		{
			Result = SNew(SBlueprintNodeWidget);
			break;
		}
		case EBlueprintNodeType::Function:
		{
			Result = SNew(SBlueprintNodeWidget);
			break;
		}
		case EBlueprintNodeType::Param:
		{
			Result = SNew(SBlueprintNodeWidget);
			break;
		}
		case EBlueprintNodeType::HookPoint:
		{
			Result = SNew(SBlueprintNodeWidget);
			break;
		}
		case EBlueprintNodeType::End:
		{
			Result = SNew(SBlueprintNodeWidget);
			break;
		}
		case EBlueprintNodeType::None:
		default:
			break;
		}
	}
	return Result;
}

TSharedPtr<IBlueprintWidgetBase> FPinWidgetFactory::CreateWidget(TSharedPtr<FBlueprintEntryBase> InEntry) const
{
	TSharedPtr<IBlueprintWidgetBase> Result = nullptr;
	if (InEntry.IsValid() && InEntry->GetBlueprintEntryType() == EBlueprintEntryType::Pin)
	{
		TSharedPtr<FBlueprintPinEntry> PinEntry = StaticCastSharedPtr<FBlueprintPinEntry>(InEntry);
		switch (PinEntry->GetPinType())
		{
		case EBlueprintPinType::Exec_Input:
		{
			Result = SNew(SBlueprintPinWidget);
			break;
		}
		case EBlueprintPinType::Exec_Output:
		{
			Result = SNew(SBlueprintPinWidget);
			break;
		}
		case EBlueprintPinType::Param_Input:
		{
			Result = SNew(SBlueprintPinWidget);
			break;
		}
		case EBlueprintPinType::Param_Output:
		{
			Result = SNew(SBlueprintPinWidget);
			break;
		}
		case EBlueprintPinType::None:
		default:
			break;
		}

	}

	return Result;
}
