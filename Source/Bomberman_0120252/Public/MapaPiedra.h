// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MapaBuilder.h"
#include "MapaPiedra.generated.h"
UCLASS()
class BOMBERMAN_0120252_API AMapaPiedra : public AActor, public IMapaBuilder
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMapaPiedra();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	UPROPERTY(VisibleAnywhere, Category = "Hotel Lodging")
	class AMapaB* Mapa;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void EstablecerMapa(FVector pos, FString tipoBloque) override;
	virtual void EstablecerEnemigos(FVector pos, FString tipoEnemigo) override;
	virtual void EstablecerPowerUp(FVector pos, FString tipoPowerUp) override;
	virtual void EstablecerObstaculos(FVector pos, FString tipoObstaculo) override;
	virtual class AMapaB* GetMapa() override;


};
