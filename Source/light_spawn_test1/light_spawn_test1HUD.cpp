// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "light_spawn_test1.h"
#include "light_spawn_test1HUD.h"
#include "Engine/Canvas.h"
#include "TextureResource.h"
#include "CanvasItem.h"

Alight_spawn_test1HUD::Alight_spawn_test1HUD()
{
	// Set the crosshair texture
	static ConstructorHelpers::FObjectFinder<UTexture2D> CrosshiarTexObj(TEXT("/Game/FirstPerson/Textures/FirstPersonCrosshair"));
	CrosshairTex = CrosshiarTexObj.Object;
}


