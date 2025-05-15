// Fill out your copyright notice in the Description page of Project Settings.
#include "BloqueAcero.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInterface.h"
#include "UObject/ConstructorHelpers.h"
ABloqueAcero::ABloqueAcero()
{
	// No necesitamos Tick, el bloque no cambia con el tiempo
	PrimaryActorTick.bCanEverTick = false;

	InicializarBloque();
}

void ABloqueAcero::InicializarBloque()
{

	// Cargar y asignar material
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> ObjetoMaterial(TEXT("Material'/Game/StarterContent/Materials/M_Metal_Brushed_Nickel.M_Metal_Brushed_Nickel'"));
	if (ObjetoMaterial.Succeeded())
	{
		MallaBloque->SetMaterial(0, ObjetoMaterial.Object);
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

