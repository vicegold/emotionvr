// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "emotionvr.h"
#include "emotionvrGameMode.h"
#include "emotionvrHUD.h"
#include "emotionvrCharacter.h"

AemotionvrGameMode::AemotionvrGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AemotionvrHUD::StaticClass();
}
