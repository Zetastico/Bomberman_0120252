// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueLadrillo.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInterface.h"
#include "UObject/ConstructorHelpers.h"

ABloqueLadrillo::ABloqueLadrillo()
{
	// No necesitamos Tick, el bloque no cambia con el tiempo
	PrimaryActorTick.bCanEverTick = false;

	// Crear el RootComponent
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

	// Crear la malla del bloque
	MallaBloqueLadrillo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaBloqueLadrillo"));
	MallaBloqueLadrillo->SetupAttachment(RootComponent);

	InicializarBloque();
}

void ABloqueLadrillo::InicializarBloque()
{
	// Cargar la malla del bloque (Cubo de StarterContent)
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMalla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	if (ObjetoMalla.Succeeded())
	{
		MallaBloqueLadrillo->SetStaticMesh(ObjetoMalla.Object);
	}

	// Cargar y asignar material
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> ObjetoMaterial(TEXT("Material'/Game/StarterContent/Materials/M_Brick_Clay_New.M_Brick_Clay_New'"));
	if (ObjetoMaterial.Succeeded())
	{
		MallaBloqueLadrillo->SetMaterial(0, ObjetoMaterial.Object);
	}

	// Escalar el bloque
	//MallaBloqueLadrillo->SetWorldScale3D(FVector(2.0f, 2.0f, 2.0f));

	// Posición inicial (por defecto en 0,0,50)
	SetActorLocation(FVector(0.0f, 0.0f, 50.0f));
}

void ABloqueLadrillo::BeginPlay()
{
	Super::BeginPlay();
}
