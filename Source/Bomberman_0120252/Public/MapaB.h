// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlanoMapa.h"
#include "MapaB.generated.h"

UCLASS()
class BOMBERMAN_0120252_API AMapaB : public AActor, public IPlanoMapa
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMapaB();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UWorld* Mundo = GetWorld();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void CrearMapa(FVector posicion, FString tipoMuro);
	void CrearEnemigos(FVector posicion, FString TipoEnemigo);
	void CrearPowerUp(FVector posicion, FString tipoPowerUp);
	void CrearObstaculos(FVector posicion, FString tipoObstaculo);
	void CaracteristicasDelMapa();
};
/*
virtual void EstablecerMapa(FVector posicion) = 0;
virtual void EstablecerEnemigos(FVector posicion, FString TipoEnemigo) = 0;
virtual void EstablecerPowerUp(FVector posicion, FString tipoPowerUp) = 0;
virtual void EstablecerObstaculos(FVector posicion, FString tipoObstaculo) = 0;

*/