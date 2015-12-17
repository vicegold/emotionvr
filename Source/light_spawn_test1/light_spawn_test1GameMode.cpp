// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "light_spawn_test1.h"
#include "light_spawn_test1GameMode.h"
#include "light_spawn_test1HUD.h"
#include "light_spawn_test1Character.h"

Alight_spawn_test1GameMode::Alight_spawn_test1GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = Alight_spawn_test1HUD::StaticClass();
}
