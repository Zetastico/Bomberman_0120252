// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BloqueBase.h"
#include "BloqueAcero.generated.h"
UCLASS()
class BOMBERMAN_0120252_API ABloqueAcero : public ABloqueBase
{
	GENERATED_BODY()

public:
	ABloqueAcero();

protected:
	virtual void BeginPlay() override;

private:

	void InicializarBloque();
};