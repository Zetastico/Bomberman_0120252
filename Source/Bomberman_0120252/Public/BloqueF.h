// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BloqueF.generated.h"

UCLASS()
class BOMBERMAN_0120252_API ABloqueF : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABloqueF();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* MallaBloque;
		//The name of this Potion
		FString NombreBloque;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	//Nombre
	FString GetNombreBloque();
};
