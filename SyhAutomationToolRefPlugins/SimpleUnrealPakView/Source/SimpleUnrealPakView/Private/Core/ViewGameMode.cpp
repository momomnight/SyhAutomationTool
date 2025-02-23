// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/ViewGameMode.h"
#include "Core/ViewHUD.h"
#include "Core/ViewPlayerController.h"

AViewGameMode::AViewGameMode()
{
	HUDClass = AViewHUD::StaticClass();
	PlayerControllerClass = AViewPlayerController::StaticClass();
}