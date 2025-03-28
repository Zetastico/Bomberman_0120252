// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueConcreto.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInterface.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
ABloqueConcreto::ABloqueConcreto()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	InicializarBloque(FVector(2.0f, 2.0f, 2.0f), FVector(0.0f, 0.0f, 50.0f));

}
ABloqueConcreto::ABloqueConcreto(FVector Escala, FVector Posicion)
{
	InicializarBloque(Escala, Posicion);
}

void ABloqueConcreto::InicializarBloque(FVector Escala, FVector Posicion)
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Crear el RootComponent
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

	// Crear la malla del bloque
	MallaBloqueConcreto = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaBloqueConcreto"));
	MallaBloqueConcreto->SetupAttachment(RootComponent);

	// Cargar la malla del bloque (Cubo de StarterContent)
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMalla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	if (ObjetoMalla.Succeeded())
	{
		MallaBloqueConcreto->SetStaticMesh(ObjetoMalla.Object);
	}

	// Cargar el material desde los archivos del juego
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> ObjetoMaterial(TEXT("Material'/Game/StarterContent/Materials/M_CobbleStone_Rough.M_CobbleStone_Rough'"));
	if (ObjetoMaterial.Succeeded())
	{
		MaterialBloqueConcreto = ObjetoMaterial.Object;
		MallaBloqueConcreto->SetMaterial(0, MaterialBloqueConcreto);
	}

	// Escalar el bloque
	//MallaBloqueAcero->SetWorldScale3D(FVector(10.0f, 10.0f, 0.5f));
	SetActorLocation(Posicion);
}

// Called when the game starts or when spawned
void ABloqueConcreto::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABloqueConcreto::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

