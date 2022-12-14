/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy
 */

@interface HMDMessageHandlerFailureMetricEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    NSString * _messageName;
    NSString * _type;
}

@property (nonatomic, readonly) NSString *accessoryIdentifier;
@property (nonatomic, readonly) NSString *eventName;
@property (nonatomic, readonly) bool logEventWithAppendedCommonDimensions;
@property (readonly, copy) NSString *messageName;
@property (nonatomic, readonly) NSDictionary *serializedEvent;
@property (readonly, copy) NSString *type;

- (void).cxx_destruct;
- (id)eventName;
- (id)initWithFailureType:(unsigned long long)arg1 messageName:(id)arg2;
- (id)messageName;
- (id)serializedEvent;
- (id)type;

@end
