// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "BookStudy.h" //바꿈.
#include "GameFramework/GameModeBase.h"
#include "ABGameMode.generated.h"

/**
 * 
 */
UCLASS()
class BOOKSTUDY_API AABGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AABGameMode(); // 원래 따로 적혀있지는 않던 생성자

	virtual void PostLogin(APlayerController* NewPlayer) override; // 플레이어 로그인시 호출되는 함수
	
};
