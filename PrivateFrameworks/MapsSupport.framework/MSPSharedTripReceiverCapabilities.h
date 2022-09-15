/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPSharedTripReceiverCapabilities : NSObject <NSCopying> {
    NSSet * _supportedProperties;
    NSSet * _unsupportedProperties;
}

@property (nonatomic, readonly) bool supportsRoutingPathLeg;
@property (nonatomic, readonly) bool supportsWaypointRouteSharing;

+ (void)enumerateReceiverCapabilityConfigurationsForState:(id)arg1 withBlock:(id /* block */)arg2;
+ (void)enumerateReceiverCapabilityConfigurationsWithBlock:(id /* block */)arg1;
+ (id)legacyReceiverCapabilities;
+ (id)starskyReceiverCapabilities;
+ (id)sydromeReceiverCapabilities;
+ (id)unrestrictedReceiverCapabilities;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)idsSendMessageOptions;
- (id)initWithRegistrationPropertiesSupported:(id)arg1 propertiesUnsupported:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)supportsRoutingPathLeg;
- (bool)supportsWaypointRouteSharing;

@end