// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MapaBuilder.generated.h"

UINTERFACE(MinimalAPI)
class UMapaBuilder : public UInterface
{
	GENERATED_BODY()
};
class BOMBERMAN_0120252_API IMapaBuilder
{
	GENERATED_BODY()

public:
	virtual void EstablecerMapa(FVector pos, FString tipoBloque) = 0;
	virtual void EstablecerEnemigos(FVector pos, FString tipoEnemigos) = 0;
	virtual void EstablecerPowerUp(FVector pos, FString tipoPowerUp) = 0;
	virtual void EstablecerObstaculos(FVector pos, FString tipoObstaculo) = 0;
	virtual class AMapaB* GetMapa() = 0;
};
