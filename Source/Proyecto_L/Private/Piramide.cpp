// Fill out your copyright notice in the Description page of Project Settings.


#include "Piramide.h"
#include "UE4CookbookGameMode.h" //Asi estaba en el ejemplo

// Sets default values
APiramide::APiramide()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

//Agregando al constructor
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>
		("BaseMeshComponent");
//Asignar el Static Mech (piramide)
	auto MeshAsset =
		ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("/ Script / Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_QuadPyramid.Shape_QuadPyramid'"));
			if (MeshAsset.Object != nullptr) 
			{
				Mesh->SetStaticMesh(MeshAsset.Object);
			}
}

// Called when the game starts or when spawned
void APiramide::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APiramide::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}