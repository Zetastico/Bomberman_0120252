// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MapaBuilder.h"
#include "DirectorBuilder.generated.h"
UCLASS()
class BOMBERMAN_0120252_API ADirectorBuilder : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADirectorBuilder();

private:

	IMapaBuilder* MapaBuilder;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void ConstructMapa(FVector pos, FString tipo);
	//Set the Builder Actor
	void SetMapaBuilder(AActor* Builder);
	//Get the Lodging of the Builder
	class AMapaB* GetMapa();
};
