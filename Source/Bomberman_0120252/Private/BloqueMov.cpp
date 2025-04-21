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
    TiempoEntreMovimientos = 2.0f;
    VelocidadMovimiento = 200.0f;
    TiempoDesdeUltimoMovimiento = 0.0f;
    bMoviendoAObjetivo = false;
}

void ABloqueMov::BeginPlay()
{
    Super::BeginPlay();

    PosicionInicial = GetActorLocation();
    PosicionObjetivo = PosicionInicial;
}

void ABloqueMov::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    TiempoDesdeUltimoMovimiento += DeltaTime;

    if (TiempoDesdeUltimoMovimiento >= TiempoEntreMovimientos)
    {
        ElegirNuevaDireccion();
        TiempoDesdeUltimoMovimiento = 0.0f;
        bMoviendoAObjetivo = true;
    }

    if (bMoviendoAObjetivo)
    {
        FVector PosActual = GetActorLocation();
        FVector NuevaPos = FMath::VInterpTo(PosActual, PosicionObjetivo, DeltaTime, 5.0f);
        SetActorLocation(NuevaPos);

        // Verifica si ya llegó al destino
        if (FVector::Dist(NuevaPos, PosicionObjetivo) < 1.0f)
        {
            // Si está en destino, vuelve al inicio
            if (PosicionObjetivo != PosicionInicial)
            {
                PosicionObjetivo = PosicionInicial;
            }
            else
            {
                bMoviendoAObjetivo = false;
            }
        }
    }
}

void ABloqueMov::ElegirNuevaDireccion()
{
    int Direccion = FMath::RandRange(0, 5);
    FVector Offset(0.0f);

    const float DistanciaMovimiento = 200.0f;

    switch (Direccion)
    {
    case 0: Offset.X += DistanciaMovimiento; break; // Derecha
    case 1: Offset.X -= DistanciaMovimiento; break; // Izquierda
    case 2: Offset.Y += DistanciaMovimiento; break; // Adelante
    case 3: Offset.Y -= DistanciaMovimiento; break; // Atrás
    case 4: Offset.Z += DistanciaMovimiento; break; // Arriba
    case 5: Offset.Z -= DistanciaMovimiento; break; // Abajo
    }

    PosicionObjetivo = PosicionInicial + Offset;
}