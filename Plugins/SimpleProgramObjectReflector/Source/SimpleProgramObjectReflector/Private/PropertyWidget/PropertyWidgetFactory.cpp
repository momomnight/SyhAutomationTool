#include "PropertyWidget/PropertyWidgetFactory.h"
#include "CoreMinimal.h"
TSharedPtr<SPropertyWidget> FPropertyWidgetFactory::Create(FProperty* InPropery)
{
	if (!InPropery)
	{
		return nullptr;
	}

	if (FNumericProperty* NumericProperty = CastField<FByteProperty>(InPropery))
	{
		return Create(NumericProperty);
	}
	else if (FObjectPropertyBase* ObjectProperty = CastField<FObjectPropertyBase>(InPropery))
	{
		return Create(ObjectProperty);
	}
	else if (FBoolProperty* BoolProperty = CastField<FBoolProperty>(InPropery))
	{
		return SNew(SBoolPropertyWidget);
	}
	else if (FEnumProperty* EnumProperty = CastField<FEnumProperty>(InPropery))
	{
		return SNew(SEnumerationTypePropertyWidget<FName>);
	}
	else if (FNameProperty* NameProperty = CastField<FNameProperty>(InPropery))
	{

	}
	else if (FStrProperty* StrProperty = CastField<FStrProperty>(InPropery))
	{

	}
	else if (FTextProperty* TextProperty = CastField<FTextProperty>(InPropery))
	{

	}
	else if (FArrayProperty* ArrayProperty = CastField<FArrayProperty>(InPropery))
	{

	}
	else if (FSetProperty* SetProperty = CastField<FSetProperty>(InPropery))
	{

	}
	else if (FMapProperty* MapProperty = CastField<FMapProperty>(InPropery))
	{

	}


	return nullptr;
}

TSharedPtr<SPropertyWidget> FPropertyWidgetFactory::Create(FNumericProperty* InPropery)
{
	if (FByteProperty* ByteProperty = CastField<FByteProperty>(InPropery))
	{
		//uint8ºÍTEnumAsByte
	}
}

TSharedPtr<SPropertyWidget> FPropertyWidgetFactory::Create(FObjectPropertyBase* InPropery)
{

}