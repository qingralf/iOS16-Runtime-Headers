/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy
 */

@interface HMDRemoteDeviceReachabilityChangeLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    bool  _reachable;
    unsigned long long  _reason;
    bool  _targetSupportsIDSPresence;
}

@property (nonatomic, readonly) NSString *accessoryIdentifier;
@property (nonatomic, readonly) NSString *eventName;
@property (nonatomic, readonly) bool logEventWithAppendedCommonDimensions;
@property (readonly) bool reachable;
@property (readonly) unsigned long long reason;
@property (nonatomic, readonly) NSDictionary *serializedEvent;
@property (readonly) bool targetSupportsIDSPresence;

- (id)eventName;
- (id)initWithReason:(unsigned long long)arg1 reachable:(bool)arg2 targetSupportsIDSPresence:(bool)arg3;
- (bool)reachable;
- (unsigned long long)reason;
- (id)serializedEvent;
- (bool)targetSupportsIDSPresence;

@end