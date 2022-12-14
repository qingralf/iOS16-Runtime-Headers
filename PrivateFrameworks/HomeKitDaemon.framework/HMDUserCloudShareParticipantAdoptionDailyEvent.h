/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy
 */

@interface HMDUserCloudShareParticipantAdoptionDailyEvent : HMDCloudShareTrustManagerLogEvent <HMMCoreAnalyticsLogging> {
    NSNumber * _configureState;
    NSNumber * _hasOwnerCloudShareID;
}

@property (nonatomic, readonly) NSString *accessoryIdentifier;
@property (readonly, copy) NSNumber *configureState;
@property (nonatomic, readonly) NSString *eventName;
@property (readonly, copy) NSNumber *hasOwnerCloudShareID;
@property (nonatomic, readonly) bool logEventWithAppendedCommonDimensions;
@property (nonatomic, readonly) NSDictionary *serializedEvent;

- (void).cxx_destruct;
- (id)configureState;
- (id)eventName;
- (id)hasOwnerCloudShareID;
- (id)initWithConfigureState:(long long)arg1 hasOwnerCloudShareID:(bool)arg2;
- (id)serializedEvent;

@end
