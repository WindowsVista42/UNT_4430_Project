// Copyright Epic Games, Inc. All Rights Reserved.

#include "UNT_4430_ProjectGameMode.h"
#include "UNT_4430_ProjectHUD.h"
#include "UNT_4430_ProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUNT_4430_ProjectGameMode::AUNT_4430_ProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AUNT_4430_ProjectHUD::StaticClass();
}
