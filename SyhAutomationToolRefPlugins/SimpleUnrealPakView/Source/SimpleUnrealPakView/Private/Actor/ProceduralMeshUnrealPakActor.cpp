// Fill out your copyright notice in the Description page of Project Settings.
#include "Actor/ProceduralMeshUnrealPakActor.h"
#include "ProceduralMeshComponent.h"
#include "Components/WidgetComponent.h"

// Sets default values
AProceduralMeshUnrealPakActor::AProceduralMeshUnrealPakActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ProceduralMeshComponent = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("ProceduralMeshComponent"));
	RootComponent = ProceduralMeshComponent;

	Widget = CreateDefaultSubobject<UWidgetComponent>(TEXT("Widget"));
	Widget->SetupAttachment(RootComponent);
}

UProceduralMeshComponent* AProceduralMeshUnrealPakActor::GetProceduralMeshComponent()
{
	return ProceduralMeshComponent;
}

// Called when the game starts or when spawned
void AProceduralMeshUnrealPakActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AProceduralMeshUnrealPakActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AProceduralMeshUnrealPakActor::SetWidget(UUserWidget* InNewWdiget)
{
	Widget->SetWidget(InNewWdiget);
	Widget->SetWidgetSpace(EWidgetSpace::Screen);
}
