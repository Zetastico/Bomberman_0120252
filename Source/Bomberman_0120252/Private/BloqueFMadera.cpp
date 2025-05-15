// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueFMadera.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInterface.h"
#include "UObject/ConstructorHelpers.h"

ABloqueFMadera::ABloqueFMadera()
{
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> ObjetoMaterial(TEXT("/Game/StarterContent/Materials/M_Wood_Oak.M_Wood_Oak"));
	if (ObjetoMaterial.Succeeded())
	{
		MallaBloque->SetMaterial(0, ObjetoMaterial.Object);
	}
}
