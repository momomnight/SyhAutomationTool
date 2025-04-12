#pragma once


#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"
#include "FileTreeTool.h"
#include "Widgets/Input/SButton.h"


#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

template <class InDelegate, class InData>
struct FContextMenuData
{
	using DelegateType = InDelegate;

	//DataType变量会被传入DelegateType，要将需要的变量聚合起来
	using DataType = InData;
};

//情景菜单，对不同Widget右键唤出
template<class ContextMenuDataType>
class SContextMenuWidget : public SCompoundWidget
{
public:
	using DelegateType = typename ContextMenuDataType::DelegateType;
	using DataType = typename ContextMenuDataType::DataType;
	using FContextMenuCommandMap = TMap<FText, DelegateType>;

	SLATE_BEGIN_ARGS(SContextMenuWidget) {}

	//注意逗号
	SLATE_ARGUMENT(FContextMenuCommandMap, CommandMap);

	SLATE_ARGUMENT(TSharedPtr<SWidget>, ParentWidget)

	SLATE_END_ARGS()

	~SContextMenuWidget()
	{
		UnregisterClickNotification();
		CommandMap.Empty();
	}

	void Construct(const FArguments& InArgs)
	{
		CommandMap = InArgs._CommandMap;
		ParentWidget = InArgs._ParentWidget;

		ChildSlot
		[
			SNew(SBox)
			[
				SAssignNew(VerticalBox, SVerticalBox)
			]
		];
		ConstructChild();
		RegisterClickNotification();
		CloseContextMenu();
	}

public:
	
	void SetParentWidget(TSharedPtr<SWidget> InWidget)
	{
		ParentWidget = InWidget;
	}
	TSharedPtr<SWidget> GetParentWidget()
	{
		return ParentWidget.IsValid() ? ParentWidget.Pin() : nullptr;
	}

	void SetCommands(const FContextMenuCommandMap& InCommandMap)
	{
		if (InCommandMap.Num() <= 0) return;
		CommandMap = InCommandMap;//添加命令就会出问题
		ConstructChild();
	}

	void SetCommands(FContextMenuCommandMap&& InCommandMap)
	{
		if (InCommandMap.Num() <= 0) return;
		CommandMap = MoveTemp(InCommandMap);//添加命令就会出问题
		ConstructChild();
	}

	////添加新的命令
	//void AddCommands(const FContextMenuCommandMap& InCommandMap)
	//{
	//	if(InCommandMap.Num() <= 0) return;
	//	CommandMap = InCommandMap;
	//	ConstructChild();
	//}
	//void RemoveCommand(const FText& Text)
	//{
	//	DelegateType Temp;
	//	CommandMap.RemoveAndCopyValue(Text, Temp);
	//	ConstructChild();
	//}

	bool IsCollapsed() const noexcept
	{
		return this->GetVisibility() == EVisibility::Collapsed;
	}

	//右键唤醒，并传入Data
	void InvokeContextMenu(DataType InData)
	{
		if (IsCollapsed())
		{
			Data = InData;
			this->SetVisibility(EVisibility::SelfHitTestInvisible);
		}
	}

	void CloseContextMenu()
	{
		if (!IsCollapsed())
		{
			this->SetVisibility(EVisibility::Collapsed);
		}
	}

	
protected:

	//点击情景菜单按钮
	FReply OnClicked(FText InCommandName)
	{
		this->CloseContextMenu();//点击后关闭情景菜单
		if (CommandMap.Contains(InCommandName))
		{
			//把自己传进去
			CommandMap[InCommandName].Execute(this->AsWeak(), Data);
			return FReply::Handled();
		}
		return FReply::Unhandled();
	}

	void ConstructChild()
	{
		if (CommandMap.IsEmpty()) return;

		VerticalBox->ClearChildren();

		for (auto& Temp : CommandMap)
		{
			VerticalBox->AddSlot()
			[
				SNew(SButton)
				.Text(Temp.Key)
				//需要Temp.Key来辨别命令
				.OnClicked(FOnClicked::CreateSP(this, &SContextMenuWidget::OnClicked, Temp.Key))
			];
		}
	}

	void RegisterClickNotification()
	{
		//注册通知，当点击控件外部时，关闭当前窗口
		if (FSlateApplication::IsInitialized())
		{
			if (DelegateHandle.IsValid())
			{
				UnregisterClickNotification();
			}

			DelegateHandle = FSlateApplication::Get().GetPopupSupport().RegisterClickNotification(this->AsShared(),
				FOnClickedOutside::CreateLambda([this]()
					{
						this->CloseContextMenu();
					}
				));
		}
	}

	void UnregisterClickNotification()
	{
		if (FSlateApplication::IsInitialized() && DelegateHandle.IsValid())
		{
			FSlateApplication::Get().GetPopupSupport().UnregisterClickNotification(DelegateHandle);
			DelegateHandle.Reset();
		}
	}

private:
	FContextMenuCommandMap CommandMap;
	TSharedPtr<SVerticalBox> VerticalBox;
	DataType Data;
	FDelegateHandle DelegateHandle;
	TWeakPtr<SWidget> ParentWidget;	//给予传入控件的机会
};


#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT