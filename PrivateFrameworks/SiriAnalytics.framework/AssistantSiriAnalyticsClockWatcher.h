/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriAnalytics.framework/SiriAnalytics
 */

@interface AssistantSiriAnalyticsClockWatcher : NSObject <SiriAnalyticsWhiteRoseDelegate> {
    SiriAnalyticsClientMessageStream * _clientMessageStream;
    SiriAnalyticsInternalTelemetry * _internalTelemetry;
    SiriAnalyticsPreprocessor * _preprocessor;
    SiriAnalyticsSensitiveConditionsObservers * _sensitiveConditionsObservers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_triggerDeviceFixedContextOnStreamUUID:(id)arg1;
- (void)_triggerSiriAccountInformation;
- (id)init;
- (id)initWithInternalTelemetry:(id)arg1 sensitiveConditionsObservers:(id)arg2 clientMessageStream:(id)arg3 preprocessor:(id)arg4;
- (void)whiteRose:(id)arg1 derivativeClockCreated:(id)arg2 rootClock:(id)arg3;
- (void)whiteRose:(id)arg1 rootClockCreated:(id)arg2 trailingRootClock:(id)arg3;
- (void)whiteRose:(id)arg1 rootClockDestroyed:(id)arg2 completion:(id /* block */)arg3;
- (void)whiteRose:(id)arg1 willCreateRootClock:(id)arg2 completion:(id /* block */)arg3;

@end