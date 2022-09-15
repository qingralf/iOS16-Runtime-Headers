/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCRTCEventConsumer : NSObject <MPCPlaybackEngineEventConsumer> {
    MPCPlaybackEngineEvent * _cachedFirstItemAssetLoadEvent;
    RTCReporting * _playbackItemRTCSession;
    RTCReporting * _playbackQueueRTCSession;
    RTCReporting * _playbackSessionRTCSession;
    NSObject<OS_dispatch_group> * _rtcGroup;
    NSObject<OS_dispatch_queue> * _rtcQueue;
    <MPCPlaybackEngineEventStreamSubscription> * _subscription;
    <MPCRTCEventConsumerTestingDelegate> * _testingDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) RTCReporting *playbackItemRTCSession;
@property (retain) RTCReporting *playbackQueueRTCSession;
@property (retain) RTCReporting *playbackSessionRTCSession;
@property (nonatomic, readonly) <MPCPlaybackEngineEventStreamSubscription> *subscription;
@property (readonly) Class superclass;
@property (nonatomic) <MPCRTCEventConsumerTestingDelegate> *testingDelegate;

+ (id)NSStringFromMPCRTCReportingEventCategory:(long long)arg1;
+ (id)dateFormatter;
+ (id)identifier;
+ (id)identifierStringFromItemIdentifiers:(id)arg1 radioIdentifiers:(id)arg2;
+ (id)playerServiceNameWithPlayerID:(id)arg1;
+ (id)rtcIdentifiersFromRadioIdentifiers:(id)arg1;
+ (id)rtcIdentifiersFromUniversalIdentifiers:(id)arg1;

- (void).cxx_destruct;
- (id)_accountSnapshotWithCursor:(id)arg1;
- (void)_generateConfiguredReportingSessionWithToken:(id)arg1 serviceName:(id)arg2 completion:(id /* block */)arg3;
- (void)_handleReportingForItemStartEvent:(id)arg1 event:(id)arg2;
- (id)_itemAssetTypeFromItemAssetLoadEvent:(id)arg1 cursor:(id)arg2;
- (id)_itemStartIncitingEvent:(id)arg1 fromItemStartEvent:(id)arg2;
- (bool)_itemWasPreviouslyLoaded:(id)arg1 cursor:(id)arg2;
- (id)_mediaIdentifierFromItemAssetLoadEndEvent:(id)arg1 cursor:(id)arg2;
- (id)_payloadForItemAssetLoad:(id)arg1 fromItemEvent:(id)arg2;
- (id)_payloadForItemSummary:(id)arg1 fromEvent:(id)arg2;
- (id)_payloadForItemSummary:(id)arg1 fromItemEvent:(id)arg2;
- (id)_payloadForQueueLoad:(id)arg1 fromQueueLoadEndEvent:(id)arg2;
- (id)_payloadForSessionStart:(id)arg1 fromEvent:(id)arg2;
- (id)_payloadForSessionSummary:(id)arg1 fromEvent:(id)arg2;
- (void)_performABCSnapshotWithPayloadIfNecessary:(id)arg1;
- (id)_reasonForEndEvent:(id)arg1 cursor:(id)arg2;
- (id)_rtcSessionInfoWithToken:(id)arg1;
- (id)_rtcUserInfoWithServiceName:(id)arg1;
- (void)_sendOneMessageWithToken:(id)arg1 serviceName:(id)arg2 category:(long long)arg3 type:(long long)arg4 payload:(id)arg5;
- (void)_sendQueueLoadEventIfNeeded:(id)arg1 forItemEvent:(id)arg2;
- (void)_sendReportForItemAssetLoad:(id)arg1 event:(id)arg2;
- (void)_sendReportForItemSummary:(id)arg1 event:(id)arg2;
- (void)_sendReportForItemSummaryWithEndReason:(id)arg1 cursor:(id)arg2 event:(id)arg3;
- (void)_sendReportForSessionStart:(id)arg1 event:(id)arg2 withType:(long long)arg3;
- (void)_sendReportForSessionSummary:(id)arg1 event:(id)arg2 withType:(long long)arg3;
- (void)_sendReportWithSession:(id)arg1 category:(long long)arg2 type:(long long)arg3 payload:(id)arg4;
- (void)_sendSessionStartIfNeeded:(id)arg1 forItemEvent:(id)arg2;
- (id)_tapToPlayMetrics:(id)arg1 fromItemStartEvent:(id)arg2;
- (id)_underlyingErrorFromPayload:(id)arg1;
- (void)_updateAssetLoadInfoEvent:(id)arg1 fromAssetLoadEndEvent:(id)arg2 cursor:(id)arg3;
- (id)init;
- (id)playbackItemRTCSession;
- (id)playbackQueueRTCSession;
- (id)playbackSessionRTCSession;
- (void)setPlaybackItemRTCSession:(id)arg1;
- (void)setPlaybackQueueRTCSession:(id)arg1;
- (void)setPlaybackSessionRTCSession:(id)arg1;
- (void)setTestingDelegate:(id)arg1;
- (void)subscribeToEventStream:(id)arg1;
- (id)subscription;
- (id)testingDelegate;
- (void)unsubscribeFromEventStream:(id)arg1;

@end