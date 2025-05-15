// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueF1.h"
#include "Materials/MaterialInterface.h"
ABloqueF1::ABloqueF1()
{
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> ObjetoMaterial(TEXT("Material'/Game/StarterContent/Materials/M_Metal_Brushed_Nickel.M_Metal_Brushed_Nickel'"));
	if (ObjetoMaterial.Succeeded())
	{
		MallaBloque->SetMaterial(0, ObjetoMaterial.Object);
	}
}

void ABloqueF1::BeginPlay()
{
	Super::BeginPlay();
}