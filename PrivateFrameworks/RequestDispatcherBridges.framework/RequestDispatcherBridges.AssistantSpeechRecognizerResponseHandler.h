/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RequestDispatcherBridges.framework/RequestDispatcherBridges
 */

@interface RequestDispatcherBridges.AssistantSpeechRecognizerResponseHandler : RequestDispatcherBridges.SpeechRecognizerResponseHandler {
    void bufferedResultCandidateHandler;
    void homeMembers;
    void isMUXEnabled;
    void isRMVEnabled;
    void myriadMonitor;
    void resultSelectedMsg;
    void resultSelectionGated;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  userId;
    void voiceIdScoreCard;
}

- (void).cxx_destruct;
- (void)localSpeechRecognizerClient:(id)arg1 didAcceptedEagerResultWithRequestId:(id)arg2 rcId:(unsigned long long)arg3 mitigationSignal:(bool)arg4 featuresToLog:(id)arg5;
- (void)localSpeechRecognizerClient:(id)arg1 didCompletionRecognitionWithStatistics:(id)arg2 requestId:(id)arg3 endpointMode:(long long)arg4 error:(id)arg5;
- (void)localSpeechRecognizerClient:(id)arg1 didCompletionRecognitionWithStatistics:(id)arg2 requestId:(id)arg3 error:(id)arg4;
- (void)localSpeechRecognizerClient:(id)arg1 receivedEagerRecognitionCandidateWithRequestId:(id)arg2 rcId:(unsigned long long)arg3 speechPackage:(id)arg4 duration:(double)arg5;
- (void)localSpeechRecognizerClient:(id)arg1 receivedFinalResultWithRequestId:(id)arg2 speechPackage:(id)arg3;
- (void)localSpeechRecognizerClient:(id)arg1 receivedPartialResultWithRequestId:(id)arg2 language:(id)arg3 tokens:(id)arg4;
- (void)localSpeechRecognizerClient:(id)arg1 receivedVoiceIdScoreCard:(id)arg2;

@end
