#pragma once

#include "Templates/SharedPointer.h"
#include "TableRow/Delegate.h"
#include "TableRow/ObjectMemberSettings.h"
#include "TableRow/Base/PropertyContainerDescription.h"

class SWidget;
class FPropertyInfoRoot;


//类职责：
// 1. 指出存储属性数据的容器及类型
// 2. 由于无法获取元数据，该类包含获取类别回调，由容器提供者给出
// 3. 包含对于属性/类型的通用设置
struct FPropertyInfoInitParam
{
public:
	/* 对象的容器描述*/
	TSharedPtr<IContainerDescription> ContainerDescription;

	/*由于拿不到元数据, 故采用此方法收集成员属性的一些信息*/
	TSharedPtr<FObjectMemberSettings> ObjectMemberSettings;

	EFieldIterationFlags Flags{ EFieldIterationFlags::None };
};



class FPropertyTableManager : public TSharedFromThis<FPropertyTableManager>
{
private:
	FPropertyTableManager();
	FPropertyTableManager(const FPropertyTableManager&) = delete;
	FPropertyTableManager& operator=(const FPropertyTableManager&) = delete;
public:
	/* 初始化与单例获取 */
	static TSharedPtr<FPropertyTableManager> Get();
	void Initialize();

	/* 查询属性自己的属性树 */
	TSharedPtr<FPropertyInfoRoot> RegisterOwner(FName InPropertyInfoOwner);
	TSharedPtr<FPropertyInfoRoot> FindRootByName(FName InPropertyInfoOwner) const;
	bool ContainRootByName(FName InPropertyInfoOwner) const;
	bool ContainRoot(TSharedPtr<FPropertyInfoRoot> InRoot) const;

public:
	void GeneratePropertyInfoTree(FName OwnerName, const FPropertyInfoInitParam& InInitParam);
	void GeneratePropertyInfoTree(TSharedPtr<FPropertyInfoRoot> InRoot, const FPropertyInfoInitParam& InInitParam);

	bool SetupRoot(TSharedPtr<FPropertyInfoRoot> InRoot, const FPropertyInfoInitParam& InInitParam);

	TSharedRef<SWidget> GenerateDetailWidget();
	void ResetPropertyDataChains();

protected:
	TSharedRef<class ITableRow> OnGenerateRow(TSharedPtr<FPropertyInfo> InPropertyInfo, const TSharedRef<class STableViewBase>& InOwner);

private:
	/* Owner -- Root , 通过名字与Root的映射, 方便的查询属性链*/
	TMap<FName, TSharedPtr<FPropertyInfoRoot>> Roots;

private:
	static TSharedPtr<FPropertyTableManager> Instance;
}; 