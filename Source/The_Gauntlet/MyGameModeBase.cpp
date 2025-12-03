
#include "MyGameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "TimerManager.h"

AMyGameMode::AMyGameMode()
{
	CurrentState = EGameState::MainMenu;
}

void AMyGameMode::BeginPlay()
{
	Super::BeginPlay();
	GoToMainMenu();
}

void AMyGameMode::StartGame()
{
	CurrentState = EGameState::Gameplay;
	// Carica il livello di gioco
	UGameplayStatics::OpenLevel(GetWorld(), "GameLevel");
}

void AMyGameMode::PlayerWon()
{
	CurrentState = EGameState::Victory;
	// Mostra messaggio di vittoria in HUD
	// Torna al MainMenu dopo 3 secondi
	GetWorldTimerManager().SetTimerForNextTick([this]()
	{
		FTimerHandle TimerHandle;
		GetWorldTimerManager().SetTimer(TimerHandle, this, &AMyGameMode::GoToMainMenu, 3.0f, false);
	});
}

void AMyGameMode::GoToMainMenu()
{
	CurrentState = EGameState::MainMenu;
	UGameplayStatics::OpenLevel(GetWorld(), "MainMenu");
}
