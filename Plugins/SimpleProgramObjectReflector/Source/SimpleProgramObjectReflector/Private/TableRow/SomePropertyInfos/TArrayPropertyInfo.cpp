#include "TableRow/TArrayPropertyInfo.h"


void FArrayPropertyInfo::Initialize()
{

}

bool FArrayPropertyInfo::IsValid() const
{
	return Super::IsValid() && CastField<FArrayProperty>(GetProperty());
}

TArray<TSharedPtr<IPropertyInfoBase>> FArrayPropertyInfo::GetChildren() const
{

}

TSharedPtr<SPropertyWidget> FArrayPropertyInfo::MakePropertyWidget()
{

}