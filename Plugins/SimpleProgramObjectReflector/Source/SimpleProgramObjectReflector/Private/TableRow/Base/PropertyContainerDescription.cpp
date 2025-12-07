#include "TableRow/Base/PropertyContainerDescription.h"

//FInvalidContainerDescription FInvalidContainerDescription::InvalidContainerDescription = ;

void FContainerDescriptionForUClass::SetObject(UObject* InObject)
{
	Object = InObject;
	ensure(IsValid());
}

bool FContainerDescriptionForUClass::IsValid() const
{
	return Object && Object->IsValidLowLevel();
}

bool FContainerDescriptionForUClass::IsUClassObject() const
{
	return true;
}

bool FContainerDescriptionForUClass::IsUStructData() const
{
	return false;
}

//bool FContainerDescriptionForUClass::IsValidContainerDescription() const
//{
//	return true;
//}

bool FContainerDescriptionForUClass::IsValidProperty(FProperty* InProperty) const
{
	//InProperty->Owner 1. UClass 2. UScript 3. ContainerProperty¼´FProperty/FField
	return InProperty && InProperty->Owner.IsUObject()
		&& InProperty->Owner.ToUObject() == GetClass() 
		&& GetClass()->IsValidLowLevel()
		&& GetClass()->FindPropertyByName(InProperty->GetFName()) == InProperty;
}

void* FContainerDescriptionForUClass::GetRawPtr() const
{
	return GetClass();
}

UClass* FContainerDescriptionForUClass::GetClass() const
{
	if(ensure(IsValid()))
	{
		return Object->GetClass();
	}
	return nullptr;
}

FContainerDescriptionForUScriptStruct::FContainerDescriptionForUScriptStruct(uint8* InStructData, 
	UScriptStruct* InStructClass)
	:IContainerDescription(), StructData(InStructData), StructClass(InStructClass)
{
	InitializeStructDefaultValue();
}

void FContainerDescriptionForUScriptStruct::SetStructData(uint8* InStructData, UScriptStruct* InStructClass)
{
	InitializeStructDefaultValue();
}

bool FContainerDescriptionForUScriptStruct::IsValid() const
{
	return StructData && StructClass && StructClass->IsValidLowLevel();
}

bool FContainerDescriptionForUScriptStruct::IsUClassObject() const
{
	return false;
}

bool FContainerDescriptionForUScriptStruct::IsUStructData() const
{
	return true;
}

//bool FContainerDescriptionForUScriptStruct::IsValidContainerDescription() const
//{
//	return true;
//}

bool FContainerDescriptionForUScriptStruct::IsValidProperty(FProperty* InProperty) const
{
	//InProperty->Owner 1. UClass 2. UScript 3. ContainerProperty¼´FProperty/FField
	return InProperty && InProperty->Owner.IsUObject() 
		&& InProperty->Owner.ToUObject() == StructClass
		&& StructClass->IsValidLowLevel()
		&& StructClass->FindPropertyByName(InProperty->GetFName()) == InProperty;
}

void* FContainerDescriptionForUScriptStruct::GetRawPtr() const
{
	if(StructClass && StructClass->IsValidLowLevel())
	{
		return StructClass;
	}
	return nullptr;
}

UScriptStruct* FContainerDescriptionForUScriptStruct::GetStructClass() const
{
	if (StructClass && StructClass->IsValidLowLevel())
	{
		return StructClass;
	}
	return nullptr;
}

void FContainerDescriptionForUScriptStruct::InitializeStructDefaultValue()
{
	if (StructClass && StructClass->IsValidLowLevel() 
		&& StructClass == CachedContainerDefaultValue.GetStruct()
		&& !CachedContainerDefaultValue.GetStructMemory())
	{
		CachedContainerDefaultValue.Initialize(StructClass);
	}
}

TSharedPtr<IContainerDescription> IContainerDescription::CreateContainerDescriptionForUScriptStruct(uint8* InData, 
	UScriptStruct* InScriptStruct)
{
	if (InData && InScriptStruct && InScriptStruct->IsValidLowLevel())
	{
		return MakeShareable(new FContainerDescriptionForUScriptStruct(InData, InScriptStruct));
	}
	return nullptr;
}

TSharedPtr<IContainerDescription> IContainerDescription::CreateContainerDescriptionForUClass(UObject* InData)
{
	if (InData && InData->IsValidLowLevel())
	{
		return MakeShareable(new FContainerDescriptionForUClass(InData));
	}
	return nullptr;
}