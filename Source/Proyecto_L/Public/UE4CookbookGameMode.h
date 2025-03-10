// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Piramide.h" // Incluir el archivo de encabezado de APiramide
#include "UE4CookbookGameMode.generated.h"

UCLASS()
class PROYECTO_L_API AUE4CookbookGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AUE4CookbookGameMode();

public:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
private:
	UPROPERTY() //Variable para almacenar el actor a spawnear
		APiramide* SpawnedActor;

	UFUNCTION()  // Función para destruir el actor
		void DestroyActorFunction();
};