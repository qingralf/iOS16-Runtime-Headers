/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy
 */

@interface HMDBackgroundTaskLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    bool  _didFire;
    double  _fireDelay;
    double  _scheduledToExpectedFireInterval;
}

@property (nonatomic, readonly) NSString *accessoryIdentifier;
@property (nonatomic, readonly) bool didFire;
@property (nonatomic, readonly) NSString *eventName;
@property (nonatomic, readonly) double fireDelay;
@property (nonatomic, readonly) bool logEventWithAppendedCommonDimensions;
@property (nonatomic, readonly) double scheduledToExpectedFireInterval;
@property (nonatomic, readonly) NSDictionary *serializedEvent;

- (id)description;
- (bool)didFire;
- (id)eventName;
- (double)fireDelay;
- (id)initWithTask:(id)arg1 didFire:(bool)arg2 now:(id)arg3;
- (double)scheduledToExpectedFireInterval;
- (id)serializedEvent;

@end
