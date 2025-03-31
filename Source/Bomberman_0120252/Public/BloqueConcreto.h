// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BloqueConcreto.generated.h"

UCLASS()
class BOMBERMAN_0120252_API ABloqueConcreto : public AActor
{
	GENERATED_BODY()

public:
	ABloqueConcreto();

protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* MallaBloqueConcreto;

	void InicializarBloque();
};
