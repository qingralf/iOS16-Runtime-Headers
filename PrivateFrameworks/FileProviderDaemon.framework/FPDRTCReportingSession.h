/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

@interface FPDRTCReportingSession : NSObject {
    FPDRTCReportingSessionManager * _backingManager;
    NSMutableDictionary * _categoryHooks;
    <FPDRTCReportingObserver> * _observer;
    NSString * _providerID;
    NSString * _providerVersion;
    NSString * _trialExperiment;
    NSString * _trialTreatment;
}

- (void).cxx_destruct;
- (id)description;
- (void)executeModifyDecoratedPayloadHook:(unsigned long long)arg1 type:(unsigned long long)arg2 payload:(id)arg3 error:(id)arg4 decoratedPayload:(id)arg5;
- (bool)flushMessagesSynchronouslyWithError:(id*)arg1;
- (void)flushMessagesWithCompletion:(id /* block */)arg1;
- (id)initWithProviderID:(id)arg1 version:(id)arg2 manager:(id)arg3;
- (void)postReportWithCategory:(unsigned long long)arg1 type:(unsigned long long)arg2 payload:(id)arg3 error:(id)arg4;
- (void)setModifyDecoratedPayloadHook:(id /* block */)arg1 forCategory:(unsigned long long)arg2;
- (void)setObserver:(id)arg1;
- (id)truncateProviderVersion:(id)arg1;

@end