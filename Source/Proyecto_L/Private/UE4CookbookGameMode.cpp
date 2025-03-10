// Fill out your copyright notice in the Description page of Project Settings.


#include "UE4CookbookGameMode.h"
#include "GameFramework/GameModeBase.h" 
#include "Engine/World.h"
#include "Piramide.h" //Clase del actor a spawnear

// Sets default values
AUE4CookbookGameMode::AUE4CookbookGameMode()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AUE4CookbookGameMode::BeginPlay()
{
	Super::BeginPlay();
	GEngine->AddOnScreenDebugMessage(1, 5.0f, FColor::Red,
		TEXT("Actor Spawning"));
	FTransform SpawnLocation;//Crear ubicacion de la transformacion para el actor
	GetWorld()->SpawnActor<APiramide>(
		APiramide::StaticClass(),//Clase del actor a spawnear
		 SpawnLocation);//Localizacion del spawn

	SpawnedActor = GetWorld()->SpawnActor<APiramide>
		(APiramide::StaticClass(), SpawnLocation);

	//configuracion del temporizador para destruir el actor despeus de 10 segundos
	FTimerHandle Timer;
	GetWorldTimerManager().SetTimer(Timer, this,
		&AUE4CookbookGameMode::DestroyActorFunction, 10);
}
void AUE4CookbookGameMode::DestroyActorFunction()
{
	if (SpawnedActor != nullptr)
	{
		SpawnedActor->Destroy();
	}
}

// Called every frame
void AUE4CookbookGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


