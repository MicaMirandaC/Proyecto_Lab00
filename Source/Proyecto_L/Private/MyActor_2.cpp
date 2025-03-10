// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor_2.h"
#include "UE4CookbookGameMode.h"

//Constructor de la clase
AMyActor_2::AMyActor_2()
{
	// Inicialización de valores predeterminados
	CurrentScore = 0;

	// Habilitar que el actor llame a Tick() cada cuadro
	PrimaryActorTick.bCanEverTick = true;
}

	// Método para obtener la puntuación actual
	int32 AMyActor_2::GetScore() const
	{
		return CurrentScore;
	}

	// Método para configurar la puntuación
	void AMyActor_2::SetScore(int32 NewScore)
	{
		CurrentScore = NewScore;
	}

	// Llamado cuando el juego comienza o al generarse
		void AMyActor_2::BeginPlay()
	{
		Super::BeginPlay();
	}

	// Llamado cada cuadro
	void AMyActor_2::Tick(float DeltaTime)
	{
		Super::Tick(DeltaTime);
	}





