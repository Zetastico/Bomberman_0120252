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

void AMapaHielo::EstablecerMapa(FVector pos, FString tipobloque) {
	if (!Mapa) { return; }
	Mapa->CrearMapa(pos, tipobloque);
}

void AMapaHielo::EstablecerEnemigos(FVector pos, FString tipoenemigo)
{
	if (!Mapa) { return; }
	Mapa->CrearEnemigos(pos, tipoenemigo);

}

void AMapaHielo::EstablecerPowerUp(FVector pos, FString tipopowerup)
{
	if (!Mapa) { return; }
	Mapa->CrearPowerUp(pos, tipopowerup);

}

void AMapaHielo::EstablecerObstaculos(FVector pos, FString tipoobstaculos)
{
	if (!Mapa) { return; }
	Mapa->CrearObstaculos(pos, tipoobstaculos);

}

AMapaB* AMapaHielo::GetMapa()
{
	return Mapa;
}



