#pragma once

#include "TableRow/Base/PropertyInfoInterface.h"

class IContainerDescription;
class FPropertyInfoCategory;

// 1. Category由Root创建
// 2. 具体属性由外部创建，并添加到Root，Root会根据情况执行分类
class SIMPLEPROGRAMOBJECTREFLECTOR_API FPropertyInfoRoot : public IPropertyInfoBase
{
	using Super = IPropertyInfoBase;
	friend struct FPropertyInfoFactory;

public:

	FPropertyInfoRoot(){}

	void Initialize();
	void PreCreateCategory();

public:

	bool ContainCategory(TSharedPtr<FPropertyInfo> InPropertyInfo) const;
	bool ContainCategory(FName InCategoryName) const;

public:
	void Clear();

	//~Begin IPropertyInfoBase
	virtual bool IsValid() const override;

	virtual TArray<TSharedPtr<IPropertyInfoBase>> GetChildren() const override;
	virtual void ClearChildren() override;
	virtual void AddChild(TSharedPtr<IPropertyInfoBase> InChild) override;

	virtual bool IsLeaf() const override { return false; }
	virtual FName GetFName() const override { return FName("Root"); }
	virtual FProperty* GetProperty() const { return nullptr; }
	virtual EPropertyInfoType GetPropertyInfoType() const override { return EPropertyInfoType::IsValid | EPropertyInfoType::HasChild; }
	virtual TSharedPtr<IContainerDescription> GetContainerDescription() const override;
	//~End IPropertyInfoBase

	void ResetContainer(TSharedPtr<IContainerDescription> InContainerDescription = nullptr);
	void ResetObjectMemberSettings(TSharedPtr<class FObjectMemberSettings> InObjectMemberSettings = nullptr);

protected:
	void InquiryProperty(FPropertyInquiryParam& InParam);
	TSharedPtr<FPropertyInfoCategory> FindExistingCategoryByName(FName InCategoryName) const;
	TSharedPtr<FPropertyInfoCategory> CreateCategory(FName InCategoryName);

protected:
	TSharedPtr<IContainerDescription> ContainerDescription;
	TSharedPtr<class FObjectMemberSettings> ObjectMemberSettings;

	// 分类PropertyInfo
	TArray<TSharedPtr<FPropertyInfoCategory>> OtherCategoryPropertyInfos;
	// 无类别PropertyInfo
	TSharedPtr<FPropertyInfoCategory> NoCategoryPropertyInfos;
};