// Fill out your copyright notice in the Description page of Project Settings.


#include "MapaB.h"
#include "BloqueAcero.h"
#include "BloqueConcreto.h"
#include "BloqueMadera.h"

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

void AMapaB::CrearMuro(FVector posicion, FString tipoMuro)
{
	if (tipoMuro == "Muro") {
	Mundo->SpawnActor<ABloqueAcero>(ABloqueAcero::StaticClass(), posicion, FRotator::ZeroRotator)
		->SetActorScale3D(FVector(2.0f, 2.0f, 2.0f));

	}
}

void AMapaB::CrearBloque1(FVector posicion, FString tipoBloque)
{
	if (tipoBloque == "Madera") {
	Mundo->SpawnActor<ABloqueMadera>(ABloqueMadera::StaticClass(), posicion, FRotator::ZeroRotator)
		->SetActorScale3D(FVector(2.0f, 2.0f, 2.0f));
	}
}

void AMapaB::CrearBloque2(FVector posicion, FString tipoBloque)
{
	if (tipoBloque == "Concreto") {
	Mundo->SpawnActor<ABloqueConcreto>(ABloqueConcreto::StaticClass(), posicion, FRotator::ZeroRotator)
		->SetActorScale3D(FVector(2.0f, 2.0f, 2.0f));
	}
}

void AMapaB::CrearBloque3(FVector posicion, FString tipoBloque)
{
	if (tipoBloque == "Acero") {
	Mundo->SpawnActor<ABloqueAcero>(ABloqueAcero::StaticClass(), posicion, FRotator::ZeroRotator)
		->SetActorScale3D(FVector(2.0f, 2.0f, 2.0f));
	}
}

void AMapaB::CaracteristicasDelMapa()
{
}