/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy
 */

@interface HMDHAPMetricsReachabilityTimerLateEvent : HMDHAPMetrics <HMMCoreAnalyticsLogging> {
    NSNumber * _duration;
    NSNumber * _expectedDuration;
}

@property (nonatomic, readonly) NSString *accessoryIdentifier;
@property (nonatomic, readonly) NSNumber *duration;
@property (nonatomic, readonly) NSString *eventName;
@property (nonatomic, readonly) NSNumber *expectedDuration;
@property (nonatomic, readonly) bool logEventWithAppendedCommonDimensions;
@property (nonatomic, readonly) NSDictionary *serializedEvent;

- (void).cxx_destruct;
- (id)duration;
- (id)eventName;
- (id)expectedDuration;
- (id)initWithAccessory:(id)arg1 duration:(id)arg2 expectedDuration:(id)arg3;
- (id)serializedEvent;

@end
