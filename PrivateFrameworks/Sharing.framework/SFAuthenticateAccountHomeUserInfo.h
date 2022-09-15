/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFAuthenticateAccountHomeUserInfo : NSObject {
    NSUUID * _homeUniqueIdentifier;
    NSUUID * _userUniqueIdentifier;
}

@property (nonatomic, readonly) NSUUID *homeUniqueIdentifier;
@property (nonatomic, readonly) NSUUID *userUniqueIdentifier;

- (void).cxx_destruct;
- (id)homeUniqueIdentifier;
- (id)initWithHomeUUID:(id)arg1 userUUID:(id)arg2;
- (id)userUniqueIdentifier;

@end