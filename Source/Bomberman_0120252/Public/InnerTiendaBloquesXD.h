// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "wTiendatBloquesf.h"
#include "InnerTiendaBloquesXD.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_0120252_API AInnerTiendaBloquesXD : public AwTiendatBloquesf
{
	GENERATED_BODY()
	
public:
	//Concoct the selected potion
	virtual ABloqueF* ConcoctBloque(FString BloqueSKU, FVector Pos) override;
};

