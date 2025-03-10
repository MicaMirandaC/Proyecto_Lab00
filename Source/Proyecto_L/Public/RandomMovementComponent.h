// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RandomMovementComponent.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class PROYECTO_L_API URandomMovementComponent : public UActorComponent
{
	GENERATED_BODY()
	
public:	
	//Constructor
	// Sets default values for this actor's properties
	URandomMovementComponent();

protected:
	// Llamado cuando se inicie el juego
	virtual void BeginPlay() override;

public:
	// Llamado en cada frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// Propiedad para definir el radio de movimiento
	UPROPERTY()
	float MovementRadius;
};