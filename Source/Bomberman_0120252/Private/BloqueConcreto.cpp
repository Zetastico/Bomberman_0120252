// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueConcreto.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInterface.h"
#include "UObject/ConstructorHelpers.h"

ABloqueConcreto::ABloqueConcreto()
{
	// No necesitamos Tick, el bloque no cambia con el tiempo
	PrimaryActorTick.bCanEverTick = false;

	InicializarBloque();
}

void ABloqueConcreto::InicializarBloque()
{
	// Cargar y asignar material
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> ObjetoMaterial(TEXT("Material'/Game/StarterContent/Materials/M_CobbleStone_Rough.M_CobbleStone_Rough'"));
	if (ObjetoMaterial.Succeeded())
	{
		MallaBloque->SetMaterial(0, ObjetoMaterial.Object);
	}

	// Escalar el bloque
	//MallaBloqueConcreto->SetWorldScale3D(FVector(2.0f, 2.0f, 2.0f));

	// Posición inicial
	//SetActorLocation(FVector(0.0f, 0.0f, 50.0f));
}

void ABloqueConcreto::BeginPlay()
{
	Super::BeginPlay();
}

