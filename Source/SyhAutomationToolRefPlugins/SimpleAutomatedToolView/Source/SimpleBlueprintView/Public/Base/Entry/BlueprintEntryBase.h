#pragma once
#include "DllExport/SimpleBlueprintViewType.h"
#include "SimpleBlueprintViewLog.h"
#include "Base/Widget/Core/IBlueprintWidgetBase.h"
#include "Base/WidgetFactory.h"
#include <type_traits>
#include "Base/CommonMethod.h"
#include "Misc/Guid.h"

class IBlueprintWidgetBase;
struct FBlueprintEntryBase;


struct SIMPLEBLUEPRINTVIEW_API FBlueprintEntryBase : public TSharedFromThis<FBlueprintEntryBase>
{
	FBlueprintEntryBase();

	virtual ~FBlueprintEntryBase() noexcept;

	//不会将已经设置的Outer/Root覆盖，如果要清除Outer/Root需要调用Deinitialize，实现设置的Name/View需要事先保存
	void Initialize(TSharedPtr<FBlueprintEntryBase> InOuter, TSharedPtr<FBlueprintEntryBase> InRoot, const FString& InName = {});
	
	//Deinitialize有两种：
	//1.批量清理: 通过ClearChildren, 先处理View的Children(直接置空Entry/Outer/Root,并清理数组), 再处理Entry的Children(直接置空Entry/Outer/Root,并清理数组)
	//2.单独清理: 先清理View(通过View->GetOuter()->RemoveChildWidget())，再清理Outer
	void Deinitialize(bool bBatchDeinitialization = true);

private:
	bool InitializeBase(TSharedPtr<FBlueprintEntryBase> InOuter,
		TSharedPtr<FBlueprintEntryBase> InRoot, const FString& InName = {});
	bool DeinitializeBase(bool bBatchDeinitialization);

	//初始化自己
	virtual bool InitializeSelf() = 0;
	virtual void DeinitializeSelf() = 0;

public:	
	//用以获取基础类型
	virtual EBlueprintEntryType GetBlueprintEntryType() const noexcept { return EBlueprintEntryType::None;}

	virtual TSharedRef<IBlueprintWidgetBase> MakeWidget();
	TSharedRef<SWidget> MakeSWidget();
	//具有继承关系，可以使用协变，不要使用堆变量
	virtual const FWidgetFactory& GetWidgetFactory() = 0;

	//Root的Root是自己，Outer为nullptr
	virtual bool IsRoot() const { return false; }

	virtual FString GetDefaultName() const noexcept { return TEXT("EntryBase"); }

public:
	//Name作为底层名, 不要轻易改变
	void SetName(const FString& InName = FString()) noexcept ;
	const FString& GetName() const noexcept { return Name; }
	const TSharedPtr<FBlueprintEntryBase> GetRoot() const noexcept;
	const TSharedPtr<FBlueprintEntryBase> GetOuter() const noexcept;
	const TSharedPtr<IBlueprintWidgetBase> GetView() const noexcept;
	TSharedPtr<FBlueprintEntryBase> GetRoot() noexcept;
	TSharedPtr<FBlueprintEntryBase> GetOuter() noexcept;
	TSharedPtr<IBlueprintWidgetBase> GetView() noexcept;	
	const FGuid& GetGuid() const noexcept { return Guid; }

	bool IsInitialized() const noexcept;

	//bCheckTotalLinks	表明是否检查全链，发生错误时中断检查并返回false，当为false时，找到当前Entry即结束，当为true时，找到当前Entry仍然继续检查链
	//return			表明链接是否正确
	//bIsInLink			表明是否找到当前Entry
	//bCheckView		表明是否检查View的链接

	//	return		bCheckTotalLinks		bIsInLink
	
	//	true		true					true		链接完全正确，并找到了当前Entry
	//	true		true					false		链接完全正确，但没有找到Entry
	//	true		false					true		说明直到找到Entry时，链接是正确的，但后面检查的链接不确定是否正确
	//	true		false					false		链接完全正确，但没有找到Entry
	
	//	false		true					true		说明直到找到Entry时，链接是正确的，但后面检查的链接出现错误
	//	false		true					false		说明找到Entry前出现错误，不确定Entry是否在链中
	//	false		false					true		不存在
	//	false		false					false		说明找到Entry前出现错误，不确定Entry是否在链中
	bool CheckLink(bool bCheckView, bool bCheckTotalLinks, bool& bIsInLink) const;

	//InOuterView为nullptr时，不检测View
	bool CheckLink(TSharedPtr<FBlueprintEntryBase> InOuterEntry, TSharedPtr<IBlueprintWidgetBase> InOuterView,
		TSharedPtr<FBlueprintEntryBase> InRoot, bool bCheckTotalLinks, bool& bIsInLink) const;

public:
	virtual TArray<TSharedPtr<FBlueprintEntryBase>> GetChildren() = 0;
	virtual TArray<TSharedPtr<const FBlueprintEntryBase>> GetChildren() const = 0;

	virtual TSharedPtr<const FBlueprintEntryBase> FindChild(int32 Index) const { return nullptr; }
	virtual TSharedPtr<FBlueprintEntryBase> FindChild(int32 Index) { return nullptr; }
	virtual int32 FindChild(TSharedPtr<FBlueprintEntryBase> InChild) const { return INDEX_NONE; }

	virtual bool Contains(TSharedPtr<FBlueprintEntryBase> InNode) const { return false; }
	virtual int32 AddChild(TSharedPtr<FBlueprintEntryBase> InNode) { return INDEX_NONE; }
	virtual TSharedPtr<FBlueprintEntryBase> RemoveChild(TSharedPtr<FBlueprintEntryBase> InNode) { return nullptr; }
	virtual TSharedPtr<FBlueprintEntryBase> RemoveChild(int32 Index) { return nullptr; }
	void DestoryChild(TSharedPtr<FBlueprintEntryBase> InNode);
	void DestoryChild(int32 Index);
	virtual void ClearChildren() {}

	template <class EntryType>
		requires (std::is_base_of_v<FBlueprintEntryBase, EntryType>)
	TSharedPtr<const EntryType> FindChild(const TArray<TSharedPtr<EntryType>>& Entries, int32 Index) const
	{
		if(Entries.IsEmpty()) return nullptr;

		if (CheckEntryInGlobalTable(Entries, Index))
		{
			return Entries[Index];
		}
		else
		{
			return nullptr;
		}
	}

	template <class EntryType>
		requires (std::is_base_of_v<FBlueprintEntryBase, EntryType>)
	TSharedPtr<EntryType> FindChild(TArray<TSharedPtr<EntryType>>& Entries, int32 Index)
	{
		if (Entries.IsEmpty()) return nullptr;
		else return ConstCastSharedPtr<EntryType>(FindChild(Entries, Index));		
	}
	
	template <class EntryType>
		requires (std::is_base_of_v<FBlueprintEntryBase, EntryType>)
	int32 FindChild(const TArray<TSharedPtr<EntryType>>& Entries, const TSharedPtr<EntryType>& InEntry) const
	{
		if (Entries.IsEmpty()) return INDEX_NONE;

		if (this->CanBeValidChild(InEntry.Get()))
		{
			int32 Index = Entries.Find(InEntry);
			return CheckEntryInGlobalTable(Entries, Index) ? Index : INDEX_NONE;
		}
		return INDEX_NONE;
	}

	template <class EntryType>
		requires (std::is_base_of_v<FBlueprintEntryBase, EntryType>)
	bool Contains(const TArray<TSharedPtr<EntryType>>& Entries, const TSharedPtr<EntryType>& InEntry) const
	{
		if (Entries.IsEmpty()) return false;

		if (this->CanBeValidChild(InEntry.Get()))
		{
			int32 Index = Entries.Find(InEntry);
			return CheckEntryInGlobalTable(Entries, Index);
		}
		return false;
	}

	template <class EntryType>
		requires (std::is_base_of_v<FBlueprintEntryBase, EntryType>)
	int32 AddChild(TArray<TSharedPtr<EntryType>>& Entries, TSharedPtr<EntryType> InEntry)
	{
		//非法子Entry
		if (!CanBeValidChild(InEntry.Get()))
		{
			return INDEX_NONE;
		}

		int32 Index = FindChild<EntryType>(Entries, InEntry);

		//重复子Entry/非法Index
		if (CheckEntryInGlobalTable<EntryType>(Entries, Index))
		{
			return Index;
		}

		//Panel被初始化过，则Node需要被初始化，否则，Node无需初始化，Panel初始化时会将Node初始化
		if (IsInitialized())
		{
			if (!InEntry->IsInitialized())
			{
				InEntry->Initialize(this->AsShared(), this->GetRoot());
				if (!InEntry->IsInitialized())
				{
					return INDEX_NONE;
				}
			}

			//事先保存有可能在其他地方创建了的数据
			FString EntryName;
			TSharedPtr<IBlueprintWidgetBase> EntryWidget = InEntry->GetView();

			if (InEntry->GetOuter().Get() != this || InEntry->GetRoot() != GetRoot())
			{
				EntryName = InEntry->GetName();
				InEntry->Deinitialize(true);
				InEntry->Initialize(this->AsShared(), this->GetRoot(), EntryName);
				if (!InEntry->IsInitialized())
				{
					return INDEX_NONE;
				}
			}

			//Panel的View如果是合法的，则为Node创建View，并加入Nodes
			if (GetView().IsValid())
			{
				if (!EntryWidget.IsValid())
				{
					EntryWidget = InEntry->MakeWidget();
				}
				GetView()->AddChildWidget(EntryWidget);
			}
		}

		Index = Entries.Add(InEntry);
#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
		if (IsInitialized())
		{
			bool bIsInLink = false;
			check(CheckLink(GetView().IsValid() ? true : false, true, bIsInLink));
			check(bIsInLink);
		}
#endif
		return Index;
	}
	
	template <class EntryType>
		requires (std::is_base_of_v<FBlueprintEntryBase, EntryType>)
	TSharedPtr<EntryType> RemoveChild(TArray<TSharedPtr<EntryType>>& Entries, TSharedPtr<EntryType> InNode)
	{
		if (Entries.IsEmpty()) return nullptr;

		int32 Index = FindChild<EntryType>(Entries, InNode);
		return CheckEntryInGlobalTable(Entries, Index) ? RemoveChild<EntryType>(Entries, Index) : nullptr;
	}
	
	template <class EntryType>
		requires (std::is_base_of_v<FBlueprintEntryBase, EntryType>)
	TSharedPtr<EntryType> RemoveChild(TArray<TSharedPtr<EntryType>>& Entries, int32 Index)
	{
		if (Entries.IsEmpty()) return nullptr;

		if (CheckEntryInGlobalTable(Entries, Index))
		{
			TSharedPtr<EntryType> RemovedEntry = Entries[Index];
			Entries.RemoveAtSwap(Index);
			return RemovedEntry;
		}
		return nullptr;
	}

	template <class EntryType>
	void ClearChildren(TArray<TSharedPtr<EntryType>>& Entries)
	{
		for (auto& Entry : Entries)
		{
			if (Entry.IsValid())
			{
				Entry->Deinitialize(false);
			}
		}

		Entries.Empty(Entries.GetSlack());
	}

public:
	using ExecutionMethod = TFunction<void(TSharedPtr<FBlueprintEntryBase>)>;
	using ConditionMethod = TFunction<bool(const TSharedPtr<FBlueprintEntryBase>&)>;
	using JudgementMethod = TFunction<bool(const TSharedPtr<FBlueprintEntryBase>&)>;

	//此处使用的是Children的拷贝数组，如果想对原数组做处理，需要先转型
	virtual void UpdateForAllChildren(ExecutionMethod InExecution){}
	virtual void UpdateForChildren(ExecutionMethod InExecution, ConditionMethod InCondition) {}
	virtual bool JudgeAllChildren(JudgementMethod InJudgement) const { return false;}
	virtual bool JudgeChildren(JudgementMethod InJudgement, ConditionMethod InCondition) const { return false; }

	template <class EntryType>
	void UpdateForAllChildren(TArray<TSharedPtr<EntryType>>& Entries, ExecutionMethod InExecution)
	{
		for (auto& Entry : Entries)
		{
			InExecution(Entry);
		}
	}

	template <class EntryType>
	void UpdateForChildren(TArray<TSharedPtr<EntryType>>& Entries, ExecutionMethod InExecution, ConditionMethod InCondition)
	{
		for (auto& Entry : Entries)
		{
			if (InCondition(Entry))
			{
				InExecution(Entry);
			}
		}
	}

	template <class EntryType>
	bool JudgeAllChildren(const TArray<TSharedPtr<EntryType>>& Entries, JudgementMethod InJudgement) const
	{
		for (auto& Entry : Entries)
		{
			if (!InJudgement(Entry))
			{
				return false;
			}
		}
		return true;
	}

	template <class EntryType>
	bool JudgeChildren(const TArray<TSharedPtr<EntryType>>& Entries, JudgementMethod InJudgement, ConditionMethod InCondition) const
	{
		for (auto& Entry : Entries)
		{
			if (InCondition(Entry) && !InJudgement(Entry))
			{
				return false;
			}
		}
		return true;
	}

protected:
	//Widget
	int32 FindChildWidget(TSharedPtr<IBlueprintWidgetBase> InOuter, TSharedPtr<IBlueprintWidgetBase> InInner) const;
	void AddChildWidget(TSharedPtr<IBlueprintWidgetBase> InOuter, TSharedPtr<IBlueprintWidgetBase> InInner);
	void RemoveChildWidget(TSharedPtr<IBlueprintWidgetBase> InOuter, TSharedPtr<IBlueprintWidgetBase> InInner);
	void ClearChildrenWidget(TSharedPtr<IBlueprintWidgetBase> InOuter);

public:
	static TMap<FGuid, TSharedPtr<FBlueprintEntryBase>>& GetGlobalTable();

	//清理引用计数为1的Entry
	static void ClearLonelyEntriesInGlobalTable();


	// UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
	//检查数组中的Entry和全局表中的是否一致
	template <class EntryType>
	static bool CheckEntryInGlobalTable(const TArray<TSharedPtr<EntryType>>& InEntries, int32 Index)
	{
		static_assert(std::is_base_of_v<FBlueprintEntryBase, EntryType>, "FBlueprintEntryBase must be base of EntryType.");
		if(InEntries.IsValidIndex(Index))
		{
#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
			const TSharedPtr<EntryType> ArrayEntry = InEntries[Index];
			const TSharedPtr<FBlueprintEntryBase> MapEntry = *(GetGlobalTable().Find(ArrayEntry->GetGuid()));
			if (ArrayEntry.Get() == MapEntry.Get() && ArrayEntry != nullptr)
			{
				return true;
			}
			else
			{
				UE_LOG(SimpleBlueprintViewLog, Error, TEXT("ArrayEntry != MapEntry or ArrayEntry is nullptr, In CheckEntryInGlobalTable of BlueprintEntryBase.h"));
				return false;
			}
#else
			return true;
#endif	
		}
		return false;
	}

	bool CanBeValidOuter(const FBlueprintEntryBase* Outer) const;
	bool CanBeValidChild(const FBlueprintEntryBase* InChild) const;

protected:

	//直接初始化或置空，重新设置需要删除该Entry
	void InitializeRoot(TSharedPtr<FBlueprintEntryBase> InRoot) noexcept;
	void InitializeOuter(TSharedPtr<FBlueprintEntryBase> InOuter);
	void InitializeView(TSharedPtr<IBlueprintWidgetBase> InView);

protected:
	FGuid Guid;
	FString Name{};

protected:

	TWeakPtr<FBlueprintEntryBase> Root{ nullptr };

	//Outer不确定
	TWeakPtr<FBlueprintEntryBase> Outer{ nullptr };

	//SWidget与IBlueprintWidgetBase作为多重继承的父类
	TWeakPtr<IBlueprintWidgetBase> View{ nullptr };
};


