// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MapaBuilder.h"
#include "MapaHielo.generated.h"
UCLASS()
class BOMBERMAN_0120252_API AMapaHielo : public AActor, public IMapaBuilder
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMapaHielo();

private:
	UPROPERTY(VisibleAnywhere, Category = "Hotel Lodging")
	class AMapaB* Mapa;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void ConstruirMuros(FVector pos, FString tipo) override;
	virtual void ConstruirBloque1(FVector pos, FString tipo) override;
	virtual void ConstruirBloque2(FVector pos, FString tipo) override;
	virtual void ConstruirBloque3(FVector pos, FString tipo) override;
	virtual class AMapaB* GetMapa() override;
};
