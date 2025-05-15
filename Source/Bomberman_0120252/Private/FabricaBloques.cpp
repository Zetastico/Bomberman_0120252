// Fill out your copyright notice in the Description page of Project Settings.


#include "FabricaBloques.h"
#include "InnerTiendaBloquesXD.h"
// Sets default values
AFabricaBloques::AFabricaBloques()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	
}

// Called when the game starts or when spawned
void AFabricaBloques::BeginPlay()
{
	Super::BeginPlay();
	
	AwTiendatBloquesf* InnerShopBlocks = GetWorld()->SpawnActor<AInnerTiendaBloquesXD>(AInnerTiendaBloquesXD::StaticClass());

	ABloqueF* Bloque = InnerShopBlocks->OrderBloque("F1", FVector(0,0,0));
}

// Called every frame
void AFabricaBloques::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

