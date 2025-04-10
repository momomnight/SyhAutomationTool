#pragma once


#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"
#include "FileTreeTool.h"
#include "Widgets/Input/SButton.h"
#include <type_traits>

struct FContextMenuData
{
	using DelegateType = void;
	using DataType = void;

};

//情景菜单，对不同Widget右键唤出
template<class ContextMenuDataType = FContextMenuData>
class SContextMenuWidget : public SCompoundWidget
{
public:
	static_assert(!std::is_same_v<typename ContextMenuDataType::DelegateType, void>, "need a DelegateType");
	static_assert(!std::is_same_v<typename ContextMenuDataType::DataType, void>, "need a DataType");


	using DelegateType = typename ContextMenuDataType::DelegateType;
	using DataType = typename ContextMenuDataType::DataType;
	using FContextMenuCommandMap = TMap<FText, DelegateType>;

	SLATE_BEGIN_ARGS(SContextMenuWidget) {}

	//注意逗号
	SLATE_ARGUMENT(FContextMenuCommandMap, CommandMap);

	SLATE_END_ARGS()

	SContextMenuWidget()
	{
		//注册通知，当点击控件外部时，关闭当前窗口
		DelegateHandle = FSlateApplication::Get().GetPopupSupport().RegisterClickNotification(this->AsShared(),
			FOnClickedOutside::CreateLambda([this]()
				{
					this->Close();
				}
			));
	}

	~SContextMenuWidget()
	{
		FSlateApplication::Get().GetPopupSupport().UnregisterClickNotification(DelegateHandle);
	}

	void Construct(const FArguments& InArgs)
	{
		CommandMap = InArgs._CommandMap;

		ChildSlot
		[
			SNew(SBox)
			[
				SAssignNew(VerticalBox, SVerticalBox)
			]
		];
		ConstructChild();
	}

public:
	//添加新的命令
	void AddCommands(const FContextMenuCommandMap& InCommandMap)
	{
		CommandMap.Append(InCommandMap);
		ConstructChild();
	}

	//右键唤醒，并传入Data
	void Invoke(TSharedPtr<DataType> InData)
	{
		Data = InData;
		this->SetVisibility(EVisibility::SelfHitTestInvisible);
	}
	void Close()
	{
		Data.Reset();
		this->SetVisibility(EVisibility::Collapsed);
	}

	FReply OnClicked(FText InCommandName)
	{
		if (CommandMap.Contains(InCommandName) && Data.IsValid())
		{
			CommandMap[InCommandName].Execute(Data.Pin());
			return FReply::Handled();
		}
		return FReply::Unhandled();
	}

protected:

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
				.OnClicked(FOnClicked::CreateSP(this, &SContextMenuWidget::OnClicked, Temp.Key))
			];
		}
	}

private:
	FContextMenuCommandMap CommandMap;
	TSharedPtr<SVerticalBox> VerticalBox;
	TWeakPtr<DataType> Data;
	FDelegateHandle DelegateHandle;
};