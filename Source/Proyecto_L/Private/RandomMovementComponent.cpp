// Fill out your copyright notice in the Description page of Project Settings.

#include "RandomMovementComponent.h"
#include "GameFramework/Actor.h"
#include "Math/UnrealMathUtility.h" // Para funciones matemáticas de FMath

// Constructor
URandomMovementComponent::URandomMovementComponent()
{
   PrimaryComponentTick.bCanEverTick = true; // Habilitar Tick para cada frame
   MovementRadius = 5.0f; // Asignar un valor inicial al radio de movimiento
}

// Llamado cuando comienza el juego
void URandomMovementComponent::BeginPlay()
{
   Super::BeginPlay();
}

// Llamado en cada frame
void URandomMovementComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
   Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

   // Obtener el actor propietario
   AActor* Parent = GetOwner();
   if (Parent)
   {
       // Nueva ubicación aleatoria
       FVector NewLocation = Parent->GetActorLocation() +
           FVector(
               FMath::FRandRange(-1.0f, 1.0f) * MovementRadius,
               FMath::FRandRange(-1.0f, 1.0f) * MovementRadius,
               FMath::FRandRange(-1.0f, 1.0f) * MovementRadius
           );

       // Establecer la nueva ubicación
       Parent->SetActorLocation(NewLocation);
   }
}
