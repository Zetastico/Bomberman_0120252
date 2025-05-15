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
	virtual void CrearMuro(FVector posicion, FString tipoMuro) = 0;
	virtual void CrearBloque1(FVector posicion, FString tipoBloque) = 0;
	virtual void CrearBloque2(FVector posicion, FString tipoBloque) = 0;
	virtual void CrearBloque3(FVector posicion, FString tipoBloque) = 0;
};
