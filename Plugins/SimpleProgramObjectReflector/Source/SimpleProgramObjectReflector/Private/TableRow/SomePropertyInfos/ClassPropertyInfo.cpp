#include "TableRow/ClassPropertyInfo.h"
#include "PropertyWidget/SEnumerationTypePropertyWidget.h"
//UClass* / TSubClassOf<UObject>
//CASTCLASS_FClassProperty | CASTCLASS_FObjectProperty
//| CASTCLASS_FObjectPropertyBase | CASTCLASS_FProperty
//
//TObjectPtr<UClass>
//CASTCLASS_FClassPtrProperty
//| CASTCLASS_FClassProperty | CASTCLASS_FObjectProperty
//| CASTCLASS_FObjectPropertyBase | CASTCLASS_FProperty
//
//TSoftClassPtr<UObject>
//CASTCLASS_FSoftClassProperty
//| CASTCLASS_FSoftObjectProperty | CASTCLASS_FObjectPropertyBase
//| CASTCLASS_FProperty
UE_DISABLE_OPTIMIZATION

#define LOCTEXT_NAMESPACE "FClassPropertyInfo"

FClassPropertyInfo::FClassPropertyInfo() 
	: ClassFilter(MakeShareable(new FBaseClassFilter))
	, ExtraClassFilter(nullptr)
{

}


TSharedPtr<SPropertyWidget> FClassPropertyInfo::MakePropertyWidget()
{
	check(IsValid());
	ensure(FillWeakClassArray());

	TSharedRef<SClassPropertyWidget> ClassPropertyWidget = SNew(SClassPropertyWidget);

	ClassPropertyWidget->GetOnChangeEnumerationItem().BindSP(this, &FClassPropertyInfo::OnChangeClassTypeValue);

	ClassPropertyWidget->GetOnCollectEnumerationItems().BindSP(this, &FClassPropertyInfo::CollectClassTypes);

	ClassPropertyWidget->GetOnGetCurrentEnumerationItem().BindSP(this,&FClassPropertyInfo::OnGetCurrentClassType);

	ClassPropertyWidget->GetOnGetEnumerationItemText().BindSP(this, &FClassPropertyInfo::OnGetClassTypeDisplayName);

	return ClassPropertyWidget;
}

bool FClassPropertyInfo::IsValid() const
{
	return Super::IsValid() && CastField<FClassProperty>(GetProperty());
}

TArray<TWeakObjectPtr<UClass>> FClassPropertyInfo::CollectClassTypes()
{
	if (!CheckClassArrayValid() && !FillWeakClassArray())
	{
		WeakClassArray.Empty(WeakClassArray.Max());
	}
	return WeakClassArray;
}

void FClassPropertyInfo::OnChangeClassTypeValue(TWeakObjectPtr<UClass> InClass)
{
	if (ensure(IsValid()))
	{
		for (auto Iter = WeakClassArray.CreateConstIterator(); Iter; ++Iter)
		{
			if ((*Iter) == InClass)
			{
				FPropertyMethod::SetPropertyValue<TObjectPtr<UObject>>(GetProperty(),
					GetContainerDescription()->GetRawPtr(), InClass.Get());
				return;
			}
		}
		UE_LOG(LogSimpleProgramObjectReflector, Warning, TEXT("Not to find the Class!"));
	}
}

TWeakObjectPtr<UClass> FClassPropertyInfo::OnGetCurrentClassType()
{
	if (ensure(IsValid()))
	{
		TObjectPtr<UObject> Value = nullptr;
		FPropertyMethod::GetPropertyValue<TObjectPtr<UObject>>(GetProperty(), GetContainerDescription()->GetRawPtr(),
			Value);

		return Cast<UClass>(Value.Get());
	}
	return nullptr;
}

FText FClassPropertyInfo::OnGetClassTypeDisplayName(TWeakObjectPtr<UClass> InClass)
{
	if (InClass.IsValid())
	{
		return InClass->GetDisplayNameText();
	}
	return LOCTEXT("ClassTypeEmptyTextName","None");
}

UClass* FClassPropertyInfo::FindClass(FClassProperty* InClassProperty) const
{
	FName ClassName = InClassProperty->GetFName();

	//会排除具有以下标记的对象
	//	EInternalObjectFlags::PendingKill) | EInternalObjectFlags::Garbage | 
	//	EInternalObjectFlags::Unreachable | EInternalObjectFlags::PendingConstruction
	//	
	for (TObjectIterator<UClass> Iter; Iter; ++Iter)
	{
		auto Class = *Iter;
		if (Class->GetFName() == ClassName)
		{
			return Class;
		}
	}
	return nullptr;
}

bool FClassPropertyInfo::CheckClassArrayValid() const
{
	if (!IsValid() || !PropertyBaseClass.IsValid())
	{
		return false;
	}

	for (auto Iter = WeakClassArray.CreateConstIterator(); Iter; ++Iter)
	{
		if (!Iter->IsValid())
		{
			return false;
		}
	}
	return true;
}

bool FClassPropertyInfo::FillWeakClassArray()
{
	if (ensure(IsValid()))
	{
		if (!PropertyBaseClass.IsValid())
		{
			FClassProperty* ClassPtrProperty = CastField<FClassProperty>(GetProperty());
			PropertyBaseClass = FindClass(ClassPtrProperty);
			if (!PropertyBaseClass.IsValid())
			{
				return false;
			}
		}

		TArray<UClass*> ClassArray = RecollectClasses(PropertyBaseClass.Get());
		WeakClassArray.Empty(WeakClassArray.Max());
		WeakClassArray.Add(TWeakObjectPtr<UClass>());//添加nullptr选项
		for (auto Iter = ClassArray.CreateConstIterator(); Iter; ++Iter)
		{
			UClass* Class = *Iter;
			if (Class && (*ClassFilter)(Class))
			{
				if (ExtraClassFilter.IsValid())
				{
					if ((*ExtraClassFilter)(Class))
					{
						WeakClassArray.Add(Class);
					}
				}
				else
				{
					WeakClassArray.Add(Class);
				}
			}
		}

		return true;
	}
	return false;
}

TArray<UClass*> FClassPropertyInfo::RecollectClasses(UClass* InBaseClass)
{
	TArray<UClass*> ClassArray;
	if (InBaseClass && InBaseClass->IsValidLowLevel())
	{		
		ClassArray.Add(InBaseClass);
		GetDerivedClasses(InBaseClass, ClassArray, true);
	}
	return ClassArray;
}

bool FClassPropertyInfo::FBaseClassFilter::operator()(UClass* InClass) const
{
	if (InClass->HasAnyClassFlags(
		EClassFlags::CLASS_Abstract
		| EClassFlags::CLASS_Deprecated
		| EClassFlags::CLASS_NewerVersionExists
		| EClassFlags::CLASS_HideDropDown
	))
	{

		return false;
	}

	//Cast<UBlueprintGeneratedClass>()属于Engine
	
#if WITH_EDITORONLY_DATA
	if (!InClass->ClassGeneratedBy.IsNull())
	{
		return false;
	}
#endif

	return true;
}

#undef LOCTEXT_NAMESPACE

UE_ENABLE_OPTIMIZATION
