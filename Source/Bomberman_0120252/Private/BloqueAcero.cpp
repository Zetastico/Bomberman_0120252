// Fill out your copyright notice in the Description page of Project Settings.
#include "BloqueAcero.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInterface.h"
#include "UObject/ConstructorHelpers.h"
// Sets default values
ABloqueAcero::ABloqueAcero()
{
	InicializarBloque(FVector(2.0f, 2.0f, 2.0f), FVector(0.0f, 0.0f, 50.0f));
}

// Constructor con tamaño y posición personalizados
ABloqueAcero::ABloqueAcero(FVector Escala, FVector Posicion)
{
	InicializarBloque(Escala, Posicion);
}

void ABloqueAcero::InicializarBloque(FVector Escala, FVector Posicion)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	// Crear el RootComponent
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

	// Crear la malla del bloque
	MallaBloqueAcero = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaBloqueAcero"));
	MallaBloqueAcero->SetupAttachment(RootComponent);

	// Cargar la malla del bloque (Cubo de StarterContent)
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMalla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	if (ObjetoMalla.Succeeded())
	{
		MallaBloqueAcero->SetStaticMesh(ObjetoMalla.Object);
	}
	
	// Cargar el material desde los archivos del juego
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> ObjetoMaterial(TEXT("Material'/Game/StarterContent/Materials/M_Metal_Brushed_Nickel.M_Metal_Brushed_Nickel'"));
	if (ObjetoMaterial.Succeeded())
	{
		MaterialBloque = ObjetoMaterial.Object;
		MallaBloqueAcero->SetMaterial(0, MaterialBloque);
	}

	// Escalar el bloque
	//MallaBloqueAcero->SetWorldScale3D(FVector(10.0f, 10.0f, 0.5f));
	SetActorLocation(Posicion);

}

// Se llama al inicio del juego
void ABloqueAcero::BeginPlay()
{
	Super::BeginPlay();
}

// Se llama en cada frame (no lo usamos en este caso)
void ABloqueAcero::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}