// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "MyActor_2.generated.h"

// Clase base personalizada 
UCLASS()
class PROYECTO_L_API AMyActor_2 : public AGameState
{
	GENERATED_BODY()

public:
	// Constructor
	AMyActor_2();

	// Método para obtener la puntuación actual
	UFUNCTION()
	int32 GetScore() const;

	// Método para configurar la puntuación
	UFUNCTION()
	void SetScore(int32 NewScore);

protected:
	// Llamado al inicio del juego o al ser generado
	virtual void BeginPlay() override;

public:
	// Llamado cada cuadro
	virtual void Tick(float DeltaTime) override;

private:
	// Puntuación actual del jugador
	UPROPERTY()
	int32 CurrentScore;

};

