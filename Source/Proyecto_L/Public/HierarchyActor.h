// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HierarchyActor.generated.h"

UCLASS()
class PROYECTO_L_API AHierarchyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHierarchyActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
//Prpiedades
	UPROPERTY()
	USceneComponent* Root;
	UPROPERTY()
	USceneComponent* ChildSceneComponent;
	UPROPERTY()
	UStaticMeshComponent* BoxOne;
	UPROPERTY()
	UStaticMeshComponent* BoxTwo;
};
