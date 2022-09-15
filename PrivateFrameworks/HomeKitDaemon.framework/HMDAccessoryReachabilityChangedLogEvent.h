/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy
 */

@interface HMDAccessoryReachabilityChangedLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    bool  _accessoryBatteryPowered;
    bool  _accessoryBridged;
    NSString * _accessoryCategory;
    NSString * _accessoryFirmwareVersion;
    NSString * _accessoryManufacturer;
    NSString * _accessoryModel;
    NSNumber * _accessoryNumber;
    bool  _batteryLow;
    bool  _changed;
    long long  _duration;
    bool  _reachable;
    HMDAccessoryTransportReachabilityReport * _transportReport;
}

@property (nonatomic, readonly) bool accessoryBatteryPowered;
@property (nonatomic, readonly) bool accessoryBridged;
@property (nonatomic, readonly, copy) NSString *accessoryCategory;
@property (nonatomic, readonly, copy) NSString *accessoryFirmwareVersion;
@property (nonatomic, readonly) NSString *accessoryIdentifier;
@property (nonatomic, readonly, copy) NSString *accessoryManufacturer;
@property (nonatomic, readonly, copy) NSString *accessoryModel;
@property (nonatomic, readonly, copy) NSNumber *accessoryNumber;
@property (nonatomic, readonly) bool batteryLow;
@property (nonatomic, readonly) bool changed;
@property (nonatomic, readonly) long long duration;
@property (nonatomic, readonly) NSString *eventName;
@property (nonatomic, readonly) bool logEventWithAppendedCommonDimensions;
@property (nonatomic, readonly) bool reachable;
@property (nonatomic, readonly) NSDictionary *serializedEvent;
@property (nonatomic, readonly, copy) HMDAccessoryTransportReachabilityReport *transportReport;

+ (id)eventWithReachable:(bool)arg1 changed:(bool)arg2 duration:(double)arg3 accessory:(id)arg4 transportReport:(id)arg5;
+ (bool)submitEventWithHistogrammedAggregateHomeDataCommonDimensions;

- (void).cxx_destruct;
- (id)__initWithReachable:(bool)arg1 changed:(bool)arg2 duration:(double)arg3 accessory:(id)arg4 transportReport:(id)arg5;
- (bool)accessoryBatteryPowered;
- (bool)accessoryBridged;
- (id)accessoryCategory;
- (id)accessoryFirmwareVersion;
- (id)accessoryManufacturer;
- (id)accessoryModel;
- (id)accessoryNumber;
- (bool)batteryLow;
- (bool)changed;
- (long long)duration;
- (id)eventName;
- (id)init;
- (bool)reachable;
- (id)serializedEvent;
- (id)transportReport;

@end