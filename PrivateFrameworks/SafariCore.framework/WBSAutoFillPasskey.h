/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

@interface WBSAutoFillPasskey : NSObject <NSSecureCoding> {
    WBSPublicKeyCredentialIdentifier * _identifier;
    NSUUID * _operationUUID;
    NSString * _relyingPartyIdentifier;
    NSString * _username;
}

@property (nonatomic, readonly, copy) WBSPublicKeyCredentialIdentifier *identifier;
@property (nonatomic, readonly, copy) NSUUID *operationUUID;
@property (nonatomic, readonly) NSString *relyingPartyIdentifier;
@property (nonatomic, readonly) NSString *username;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithUsername:(id)arg1 relyingPartyIdentifier:(id)arg2 identifier:(id)arg3 operationUUID:(id)arg4;
- (id)operationUUID;
- (id)relyingPartyIdentifier;
- (id)username;

@end