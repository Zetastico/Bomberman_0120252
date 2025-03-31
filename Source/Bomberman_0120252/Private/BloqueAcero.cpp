// Fill out your copyright notice in the Description page of Project Settings.
#include "BloqueAcero.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInterface.h"
#include "UObject/ConstructorHelpers.h"
ABloqueAcero::ABloqueAcero()
{
	// No necesitamos Tick, el bloque no cambia con el tiempo
	PrimaryActorTick.bCanEverTick = false;

	// Crear el RootComponent
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

	// Crear la malla del bloque
	MallaBloqueAcero = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaBloqueAcero"));
	MallaBloqueAcero->SetupAttachment(RootComponent);

	InicializarBloque();
}

void ABloqueAcero::InicializarBloque()
{
	// Cargar la malla del bloque (Cubo de StarterContent)
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMalla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	if (ObjetoMalla.Succeeded())
	{
		MallaBloqueAcero->SetStaticMesh(ObjetoMalla.Object);
	}

	// Cargar y asignar material
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> ObjetoMaterial(TEXT("Material'/Game/StarterContent/Materials/M_Metal_Brushed_Nickel.M_Metal_Brushed_Nickel'"));
	if (ObjetoMaterial.Succeeded())
	{
		MallaBloqueAcero->SetMaterial(0, ObjetoMaterial.Object);
	}

	// Escalar el bloque
	//MallaBloqueAcero->SetWorldScale3D(FVector(2.0f, 2.0f, 2.0f));

	// Posición inicial
	SetActorLocation(FVector(0.0f, 0.0f, 50.0f));
}

void ABloqueAcero::BeginPlay()
{
	Super::BeginPlay();
}