// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Bomberman_0120252GameMode.generated.h"
//class Bloque;
UCLASS(minimalapi)
class ABomberman_0120252GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ABomberman_0120252GameMode();

protected:
	virtual void BeginPlay() override;
private:
	void SpawnMapa();
	void SpawnBloqueMadera();
	void SpawnBloqueLadrillo();
	void SpawnBloques();

public: 
	FVector posicionSgtBloque = FVector(1000.0f, 500.0f, 20.0f);
	TArray<TArray<int>> arrayMapaBloques = { 
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
	TArray<class Bloques*> arraybloques;

	};
	



