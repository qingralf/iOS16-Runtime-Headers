/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy
 */

@interface HMDMediaDestinationControllerReceivedUpdateDestinationRequestMessageLogEvent : HMDMediaDestinationControllerDestinationLogEvent <HMMCoreAnalyticsLogging>

@property (nonatomic, readonly) NSString *accessoryIdentifier;
@property (nonatomic, readonly) NSString *eventName;
@property (nonatomic, readonly) bool logEventWithAppendedCommonDimensions;
@property (nonatomic, readonly) NSDictionary *serializedEvent;

- (id)eventName;
- (id)initWithExistingDestinationType:(id)arg1 destinationType:(id)arg2 isTriggeredOnControllerDevice:(id)arg3 userPrivilege:(id)arg4;
- (id)serializedEvent;

@end
