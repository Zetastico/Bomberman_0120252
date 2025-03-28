// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueLadrillo.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInterface.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
ABloqueLadrillo::ABloqueLadrillo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	InicializarBloque(FVector(2.0f, 2.0f, 2.0f), FVector(0.0f, 0.0f, 50.0f));

}

// Constructor con tamaño y posición personalizados
ABloqueLadrillo::ABloqueLadrillo(FVector Escala, FVector Posicion)
{
	InicializarBloque(Escala, Posicion);
}

void ABloqueLadrillo::InicializarBloque(FVector Escala, FVector Posicion)
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Crear el RootComponent
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

	// Crear la malla del bloque
	MallaBloqueLadrillo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaBloqueLadrillo"));
	MallaBloqueLadrillo->SetupAttachment(RootComponent);

	// Cargar la malla del bloque (Cubo de StarterContent)
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMalla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	if (ObjetoMalla.Succeeded())
	{
		MallaBloqueLadrillo->SetStaticMesh(ObjetoMalla.Object);
	}

	// Cargar el material desde los archivos del juego
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> ObjetoMaterial(TEXT("Material'/Game/StarterContent/Materials/M_Brick_Clay_New.M_Brick_Clay_New'"));
	if (ObjetoMaterial.Succeeded())
	{
		MaterialBloqueLadrillo = ObjetoMaterial.Object;
		MallaBloqueLadrillo->SetMaterial(0, MaterialBloqueLadrillo);
	}

	// Escalar el bloque
	//MallaBloqueAcero->SetWorldScale3D(FVector(10.0f, 10.0f, 0.5f));
	SetActorLocation(Posicion);
}



// Called when the game starts or when spawned
void ABloqueLadrillo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABloqueLadrillo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

