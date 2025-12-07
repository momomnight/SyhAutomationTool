#include "TableRow/Base/PropertyInfoRoot.h"
#include "TableRow/Base/PropertyInfoCategory.h"
#include "TableRow/ObjectMemberSettings.h"
#include "TableRow/PropertyInfoFactory.h"

void FPropertyInfoRoot::Initialize()
{
	static bool bInitialize = false;
	if (!bInitialize)
	{
		bInitialize = true;
		NoCategoryPropertyInfos = MakeShareable(new FPropertyInfoCategory(NAME_None));
		TSharedPtr<FPropertyInfoRoot> This = SharedThis(this);
		NoCategoryPropertyInfos->SetParent(This);
		NoCategoryPropertyInfos->SetRoot(This);
	}
}

void FPropertyInfoRoot::PreCreateCategory()
{
	OtherCategoryPropertyInfos.Empty(OtherCategoryPropertyInfos.Max());
	if (ensure(ObjectMemberSettings.IsValid()))
	{
		TArray<FName> CategoryNames;
		ObjectMemberSettings->GetCategories(CategoryNames);
		if (!CategoryNames.IsEmpty())
		{
			for (const FName& CategoryName : CategoryNames)
			{
				if(!CategoryName.IsNone())
				{
					TSharedPtr<FPropertyInfoRoot> MutableThis = SharedThis(this);
					TSharedPtr<FPropertyInfoCategory> Category = FPropertyInfoFactory::CreatePropertyInfoCategory(CategoryName);
					OtherCategoryPropertyInfos.Add(Category);
					FPropertyInfoFactory::SetLink(MutableThis, MutableThis, Category);
				}
			}
		}
	}
}

bool FPropertyInfoRoot::ContainCategory(TSharedPtr<FPropertyInfo> InPropertyInfo) const
{
	if (NoCategoryPropertyInfos == InPropertyInfo)
	{
		return true;
	}
	else
	{
		return OtherCategoryPropertyInfos.Contains(InPropertyInfo);
	}
}

bool FPropertyInfoRoot::ContainCategory(FName InCategoryName) const
{
	return FindExistingCategoryByName(InCategoryName).IsValid();
}

void FPropertyInfoRoot::Clear()
{	
	ClearChildren();
	ContainerDescription.Reset();
	ObjectMemberSettings.Reset();
}

bool FPropertyInfoRoot::IsValid() const
{
	return NoCategoryPropertyInfos.IsValid() && ContainerDescription.IsValid();
}

TArray<TSharedPtr<IPropertyInfoBase>> FPropertyInfoRoot::GetChildren() const
{
	TArray<TSharedPtr<IPropertyInfoBase>> AllChildren;
	AllChildren.Append(NoCategoryPropertyInfos->GetChildren());
	AllChildren.Append(OtherCategoryPropertyInfos);
	return AllChildren;
}

void FPropertyInfoRoot::ClearChildren()
{
	if (NoCategoryPropertyInfos.IsValid())
	{
		NoCategoryPropertyInfos->ClearChildren();
	}
	else
	{
		Initialize();
	}

	OtherCategoryPropertyInfos.Empty(OtherCategoryPropertyInfos.Max());
}

void FPropertyInfoRoot::AddChild(TSharedPtr<IPropertyInfoBase> InChild)
{
	if(InChild.IsValid())
	{
		FProperty* Property = InChild->GetProperty();
		//1.有FProperty*的

		//2.类别
		if (Property)
		{
			TSharedPtr<FPropertyInfoCategory> Category = nullptr;
			if(OnInquiryProperty.IsBound())
			{
				FPropertyInquiryParam Param(Property);
				OnInquiryProperty.Execute(Param);
				Category = CreateCategory(Param.CategoryName);			
				InChild->GetSettings() = FPropertyInfoSettings(Param);
			}
			else
			{
				Category = NoCategoryPropertyInfos;
			}
			InChild->SetParent(Category);
			InChild->SetRoot(SharedThis(this));
			Category->AddChild(InChild);
		}

	}
}

TSharedPtr<IContainerDescription> FPropertyInfoRoot::GetContainerDescription() const
{
	return ContainerDescription;
}

void FPropertyInfoRoot::ResetContainer(TSharedPtr<IContainerDescription> InContainerDescription)
{
	ContainerDescription = InContainerDescription;
}

void FPropertyInfoRoot::ResetObjectMemberSettings(TSharedPtr<FObjectMemberSettings> InObjectMemberSettings = nullptr)
{
	ObjectMemberSettings = InObjectMemberSettings;
}

TSharedPtr<FPropertyInfoCategory> FPropertyInfoRoot::FindExistingCategoryByName(FName InCategoryName) const
{
	if (InCategoryName == NAME_None && NoCategoryPropertyInfos.IsValid())
	{
		return NoCategoryPropertyInfos;
	}

	for (auto& Category : OtherCategoryPropertyInfos)
	{
		if (Category.IsValid() && Category->GetFName() == InCategoryName)
		{
			return Category;
		}
	}

	return nullptr;
}

TSharedPtr<FPropertyInfoCategory> FPropertyInfoRoot::CreateCategory(FName InCategoryName)
{
	if (InCategoryName == NAME_None)
	{
		if (!NoCategoryPropertyInfos.IsValid())
		{
			Initialize();
		}
		check(NoCategoryPropertyInfos.IsValid());
		return NoCategoryPropertyInfos;
	}
	else if (TSharedPtr<FPropertyInfoCategory> Result = FindExistingCategoryByName(InCategoryName))
	{
		return Result;
	}
	else
	{
		TSharedPtr<FPropertyInfoCategory> Category = MakeShareable(new FPropertyInfoCategory());
		TSharedPtr<FPropertyInfoRoot> This = SharedThis(this);
		Category->SetName(InCategoryName);
		Category->SetParent(This);
		Category->SetRoot(This);

		if (OtherCategoryPropertyInfos.Add(Category) == INDEX_NONE)
		{
			return nullptr;
		}
		return Category;
	}
}

