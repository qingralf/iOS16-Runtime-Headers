/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy
 */

@interface HMDMediaDestinationControllerDailySetDestinationEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    NSString * _existingDestinationType;
}

@property (nonatomic, readonly) NSString *accessoryIdentifier;
@property (nonatomic, readonly) NSString *eventName;
@property (readonly, copy) NSString *existingDestinationType;
@property (nonatomic, readonly) bool logEventWithAppendedCommonDimensions;
@property (nonatomic, readonly) NSDictionary *serializedEvent;

- (void).cxx_destruct;
- (id)eventName;
- (id)existingDestinationType;
- (id)initWithExistingDestinationType:(id)arg1;
- (id)serializedEvent;

@end