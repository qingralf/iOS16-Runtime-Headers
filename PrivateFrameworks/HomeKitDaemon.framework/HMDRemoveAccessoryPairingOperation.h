/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDRemoveAccessoryPairingOperation : HMDAccessoryBackgroundOperation <HMFLogging>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *pairingIdentifierToRemove;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)predicate;

- (id)initWithAccessory:(id)arg1 accessoryIdentifier:(id)arg2 homeUUIDWhereAccessoryWasPaired:(id)arg3 identityToRemove:(id)arg4 userData:(id)arg5;
- (id)initWithAccessory:(id)arg1 identityToRemove:(id)arg2;
- (id)initWithAccessory:(id)arg1 identityToRemove:(id)arg2 userData:(id)arg3;
- (id)logIdentifier;
- (bool)mainWithError:(id*)arg1;
- (id)pairingIdentifierToRemove;

@end