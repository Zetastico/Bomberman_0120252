// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlanoMapa.generated.h"

UINTERFACE(MinimalAPI)
class UPlanoMapa : public UInterface
{
GENERATED_BODY()
};

class BOMBERMAN_0120252_API IPlanoMapa
{
	GENERATED_BODY()

public:
	virtual void CrearMapa(FVector posicion, FString tipoMuro) = 0;
	virtual void CrearEnemigos(FVector posicion, FString TipoEnemigo) = 0;
	virtual void CrearPowerUp(FVector posicion, FString tipoPowerUp) = 0;
	virtual void CrearObstaculos(FVector posicion, FString tipoObstaculo) = 0;
};
