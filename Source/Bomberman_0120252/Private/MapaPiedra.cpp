// Fill out your copyright notice in the Description page of Project Settings.


#include "MapaPiedra.h"
#include "MapaB.h"

// Sets default values
AMapaPiedra::AMapaPiedra()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMapaPiedra::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMapaPiedra::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMapaPiedra::EstablecerMapa(FVector pos, FString tipobloque) {
	if (!Mapa) { return; }
	UE_LOG(LogTemp, Error, TEXT("Entro aqui"));
	Mapa->CrearMapa(pos, tipobloque);
}

void AMapaPiedra::EstablecerEnemigos(FVector pos, FString tipoenemigo)
{
	if (!Mapa) { return; }
	Mapa->CrearEnemigos(pos, tipoenemigo);

}

void AMapaPiedra::EstablecerPowerUp(FVector pos, FString tipopowerup)
{
	if (!Mapa) { return; }
	Mapa->CrearPowerUp(pos, tipopowerup);

}

void AMapaPiedra::EstablecerObstaculos(FVector pos, FString tipoobstaculos)
{
	if (!Mapa) { return; }
	Mapa->CrearObstaculos(pos, tipoobstaculos);

}


AMapaB* AMapaPiedra::GetMapa()
{
	return Mapa;
}

