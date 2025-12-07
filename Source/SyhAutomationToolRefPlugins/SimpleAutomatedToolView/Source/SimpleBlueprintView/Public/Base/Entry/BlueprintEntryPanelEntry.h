#pragma once
#include "Base/Entry/BlueprintEntryBase.h"

struct FBlueprintNodeEntry;

//管理链接，
struct SIMPLEBLUEPRINTVIEW_API FBlueprintEntryPanelEntry : public FBlueprintEntryBase
{
	using Super = FBlueprintEntryBase;

	FBlueprintEntryPanelEntry();
	virtual ~FBlueprintEntryPanelEntry();
	//Initialize()->Super::Initialize()->Super::InitializeBase()->InitializeSelf()
	//Deinitialize()->Super::Deinitialize()->InitializeSelf()->Super::InitializeBase()
	void Initialize();
	void Deinitialize();

	//~Begin FBlueprintEntryBase
	//~Begin FBlueprintEntryBase
	//~Begin FBlueprintEntryBase
private:
	//初始化自己
	virtual bool InitializeSelf() override;
	virtual void DeinitializeSelf() override;

public:

	virtual EBlueprintEntryType GetBlueprintEntryType() const noexcept override { return EBlueprintEntryType::Panel; }

	virtual const FPanelWidgetFactory& GetWidgetFactory() override;

	virtual bool IsRoot() const override { return true; }

	virtual TArray<TSharedPtr<const FBlueprintEntryBase>> GetChildren() const override;
	virtual TArray<TSharedPtr<FBlueprintEntryBase>> GetChildren() override;

	virtual TSharedPtr<const FBlueprintEntryBase> FindChild(int32 Index) const override;
	virtual TSharedPtr<FBlueprintEntryBase> FindChild(int32 Index) override;
	virtual int32 FindChild(TSharedPtr<FBlueprintEntryBase> InChild) const override;
	virtual bool Contains(TSharedPtr<FBlueprintEntryBase> InChild) const override;
	virtual int32 AddChild(TSharedPtr<FBlueprintEntryBase> InChild) override;
	virtual TSharedPtr<FBlueprintEntryBase> RemoveChild(TSharedPtr<FBlueprintEntryBase> InChild) override;
	virtual TSharedPtr<FBlueprintEntryBase> RemoveChild(int32 Index) override;
	virtual void ClearChildren() override;

	virtual void UpdateForAllChildren(ExecutionMethod InExecution) override;
	virtual void UpdateForChildren(ExecutionMethod InExecution, ConditionMethod InCondition) override;
	virtual bool JudgeAllChildren(JudgementMethod InJudgement) const override;
	virtual bool JudgeChildren(JudgementMethod InJudgement, ConditionMethod InCondition) const override;

	//~End FBlueprintEntryBase
	//~End FBlueprintEntryBase
	//~End FBlueprintEntryBase

	const FVector2D& GetViewOffset() const noexcept { return ViewOffset.LastViewOffset; }
	void SetViewOffset(const FVector2D& InViewOffset) noexcept { ViewOffset.NewViewOffset = InViewOffset; }
	bool IsViewOffsetChanged() const noexcept { return ViewOffset.LastViewOffset != ViewOffset.NewViewOffset;}
	void UpdateViewOffset() noexcept { ViewOffset.LastViewOffset = ViewOffset.NewViewOffset; }

	float GetScale() const noexcept { return Scale.LastScale; }
	void SetScale(float InScale) noexcept { Scale.NewScale = InScale; }
	bool IsScaleChanged() const noexcept { return Scale.LastScale != Scale.NewScale; }
	void UpdateScale() noexcept { Scale.LastScale = Scale.NewScale; }

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
	TSharedPtr<SWidget> TestCreate();

	void TestDestory();

#endif

protected:
	TArray<TSharedPtr<FBlueprintNodeEntry>> Nodes;
	
	struct FBlueprintViewOffset
	{
		FVector2D LastViewOffset;
		FVector2D NewViewOffset;
	};
	FBlueprintViewOffset ViewOffset{ FVector2D::ZeroVector, FVector2D::ZeroVector };

	struct FBlueprintScale
	{
		float LastScale;
		float NewScale;
	};
	FBlueprintScale Scale{1.f, 1.f};
};