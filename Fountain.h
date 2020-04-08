 // Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "BookStudy.h"									//로그에 대해서 배울때 바꿨음 원래 CoreMinimal.h -> EngineMinimal.h -> 현재
#include "GameFramework/RotatingMovementComponent.h"	//움직임을 맡는 컴포넌트를 쓰기위한 헤더
#include "GameFramework/Actor.h"
#include "Fountain.generated.h"

UCLASS()
class BOOKSTUDY_API AFountain : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFountain();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void PostInitializeComponents() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Body;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Water;

	UPROPERTY(VisibleAnywhere)
	UPointLightComponent* Light;

	UPROPERTY(VisibleAnywhere)
	UParticleSystemComponent* Splash;

	UPROPERTY(VisibleAnywhere)
	URotatingMovementComponent* Movement;

	UPROPERTY(EditAnywhere, Category=ID)
	int32 ID;


private:
	UPROPERTY(EditAnywhere, Category = Stat, Meta = (AllowPrivateAccess = true))
	float RotateSpeed;
};
