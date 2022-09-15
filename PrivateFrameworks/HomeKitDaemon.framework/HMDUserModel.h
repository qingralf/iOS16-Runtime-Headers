/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy
 */

@interface HMDUserModel : HMDBackingStoreModelObject

@property (nonatomic, retain) HMDAccountHandle *accountHandle;
@property (nonatomic, retain) HMDAccountIdentifier *accountIdentifier;
@property (nonatomic, retain) NSArray *allowedAccessoryCategories;
@property (nonatomic, retain) NSArray *allowedAccessoryUUIDStrings;
@property (nonatomic, retain) NSArray *allowedRoomUUIDStrings;
@property (nonatomic, retain) NSNumber *announceAccessAllowed;
@property (nonatomic, retain) NSNumber *announceAccessLevel;
@property (nonatomic, retain) NSNumber *camerasAccessLevel;
@property (nonatomic, retain) NSString *changeTag;
@property (nonatomic, readonly, copy) HMUserHomeAccessSettings *homeAccessSettings;
@property (nonatomic, retain) NSDictionary *pairingIdentity;
@property (nonatomic, retain) NSNumber *presenceAuthorizationStatus;
@property (nonatomic, retain) NSNumber *privilege;
@property (nonatomic, retain) NSNumber *remoteAccessAllowed;
@property (nonatomic, retain) NSString *userID;

+ (id)properties;

- (id)homeAccessSettings;

@end