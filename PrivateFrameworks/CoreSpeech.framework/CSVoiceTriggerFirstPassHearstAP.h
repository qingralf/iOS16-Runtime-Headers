/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSVoiceTriggerFirstPassHearstAP : NSObject <CSAudioStreamProvidingDelegate, CSOpportuneSpeakEventMonitorDelegate, CSSiriClientBehaviorMonitorDelegate, CSVoiceTriggerEnabledMonitorDelegate> {
    CSAudioProvider * _audioProvider;
    CSAudioStream * _audioStream;
    NSMutableArray * _audioStreamHoldings;
    CSAsset * _currentAsset;
    <CSVoiceTriggerDelegate> * _delegate;
    NSString * _deviceId;
    bool  _isAPHearstFirstPassEnabled;
    bool  _isSecondPassRunning;
    bool  _isSiriClientListening;
    bool  _isVoiceTriggerEnabled;
    CSKeywordAnalyzerNDAPI * _keywordAnalyzerNDAPI;
    float  _keywordThreshold;
    NSString * _opportuneSpeakAudioProviderUUID;
    CSOpportuneSpeakEventMonitor * _opportuneSpeakEventMonitor;
    CSOtherAppRecordingStateMonitor * _otherAppRecordingStateMonitor;
    CSPhoneCallStateMonitor * _phoneCallStateMonitor;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_group> * _recordingWillStartGroup;
    CSVoiceTriggerSecondChanceContext * _secondChanceContext;
    CSOSTransaction * _secondPassTransaction;
    CSSiriClientBehaviorMonitor * _siriClientBehaviorMonitor;
    CSSpeechManager * _speechManager;
    CSVoiceTriggerEnabledMonitor * _voiceTriggerEnabledMonitor;
    CSVoiceTriggerSecondPass * _voiceTriggerSecondPass;
}

@property (nonatomic, retain) CSAudioProvider *audioProvider;
@property (nonatomic, retain) CSAudioStream *audioStream;
@property (nonatomic, retain) NSMutableArray *audioStreamHoldings;
@property (nonatomic, retain) CSAsset *currentAsset;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CSVoiceTriggerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *deviceId;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isAPHearstFirstPassEnabled;
@property (nonatomic) bool isSecondPassRunning;
@property (nonatomic) bool isSiriClientListening;
@property (nonatomic) bool isVoiceTriggerEnabled;
@property (nonatomic, retain) CSKeywordAnalyzerNDAPI *keywordAnalyzerNDAPI;
@property (nonatomic) float keywordThreshold;
@property (nonatomic, retain) NSString *opportuneSpeakAudioProviderUUID;
@property (nonatomic, retain) CSOpportuneSpeakEventMonitor *opportuneSpeakEventMonitor;
@property (nonatomic, retain) CSOtherAppRecordingStateMonitor *otherAppRecordingStateMonitor;
@property (nonatomic, retain) CSPhoneCallStateMonitor *phoneCallStateMonitor;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *recordingWillStartGroup;
@property (nonatomic, retain) CSVoiceTriggerSecondChanceContext *secondChanceContext;
@property (nonatomic, retain) CSOSTransaction *secondPassTransaction;
@property (nonatomic, retain) CSSiriClientBehaviorMonitor *siriClientBehaviorMonitor;
@property (nonatomic, retain) CSSpeechManager *speechManager;
@property (readonly) Class superclass;
@property (nonatomic, retain) CSVoiceTriggerEnabledMonitor *voiceTriggerEnabledMonitor;
@property (nonatomic, retain) CSVoiceTriggerSecondPass *voiceTriggerSecondPass;

- (void).cxx_destruct;
- (void)CSVoiceTriggerEnabledMonitor:(id)arg1 didReceiveEnabled:(bool)arg2;
- (void)_addAudioStreamHold:(id)arg1;
- (void)_cancelLastAudioStreamHold;
- (void)_createSecondPass;
- (void)_handleSecondPassResult:(id)arg1 deviceId:(id)arg2 error:(id)arg3;
- (void)_keywordAnalyzerNDAPI:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3;
- (void)_reset;
- (void)_setAsset:(id)arg1;
- (bool)_shouldHearstAPModeEnabled;
- (bool)_shouldProcessAudio;
- (void)_startListenWithAudioProviderUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)_stopListening;
- (void)_teardownSecondPass;
- (void)_transitHearstAPEnable:(bool)arg1;
- (id)audioProvider;
- (id)audioStream;
- (id)audioStreamHoldings;
- (void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2;
- (void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2;
- (void)audioStreamProvider:(id)arg1 didStopStreamUnexpectly:(long long)arg2;
- (id)currentAsset;
- (id)delegate;
- (id)deviceId;
- (id)init;
- (id)initWithSpeechManager:(id)arg1 voiceTriggerEnabledMonitor:(id)arg2 siriClientBehaviorMonitor:(id)arg3 opportuneSpeakEventMonitor:(id)arg4 phoneCallStateMonitor:(id)arg5 otherAppRecordingStateMonitor:(id)arg6;
- (bool)isAPHearstFirstPassEnabled;
- (bool)isSecondPassRunning;
- (bool)isSiriClientListening;
- (bool)isVoiceTriggerEnabled;
- (id)keywordAnalyzerNDAPI;
- (float)keywordThreshold;
- (id)opportuneSpeakAudioProviderUUID;
- (id)opportuneSpeakEventMonitor;
- (void)opportuneSpeakEventMonitor:(id)arg1 didStreamStateChanged:(bool)arg2;
- (id)otherAppRecordingStateMonitor;
- (id)phoneCallStateMonitor;
- (id)queue;
- (id)recordingWillStartGroup;
- (id)secondChanceContext;
- (id)secondPassTransaction;
- (void)setAsset:(id)arg1;
- (void)setAudioProvider:(id)arg1;
- (void)setAudioStream:(id)arg1;
- (void)setAudioStreamHoldings:(id)arg1;
- (void)setCurrentAsset:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeviceId:(id)arg1;
- (void)setIsAPHearstFirstPassEnabled:(bool)arg1;
- (void)setIsSecondPassRunning:(bool)arg1;
- (void)setIsSiriClientListening:(bool)arg1;
- (void)setIsVoiceTriggerEnabled:(bool)arg1;
- (void)setKeywordAnalyzerNDAPI:(id)arg1;
- (void)setKeywordThreshold:(float)arg1;
- (void)setOpportuneSpeakAudioProviderUUID:(id)arg1;
- (void)setOpportuneSpeakEventMonitor:(id)arg1;
- (void)setOtherAppRecordingStateMonitor:(id)arg1;
- (void)setPhoneCallStateMonitor:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRecordingWillStartGroup:(id)arg1;
- (void)setSecondChanceContext:(id)arg1;
- (void)setSecondPassTransaction:(id)arg1;
- (void)setSiriClientBehaviorMonitor:(id)arg1;
- (void)setSpeechManager:(id)arg1;
- (void)setVoiceTriggerEnabledMonitor:(id)arg1;
- (void)setVoiceTriggerSecondPass:(id)arg1;
- (void)shouldProcessAudio:(id /* block */)arg1;
- (id)siriClientBehaviorMonitor;
- (void)siriClientBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(bool)arg3 option:(id)arg4 withEventUUID:(id)arg5;
- (void)siriClientBehaviorMonitor:(id)arg1 didStopStream:(id)arg2 withEventUUID:(id)arg3;
- (void)siriClientBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3;
- (void)siriClientBehaviorMonitor:(id)arg1 willStopStream:(id)arg2 reason:(unsigned long long)arg3;
- (id)speechManager;
- (void)start;
- (id)voiceTriggerEnabledMonitor;
- (id)voiceTriggerSecondPass;

@end