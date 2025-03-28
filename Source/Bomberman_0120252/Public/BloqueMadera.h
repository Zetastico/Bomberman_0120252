// Fill out your copyright notice in the Description page of Project Settings.
#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h" // Añadir esta línea para incluir UStaticMeshComponent
#include "Materials/MaterialInterface.h" // Añadir esta línea para incluir UMaterialInterface
#include "BloqueMadera.generated.h"
UCLASS()
class BOMBERMAN_0120252_API ABloqueMadera : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABloqueMadera();
	ABloqueMadera(FVector Escala, FVector Posicion);

	void InicializarBloque(FVector Escala, FVector Posicion);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	FVector PosInicial;
	int DireccionMovimiento;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* MallaBloqueMadera;

	UPROPERTY()
	UMaterialInterface* MaterialBloqueMadera;
};
