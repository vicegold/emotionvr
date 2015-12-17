// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
#pragma once 
#include "GameFramework/HUD.h"
#include "light_spawn_test1HUD.generated.h"

UCLASS()
class Alight_spawn_test1HUD : public AHUD
{
	GENERATED_BODY()

public:
	Alight_spawn_test1HUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

