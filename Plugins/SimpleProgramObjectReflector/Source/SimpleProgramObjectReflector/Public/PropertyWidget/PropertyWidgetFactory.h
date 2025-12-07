#pragma once
#include "PropertyWidget/SBoolPropertyWidget.h"
#include "PropertyWidget/SEnumerationTypePropertyWidget.h"
#include "PropertyWidget/SContainerPropertyWidget.h"
#include "PropertyWidget/SNumericPropertyWidget.h"
#include "PropertyWidget/STextPropertyWidget.h"

struct FPropertyWidgetFactory
{
	enum class EValueType
	{
		None,
		Bool,
		Byte,
		Int8,
		Uint16,
		Int16,
		Uint32,
		Int32,
		Uint64,
		Int64,
		Class,
		Enum,
		Struct,
		String,
		Name,
		Text,
		Array,
		Set,
		Map

	};

	static TSharedPtr<SPropertyWidget> Create(FProperty* InPropery);
	static TSharedPtr<SPropertyWidget> Create(FNumericProperty* InPropery);
	static TSharedPtr<SPropertyWidget> Create(FObjectPropertyBase* InPropery);

	template <EValueType ValueType>
	TSharedPtr<SPropertyWidget> Create()
	{
		return nullptr;
	}



};