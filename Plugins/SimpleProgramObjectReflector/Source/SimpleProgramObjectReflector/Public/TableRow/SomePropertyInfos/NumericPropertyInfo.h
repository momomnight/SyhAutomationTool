#pragma once
#include "TableRow/PropertyInfoInterface.h"
#include "PropertyWidget/SNumericPropertyWidget.h"

template <class NumericType>
class SIMPLEPROGRAMOBJECTREFLECTOR_API FNumericPropertyInfo : public ISingleItemPropertyInfo
{
public:
	using Super = ISingleItemPropertyInfo;

	//static constexpr bool IsFloatNumber = std::is_same_v<NumericType, float> || std::is_same_v<NumericType, double>;

	//static constexpr bool IsSignedIntNumber = 
	//	std::is_same_v<NumericType, int8> || 
	//	std::is_same_v<NumericType, int16>||
	//	std::is_same_v<NumericType, int32>||
	//	std::is_same_v<NumericType, int64>;
	//static constexpr bool IsUnsignedIntNumber =
	//	std::is_same_v<NumericType, uint8> ||
	//	std::is_same_v<NumericType, uint16> ||
	//	std::is_same_v<NumericType, uint32> ||
	//	std::is_same_v<NumericType, uint64>;
	//static constexpr bool IsIntNumber = IsSignedIntNumber || IsUnsignedIntNumber;

	FNumericPropertyInfo()
	{

	}

protected:
	virtual TSharedPtr<SPropertyWidget> MakePropertyWidget() override
	{
		TSharedRef<SNumericPropertyWidget<NumericType>> NumericPropertyWidget = SNew(SNumericPropertyWidget<NumericType>);		
		NumericPropertyWidget->GetOnGetValue().BindSP(this, &FNumericPropertyInfo::GetValue);
		NumericPropertyWidget->GetOnChangeValue().BindSP(this, &FNumericPropertyInfo::SetValue);
		return NumericPropertyWidget;
	}

public:
	virtual bool IsValid() const override
	{
		//uint8/uint16/uint32/uint64/int8/int16/int32/int64/float/double
		FNumericProperty* NumericProperty = CastField<FNumericProperty>(GetProperty());
		return Super::IsValid() && NumericProperty && !NumericProperty->IsEnum();
	}

protected:
	void SetValue(NumericType Value)
	{
		if (!FPropertyMethod::SetPropertyValue<NumericType>(GetProperty(), GetContainerDescription()->GetRawPtr(), Value))
		{
			UE_LOG(LogSimpleProgramObjectReflector, Warning, TEXT("SetValue Failed!"));
		}
	}
	
	TOptional<NumericType> GetValue() const
	{
		NumericType Value;
		if (!FPropertyMethod::GetPropertyValue<NumericType>(GetProperty(), GetContainerDescription()->GetRawPtr(), Value))
		{
			UE_LOG(LogSimpleProgramObjectReflector, Warning, TEXT("SetValue Failed!"));
			return TOptional<NumericType>();
		}
		return TOptional<NumericType>(Value);	
	}
};