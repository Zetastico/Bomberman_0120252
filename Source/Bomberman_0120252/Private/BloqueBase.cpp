// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueBase.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
ABloqueBase::ABloqueBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MallaBloque = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaBloque"));

	MallaBloque->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MallaBloqueAsset(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));

	if (MallaBloque) {
		MallaBloque->SetStaticMesh(MallaBloqueAsset.Object);
		MallaBloque->SetRelativeScale3D(FVector(2.0f, 2.0f, 2.0f));
	}

}

// Called when the game starts or when spawned
void ABloqueBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABloqueBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

