// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UI_ViewMenu.generated.h"

class UVerticalBox;
class UButton;
class UMultiLineEditableTextBox;
class USimpleUEViewConfigurationInfor;
/**
 * 
 */
UCLASS()
class SIMPLEUNREALPAKVIEW_API UUI_ViewMenu : public UUserWidget
{
	GENERATED_BODY()

	UPROPERTY(meta = (BindWidget))
	UVerticalBox* ContentBox;

	UPROPERTY(meta = (BindWidget))
	UMultiLineEditableTextBox* PakPath;

	UPROPERTY(meta = (BindWidget))
	UMultiLineEditableTextBox* AES;

	UPROPERTY(meta = (BindWidget))
	UMultiLineEditableTextBox* MountPoint;

	UPROPERTY(meta = (BindWidget))
	UButton* LoadPath;

	UPROPERTY(meta = (BindWidget))
	UButton* AnalysisPak;
public:
	virtual void NativeConstruct();
	virtual void NativeDestruct();

protected:
	UFUNCTION()
	void CommitPakPath(const FText& Text, ETextCommit::Type CommitMethod);

	UFUNCTION()
	void CommitAES(const FText& Text, ETextCommit::Type CommitMethod);

	UFUNCTION()
	void CommitMountPoint(const FText& Text, ETextCommit::Type CommitMethod);

	UFUNCTION()
	void OnClickLoadPath();

	UFUNCTION()
	void OnClickAnalysisPak();

private:
	UPROPERTY()
	USimpleUEViewConfigurationInfor* ConfigInfor;

private:
	FString LastPaths;
};
