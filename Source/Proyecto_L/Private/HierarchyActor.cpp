// Fill out your copyright notice in the Description page of Project Settings.

#include "HierarchyActor.h"
#include "UE4CookbookGameMode.h"

//Constructor
AHierarchyActor::AHierarchyActor()
{
		// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//Creando componentes del libro
	Root = CreateDefaultSubobject<USceneComponent>("Root");
	ChildSceneComponent =
		CreateDefaultSubobject<USceneComponent>("ChildSceneComponent");
			BoxOne =
			CreateDefaultSubobject<UStaticMeshComponent>("BoxOne");
	BoxTwo =
		CreateDefaultSubobject<UStaticMeshComponent>("BoxTwo");
	//Buscar y establecer un recurso de malla
	auto MeshAsset =
		ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("/ Script / Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_QuadPyramid.Shape_QuadPyramid'"));
			if (MeshAsset.Object != nullptr)
			{
				BoxOne->SetStaticMesh(MeshAsset.Object);
				BoxTwo->SetStaticMesh(MeshAsset.Object);
			}
	//Establecer la jerarquia de los componentes
	RootComponent = Root;
	BoxOne->AttachToComponent(Root, FAttachmentTransformRules::KeepRelativeTransform);
	BoxTwo->AttachToComponent(ChildSceneComponent, FAttachmentTransformRules::KeepRelativeTransform);
	ChildSceneComponent->AttachToComponent(Root, FAttachmentTransformRules::KeepRelativeTransform);
	ChildSceneComponent->SetRelativeTransform
	(FTransform(FRotator(0, 0, 0), FVector(250, 0, 0),
		FVector(0.1f)));
}

// Called when the game starts or when spawned
void AHierarchyActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHierarchyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
