// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BloqueAcero.generated.h"

UCLASS()
class BOMBERMAN_0120252_API ABloqueAcero : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABloqueAcero();
	ABloqueAcero(FVector Escala, FVector Posicion);

	void InicializarBloque(FVector Escala, FVector Posicion);

protected:
	// Se llama al inicio del juego
	virtual void BeginPlay() override;

public:
	// Se llama en cada frame
	virtual void Tick(float DeltaTime) override;

private:
	// Malla del bloque
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* MallaBloqueAcero;

	UPROPERTY()
	UMaterialInterface* MaterialBloque;
};