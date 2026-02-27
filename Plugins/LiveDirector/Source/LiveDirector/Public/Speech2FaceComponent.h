#pragma once

#include "LiveLinkClient.h"
#include "MetaHumanAudioBaseLiveLinkSubject.h"
#include "Sound/SoundWave.h"
#include "Components/ActorComponent.h"
#include "Templates/SharedPointer.h"
#include "Speech2FaceComponent.generated.h"
class LIVEDIRECTOR_API FPiperLiveLinkClient : public FLiveLinkClient
{
public:

	FPiperLiveLinkClient();
	virtual ~FPiperLiveLinkClient();

	static FPiperLiveLinkClient* Instance();
private:
	
	
};

class LIVEDIRECTOR_API FMetaHumanPiperLiveLinkSubject : public FMetaHumanAudioBaseLiveLinkSubject
{

public:
	FMetaHumanPiperLiveLinkSubject();
	FMetaHumanPiperLiveLinkSubject(FPiperLiveLinkClient* InLiveLinkClient,
		const FGuid & InSourceGuid, 
		const FName & InSubjectName, 
		UMetaHumanAudioBaseLiveLinkSubjectSettings* InSettings);

	virtual ~FMetaHumanPiperLiveLinkSubject();

	void AddGeneratedAudioSample(const USoundWave* InAudioSample);
protected:
	class FGeneratedAudioSample
	{
	public:
		uint16 NumChannels = -1;
		uint32 SampleRate = -1;
		TArray<uint8> Data;
	};
	virtual void MediaSamplerMain() override;
private:
	TUniquePtr<UMetaHumanAudioBaseLiveLinkSubjectSettings> Settings = nullptr;
};

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class LIVEDIRECTOR_API USpeech2FaceComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	USpeech2FaceComponent();

	virtual ~USpeech2FaceComponent();
protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
public:
	UFUNCTION(BlueprintCallable, Category = "Virtual Production|Live Director")
	void AddAudioSpeech(const USoundWave* InAudioSample);
	
private:
	
	TUniquePtr<FMetaHumanPiperLiveLinkSubject> Speech2FacePtr = nullptr;

};
