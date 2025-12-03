
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MyGameModeBase.generated.h"

UENUM(BlueprintType)
enum class EGameState : uint8
{
	MainMenu,
	Gameplay,
	Victory
};

UCLASS()
class THE_GAUNTLET_API AMyGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AMyGameMode();

	virtual void BeginPlay() override;

	void StartGame();
	void PlayerWon();

	UPROPERTY(BlueprintReadWrite)
	EGameState CurrentState;

protected:
	void GoToMainMenu();
};
