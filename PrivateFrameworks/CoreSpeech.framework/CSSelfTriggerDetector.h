/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSSelfTriggerDetector : NSObject <CSAudioServerCrashMonitorDelegate, CSAudioStreamProvidingDelegate, CSSiriClientBehaviorMonitorDelegate> {
    NSString * _audioProviderUUID;
    CSAudioStream * _audioStream;
    CSAudioTimeConverter * _audioTimeConverter;
    CSAsset * _currentAsset;
    CSPolicy * _enablePolicy;
    bool  _isListenPollingStarting;
    bool  _isSiriClientListening;
    CSKeywordAnalyzerNDAPI * _keywordAnalyzer;
    NSHashTable * _observers;
    unsigned long long  _outputAudioChannel;
    NSObject<OS_dispatch_queue> * _queue;
    CSContinuousVoiceTriggerConfig * _selfTriggerConfig;
    bool  _selfTriggerEnabled;
    CSSpeechManager * _speechManager;
}

@property (nonatomic, retain) NSString *audioProviderUUID;
@property (nonatomic, retain) CSAudioStream *audioStream;
@property (nonatomic, retain) CSAudioTimeConverter *audioTimeConverter;
@property (nonatomic, retain) CSAsset *currentAsset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CSPolicy *enablePolicy;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isListenPollingStarting;
@property (nonatomic) bool isSiriClientListening;
@property (nonatomic, retain) CSKeywordAnalyzerNDAPI *keywordAnalyzer;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic) unsigned long long outputAudioChannel;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) CSContinuousVoiceTriggerConfig *selfTriggerConfig;
@property (nonatomic) bool selfTriggerEnabled;
@property (nonatomic) CSSpeechManager *speechManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)arg1;
- (void)_handleEnablePolicyEvent:(bool)arg1;
- (void)_keywordAnalyzerNDAPI:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3;
- (void)_reset;
- (void)_setAsset:(id)arg1;
- (bool)_shouldReuseBuiltInAudioProvider;
- (void)_startListenPolling;
- (void)_startListenPollingWithInterval:(double)arg1 completion:(id /* block */)arg2;
- (void)_startListenWithCompletion:(id /* block */)arg1;
- (void)_stopListening;
- (id)audioProviderUUID;
- (id)audioStream;
- (void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2;
- (void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2;
- (void)audioStreamProvider:(id)arg1 didStopStreamUnexpectly:(long long)arg2;
- (id)audioTimeConverter;
- (id)currentAsset;
- (id)enablePolicy;
- (id)initWithTargetQueue:(id)arg1;
- (bool)isListenPollingStarting;
- (bool)isSiriClientListening;
- (id)keywordAnalyzer;
- (id)observers;
- (unsigned long long)outputAudioChannel;
- (id)queue;
- (void)registerObserver:(id)arg1;
- (void)reset;
- (id)selfTriggerConfig;
- (bool)selfTriggerEnabled;
- (void)setAsset:(id)arg1;
- (void)setAudioProviderUUID:(id)arg1;
- (void)setAudioStream:(id)arg1;
- (void)setAudioTimeConverter:(id)arg1;
- (void)setCurrentAsset:(id)arg1;
- (void)setEnablePolicy:(id)arg1;
- (void)setIsListenPollingStarting:(bool)arg1;
- (void)setIsSiriClientListening:(bool)arg1;
- (void)setKeywordAnalyzer:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setOutputAudioChannel:(unsigned long long)arg1;
- (void)setQueue:(id)arg1;
- (void)setSelfTriggerConfig:(id)arg1;
- (void)setSelfTriggerEnabled:(bool)arg1;
- (void)setSpeechManager:(id)arg1;
- (void)siriClientBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(bool)arg3 option:(id)arg4 withEventUUID:(id)arg5;
- (void)siriClientBehaviorMonitor:(id)arg1 didStopStream:(id)arg2 withEventUUID:(id)arg3;
- (void)siriClientBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3;
- (void)siriClientBehaviorMonitor:(id)arg1 willStopStream:(id)arg2 reason:(unsigned long long)arg3;
- (id)speechManager;
- (void)start;
- (void)unregisterObserver:(id)arg1;

@end