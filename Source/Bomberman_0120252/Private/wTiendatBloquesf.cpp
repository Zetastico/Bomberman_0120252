// Fill out your copyright notice in the Description page of Project Settings.


#include "wTiendatBloquesf.h"

// Sets default values
AwTiendatBloquesf::AwTiendatBloquesf()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AwTiendatBloquesf::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AwTiendatBloquesf::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

ABloqueF* AwTiendatBloquesf::OrderBloque(FString Category, FVector pos)
{

	
	//Create the Potion and log its name
	ABloqueF* Bloque = ConcoctBloque(Category, pos);
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,
		//FString::Printf(TEXT("Concocting %s"),
			//*Bloque->GetPotionName()));
	//Start the concoct process
	/*
	Bloque->Boil();
	Bloque->Bubble();
	Bloque->Brew();
	Bloque->Bottle();
	*/
	//Returns the created potion
	return Bloque;
}