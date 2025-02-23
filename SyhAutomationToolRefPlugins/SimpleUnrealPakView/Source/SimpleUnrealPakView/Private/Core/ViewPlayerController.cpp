// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/ViewPlayerController.h"

AViewPlayerController::AViewPlayerController()
{
	bShowMouseCursor = true;
}

void AViewPlayerController::BeginPlay()
{
	Super::BeginPlay();

	FInputModeGameAndUI InputMode;
	InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::LockAlways);
	InputMode.SetHideCursorDuringCapture(false);

	SetInputMode(InputMode);
}
