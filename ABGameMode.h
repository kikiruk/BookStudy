// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "BookStudy.h" //�ٲ�.
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
	AABGameMode(); // ���� ���� ���������� �ʴ� ������

	virtual void PostLogin(APlayerController* NewPlayer) override; // �÷��̾� �α��ν� ȣ��Ǵ� �Լ�
	
};
