#include "Speech2FaceComponent.h"
#include "AudioDrivenAnimationMood.h"
#include "MetaHumanLocalLiveLinkSubject.h"
#include "Misc/QualifiedFrameTime.h"
#include "Misc/ScopeLock.h"
#include "HAL/CriticalSection.h"

// Single-definition of the singleton inside the LiveDirector module.
// This guarantees one static TSharedPtr<FPiperLiveLinkClient> in the LiveDirector DLL
// and avoids per-DLL inline static copies that can get destroyed in different orders.

static FCriticalSection SingletonCriticalSection;
static FPiperLiveLinkClient* Singleton = nullptr;
FPiperLiveLinkClient* FPiperLiveLinkClient::Instance()
{
	
	
	if(!Singleton)
	{
		FScopeLock lock(&SingletonCriticalSection);
		Singleton = new FPiperLiveLinkClient();
	}
	return Singleton;
}

FPiperLiveLinkClient::FPiperLiveLinkClient() : FLiveLinkClient(){}

FPiperLiveLinkClient::~FPiperLiveLinkClient()
{
	if (Singleton == this)
	{
		delete Singleton;
		Singleton = nullptr;
	}
}

FMetaHumanPiperLiveLinkSubject::FMetaHumanPiperLiveLinkSubject(FPiperLiveLinkClient* InLiveLinkClient, const FGuid& InSourceGuid, const FName& InSubjectName, UMetaHumanAudioBaseLiveLinkSubjectSettings* InSettings) : FMetaHumanAudioBaseLiveLinkSubject(InLiveLinkClient, InSourceGuid, InSubjectName, InSettings)
{
	SetMood(EAudioDrivenAnimationMood::AutoDetect, 0.7f);
}

FMetaHumanPiperLiveLinkSubject::FMetaHumanPiperLiveLinkSubject() : FMetaHumanAudioBaseLiveLinkSubject(
	FPiperLiveLinkClient::Instance(), FGuid::NewGuid(), FName("Speech2FaceSubject"), NewObject<UMetaHumanAudioBaseLiveLinkSubjectSettings>())
{}

void FMetaHumanPiperLiveLinkSubject::MediaSamplerMain()
{
	// This subject doesn't need to do anything on its own thread since audio samples are pushed to it externally via AddGeneratedAudioSample.
}

FMetaHumanPiperLiveLinkSubject::~FMetaHumanPiperLiveLinkSubject()
{
	if (Settings)
	{
		Settings.Reset(nullptr);
		Settings = nullptr;
	}
}

void FMetaHumanPiperLiveLinkSubject::AddGeneratedAudioSample(const USoundWave* InSoundWave)
{
	if (InSoundWave)
	{
		if (!InSoundWave->RawPCMData || InSoundWave->RawPCMDataSize <= 0)
		{
			return;
		}
		// Each sample = NumChannels * sizeof(int16) bytes (for 16-bit PCM)
		int32 BytesPerSample = InSoundWave->NumChannels * sizeof(int16);
		if (BytesPerSample <= 0)
		{
			return;
		}

		FGeneratedAudioSample AudioSample;

		FMetaHumanAudioBaseLiveLinkSubject::FAudioSample OutAudioSample;

		InSoundWave->GetImportedSoundWaveData(AudioSample.Data, AudioSample.SampleRate, AudioSample.NumChannels);

		// Total samples across all channels
		int32 TotalSamples = InSoundWave->RawPCMDataSize / BytesPerSample;
		OutAudioSample.NumSamples = TotalSamples;
		OutAudioSample.Data.SetNumUninitialized(TotalSamples);

		// Convert 16-bit signed PCM (little-endian) to normalized float (-1.0f to 1.0f)
#pragma omp parallel for
		for (size_t i = 0; i < TotalSamples; i++) {
			// Little-endian: LSB first
			int16_t sample = static_cast<int16_t>(
				AudioSample.Data[2 * i] | (AudioSample.Data[2 * i + 1] << 8)
				);

			// Normalize to [-1.0, 1.0]
			OutAudioSample.Data[i] = static_cast<float>(sample) / 32768.0f;
		}

		OutAudioSample.Time = FQualifiedFrameTime();
		OutAudioSample.TimeSource = ETimeSource::NotSet;
		OutAudioSample.NumDropped = 0;

		AddAudioSample(MoveTemp(OutAudioSample));
	}
}


USpeech2FaceComponent::USpeech2FaceComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
	UMetaHumanAudioBaseLiveLinkSubjectSettings* AudioLiveLinkSettings = NewObject<UMetaHumanAudioBaseLiveLinkSubjectSettings>();
	AudioLiveLinkSettings->Setup();
	Speech2FacePtr = MakeUnique<FMetaHumanPiperLiveLinkSubject>(FPiperLiveLinkClient::Instance(), FGuid::NewGuid(), FName("Speech2FaceSubject"), AudioLiveLinkSettings);
	Speech2FacePtr->SetMood(EAudioDrivenAnimationMood::AutoDetect, 0.7f);
}

USpeech2FaceComponent::~USpeech2FaceComponent()
{
	if (Speech2FacePtr)
	{
		Speech2FacePtr.Reset(nullptr);
		Speech2FacePtr = nullptr;
	}
}

void USpeech2FaceComponent::BeginPlay()
{
	Super::BeginPlay();
}

void USpeech2FaceComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
}

void USpeech2FaceComponent::AddAudioSpeech(const USoundWave* InAudioSample)
{
	if (Speech2FacePtr)
	{
		Speech2FacePtr->AddGeneratedAudioSample(InAudioSample);
	}
	
}

