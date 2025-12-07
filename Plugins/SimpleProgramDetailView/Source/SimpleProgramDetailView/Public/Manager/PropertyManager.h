#pragma once
#include "Templates/SharedPointer.h"


class FPropertyInfo;
struct FPropertyDataInitParam;
//注册结构体
// int32 int64 bool float double FString FName FText
// TMap TSet TArray
// TSoftClassPtr<UTestViewSubClass> SoftClassPtr;
// TSubclassOf<UTestViewSubClass> Subclass;
// 
// 对于UCLASS与USTRUCT?
// UCLASS与USTRUCT注册了才能显示
// 未注册的情况下，UCLASS不显示，USTRUCT？

//类职责：
// 1.管理注册UStruct，用于生成Detail
// 2.生成属性链及View
// 3.限制显示的属性

class FPropertyManager : public TSharedFromThis<FPropertyManager>
{
public:
	FPropertyManager();

public:

	void GeneratePropertyDataChains(const FPropertyDataInitParam& InInitParam, bool bIncludeSuper);
	TSharedRef<SWidget> GenerateDetailWidget();
	void ResetPropertyDataChains();

	void CreateSingleItem(TSharedPtr<FPropertyInfo> InParent, FProperty* InProperty, const FPropertyDataContainer& Container);

public:
	void SetMaxDeepth(int32 InMaxDeepth)
	{
		MaxDeepth = InMaxDeepth;
	}

	int32 GetMaxDeepth() const
	{
		return MaxDeepth;
	}

protected:
	TSharedRef<class ITableRow> OnGenerateRow(TSharedPtr<FPropertyInfo> InPropertyInfo, const TSharedRef<class STableViewBase>& InOwner);

	void OnGetChildren(TSharedPtr<FPropertyInfo> InPropertyInfo, TArray<TSharedPtr<FPropertyInfo>>& OutPropertyInfoChildren);

	uint8* GetDefaultValue(FProperty* InProperty);
private:

	TArray<TSharedPtr<FPropertyInfo>> PropertyInfoArray;
	TSharedPtr<FPropertyInfo> NoCategoryPropertyInfo;//Manager创建时创建，每次生成信息时，加入PropertyInfoArray

	TSharedPtr<STreeView<TSharedPtr<FPropertyInfo>>> TreeView;

	int32 MaxDeepth;

	TSet<FName> RegisteredUStructNames;
	//使用构造的初始值
	FStructOnScope CachedStructDefaultValue;
};