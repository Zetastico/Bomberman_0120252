// Fill out your copyright notice in the Description page of Project Settings.


#include "MapaHielo.h"
#include "MapaB.h"

// Sets default values
AMapaHielo::AMapaHielo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMapaHielo::BeginPlay()
{
	Super::BeginPlay();

	Mapa = GetWorld()->SpawnActor<AMapaB>(AMapaB::StaticClass());
	Mapa->AttachToActor(this,FAttachmentTransformRules::KeepRelativeTransform);

	
}

// Called every frame
void AMapaHielo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMapaHielo::ConstruirMuros(FVector pos, FString tipo) {
	if (!Mapa) { return; }
	Mapa->CrearMuro(pos, "Muro");
}

void AMapaHielo::ConstruirBloque1(FVector pos, FString tipo)
{
	if (!Mapa) { return; }
	Mapa->CrearBloque1(pos, "Madera");

}

void AMapaHielo::ConstruirBloque2(FVector pos, FString tipo)
{
	if (!Mapa) { return; }
	Mapa->CrearBloque2(pos, "Metal");

}

void AMapaHielo::ConstruirBloque3(FVector pos, FString tipo)
{
	if (!Mapa) { return; }
	Mapa->CrearBloque3(pos, "Ns");

}

AMapaB* AMapaHielo::GetMapa()
{
	return Mapa;
}



