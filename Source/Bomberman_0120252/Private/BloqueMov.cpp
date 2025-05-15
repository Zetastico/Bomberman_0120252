#include "BloqueMov.h"
#include "Math/UnrealMathUtility.h"

ABloqueMov::ABloqueMov()
{
    PrimaryActorTick.bCanEverTick = true;
    if (MallaBloque)
    {
        static ConstructorHelpers::FObjectFinder<UMaterial> MaterialBase(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Wood_Floor_Walnut_Polished.M_Wood_Floor_Walnut_Polished'"));

        if (MaterialBase.Succeeded())
        {
            MallaBloque->SetMaterial(0, MaterialBase.Object); 
        }
    }
    TiempoEntreMovimientos = 10.0f;
    VelocidadMovimiento = 200.0f;
    TiempoDesdeUltimoMovimiento = 0.0f;
    bMoviendoAObjetivo = false;
    contador = 0;
}

void ABloqueMov::BeginPlay()
{
    Super::BeginPlay();

    PosicionInicial = GetActorLocation();
    PosicionObjetivo1 = PosicionInicial;
	PosicionObjetivo2 = PosicionInicial;
    
}

void ABloqueMov::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    TiempoDesdeUltimoMovimiento += DeltaTime;
    

    if (TiempoDesdeUltimoMovimiento >= TiempoEntreMovimientos)
    {
        
        ElegirNuevaDireccion(contador);
        bMoviendoAObjetivo = true;
        
        TiempoDesdeUltimoMovimiento = 0.0f;
        
    }

    if (bMoviendoAObjetivo)
    {
        FVector PosActual = GetActorLocation();
        FVector NuevaPos = FMath::VInterpTo(PosActual, PosicionObjetivo1, DeltaTime, 5.0f);
        SetActorLocation(NuevaPos);
        TiempoDesdeUltimoMovimiento2 += DeltaTime;
        // Verifica si ya llegó al destino
        if (FVector::Dist(NuevaPos, PosicionObjetivo1) < 1.0f)
        {
            // Si está en destino, vuelve al inicio
            if (PosicionObjetivo1 != PosicionInicial)
            {
                PosicionObjetivo1 = PosicionInicial;
            }
            else if(TiempoDesdeUltimoMovimiento2==10){
				bMoviendoAObjetivo = false;
            }
        }
    }
    
}

void ABloqueMov::ElegirNuevaDireccion(int cont)
{
    int Direccion = FMath::RandRange(0, 5);
    FVector Offset(0.0f);

    const float DistanciaMovimiento = 200.0f;

    switch (cont)
    {
    case 0: Offset.X += DistanciaMovimiento; break; // Derecha
    case 1: Offset.Y += DistanciaMovimiento; break; // Adelante
    case 2: Offset.X -= DistanciaMovimiento; break;
    case 3: Offset.Y -= DistanciaMovimiento; break; // Atrás
    //case 4: Offset.Z += DistanciaMovimiento; break; // Arriba
    //case 5: Offset.Z -= DistanciaMovimiento; break; // Abajo
    }
    if (cont == 0) {
        contador = 1;
	}
    else {
        contador = 0;
    }
		
    PosicionObjetivo1 = PosicionInicial + Offset;
	PosicionObjetivo2 = PosicionInicial - Offset;
}