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
	virtual void ConstruirMuros(FVector pos, FString tipo) = 0;
	virtual void ConstruirBloque1(FVector pos, FString tipo) = 0;
	virtual void ConstruirBloque2(FVector pos, FString tipo) = 0;
	virtual void ConstruirBloque3(FVector pos, FString tipo) = 0;
	virtual class AMapaB* GetMapa() = 0;
};
