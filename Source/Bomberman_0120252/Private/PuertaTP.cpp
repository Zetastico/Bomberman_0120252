#include "PuertaTP.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"
#include "TimerManager.h"

TArray<APuertaTP*> APuertaTP::AllDoors;
TMap<ACharacter*, APuertaTP*> APuertaTP::UltimaPuertaPorJugador;

APuertaTP::APuertaTP()
{
    PrimaryActorTick.bCanEverTick = false;

    DoorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DoorMesh"));
    RootComponent = DoorMesh;

    TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerBox"));
    TriggerBox->SetupAttachment(RootComponent);
    TriggerBox->SetBoxExtent(FVector(50.f, 50.f, 100.f));
    TriggerBox->SetCollisionProfileName(TEXT("Trigger"));

    TriggerBox->OnComponentBeginOverlap.AddDynamic(this, &APuertaTP::OnOverlapBegin);

    bCanTeleport = true;

    // Asignar malla de cubo por defecto
    static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeMesh(TEXT("/Engine/BasicShapes/Cube"));
    if (CubeMesh.Succeeded())
    {
        DoorMesh->SetStaticMesh(CubeMesh.Object);
        DoorMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision); // Que no bloquee nada
        DoorMesh->SetGenerateOverlapEvents(false); // Que no genere eventos de colisión
    }
}

void APuertaTP::BeginPlay()
{
    Super::BeginPlay();
    AllDoors.Add(this);
}

void APuertaTP::OnOverlapBegin(
    UPrimitiveComponent* OverlappedComponent,
    AActor* OtherActor,
    UPrimitiveComponent* OtherComp,
    int32 OtherBodyIndex,
    bool bFromSweep,
    const FHitResult& SweepResult)
{
    if (!bCanTeleport || !IsValid(OtherActor)) return;

    ACharacter* Player = Cast<ACharacter>(OtherActor);
    if (!IsValid(Player)) return;

    // DESACTIVAR TELETRANSPORTE INMEDIATAMENTE para evitar llamados múltiples
    bCanTeleport = false;
    TriggerBox->SetCollisionEnabled(ECollisionEnabled::NoCollision);

    APuertaTP* UltimaPuerta = UltimaPuertaPorJugador.FindRef(Player);

    TArray<APuertaTP*> PuertasValidas;
    for (APuertaTP* Puerta : AllDoors)
    {
        if (IsValid(Puerta) && Puerta != this && Puerta != UltimaPuerta)
        {
            PuertasValidas.Add(Puerta);
        }
    }

    if (PuertasValidas.Num() == 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("No hay puertas válidas para teletransporte."));
        GetWorld()->GetTimerManager().SetTimer(CooldownTimer, this, &APuertaTP::ResetTeleport, 1.0f, false);
        return;
    }

    int32 Index = FMath::RandRange(0, PuertasValidas.Num() - 1);
    APuertaTP* PuertaDestino = PuertasValidas[Index];

    if (!IsValid(PuertaDestino))
    {
        GetWorld()->GetTimerManager().SetTimer(CooldownTimer, this, &APuertaTP::ResetTeleport, 1.0f, false);
        return;
    }

    UltimaPuertaPorJugador.Add(Player, PuertaDestino);

    FVector TargetLocation = PuertaDestino->GetActorLocation() + FVector(0, 0, 150);
    Player->SetActorLocation(TargetLocation);

    GetWorld()->GetTimerManager().SetTimer(CooldownTimer, this, &APuertaTP::ResetTeleport, 1.0f, false);
}


void APuertaTP::ResetTeleport()
{
    bCanTeleport = true;
    TriggerBox->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
}