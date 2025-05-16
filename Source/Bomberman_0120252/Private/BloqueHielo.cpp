// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueHielo.h"

#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInterface.h"
#include "UObject/ConstructorHelpers.h"
ABloqueHielo::ABloqueHielo()
{
	// No necesitamos Tick, el bloque no cambia con el tiempo
	PrimaryActorTick.bCanEverTick = false;

	InicializarBloque();
}

void ABloqueHielo::InicializarBloque()
{

	// Cargar y asignar material
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> ObjetoMaterial(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Glass.M_Glass'"));
	if (ObjetoMaterial.Succeeded())
	{
		MallaBloque->SetMaterial(0, ObjetoMaterial.Object);
	}

	// Escalar el bloque
	//MallaBloqueAcero->SetWorldScale3D(FVector(2.0f, 2.0f, 2.0f));

	// Posición inicial
	SetActorLocation(FVector(0.0f, 0.0f, 50.0f));
}

void ABloqueHielo::BeginPlay()
{
	Super::BeginPlay();
}
