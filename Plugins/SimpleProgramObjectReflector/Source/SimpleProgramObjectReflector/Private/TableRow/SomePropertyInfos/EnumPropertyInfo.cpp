#include "TableRow/EnumPropertyInfo.h"


FEnumPropertyInfo::FEnumPropertyInfo()
{
}

TSharedPtr<SPropertyWidget> FEnumPropertyInfo::MakePropertyWidget()
{
	check(IsValid());
	TSharedRef<SEnumPropertyWidget> EnumPropertyWidget = SNew(SEnumPropertyWidget);
	//FEnumProperty ºÍ FByteProperty
	EnumPropertyWidget->GetOnCollectEnumerationItems().BindSP(this, &FEnumPropertyInfo::CollectEnumItem);
	EnumPropertyWidget->GetOnChangeEnumerationItem().BindSP(this, &FEnumPropertyInfo::OnChangeEnumItem);
	EnumPropertyWidget->GetOnGetCurrentEnumerationItem().BindSP(this ,&FEnumPropertyInfo::OnGetCurrentEnum);
	EnumPropertyWidget->GetOnGetEnumerationItemText().BindSP(this, &FEnumPropertyInfo::OnGetEnumText);
	return EnumPropertyWidget;
}

bool FEnumPropertyInfo::IsValid() const
{
	return Super::IsValid() && (IsByteEnum() || IsEnumClass());
}

bool FEnumPropertyInfo::IsByteEnum() const
{
	FByteProperty* ByteProperty = CastField<FByteProperty>(GetProperty());
	return Super::IsValid() && ByteProperty && ByteProperty->IsEnum();
}

bool FEnumPropertyInfo::IsEnumClass() const
{
	FEnumProperty* EnumProperty = CastField<FEnumProperty>(GetProperty());
	return Super::IsValid() && EnumProperty;
}

TArray<FName> FEnumPropertyInfo::CollectEnumItem()
{
	TArray<FName> ReturnArray;
	if (ensure(IsValid()))
	{
		UEnum* EnumClass = nullptr;
		int32 EnumNum = -1;
		if (IsByteEnum())
		{
			FByteProperty* ByteProperty = CastField<FByteProperty>(GetProperty());
			EnumClass = ByteProperty->GetIntPropertyEnum();
			EnumNum = EnumClass->NumEnums();

		}
		else
		{
			FEnumProperty* EnumProperty = CastField<FEnumProperty>(GetProperty());
			EnumClass = EnumProperty->GetEnum();
			EnumNum = EnumClass->NumEnums();
		}

		if (EnumClass && EnumNum > 0)
		{
			ReturnArray.Reserve(EnumNum);
			for (int32 I = 0; I < EnumNum; I++)
			{
				FName EnumName = EnumClass->GetNameByIndex(I);
				if (!EnumName.IsNone())
				{
					ReturnArray.Add(EnumName);
				}
			}
		}
	}
	return ReturnArray;
}

void FEnumPropertyInfo::OnChangeEnumItem(FName InEnumName)
{
	if (ensure(IsValid()))
	{
		UEnum* EnumClass = nullptr;
		if (IsByteEnum())
		{
			EnumClass = CastField<FByteProperty>(GetProperty())->GetIntPropertyEnum();
		}
		else
		{
			EnumClass = CastField<FEnumProperty>(GetProperty())->GetEnum();
		}

		if (EnumClass)
		{
			int64 EnumValue = EnumClass->GetValueByName(InEnumName);

			if (EnumClass->IsValidEnumValue(EnumValue))
			{
				FPropertyMethod::SetPropertyValue_Enum(GetProperty(), GetContainerDescription()->GetRawPtr(), EnumValue);
			}
		}
	};
}

FName FEnumPropertyInfo::OnGetCurrentEnum()
{
	if (ensure(IsValid()))
	{	
		UEnum* EnumClass = nullptr;
		if (IsByteEnum())
		{
			EnumClass = CastField<FByteProperty>(GetProperty())->GetIntPropertyEnum();
		}
		else
		{
			EnumClass = CastField<FEnumProperty>(GetProperty())->GetEnum();
		}

		if (EnumClass)
		{
			int64 Value = INDEX_NONE;
			if (FPropertyMethod::GetPropertyValue_Enum(GetProperty(), GetContainerDescription()->GetRawPtr(), Value) 
				&& EnumClass->IsValidEnumValue(Value))
			{
				return EnumClass->GetNameByValue(Value);
			}
		}
	}
	return NAME_None;
}

FText FEnumPropertyInfo::OnGetEnumText(FName InEnumName)
{
	if (ensure(IsValid()))
	{
		UEnum* EnumClass = nullptr;
		if (IsByteEnum())
		{
			EnumClass = CastField<FByteProperty>(GetProperty())->GetIntPropertyEnum();
		}
		else
		{
			EnumClass = CastField<FEnumProperty>(GetProperty())->GetEnum();
		}

		if (EnumClass)
		{
			int64 EnumValue = EnumClass->GetValueByName(InEnumName);
			if (EnumClass->IsValidEnumValue(EnumValue))
			{
				return EnumClass->GetDisplayNameTextByValue(EnumValue);
			}
		}
	}
	return FText::GetEmpty();
}

