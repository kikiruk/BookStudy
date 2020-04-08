// Fill out your copyright notice in the Description page of Project Settings.


#include "Fountain.h"

// Sets default values
AFountain::AFountain()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Body = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BODY"));
	Water = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WATER"));
	Light = CreateDefaultSubobject<UPointLightComponent>(TEXT("LIGHT"));
	Splash = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("SPLASH"));
	Movement = CreateDefaultSubobject<URotatingMovementComponent>(TEXT("MOVEMENT"));

	//부모 자식 컴포넌트 설정.
	RootComponent = Body;
	Water->SetupAttachment(Body);
	Light->SetupAttachment(Body);
	Splash->SetupAttachment(Body);

	Water->SetRelativeLocation(FVector(0.0f, 0.0f, 135.0f));
	Light->SetRelativeLocation(FVector(0.0f, 0.0f, 135.0f));
	Splash->SetRelativeLocation(FVector(0.0f, 0.0f, 135.0f));

	/************static mesh에셋을 코드로 직접 액터에 부여하는 법*************/

	static const ConstructorHelpers::FObjectFinder<UStaticMesh> SM_BODY(
		TEXT("/Game/InfinityBladeGrassLands/Environments/Plains/Env_Plains_Ruins/StaticMesh/SM_Plains_Castle_Fountain_01.SM_Plains_Castle_Fountain_01")
	);

	if (SM_BODY.Succeeded())
	{
		Body->SetStaticMesh(SM_BODY.Object);
	}
	
	static const ConstructorHelpers::FObjectFinder<UStaticMesh> SM_WATER(
		TEXT("/Game/InfinityBladeGrassLands/Effects/FX_Meshes/Env/SM_Plains_Fountain_02.SM_Plains_Fountain_02")
	);

	if (SM_WATER.Succeeded())
	{
		Water->SetStaticMesh(SM_WATER.Object);
	}


	static const ConstructorHelpers::FObjectFinder<UParticleSystem> PS_SPLASH(
		TEXT("/Game/InfinityBladeGrassLands/Effects/FX_Ambient/Water/P_Water_Fountain_Splash_01.P_Water_Fountain_Splash_01")
	);

	if (PS_SPLASH.Succeeded())
	{
		Splash->SetTemplate(PS_SPLASH.Object);
	}
	/**********************************************************************/

	RotateSpeed = 30.0f;										//private 맴버변수
	Movement->RotationRate = FRotator(1.1f, RotateSpeed, 0.0f);	//movement 컴포넌트를 이용해서 분수를 움직이게 하는 설정 (회전)
}

// Called when the game starts or when spawned
void AFountain::BeginPlay()
{
	Super::BeginPlay();
	
	//UE_LOG(BookStudy, Warning, TEXT("Actor Name : %s, ID : %d, Location X : %.3f"), *GetName(), ID, GetActorLocation().X);
	ABLOG_S(Warning);
	ABLOG(Warning, TEXT("Acotr Name : %s, ID : %d, Location X : %.3f"),
		*GetName(), ID, GetActorLocation().X);
}

void AFountain::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	ABLOG_S(Warning);
}


void AFountain::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	ABLOG_S(Warning);

}

// Called every frame
void AFountain::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//
	//AddActorLocalRotation(FRotator(0.0f, RotateSpeed * DeltaTime, 0.0f));
}

