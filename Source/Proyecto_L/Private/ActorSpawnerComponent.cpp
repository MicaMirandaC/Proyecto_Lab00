// Fill out your copyright notice in the Description page of Project Settings.

#include "ActorSpawnerComponent.h"
#include "Engine/World.h"

// Sets default values
UActorSpawnerComponent::UActorSpawnerComponent()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryComponentTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void UActorSpawnerComponent::BeginPlay()
{
	Super::BeginPlay();
}
	

void UActorSpawnerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UActorSpawnerComponent::Spawn()
{
    UWorld* TheWorld = GetWorld();
    if (TheWorld && ActorToSpawn)
    {
        // Obtener la transformación del componente
        FTransform ComponentTransform(GetComponentTransform());

        // Generar el actor especificado
        TheWorld->SpawnActor<AActor>(ActorToSpawn, ComponentTransform);
    }
}