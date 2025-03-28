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
	// Sets default values for this actor's properties
	ABloqueConcreto();

	ABloqueConcreto(FVector Escala, FVector Posicion);

	void InicializarBloque(FVector Escala, FVector Posicion);
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* MallaBloqueConcreto;

	UPROPERTY()
	UMaterialInterface* MaterialBloqueConcreto;
};
