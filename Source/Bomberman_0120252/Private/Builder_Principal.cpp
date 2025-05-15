// Fill out your copyright notice in the Description page of Project Settings.


#include "Builder_Principal.h"
#include "MapaHielo.h"
#include "DirectorBuilder.h"
#include "MapaB.h"

// Sets default values
ABuilder_Principal::ABuilder_Principal()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABuilder_Principal::BeginPlay()
{
	Super::BeginPlay();

	MapaHielo = GetWorld()->SpawnActor<AMapaHielo>(AMapaHielo::StaticClass());

	Director = GetWorld()->SpawnActor<ADirectorBuilder>(ADirectorBuilder::StaticClass());

	Director->SetMapaBuilder(MapaHielo);

	for (int i = 0; i < arrayMapaBloques2.Num(); i++)
	{
		for (int j = 0; j < arrayMapaBloques2[i].Num(); j++)
		{
			
				switch (arrayMapaBloques2[i][j])
				{
				case 4:
					Director->ConstructMapa(FVector(300+i*200,150+j*200,-100), "Muro");
					break;
				case 3:
					Director->ConstructMapa(FVector(300 + i * 200, 150 + j * 200, -100), "Madera");
					break;
				case 2:
					Director->ConstructMapa(FVector(300 + i * 200, 150 + j * 200, -100), "Concreto");
					break;
				case 1:
					Director->ConstructMapa(FVector(300 + i * 200, 150 + j * 200, -100), "Acero");
					break;
				case 0:
					break;
				}
			
		}
	}
	AMapaB* Mapa = Director->GetMapa();
}

// Called every frame
void ABuilder_Principal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

