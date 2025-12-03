void AGoalPoint::NotifyActorBeginOverlap(AActor* OtherActor)
{
	if(OtherActor->IsA(AMyPlayerCharacter::StaticClass()))
	{
		AMyGameMode* GM = Cast<AMyGameMode>(GetWorld()->GetAuthGameMode());
		if(GM) GM->PlayerWon();
	}
}
