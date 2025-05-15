// Fill out your copyright notice in the Description page of Project Settings.


#include "InnerTiendaBloquesXD.h"
#include "BloqueF1.h"
#include "BloqueFMadera.h"
#include "BloqueFMaderaMagico.h"
#include "BloqueF.h"
#include "BloqueFAcero.h"
#include "BloqueFAceroMagico.h"
ABloqueF* AInnerTiendaBloquesXD::ConcoctBloque(FString BloqueSKU, FVector pos)
{
	//Select which potion to spawn depending on the passed string
	if (BloqueSKU.Equals("F1")) {
		return GetWorld()->SpawnActor<ABloqueF1>
			(ABloqueF1::StaticClass(), pos, FRotator::ZeroRotator);
	
	}
	else if (BloqueSKU.Equals("Madera")) {
		return GetWorld()->SpawnActor<ABloqueFMadera>
			(ABloqueFMadera::StaticClass(), pos, FRotator::ZeroRotator);
	}
	else if (BloqueSKU.Equals("Acero")) {
		return GetWorld()->SpawnActor<ABloqueFAcero>
			(ABloqueFAcero::StaticClass(), pos, FRotator::ZeroRotator);
	}
	else if (BloqueSKU.Equals("MaderaMagico")) {
		return GetWorld()->SpawnActor<ABloqueFMaderaMagico>
			(ABloqueFMaderaMagico::StaticClass(), pos, FRotator::ZeroRotator);
	}
	else if (BloqueSKU.Equals("AceroMagico")) {
		return GetWorld()->SpawnActor<ABloqueFAceroMagico>
			(ABloqueFAceroMagico::StaticClass(), pos, FRotator::ZeroRotator);
	}
	else return nullptr; //Return null if the string isn't valid
}