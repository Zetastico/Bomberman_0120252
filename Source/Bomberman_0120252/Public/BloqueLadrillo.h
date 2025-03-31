// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BloqueLadrillo.generated.h"

UCLASS()
class BOMBERMAN_0120252_API ABloqueLadrillo : public AActor
{
	GENERATED_BODY()

public:
	ABloqueLadrillo();

protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* MallaBloqueLadrillo;

	void InicializarBloque();
};