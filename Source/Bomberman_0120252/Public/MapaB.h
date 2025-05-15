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

	void CrearMuro(FVector posicion, FString tipoMuro);
	void CrearBloque1(FVector posicion, FString tipoBloque);
	void CrearBloque2(FVector posicion, FString tipoBloque);
	void CrearBloque3(FVector posicion, FString tipoBloque);
	void CaracteristicasDelMapa();
};
