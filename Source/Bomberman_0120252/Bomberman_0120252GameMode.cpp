// Copyright Epic Games, Inc. All Rights Reserved.

#include "Bomberman_0120252GameMode.h"
#include "Bomberman_0120252Character.h"
#include "UObject/ConstructorHelpers.h"
#include "wTiendatBloquesf.h"
#include "BloqueAcero.h"
#include "BloqueMadera.h"
#include "BloqueLadrillo.h"
#include "BloqueConcreto.h"
#include "InnerTiendaBloquesXD.h"
#include "PuertaTP.h"
#include "BloqueMov.h"
#include "EnemigoBase.h"
#include "MapaHielo.h"
#include "MapaB.h"
#include "MapaBuilder.h"
#include "DirectorBuilder.h"
#include "Math/UnrealMathUtility.h"
#include "Kismet/GameplayStatics.h"

ABomberman_0120252GameMode::ABomberman_0120252GameMode()
{
	// set default pawn class to our Blueprinted character
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;

	}
}

void ABomberman_0120252GameMode::BeginPlay()
{
	Super::BeginPlay();

	
	// Generar el MAPA al inicio del juego
	SpawnMapa();

	//Genera bloques de madera
	//SpawnBloqueMadera();

	//Mapa v2 Nivel1
	//SpawnMapa1();



	//SpawnMapa1();

	//Mapa v2 Nivel2
	//SpawnMapa2();

	//Mapa v2 Nivel2
	//SpawnMapa3();

	//Posicionar al jugador
	//PosJugador();

	//GenerarMapaFactoryMethon();

	GenerarMapaBuilder();
}

void ABomberman_0120252GameMode::SpawnMapa()
{
	if (UWorld* Mundo = GetWorld())
	{
		// Crear el suelo (bloque grande)
		Mundo->SpawnActor<ABloqueAcero>(ABloqueAcero::StaticClass(), FVector(2400.0f, 2300.0f, -150.0f), FRotator::ZeroRotator)
			->SetActorScale3D(FVector(50.0f, 50.0f, 0.5f));

		/*Mundo->SpawnActor<ABloqueAcero>(ABloqueAcero::StaticClass(), FVector(1360.0f, 4100.0f, -150.0f), FRotator::ZeroRotator)
			->SetActorScale3D(FVector(25.0f, 24.0f, 0.5f));

		Mundo->SpawnActor<ABloqueAcero>(ABloqueAcero::StaticClass(), FVector(1360.0f, 7100.0f, -150.0f), FRotator::ZeroRotator)
			->SetActorScale3D(FVector(25.0f, 24.0f, 0.5f));*/

		/*
		// Muros verticales (izquierda y derecha)
		Mundo->SpawnActor<ABloqueAcero>(ABloqueAcero::StaticClass(), FVector(160.0f, 1300.0f, 50.0f), FRotator(90,90,90))
			->SetActorScale3D(FVector(2.0f, 25.0f, 0.5f));

		Mundo->SpawnActor<ABloqueAcero>(ABloqueAcero::StaticClass(), FVector(2660.0f, 1300.0f, 50.0f), FRotator(90,90,90))
			->SetActorScale3D(FVector(2.0f, 25.0f, 0.5f));

		// Muros horizontales (arriba y abajo) - Rotados 90° en el eje Z
		Mundo->SpawnActor<ABloqueAcero>(ABloqueAcero::StaticClass(), FVector(1330.0f, 100.0f, 50.0f), FRotator(90, 90, 0))
			->SetActorScale3D(FVector(2.0f, 25.0f, 0.5f));



		Mundo->SpawnActor<ABloqueAcero>(ABloqueAcero::StaticClass(), FVector(2110.0f, 2440.0f, 50.0f), FRotator(90, 0, 90))
			->SetActorScale3D(FVector(2.0f, 10.0f, 0.5f));

		Mundo->SpawnActor<ABloqueAcero>(ABloqueAcero::StaticClass(), FVector(560.0f, 2440.0f, 50.0f), FRotator(90, 0, 90))
			->SetActorScale3D(FVector(2.0f, 10.0f, 0.5f));
			*/

		// Mensaje en pantalla
		//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("Bloques generados"));
	}
}

void ABomberman_0120252GameMode::SpawnBloqueMadera() {
	if (UWorld* Mundo = GetWorld())
	{
		
		Mundo->SpawnActor<ABloqueMadera>(ABloqueMadera::StaticClass(), FVector(1360.0f, 2900.0f, -25.0f), FRotator::ZeroRotator)
			->SetActorScale3D(FVector(5.0f, 2.0f, 0.5f));

		Mundo->SpawnActor<ABloqueMadera>(ABloqueMadera::StaticClass(), FVector(1360.0f, 3300.0f, 25.0f), FRotator::ZeroRotator)
			->SetActorScale3D(FVector(5.0f, 2.0f, 0.5f));

		Mundo->SpawnActor<ABloqueMadera>(ABloqueMadera::StaticClass(), FVector(1360.0f, 3600.0f, 75.0f), FRotator::ZeroRotator)
			->SetActorScale3D(FVector(5.0f, 2.0f, 0.5f));
	}
}

void ABomberman_0120252GameMode::SpawnMapa1()
{
	//Recorrer el array de bloques y hacer spawn de cada uno
	for (int i = 0; i < arrayMapaBloques1.Num(); i++) 
	{
		for (int j = 0; j < arrayMapaBloques1[i].Num(); j++) 
		{
			if (UWorld* Mundo = GetWorld()) 
			{
				switch(arrayMapaBloques1[i][j])
				{
					case 5:
					Mundo->SpawnActor<APuertaTP>(APuertaTP::StaticClass(), FVector(300.0f + i * 200, 150.0f + j * 200, 0.0f), FRotator::ZeroRotator)
						->SetActorScale3D(FVector(4.0f, 2.0f, 2.0f));
					//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("3"));
					break;
					case 4:
						Mundo->SpawnActor<ABloqueAcero>(ABloqueAcero::StaticClass(), FVector(200.0f + i * 200, 150.0f + j * 200, -100.0f), FRotator::ZeroRotator);
						//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("3"));
						break;
					case 3:
						Mundo->SpawnActor<ABloqueMov>(ABloqueMov::StaticClass(), FVector(200.0f + i * 200, 150.0f + j * 200, -100.0f), FRotator::ZeroRotator);
						//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("3"));
						break;
					case 2: 
						Mundo->SpawnActor<ABloqueLadrillo>(ABloqueLadrillo::StaticClass(), FVector(200.0f + i * 200, 150.0f + j * 200, -100.0f), FRotator::ZeroRotator);
						//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("1"));
						break;
					case 1:
						Mundo->SpawnActor<ABloqueConcreto>(ABloqueConcreto::StaticClass(), FVector(200.0f + i * 200, 150.0f + j * 200, -100.0f), FRotator::ZeroRotator);
						//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("2"));
						break;
					case 0:
						//int contador = 0;
						//int Spawn = FMath::RandRange(0, 5);
						//if (contador == 5) {
						//	break;
						//}
						//if (Spawn == 5) {
							FActorSpawnParameters SpawnParams;
							SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

							FVector SpawnLocation = FVector(200.0f + i * 200, 150.0f + j * 200, -50.0f);
							
							
							AEnemigoBase* Enemigo2 = GetWorld()->SpawnActor<AEnemigoBase>(
							AEnemigoBase::StaticClass(),
							SpawnLocation,
							FRotator::ZeroRotator,
							SpawnParams);
							if (Enemigo) {
								Enemigo = Enemigo2;
							}
							
						//	contador++;
							
						//}
						//break;
				}
			}
		}
	}
}

void ABomberman_0120252GameMode::SpawnMapa2()
{
	//Recorrer el array de bloques y hacer spawn de cada uno
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 12; j++) {
			if (UWorld* Mundo = GetWorld()) {
				switch (arrayMapaBloques2[i][j])
				{
				case 5:
					Mundo->SpawnActor<APuertaTP>(APuertaTP::StaticClass(), FVector(300.0f + i * 200, 3000.0f + j * 200, 0.0f), FRotator::ZeroRotator)
						->SetActorScale3D(FVector(4.0f, 2.0f, 2.0f));
					//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("3"));
					break;
				case 4:
					Mundo->SpawnActor<ABloqueAcero>(ABloqueAcero::StaticClass(), FVector(200.0f + i * 200, 3000.0f + j * 200, -100.0f), FRotator::ZeroRotator);
					//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("3"));
					break;
				case 2:
					Mundo->SpawnActor<ABloqueLadrillo>(ABloqueLadrillo::StaticClass(), FVector(200.0f + i * 200, 3000.0f + j * 200, -100.0f), FRotator::ZeroRotator);
					//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("1"));
					break;
				case 1:
					Mundo->SpawnActor<ABloqueConcreto>(ABloqueConcreto::StaticClass(), FVector(200.0f + i * 200, 3000.0f + j * 200, -100.0f), FRotator::ZeroRotator);
					//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("2"));
					break;
				case 0:
					break;
				}
			}
		}
	}
}

void ABomberman_0120252GameMode::SpawnMapa3()
{
	//Recorrer el array de bloques y hacer spawn de cada uno
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 12; j++) {
			if (UWorld* Mundo = GetWorld()) {
				switch (arrayMapaBloques3[i][j])
				{
				case 5:
					Mundo->SpawnActor<APuertaTP>(APuertaTP::StaticClass(), FVector(300.0f + i * 200, 6000.0f + j * 200, 0.0f), FRotator::ZeroRotator)
						->SetActorScale3D(FVector(4.0f, 2.0f, 2.0f));
					//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("3"));
					break;
				case 4:
					Mundo->SpawnActor<ABloqueAcero>(ABloqueAcero::StaticClass(), FVector(200.0f + i * 200, 6000.0f + j * 200, -100.0f), FRotator::ZeroRotator);
					//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("3"));
					break;
				case 2:
					Mundo->SpawnActor<ABloqueLadrillo>(ABloqueLadrillo::StaticClass(), FVector(200.0f + i * 200, 6000.0f + j * 200, -100.0f), FRotator::ZeroRotator);
					//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("1"));
					break;
				case 1:
					Mundo->SpawnActor<ABloqueConcreto>(ABloqueConcreto::StaticClass(), FVector(200.0f + i * 200, 6000.0f + j * 200, -100.0f), FRotator::ZeroRotator);
					//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("2"));
					break;
				case 0:
					break;
				}
			}
		}
	}
}

void ABomberman_0120252GameMode::PosJugador()
{
	TArray<FVector> BloquesCandidatos;
	for (int i = 0; i < arrayMapaBloques1.Num(); i++)
	{
		for (int j = 0; j < arrayMapaBloques1[i].Num(); j++)
		{
			if (arrayMapaBloques1[i][j] == 3) 
			{
				//Para cerca de los bordes
				//i <= 1 || i >= 20 || j <= 1 || j >= 20
				//para mas al centro
				//(i <= 13 && i >= 7) || (j <= 13 && j >= 7)
				if ((i <= 14 && i >= 8) && (j <= 14 && j >= 8))
				{
					FVector Posicion = FVector(200.0f + i * 200, 150.0f + j * 200, 100.0f);
					BloquesCandidatos.Add(Posicion);
				}
			}
		}
	}

	if (BloquesCandidatos.Num() > 0)
	{
		int posAleatoria = FMath::RandRange(0, BloquesCandidatos.Num() - 1);
		FVector PosicionFinal = BloquesCandidatos[posAleatoria];

		if (APlayerController* PC = UGameplayStatics::GetPlayerController(this, 0))
		{
			if (APawn* Jugador = PC->GetPawn())
			{
				Jugador->SetActorLocation(PosicionFinal);
			}
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No se encontraron bloques de madera cercanos a los bordes."));
	}
}

void ABomberman_0120252GameMode::GenerarMapaFactoryMethon()
{
	//Factory de bloques
	UWorld* Mundo = GetWorld();
	AInnerTiendaBloquesXD* fab = Mundo->SpawnActor<AInnerTiendaBloquesXD>(AInnerTiendaBloquesXD::StaticClass());

	//Recorrer el array de bloques y hacer spawn de cada uno
	for (int i = 0; i < arrayMapaBloques1.Num(); i++)
	{
		for (int j = 0; j < arrayMapaBloques1[i].Num(); j++)
		{
			if (Mundo)
			{
				switch (arrayMapaBloques1[i][j])
				{
				case 4:
					fab->ConcoctBloque("F1", FVector(300.0f + i * 200, 150.0f + j * 200, -100.0f));
					break;
				case 3:
					fab->ConcoctBloque("Madera", FVector(300.0f + i * 200, 150.0f + j * 200, -100.0f));
					break;
				case 2:
					fab->ConcoctBloque("Acero", FVector(300.0f + i * 200, 150.0f + j * 200, -100.0f));
					break;
				case 1:
					fab->ConcoctBloque("MaderaMagico", FVector(300.0f + i * 200, 150.0f + j * 200, -100.0f));
					break;
				case 0:

					FActorSpawnParameters SpawnParams;
					SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

					FVector SpawnLocation = FVector(200.0f + i * 200, 150.0f + j * 200, -50.0f);


					AEnemigoBase* Enemigo2 = GetWorld()->SpawnActor<AEnemigoBase>(
						AEnemigoBase::StaticClass(),
						SpawnLocation,
						FRotator::ZeroRotator,
						SpawnParams);
					if (Enemigo) {
						Enemigo = Enemigo2;
					}
					break;
				}
			}
		}
	}
}

void ABomberman_0120252GameMode::GenerarMapaBuilder()
{
}
