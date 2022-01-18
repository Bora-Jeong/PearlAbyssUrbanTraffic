// Copyright Epic Games, Inc. All Rights Reserved.

#include "UrbanTrafficGameMode.h"
#include "UrbanTrafficPawn.h"
#include "UrbanTrafficHud.h"

AUrbanTrafficGameMode::AUrbanTrafficGameMode()
{
	DefaultPawnClass = AUrbanTrafficPawn::StaticClass();
	HUDClass = AUrbanTrafficHud::StaticClass();
}
