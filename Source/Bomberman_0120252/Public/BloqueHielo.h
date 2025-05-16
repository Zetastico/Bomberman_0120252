// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BloqueBase.h"
#include "BloqueHielo.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_0120252_API ABloqueHielo : public ABloqueBase
{
	GENERATED_BODY()
	
public:
	ABloqueHielo();

protected:
	virtual void BeginPlay() override;

private:

	void InicializarBloque();
};
