#pragma once
#include "Templates/SharedPointer.h"
#include "Widgets/SWidget.h"

//用以判别蓝图基础类型
enum class SIMPLEBLUEPRINTVIEW_API EBlueprintEntryType : uint8
{
	None,
	Node,
	Pin,
	Panel
};
using EBlueprintWidgetType = EBlueprintEntryType;

//Pin
enum class SIMPLEBLUEPRINTVIEW_API EBlueprintPinType : uint8
{
	None,
	Exec = 1,
	Param = 1 << 1,
	Input = 1 << 2,
	Output = 1 << 3,

	Exec_Input		= Exec | Input,	
	Exec_Output		= Exec | Output,
	Param_Input		= Param | Input,
	Param_Output	= Param | Output,
};
ENUM_CLASS_FLAGS(EBlueprintPinType);

enum class SIMPLEBLUEPRINTVIEW_API EBlueprintPinValueType : uint8
{
	None,
	Bool,
	Int8,
	Int16,
	Int32,
	Int64,
	UInt8,
	UInt16,
	UInt32,
	UInt64,
	Float,
	Double,
	FString,
	FText,
	FName
};

//Node
enum class SIMPLEBLUEPRINTVIEW_API EBlueprintNodeType : uint8
{
	None,
	Start,
	End,
	Tick, //定时执行
	Function,//用于执行功能
	Param,//用于传递参数
	HookPoint, //用于样条线挂钩
};

template <EBlueprintNodeType NodeType>
constexpr bool CanAddPinOnNode = false;

template <>  constexpr bool CanAddPinOnNode<EBlueprintNodeType::Function> = true;
template <> constexpr bool CanAddPinOnNode<EBlueprintNodeType::Param> = true;

//DragDropType
enum class SIMPLEBLUEPRINTVIEW_API EBlueprintDragDropType : uint8
{
	None,
	CreateNode,
	DragDropPin
};

