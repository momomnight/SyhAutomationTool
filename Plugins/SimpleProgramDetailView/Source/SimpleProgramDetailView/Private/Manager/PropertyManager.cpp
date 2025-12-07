#include "Manager/PropertyManager.h"
#include "TableRow/PropertyInfo.h"
#include "Base/Core/BuildPropertyWidget.h"
#include "SimpleProgramDetailViewStyle.h"
#include "Widgets/Layout/SWidgetSwitcher.h"
#include "Manager/PropertyDataInitParam.h"
#include "UObject/ObjectMacros.h"
#include "UObject/StructOnScope.h"

void FPropertyManager::GeneratePropertyDataChains(const FPropertyDataInitParam& InInitParam, bool bIncludeSuper)
{
	if (InInitParam.IsValid())
	{
		PropertyInfoArray.AddUnique(NoCategoryPropertyInfo);

		//是否包含父类属性
		EFieldIterationFlags Flags = EFieldIterationFlags::Default;
		if (!bIncludeSuper)
		{
			EnumRemoveFlags(Flags, EFieldIterationFlags::IncludeSuper);
		}

		UStruct* Struct = nullptr;

		//收集类或者结构体容器及默认值信息
		if (InInitParam.IsUClass())
		{
			UObject* Obj = InInitParam.GetObjectContainer();
			Struct = Obj->GetClass();
		}
		else
		{
			Struct = InInitParam.GetUScriptStruct();
			CachedStructDefaultValue = FStructOnScope(Struct);
		}

		//疑似不需要
		if (InInitParam.GeneralSettings.bRegisterContainerClass)
		{
			RegisteredUStructNames.Add(Struct->GetFName());
		}

		for (TFieldIterator<FProperty> Iter(Struct, Flags); Iter; ++Iter)
		{
			FProperty* Property = *Iter;
			
			//类别
			FName CategoryName = NoCategoryPropertyInfo->GetName();
			if (InInitParam.OnGetPropertyCategory.IsBound())
			{
				CategoryName = InInitParam.OnGetPropertyCategory.Execute(Property);
			}

			TSharedPtr<FPropertyInfo> CategoryInfo = nullptr;
			if (CategoryName != NoCategoryPropertyInfo->GetName())
			{
				CategoryInfo = FPropertyInfoFactory::CreateCategory(CategoryName);

				//新创建的类别加入数组
				if (ensure(CategoryInfo.IsValid()))
				{
					int32 Index = PropertyInfoArray.AddUnique(CategoryInfo);
					CategoryInfo = PropertyInfoArray[Index];
				}
				else
				{
					continue;//跳过出错的属性信息
				}
			}
			else
			{
				CategoryInfo = NoCategoryPropertyInfo;
			}

			//创建单项属性信息
			CreateSingleItem(CategoryInfo, Property, InInitParam.Container);		
		}
	}
}

TSharedRef<SWidget> FPropertyManager::GenerateDetailWidget()
{
	TreeView = SNew(STreeView<TSharedPtr<FPropertyInfo>>)
		.ItemHeight(10.f)
		.OnIsSelectableOrNavigable(STreeView<TSharedPtr<FPropertyInfo>>::FIsSelectableOrNavigable::CreateLambda([](TSharedPtr<FPropertyInfo>){return false;}))
		//.OnExpansionChanged()
		.TreeItemsSource(&PropertyInfoArray)
		.OnGenerateRow(STreeView<TSharedPtr<FPropertyInfo>>::FOnGenerateRow::CreateSP(this, &FPropertyManager::OnGenerateRow))
		.OnGetChildren(STreeView<TSharedPtr<FPropertyInfo>>::FOnGetChildren::CreateSP(this, & FPropertyManager::OnGetChildren));
	return TreeView.ToSharedRef();
}

void FPropertyManager::ResetPropertyDataChains()
{
	PropertyInfoArray.Empty(PropertyInfoArray.Max());
	TreeView->RequestTreeRefresh();
	CachedStructDefaultValue.Reset();
}

void FPropertyManager::CreateSingleItem(TSharedPtr<FPropertyInfo> InParent, FProperty* InProperty, const FPropertyDataContainer& Container)
{
	EClassCastFlags PropertyClassCastFlags = (EClassCastFlags)InProperty->GetCastFlags();

	if (!EnumHasAnyFlags(CASTCLASS_UField | CASTCLASS_FProperty, PropertyClassCastFlags))
	{
		return;
	}

	switch (PropertyClassCastFlags)
	{	
	case CASTCLASS_FBoolProperty:

	case CASTCLASS_FByteProperty:

	case CASTCLASS_FInt8Property:
	case CASTCLASS_FInt16Property:
	case CASTCLASS_FUInt16Property:
	case CASTCLASS_FIntProperty:
	case CASTCLASS_FUInt32Property:
	case CASTCLASS_FInt64Property:
	case CASTCLASS_FUInt64Property:

	case CASTCLASS_FFloatProperty:
	case CASTCLASS_FDoubleProperty:

	case CASTCLASS_FNameProperty:
	case CASTCLASS_FStrProperty:
	case CASTCLASS_FTextProperty:

	case CASTCLASS_FStructProperty:
	case CASTCLASS_FArrayProperty:
	case CASTCLASS_FMapProperty:
	case CASTCLASS_FSetProperty:

	case CASTCLASS_FEnumProperty:

	case CASTCLASS_FClassProperty:
	case CASTCLASS_FSoftClassProperty:
	case CASTCLASS_FClassPtrProperty:
		break;

	case CASTCLASS_None:
	case CASTCLASS_UField:
	case CASTCLASS_FInterfaceProperty:
	case CASTCLASS_FProperty:
	case CASTCLASS_FObjectProperty:
	case CASTCLASS_UFunction:
	case CASTCLASS_FDelegateProperty:
	case CASTCLASS_FNumericProperty:
	case CASTCLASS_FMulticastDelegateProperty:
	case CASTCLASS_FObjectPropertyBase:
	case CASTCLASS_FWeakObjectProperty:
	case CASTCLASS_FLazyObjectProperty:
	case CASTCLASS_FSoftObjectProperty:
	case CASTCLASS_UPackage:
	case CASTCLASS_UEnum:
	case CASTCLASS_UStruct:
	case CASTCLASS_UScriptStruct:
	case CASTCLASS_UClass:
	case CASTCLASS_ULevel:
	case CASTCLASS_AActor:
	case CASTCLASS_APlayerController:
	case CASTCLASS_APawn:
	case CASTCLASS_USceneComponent:
	case CASTCLASS_UPrimitiveComponent:
	case CASTCLASS_USkinnedMeshComponent:
	case CASTCLASS_USkeletalMeshComponent:
	case CASTCLASS_UBlueprint:
	case CASTCLASS_UDelegateFunction:
	case CASTCLASS_UStaticMeshComponent:
	case CASTCLASS_USparseDelegateFunction:
	case CASTCLASS_FMulticastInlineDelegateProperty:
	case CASTCLASS_FMulticastSparseDelegateProperty:
	case CASTCLASS_FFieldPathProperty:
	case CASTCLASS_FObjectPtrProperty:
	case CASTCLASS_FLargeWorldCoordinatesRealProperty:
	case CASTCLASS_FOptionalProperty:
	default:
		break;
	}
	
	TSharedPtr<FPropertyInfoSingleItem> SingleItem = FPropertyInfoFactory::CreateSingleItem(InParent, InProperty, Container);
	//进行额外绑定
	if (SingleItem.IsValid())
	{	
		SingleItem->OnGetDefaultValueAddr.BindSP(this, &FPropertyManager::GetDefaultValue);
	}
}

FPropertyManager::FPropertyManager() : NoCategoryPropertyInfo(nullptr), MaxDeepth(2)
{
	NoCategoryPropertyInfo = FPropertyInfoFactory::CreateCategory("NoCategory");
}

TSharedRef<class ITableRow> FPropertyManager::OnGenerateRow(TSharedPtr<FPropertyInfo> InPropertyInfo, 
	const TSharedRef<class STableViewBase>& InOwner)
{
	if (InPropertyInfo.IsValid() && InPropertyInfo->GetName() != NAME_None)
	{
		TSharedPtr<ITableRow> TableRow = InPropertyInfo->MakeWidget(InOwner);
		if (TableRow.IsValid())
		{
			return TableRow.ToSharedRef();
		}
	}
	return FPropertyInfo::MakeNullWidget(InOwner);
}

void FPropertyManager::OnGetChildren(TSharedPtr<FPropertyInfo> InPropertyInfo, 
	TArray<TSharedPtr<FPropertyInfo>>& OutPropertyInfoChildren)
{ 
	if (InPropertyInfo.IsValid())
	{
		//

		//2.
		OutPropertyInfoChildren.Append(InPropertyInfo->GetChildren());
	}
}

uint8* FPropertyManager::GetDefaultValue(FProperty* InProperty)
{
	uint8* DefaultValueAddr = nullptr;
	if (InProperty && InProperty->IsValidLowLevel() && CachedStructDefaultValue.IsValid())
	{
		DefaultValueAddr = InProperty->ContainerPtrToValuePtr<uint8>(CachedStructDefaultValue.GetStructMemory());
	}
	return DefaultValueAddr;
}