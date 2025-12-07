#include "TableRow/StaticArrayPropertyInfo.h"
#include "TableRow/PropertyInfoFactory.h"

bool FStaticArrayPropertyInfo::CheckChildren() const
{
    if (IsValid())
    {
        for (auto& Child : FixedArray)
        {
            if (ensure(Child->GetParent().Get() != this || !Child->IsValid()))
            {
                return false;
            }
        }
        return true;
    }
    return false;
}

void FStaticArrayPropertyInfo::Initialize()
{
    if (GetProperty() && FixedArray.Num() <= 0)
    {
        FixedArray.Reserve(GetProperty()->ArrayDim);
        for (int32 I = 0; I < GetProperty()->ArrayDim; ++I)
        {
            TSharedPtr<IPropertyInfoBase> PropertyInfo = FPropertyInfoFactory::CreatePropertyInfo(GetProperty(), I);
            PropertyInfo->SetRoot(GetRoot());
            PropertyInfo->SetParent(SharedThis(this));
            FixedArray.Add(PropertyInfo);
        }
    }
    else
    {
        UE_LOG(LogSimpleProgramObjectReflector, Warning, TEXT("FStaticArrayPropertyInfo::Initialize Failed!"));
    }
}

bool FStaticArrayPropertyInfo::IsValid() const
{
    return Super::IsValid() && GetProperty()->ArrayDim == FixedArray.Num();
}

//切换对象，直接清理PropertyInfo，FStaticArrayPropertyInfo初始化后不再改变
TArray<TSharedPtr<IPropertyInfoBase>> FStaticArrayPropertyInfo::GetChildren() const
{
    check(CheckChildren());
    return FixedArray;
}

TSharedPtr<SPropertyWidget> FStaticArrayPropertyInfo::MakePropertyWidget()
{
    return TSharedPtr<SPropertyWidget>();
}