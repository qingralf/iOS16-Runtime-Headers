/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AuthenticationServicesCore.framework/AuthenticationServicesCore
 */

@interface ASCPublicKeyCredentialAssertionOptions : NSObject <NSSecureCoding> {
    NSArray * _allowedCredentials;
    NSData * _challenge;
    NSData * _clientDataHash;
    unsigned long long  _credentialKind;
    NSString * _destinationSiteForCrossSiteAssertion;
    ASCWebAuthenticationExtensionsClientInputs * _extensions;
    NSData * _extensionsCBOR;
    NSString * _relyingPartyIdentifier;
    NSNumber * _timeout;
    NSString * _userVerificationPreference;
}

@property (nonatomic, readonly, copy) NSArray *allowedCredentials;
@property (nonatomic, readonly, copy) NSData *challenge;
@property (nonatomic, copy) NSData *clientDataHash;
@property (nonatomic, readonly) unsigned long long credentialKind;
@property (nonatomic, copy) NSString *destinationSiteForCrossSiteAssertion;
@property (nonatomic, copy) ASCWebAuthenticationExtensionsClientInputs *extensions;
@property (nonatomic, copy) NSData *extensionsCBOR;
@property (nonatomic, readonly, copy) NSString *relyingPartyIdentifier;
@property (nonatomic, copy) NSNumber *timeout;
@property (nonatomic, readonly, copy) NSString *userVerificationPreference;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allowedCredentials;
- (id)challenge;
- (id)clientDataHash;
- (unsigned long long)credentialKind;
- (id)destinationSiteForCrossSiteAssertion;
- (void)encodeWithCoder:(id)arg1;
- (id)extensions;
- (id)extensionsCBOR;
- (id)initWithCoder:(id)arg1;
- (id)initWithKind:(unsigned long long)arg1 relyingPartyIdentifier:(id)arg2 challenge:(id)arg3 userVerificationPreference:(id)arg4 allowedCredentials:(id)arg5;
- (id)initWithKind:(unsigned long long)arg1 relyingPartyIdentifier:(id)arg2 clientDataHash:(id)arg3 userVerificationPreference:(id)arg4 allowedCredentials:(id)arg5;
- (id)relyingPartyIdentifier;
- (void)setClientDataHash:(id)arg1;
- (void)setDestinationSiteForCrossSiteAssertion:(id)arg1;
- (void)setExtensions:(id)arg1;
- (void)setExtensionsCBOR:(id)arg1;
- (void)setTimeout:(id)arg1;
- (id)timeout;
- (id)userVerificationPreference;

@end
