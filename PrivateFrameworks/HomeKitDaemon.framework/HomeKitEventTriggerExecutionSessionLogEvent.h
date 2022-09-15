/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy
 */

@interface HomeKitEventTriggerExecutionSessionLogEvent : HMMLogEvent <HMDAWDLogEvent> {
    HMDAnalyticsEventTriggerExecutionSessionData * _analyticsData;
}

@property (nonatomic, readonly) HMDAnalyticsEventTriggerExecutionSessionData *analyticsData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned int)AWDMessageType;
- (id)analyticsData;
- (id)initWithSessionID:(id)arg1;
- (id)metricForAWD;
- (int)toAWDExecutionState:(int)arg1;

@end