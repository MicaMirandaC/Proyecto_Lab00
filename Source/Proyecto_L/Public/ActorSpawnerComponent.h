// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "ActorSpawnerComponent.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class PROYECTO_L_API UActorSpawnerComponent : public USceneComponent
{
	GENERATED_BODY()
	
public:
    // Constructor
    UActorSpawnerComponent();

    // Función para generar actores
    UFUNCTION(BlueprintCallable, Category = "Spawner")
    void Spawn();

    // Tipo de Actor que será instanciado
    UPROPERTY(EditAnywhere, Category = "Spawner")
    TSubclassOf<AActor> ActorToSpawn;

protected:
    virtual void BeginPlay() override;

public:
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, 
        FActorComponentTickFunction* ThisTickFunction) override;
};
