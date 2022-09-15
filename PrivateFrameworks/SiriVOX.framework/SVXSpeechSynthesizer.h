/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX
 */

@interface SVXSpeechSynthesizer : NSObject <SVXModuleInstance, VSSpeechSynthesizerDelegate> {
    SVXSpeechSynthesisAnnouncer * _announcer;
    SVXAudioStreamingAnnouncer * _audioStreamingAnnouncer;
    <SVXClientAudioSystemServicing> * _clientAudioSystemServicing;
    SVXSpeechSynthesisConfiguration * _currentConfiguration;
    SVXSpeechSynthesisContext * _currentSpeakingContext;
    VSSpeechSynthesizer * _impl;
    SVXModule * _module;
    bool  _needsPrewarm;
    NSMutableArray * _pendingContexts;
    SVXSessionManager * _sessionManager;
    NSMutableSet * _synthesizingContexts;
    unsigned long long  _ttsSignpostInterval;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)creationContextFromInstrumentMetrics:(id)arg1;

- (void).cxx_destruct;
- (void)_beginUpdateAudioPowerWithCompletion:(id /* block */)arg1;
- (void)_cancelPendingContextsAtIndexes:(id)arg1;
- (void)_cancelPendingContextsWithOperationType:(long long)arg1;
- (void)_cancelPendingSpeakingContextWithRequest:(id)arg1;
- (void)_cancelPendingSpeakingContextsWithPriorityBelow:(long long)arg1;
- (void)_configureWithConfiguration:(id)arg1;
- (id)_configuredSpeechRequestForContext:(id)arg1;
- (bool)_continueContext:(id)arg1 error:(id*)arg2;
- (void)_endUpdateAudioPower;
- (void)_enqueueContext:(id)arg1;
- (void)_finalizeContext:(id)arg1 withResultType:(long long)arg2 utterance:(id)arg3 error:(id)arg4;
- (void)_handleDidFinishPresynthesizedAudioRequest:(id)arg1 instrumentMetrics:(id)arg2 error:(id)arg3;
- (void)_handleDidFinishSpeakingWithSpeechRequest:(id)arg1 instrumentMetrics:(id)arg2;
- (void)_handleDidFinishSpeakingWithSpeechRequest:(id)arg1 success:(bool)arg2 error:(id)arg3;
- (void)_handleDidFinishSynthesizingForSpeechRequest:(id)arg1 instrumentMetrics:(id)arg2 error:(id)arg3;
- (void)_handleDidGenerateAudioChunkData:(id)arg1 forSpeechRequest:(id)arg2;
- (void)_handleDidReceiveSpeechWordTimingInfoArray:(id)arg1 forSpeechRequest:(id)arg2;
- (void)_handleDidStartPresynthesizedAudioRequest:(id)arg1 timestamp:(unsigned long long)arg2;
- (void)_handleDidStartSpeakingWithSpeechRequest:(id)arg1 timestamp:(unsigned long long)arg2;
- (void)_handleDidStopPresynthesizedAudioRequest:(id)arg1 success:(bool)arg2 error:(id)arg3;
- (unsigned long long)_numberOfContexts;
- (void)_prewarm;
- (void)_prewarmWithContext:(id)arg1;
- (void)_processPendingContexts;
- (id)_speechSynthesizer;
- (void)_startContext:(id)arg1;
- (bool)_startPresynthesizedAudioRequestForContext:(id)arg1 error:(id*)arg2;
- (bool)_startSpeechRequestForContext:(id)arg1 error:(id*)arg2;
- (void)_stopCurrentSpeakingContextWithInterruptionBehavior:(long long)arg1;
- (void)_stopCurrentSpeakingContextWithRequest:(id)arg1 withInterruptionBehavior:(long long)arg2;
- (bool)_useStreamingAudio;
- (void)addListener:(id)arg1;
- (void)beginUpdateAudioPowerWithCompletion:(id /* block */)arg1;
- (void)cancelPendingRequests;
- (void)cancelRequest:(id)arg1;
- (void)dealloc;
- (void)endUpdateAudioPower;
- (void)enqueueRequest:(id)arg1 languageCode:(id)arg2 voiceName:(id)arg3 gender:(long long)arg4 audioSessionID:(unsigned int)arg5 preparation:(id /* block */)arg6 finalization:(id /* block */)arg7 taskTracker:(id)arg8 analyticsContext:(id)arg9;
- (id)initWithModule:(id)arg1;
- (void)languageCodeChanged:(id)arg1;
- (void)outputVoiceChanged:(id)arg1;
- (void)prewarm;
- (void)prewarmRequest:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)speechSynthesizer:(id)arg1 didFinishPresynthesizedAudioRequest:(id)arg2 withInstrumentMetrics:(id)arg3 error:(id)arg4;
- (void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 successfully:(bool)arg3 phonemesSpoken:(id)arg4 withError:(id)arg5;
- (void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 withInstrumentMetrics:(id)arg3;
- (void)speechSynthesizer:(id)arg1 didFinishSynthesisRequest:(id)arg2 withInstrumentMetrics:(id)arg3 error:(id)arg4;
- (void)speechSynthesizer:(id)arg1 didStartPresynthesizedAudioRequest:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didStartSpeakingRequest:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didStopPresynthesizedAudioRequest:(id)arg2 atEnd:(bool)arg3 error:(id)arg4;
- (void)speechSynthesizer:(id)arg1 withRequest:(id)arg2 didReceiveTimingInfo:(id)arg3;
- (void)speechSynthesizer:(id)arg1 withSynthesisRequest:(id)arg2 didGenerateAudioChunk:(id)arg3;
- (void)startWithModuleInstanceProvider:(id)arg1 platformDependencies:(id)arg2;
- (void)stopCurrentRequestWithInterruptionBehavior:(long long)arg1;
- (void)stopRequest:(id)arg1 withInterruptionBehavior:(long long)arg2;
- (void)stopWithModuleInstanceProvider:(id)arg1;
- (void)synthesizeRequest:(id)arg1 audioChunkHandler:(id /* block */)arg2 taskTracker:(id)arg3 analyticsContext:(id)arg4 completion:(id /* block */)arg5;
- (void)updateWithConfiguration:(id)arg1;

@end