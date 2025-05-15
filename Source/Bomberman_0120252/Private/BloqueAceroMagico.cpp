// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueAceroMagico.h"

ABloqueAceroMagico::ABloqueAceroMagico()
{
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> ObjetoMaterial(TEXT("Material'/Game/StarterContent/Materials/M_Metal_Brushed_Nickel.M_Metal_Brushed_Nickel'"));
	if (ObjetoMaterial.Succeeded())
	{
		MallaBloque->SetMaterial(0, ObjetoMaterial.Object);
	}
}
