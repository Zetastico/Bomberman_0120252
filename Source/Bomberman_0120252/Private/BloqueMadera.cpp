// Fill out your copyright notice in the Description page of Project Settings.

#include "BloqueMadera.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInterface.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
ABloqueMadera::ABloqueMadera()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	InicializarBloque(FVector(2.0f, 2.0f, 2.0f), FVector(0.0f, 0.0f, 50.0f));
	


}

// Constructor con tamaño y posición personalizados
ABloqueMadera::ABloqueMadera(FVector Escala, FVector Posicion)
{
	InicializarBloque(Escala, Posicion);
}

void ABloqueMadera::InicializarBloque(FVector Escala, FVector Posicion)
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Crear el RootComponent
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

	// Crear la malla del bloque
	MallaBloqueMadera = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaBloqueMadera"));
	MallaBloqueMadera->SetupAttachment(RootComponent);

	// Cargar la malla del bloque (Cubo de StarterContent)
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMalla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	if (ObjetoMalla.Succeeded())
	{
		MallaBloqueMadera->SetStaticMesh(ObjetoMalla.Object);
	}

	// Cargar el material desde los archivos del juego
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> ObjetoMaterial(TEXT("Material'/Game/StarterContent/Materials/M_Wood_Oak.M_Wood_Oak'"));
	if (ObjetoMaterial.Succeeded())
	{
		MaterialBloqueMadera = ObjetoMaterial.Object;
		MallaBloqueMadera->SetMaterial(0, MaterialBloqueMadera);
	}

	// Escalar el bloque
	//MallaBloqueAcero->SetWorldScale3D(FVector(10.0f, 10.0f, 0.5f));
	SetActorLocation(Posicion);
	DireccionMovimiento = 1;
}

//400 400 50

// Called when the game starts or when spawned
void ABloqueMadera::BeginPlay()
{
	Super::BeginPlay();
	PosInicial = GetActorLocation();

}

// Called every frame
void ABloqueMadera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Obtener la posición actual
	FVector NuevaPosicion = GetActorLocation();

	// Mover en la dirección actual
	NuevaPosicion.X += DireccionMovimiento * 400.0f * DeltaTime;

	// Si llega al límite, cambia la dirección
	if (NuevaPosicion.X >= PosInicial.X + 500.0f || NuevaPosicion.X <= PosInicial.X - 500.0f)
	{
		DireccionMovimiento *= -1;
	}

	// Aplicar la nueva posición
	SetActorLocation(NuevaPosicion);

}

