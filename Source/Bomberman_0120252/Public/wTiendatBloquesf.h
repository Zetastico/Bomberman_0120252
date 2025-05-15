// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BloqueF.h"
#include "wTiendatBloquesf.generated.h"
UCLASS()
class BOMBERMAN_0120252_API AwTiendatBloquesf : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AwTiendatBloquesf();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	ABloqueF* OrderBloque(FString Category, FVector pos);

	//Factory
	virtual ABloqueF* ConcoctBloque(FString BloqueSKU, FVector Pos)
		PURE_VIRTUAL(AwTiendatBloquesf::ConcoctBloque, return nullptr;);

};
