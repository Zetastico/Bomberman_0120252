// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BloqueBase.h"
#include "BloqueMov.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_0120252_API ABloqueMov : public ABloqueBase
{
	GENERATED_BODY()
	
public:
	ABloqueMov();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

private:
    FVector PosicionInicial;
    FVector PosicionObjetivo;

    float TiempoEntreMovimientos;
    float TiempoDesdeUltimoMovimiento;
    float VelocidadMovimiento;

    bool bMoviendoAObjetivo;

    void ElegirNuevaDireccion();
};