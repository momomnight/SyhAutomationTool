// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProceduralMeshUnrealPakActor.generated.h"

class UWidgetComponent;
class UProceduralMeshComponent;
class UWidget;

UCLASS()
class SIMPLEUNREALPAKVIEW_API AProceduralMeshUnrealPakActor : public AActor
{
	GENERATED_BODY()
	
	UPROPERTY(Category = SkeletalMeshActor, VisibleAnywhere, BlueprintReadOnly, meta = (ExposeFunctionCategories = "Mesh,Components|Procedural,Animation,Physics", AllowPrivateAccess = "true"))
	TObjectPtr<UProceduralMeshComponent> ProceduralMeshComponent;

	UPROPERTY(Category = MMOARPGCharacterBase, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UWidgetComponent> Widget;
public:	
	// Sets default values for this actor's properties
	AProceduralMeshUnrealPakActor();

	void SetWidget(UUserWidget *InNewWdiget);
public:

	UProceduralMeshComponent* GetProceduralMeshComponent();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
