// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Builder_Principal.generated.h"

UCLASS()
class BOMBERMAN_0120252_API ABuilder_Principal : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABuilder_Principal();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(VIsibleAnywhere, Category = "Main")
	class AMapaHielo* MapaHielo;

	UPROPERTY(VIsibleAnywhere, Category = "Main")
	class ADirectorBuilder* Director;

	TArray<TArray<int>> arrayMapaBloques2 = {
										{4,4,4,4,4,4,4,4,4,4,4,4},
										{4,0,0,0,2,2,2,0,0,0,0,4},
										{4,2,1,0,0,0,0,0,1,2,0,4},
										{4,0,1,0,2,0,2,0,0,0,0,4},
										{4,0,0,0,0,2,2,0,1,1,2,4},
										{4,0,2,2,2,0,2,0,2,2,2,4},
										{4,0,0,0,1,0,1,0,0,0,0,4},
										{4,2,2,0,2,0,2,1,2,1,0,4},
										{4,0,2,0,2,0,2,2,1,2,0,4},
										{4,0,2,0,2,0,2,2,2,1,0,4},
										{4,0,0,0,0,0,0,0,0,0,0,4},
										{4,4,4,4,4,4,4,4,4,4,4,4} };

};
