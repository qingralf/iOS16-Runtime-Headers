/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PlatformSSO.framework/PlatformSSO
 */

@interface POLoginConfiguration : NSObject <NSSecureCoding> {
    NSString * _accountDisplayName;
    NSString * _additionalScopes;
    NSString * _audience;
    NSString * _clientID;
    NSDictionary * _customAssertionRequestBodyClaims;
    NSDictionary * _customAssertionRequestHeaderClaims;
    NSDictionary * _customLoginRequestBodyClaims;
    NSDictionary * _customLoginRequestHeaderClaims;
    NSArray * _customLoginRequestValues;
    NSArray * _customNonceRequestValues;
    NSDictionary * _customRefreshRequestBodyClaims;
    NSDictionary * _customRefreshRequestHeaderClaims;
    NSArray * _customRefreshRequestValues;
    bool  _includePreviousRefreshTokenInLoginRequest;
    NSString * _invalidCredentialPredicate;
    NSString * _issuer;
    NSURL * _jwksEndpointURL;
    NSArray * _kerberosTicketMappings;
    NSURL * _nonceEndpointURL;
    NSString * _nonceResponseKeypath;
    NSString * _previousRefreshTokenClaimName;
    NSURL * _refreshEndpointURL;
    NSString * _serverNonceClaimName;
    NSURL * _tokenEndpointURL;
}

@property (nonatomic, retain) NSString *accountDisplayName;
@property (nonatomic, retain) NSString *additionalScopes;
@property (nonatomic, retain) NSString *audience;
@property (nonatomic, readonly) NSString *clientID;
@property (retain) NSDictionary *customAssertionRequestBodyClaims;
@property (retain) NSDictionary *customAssertionRequestHeaderClaims;
@property (retain) NSDictionary *customLoginRequestBodyClaims;
@property (retain) NSDictionary *customLoginRequestHeaderClaims;
@property (nonatomic, retain) NSArray *customLoginRequestValues;
@property (nonatomic, retain) NSArray *customNonceRequestValues;
@property (retain) NSDictionary *customRefreshRequestBodyClaims;
@property (retain) NSDictionary *customRefreshRequestHeaderClaims;
@property (nonatomic, retain) NSArray *customRefreshRequestValues;
@property (nonatomic) bool includePreviousRefreshTokenInLoginRequest;
@property (nonatomic, retain) NSString *invalidCredentialPredicate;
@property (nonatomic, readonly) NSString *issuer;
@property (nonatomic, retain) NSURL *jwksEndpointURL;
@property (nonatomic, retain) NSArray *kerberosTicketMappings;
@property (nonatomic, retain) NSURL *nonceEndpointURL;
@property (nonatomic, retain) NSString *nonceResponseKeypath;
@property (nonatomic, retain) NSString *previousRefreshTokenClaimName;
@property (nonatomic, retain) NSURL *refreshEndpointURL;
@property (nonatomic, retain) NSString *serverNonceClaimName;
@property (nonatomic, retain) NSURL *tokenEndpointURL;

+ (void)configurationWithOpenIdConfigurationURL:(id)arg1 clientID:(id)arg2 issuer:(id)arg3 completion:(id /* block */)arg4;
+ (void)configurationWithOpenIdConfigurationURL:(id)arg1 identityProviderURL:(id)arg2 clientId:(id)arg3 issuer:(id)arg4 completion:(id /* block */)arg5;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithClientId:(id)arg1 issuer:(id)arg2 tokenEndpointURL:(id)arg3 jwksEndpointURL:(id)arg4 audience:(id)arg5;
- (id)accountDisplayName;
- (id)additionalScopes;
- (id)audience;
- (id)clientID;
- (id)customAssertionRequestBodyClaims;
- (id)customAssertionRequestHeaderClaims;
- (id)customLoginRequestBodyClaims;
- (id)customLoginRequestHeaderClaims;
- (id)customLoginRequestValues;
- (id)customNonceRequestValues;
- (id)customRefreshRequestBodyClaims;
- (id)customRefreshRequestHeaderClaims;
- (id)customRefreshRequestValues;
- (id)dataRepresentation;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)includePreviousRefreshTokenInLoginRequest;
- (id)initWithClientID:(id)arg1 issuer:(id)arg2 tokenEndpointURL:(id)arg3 jwksEndpointURL:(id)arg4 audience:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)invalidCredentialPredicate;
- (id)issuer;
- (id)jwksEndpointURL;
- (id)kerberosTicketMappings;
- (id)nonceEndpointURL;
- (id)nonceResponseKeypath;
- (id)previousRefreshTokenClaimName;
- (id)refreshEndpointURL;
- (id)serverNonceClaimName;
- (void)setAccountDisplayName:(id)arg1;
- (void)setAdditionalScopes:(id)arg1;
- (void)setAudience:(id)arg1;
- (void)setCustomAssertionRequestBodyClaims:(id)arg1;
- (bool)setCustomAssertionRequestBodyClaims:(id)arg1 returningError:(id*)arg2;
- (void)setCustomAssertionRequestHeaderClaims:(id)arg1;
- (bool)setCustomAssertionRequestHeaderClaims:(id)arg1 returningError:(id*)arg2;
- (void)setCustomLoginRequestBodyClaims:(id)arg1;
- (bool)setCustomLoginRequestBodyClaims:(id)arg1 returningError:(id*)arg2;
- (void)setCustomLoginRequestHeaderClaims:(id)arg1;
- (bool)setCustomLoginRequestHeaderClaims:(id)arg1 returningError:(id*)arg2;
- (void)setCustomLoginRequestValues:(id)arg1;
- (void)setCustomNonceRequestValues:(id)arg1;
- (void)setCustomRefreshRequestBodyClaims:(id)arg1;
- (bool)setCustomRefreshRequestBodyClaims:(id)arg1 returningError:(id*)arg2;
- (void)setCustomRefreshRequestHeaderClaims:(id)arg1;
- (bool)setCustomRefreshRequestHeaderClaims:(id)arg1 returningError:(id*)arg2;
- (void)setCustomRefreshRequestValues:(id)arg1;
- (void)setIncludePreviousRefreshTokenInLoginRequest:(bool)arg1;
- (void)setInvalidCredentialPredicate:(id)arg1;
- (void)setJwksEndpointURL:(id)arg1;
- (void)setKerberosTicketMappings:(id)arg1;
- (void)setNonceEndpointURL:(id)arg1;
- (void)setNonceResponseKeypath:(id)arg1;
- (void)setPreviousRefreshTokenClaimName:(id)arg1;
- (void)setRefreshEndpointURL:(id)arg1;
- (void)setServerNonceClaimName:(id)arg1;
- (void)setTokenEndpointURL:(id)arg1;
- (id)tokenEndpointURL;

@end
