// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/HUD.h"
#include "UrbanTrafficHud.generated.h"


UCLASS(config = Game)
class AUrbanTrafficHud : public AHUD
{
	GENERATED_BODY()

public:
	AUrbanTrafficHud();

	/** Font used to render the vehicle info */
	UPROPERTY()
	UFont* HUDFont;

	// Begin AHUD interface
	virtual void DrawHUD() override;
	// End AHUD interface
};
