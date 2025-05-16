// Fill out your copyright notice in the Description page of Project Settings.


#include "MapaB.h"
#include "BloqueAcero.h"
#include "BloqueConcreto.h"
#include "BloqueMadera.h"
#include "BloqueHielo.h"
// Sets default values
AMapaB::AMapaB()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMapaB::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMapaB::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMapaB::CrearMapa(FVector posicion, FString tipoMuro)
{
	//Pierda
	if (tipoMuro == "Muro") {
	Mundo->SpawnActor<ABloqueAcero>(ABloqueAcero::StaticClass(), posicion, FRotator::ZeroRotator)
		->SetActorScale3D(FVector(2.0f, 2.0f, 2.0f));

	}
	else if (tipoMuro == "Tipo1") {
		Mundo->SpawnActor<ABloqueMadera>(ABloqueMadera::StaticClass(), posicion, FRotator::ZeroRotator)
			->SetActorScale3D(FVector(2.0f, 2.0f, 2.0f));
	}
	else if (tipoMuro == "Tipo2") {
		Mundo->SpawnActor<ABloqueConcreto>(ABloqueConcreto::StaticClass(), posicion, FRotator::ZeroRotator)
			->SetActorScale3D(FVector(2.0f, 2.0f, 2.0f));
	}
	else if (tipoMuro == "Tipo3") {
		Mundo->SpawnActor<ABloqueAcero>(ABloqueAcero::StaticClass(), posicion, FRotator::ZeroRotator)
			->SetActorScale3D(FVector(2.0f, 2.0f, 2.0f));
	}
	else if(tipoMuro == "Hielo") {
		//Hielo
		Mundo->SpawnActor<ABloqueHielo>(ABloqueHielo::StaticClass(), posicion, FRotator::ZeroRotator)
			->SetActorScale3D(FVector(2.0f, 2.0f, 2.0f));
	}
}

void AMapaB::CrearEnemigos(FVector posicion, FString tipoEnemigo)
{
	
}

void AMapaB::CrearPowerUp(FVector posicion, FString tipoPowerUp)
{

}

void AMapaB::CrearObstaculos(FVector posicion, FString tipoObstaculo)
{

}

void AMapaB::CaracteristicasDelMapa()
{
}