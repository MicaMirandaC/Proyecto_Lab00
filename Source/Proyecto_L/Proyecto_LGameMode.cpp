// Copyright Epic Games, Inc. All Rights Reserved.

#include "Proyecto_LGameMode.h"
#include "Proyecto_LCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProyecto_LGameMode::AProyecto_LGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
