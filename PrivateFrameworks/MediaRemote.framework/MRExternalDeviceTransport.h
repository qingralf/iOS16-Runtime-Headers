/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRExternalDeviceTransport : NSObject {
    long long  _connectionType;
    bool  _isValid;
    bool  _requiresCustomPairing;
    NSString * _uid;
}

@property (nonatomic, readonly) long long connectionType;
@property (nonatomic, readonly) MRDeviceInfo *deviceInfo;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSString *hostname;
@property (nonatomic, readonly) bool isValid;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long port;
@property (nonatomic, readonly) bool requiresCustomPairing;
@property (nonatomic) bool shouldUseSystemAuthenticationPrompt;
@property (nonatomic, readonly) bool supportsIdleDisconnection;
@property (nonatomic, readonly) NSString *uid;

- (void).cxx_destruct;
- (long long)connectionType;
- (id)createConnectionWithUserInfo:(id)arg1;
- (id)deviceInfo;
- (id)error;
- (id)hostname;
- (bool)isValid;
- (id)name;
- (long long)port;
- (bool)requiresCustomPairing;
- (void)resetWithError:(id)arg1;
- (void)setShouldUseSystemAuthenticationPrompt:(bool)arg1;
- (bool)shouldUseSystemAuthenticationPrompt;
- (bool)supportsIdleDisconnection;
- (id)uid;

@end