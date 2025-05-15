// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BloqueBase.generated.h"

UCLASS()
class BOMBERMAN_0120252_API ABloqueBase : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABloqueBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* MallaBloque;

	bool bPuedeMoverse;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
