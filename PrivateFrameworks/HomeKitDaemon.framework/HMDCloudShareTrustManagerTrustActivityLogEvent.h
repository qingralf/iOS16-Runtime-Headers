/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy
 */

@interface HMDCloudShareTrustManagerTrustActivityLogEvent : HMDCloudShareTrustManagerLogEvent <HMMCoreAnalyticsLogging> {
    NSNumber * _isPrimaryResident;
    NSNumber * _privilege;
    NSNumber * _trustActivityType;
}

@property (nonatomic, readonly) NSString *accessoryIdentifier;
@property (nonatomic, readonly) NSString *eventName;
@property (readonly, copy) NSNumber *isPrimaryResident;
@property (nonatomic, readonly) bool logEventWithAppendedCommonDimensions;
@property (readonly, copy) NSNumber *privilege;
@property (nonatomic, readonly) NSDictionary *serializedEvent;
@property (readonly, copy) NSNumber *trustActivityType;

- (void).cxx_destruct;
- (id)eventName;
- (id)initWithTrustActivityType:(long long)arg1 privilege:(unsigned long long)arg2 isPrimaryResident:(bool)arg3;
- (id)isPrimaryResident;
- (id)privilege;
- (id)serializedEvent;
- (id)trustActivityType;

@end
