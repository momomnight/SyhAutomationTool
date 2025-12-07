#pragma once
#include "DllExport/SimpleBlueprintViewType.h"
#include "Containers/UnrealString.h"

class SBlueprintEntryPanelWidget;
struct FBlueprintEntryBase;

//不要乱继承
class SIMPLEBLUEPRINTVIEW_API IBlueprintWidgetBase
{
	friend struct FBlueprintEntryBase;
public:
	IBlueprintWidgetBase(){ }
	virtual ~IBlueprintWidgetBase() {}

private:
	friend struct FBlueprintEntryBase;
	void Initialize(TSharedPtr<FBlueprintEntryBase> InEntry, TSharedPtr<IBlueprintWidgetBase> InOuter,
		TSharedPtr<IBlueprintWidgetBase> InRoot);
	void Deinitialize();

	virtual bool InitializeSelf() = 0;
	virtual bool DeinitializeSelf() = 0;

	bool InitializeBase(TSharedPtr<FBlueprintEntryBase> InEntry, TSharedPtr<IBlueprintWidgetBase> InOuter,
		TSharedPtr<IBlueprintWidgetBase> InRoot);
	void DeinitializeBase();
public:

	//用于获取基础类型，这只是EBlueprintEntryType的别名
	virtual EBlueprintWidgetType GetBlueprintWidgetType() const noexcept { return EBlueprintWidgetType::None; }

	//用于从IBlueprintWidgetBase转换为SWidget, 使用纯虚函数的原因是, 转换时需要过渡类型
	virtual TSharedPtr<SWidget> GetSWidget() noexcept = 0;
	virtual TSharedPtr<IBlueprintWidgetBase> GetWidgetBase() noexcept = 0;

	virtual bool IsRoot() const noexcept { return false; }

private:
	virtual int32 FindChildWidget(TSharedPtr<IBlueprintWidgetBase>) const = 0;
	virtual void AddChildWidget(TSharedPtr<IBlueprintWidgetBase>) = 0;
	virtual void RemoveChildWidget(TSharedPtr<IBlueprintWidgetBase>) = 0;
	virtual void ClearChildrenWidget() = 0;

public:
	void SetDisplayName(const FString& InName) noexcept { DisplayName = InName;}
	const FString& GetDisplayName() const noexcept{ return DisplayName; }
	FText GetDisplayNameText() const noexcept { return FText::FromString(DisplayName); }
	void SetDisplayNameText(const FText& InTitle, ETextCommit::Type InTextCommitType);

	void SetRealName(const FString& InName) noexcept;
	FString GetRealName() const noexcept;
	FText GetRealNameText() const noexcept { return FText::FromString(GetRealName()); }
	void SetRealNameText(const FText& InTitle, ETextCommit::Type InTextCommitType);



	TSharedPtr<const IBlueprintWidgetBase> GetRoot() const noexcept;
	TSharedPtr<const IBlueprintWidgetBase> GetOuter() const noexcept;
	TSharedPtr<const FBlueprintEntryBase> GetEntry() const noexcept { return Entry; }
	TSharedPtr<IBlueprintWidgetBase> GetRoot() noexcept;
	TSharedPtr<IBlueprintWidgetBase> GetOuter() noexcept;
	TSharedPtr<FBlueprintEntryBase> GetEntry() noexcept { return Entry; }

	bool CanBeValidOuter(TSharedPtr<IBlueprintWidgetBase> Outer, TSharedPtr<IBlueprintWidgetBase> Inner) const;
	bool IsInitialized() const;

	bool CheckChildLink(TSharedPtr<IBlueprintWidgetBase> InChildWidget, bool bCheckInChildren = true) const;
	bool CheckLink(bool bCheckTotalLinks = true);
protected:
	void ClearRoot();
	void ClearOuter();
	void ClearEntry();
	void InitializeRoot(TSharedPtr<IBlueprintWidgetBase> InRoot) noexcept;
	void InitializeOuter(TSharedPtr<IBlueprintWidgetBase> InOuter) noexcept;
	void InitializeEntry(TSharedPtr<FBlueprintEntryBase> InEntry);

protected:

	TWeakPtr<IBlueprintWidgetBase> Root{ nullptr };

	//Outer为IBlueprintWidgetBase可以方便的使用一些方法
	TWeakPtr<IBlueprintWidgetBase> Outer{ nullptr };

	//Entry同上
	TSharedPtr<FBlueprintEntryBase> Entry{ nullptr };

	//可以修改的名字
	FString DisplayName;
};
