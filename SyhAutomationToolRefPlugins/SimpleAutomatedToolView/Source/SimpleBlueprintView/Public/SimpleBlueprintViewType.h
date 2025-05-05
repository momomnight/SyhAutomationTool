#pragma once
#include "Templates/SharedPointer.h"
#include "Widgets/SWidget.h"

//Pin
enum class EBlueprintPinType : uint8
{
	None,
	Exec_Input,
	Exec_Output,
	Param_Input,
	Param_Output
};

enum class EBlueprintPinsLayout : uint8
{
	None,
	Separation,//Pin的输入输出分开
	Aggregation//Pin的输入输出聚合在一起
};

enum class EBlueprintExecutionDirection : uint8
{
	None,
	TopToBottom,
	LeftToRight
};

enum class EBlueprintPinEdge : uint8
{
	None,
	Top,
	Bottom,
	Left,
	Right
};

//
enum class EBlueprintWidgetType : uint8
{
	None,
	Node,
	Connection,
};

struct SIMPLEBLUEPRINTVIEW_API FBlueprintWidgetInfo
{
	EBlueprintWidgetType Type{ EBlueprintWidgetType::None };
	TSharedPtr<SWidget> Node{ nullptr };
};