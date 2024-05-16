// Copyright Epic Games, Inc. All Rights Reserved.

#include "TD_ProjectGameMode.h"
#include "TD_ProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATD_ProjectGameMode::ATD_ProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
