/* Generated by RuntimeBrowser.
 */

@protocol MKFUserPublicExtensions

@required

+ (NSUUID *)modelIDForParentRelationshipTo:(id <MKFHome>)arg1;

- (<MKFCharacteristicBulletinRegistration> *)characteristicBulletinRegistrationForAccessory:(NSUUID *)arg1 serviceInstanceID:(NSNumber *)arg2 characteristicInstanceID:(NSNumber *)arg3 deviceIdsIdentifier:(NSUUID *)arg4 context:(NSManagedObjectContext *)arg5;
- (bool)isOwner;
- (<MKFNotificationRegistrationMediaProperty> *)notificationRegistrationForMediaProperty:(NSString *)arg1 mediaProfile:(HMDMediaProfile *)arg2 deviceIdsDestination:(NSString *)arg3 context:(NSManagedObjectContext *)arg4;
- (<MKFUserAccessCode> *)userWithAccessCode:(NSString *)arg1 context:(NSManagedObjectContext *)arg2;

@end
