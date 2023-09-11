// Copyright Epic Games, Inc. All Rights Reserved.

#include "UdemyCryptRaiderGameMode.h"
#include "UdemyCryptRaiderCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUdemyCryptRaiderGameMode::AUdemyCryptRaiderGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
