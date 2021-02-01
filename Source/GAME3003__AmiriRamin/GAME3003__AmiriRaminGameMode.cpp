// Copyright Epic Games, Inc. All Rights Reserved.

#include "GAME3003__AmiriRaminGameMode.h"
#include "GAME3003__AmiriRaminCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGAME3003__AmiriRaminGameMode::AGAME3003__AmiriRaminGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
