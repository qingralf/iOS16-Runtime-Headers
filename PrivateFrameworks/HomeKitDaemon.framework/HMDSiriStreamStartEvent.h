/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy
 */

@interface HMDSiriStreamStartEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    unsigned long long  _activationType;
}

@property (nonatomic, readonly) NSString *accessoryIdentifier;
@property (nonatomic, readonly) unsigned long long activationType;
@property (nonatomic, readonly) NSString *eventName;
@property (nonatomic, readonly) bool logEventWithAppendedCommonDimensions;
@property (nonatomic, readonly) NSDictionary *serializedEvent;

- (unsigned long long)activationType;
- (id)eventName;
- (id)initWithActivationType:(unsigned long long)arg1;
- (id)serializedEvent;

@end
