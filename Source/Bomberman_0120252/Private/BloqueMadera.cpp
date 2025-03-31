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

	// Crear el RootComponent
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

	// Crear la malla del bloque
	MallaBloqueMadera = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaBloqueMadera"));
	MallaBloqueMadera->SetupAttachment(RootComponent);

	InicializarBloque();

}


void ABloqueMadera::InicializarBloque()
{
	// Cargar la malla del bloque (Cubo de StarterContent)
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMalla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	if (ObjetoMalla.Succeeded())
	{
		MallaBloqueMadera->SetStaticMesh(ObjetoMalla.Object);
	}

	// Cargar y asignar material
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> ObjetoMaterial(TEXT("Material'/Game/StarterContent/Materials/M_Brick_Clay_New.M_Brick_Clay_New'"));
	if (ObjetoMaterial.Succeeded())
	{
		MallaBloqueMadera->SetMaterial(0, ObjetoMaterial.Object);
	}

	// Escalar el bloque
	//MallaBloqueLadrillo->SetWorldScale3D(FVector(2.0f, 2.0f, 2.0f));

	// Posición inicial (por defecto en 0,0,50)
	SetActorLocation(FVector(0.0f, 0.0f, 50.0f));
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

