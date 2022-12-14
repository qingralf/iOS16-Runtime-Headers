/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy
 */

@interface HMDMediaBrowserDataSource : HMFObject <HMDMediaBrowserDataSource>

@property (readonly) unsigned long long appleMediaAccessoryVariant;
@property (readonly) NSString *currentAccessoryMediaRouteIdentifier;
@property (readonly) HMDDevice *currentDevice;
@property (readonly) bool isAppleMediaAccessory;
@property (readonly) HMFProductInfo *productInfo;
@property (readonly) bool requiresHomePodMiniPairing;
@property (readonly) unsigned long long supportedStereoPairVersions;
@property (readonly) HMFSystemInfo *systemInfo;

+ (id)shortDescription;

- (unsigned long long)appleMediaAccessoryVariant;
- (id)createUnassociatedAppleMediaAccessory:(id)arg1 name:(id)arg2 category:(id)arg3 productColor:(long long)arg4 messageDispatcher:(id)arg5;
- (id)createUnassociatedHomePodAccessory:(id)arg1 name:(id)arg2 category:(id)arg3 productColor:(long long)arg4 requiredPairingCapabilities:(unsigned long long)arg5 minimumPairingSoftware:(id)arg6 messageDispatcher:(id)arg7;
- (id)currentAccessoryMediaRouteIdentifier;
- (id)currentDevice;
- (bool)isAppleMediaAccessory;
- (id)performOperation:(id)arg1;
- (id)productInfo;
- (bool)requiresHomePodMiniPairing;
- (unsigned long long)supportedStereoPairVersions;
- (id)systemInfo;

@end
