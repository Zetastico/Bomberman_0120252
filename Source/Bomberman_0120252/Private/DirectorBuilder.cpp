// Fill out your copyright notice in the Description page of Project Settings.


#include "DirectorBuilder.h"
#include "MapaB.h"
// Sets default values
ADirectorBuilder::ADirectorBuilder()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADirectorBuilder::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADirectorBuilder::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADirectorBuilder::SetMapaBuilder(AActor* Builder)
{
	//Cast the passed Actor and set the Builder
	MapaBuilder = Cast<IMapaBuilder>(Builder);
	if (!MapaBuilder) //Log Error if cast fails
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red,
			TEXT("Invalid Cast! See Output log for more details"));
		
	}
}

AMapaB* ADirectorBuilder::GetMapa()
{
	if (MapaBuilder)
	{
		//Returns the Lodging of the Builder
		return MapaBuilder->GetMapa();
	}
	//Log if the Builder is NULL
	UE_LOG(LogTemp, Error, TEXT("GetLodging(): Return nullptr"));
	return nullptr;
}
void ADirectorBuilder::ConstructMapa(FVector pos, FString tipo)
{
	//Log if the Builder is NULL
	if (!MapaBuilder) {
		return;
	}
				//Creates the buildings
		MapaBuilder->ConstruirMuros(pos, tipo);
		MapaBuilder->ConstruirBloque1(pos, tipo);
		MapaBuilder->ConstruirBloque2(pos, tipo);
		MapaBuilder->ConstruirBloque3(pos, tipo);
}
