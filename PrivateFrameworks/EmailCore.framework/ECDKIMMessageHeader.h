/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
 */

@interface ECDKIMMessageHeader : NSObject {
    NSString * _agentOrUserIdentifier;
    unsigned long long  _bodyCanonicalizationAlgorithm;
    NSString * _bodyForCanonicalization;
    NSNumber * _bodyLength;
    NSString * _canonicalizedBodyHash;
    NSArray * _copiedHeaderFields;
    unsigned long long  _hashingAlgorithm;
    unsigned long long  _headerCanonicalizationAlgorithm;
    NSMutableDictionary * _headerFields;
    NSString * _headerNameForCanonicalization;
    NSArray * _queryMethods;
    NSString * _selector;
    NSData * _signatureData;
    double  _signatureExpiration;
    double  _signatureTimestamp;
    NSArray * _signedHeaderFields;
    unsigned long long  _signingAlgorithm;
    NSString * _signingDomainIdentifier;
    NSString * _version;
}

@property (nonatomic, readonly, copy) NSString *agentOrUserIdentifier;
@property (nonatomic, readonly) unsigned long long bodyCanonicalizationAlgorithm;
@property (nonatomic, readonly) NSString *bodyForCanonicalization;
@property (nonatomic, readonly) NSNumber *bodyLength;
@property (nonatomic, readonly, copy) NSString *canonicalizedBodyHash;
@property (nonatomic, readonly) NSArray *copiedHeaderFields;
@property (nonatomic, readonly) unsigned long long hashingAlgorithm;
@property (nonatomic, readonly) unsigned long long headerCanonicalizationAlgorithm;
@property (nonatomic, readonly) NSString *headerNameForCanonicalization;
@property (nonatomic, readonly, copy) NSArray *queryMethods;
@property (nonatomic, readonly) NSString *selector;
@property (nonatomic, readonly, copy) NSData *signatureData;
@property (nonatomic, readonly) double signatureExpiration;
@property (nonatomic, readonly) double signatureTimestamp;
@property (nonatomic, readonly, copy) NSArray *signedHeaderFields;
@property (nonatomic, readonly) unsigned long long signingAlgorithm;
@property (nonatomic, readonly, copy) NSString *signingDomainIdentifier;
@property (nonatomic, readonly, copy) NSString *version;

- (void).cxx_destruct;
- (id)_errorForInvalidOptionalKey:(id)arg1 actualValue:(id)arg2 expectedValue:(id)arg3;
- (id)_errorForInvalidRequiredKey:(id)arg1 actualValue:(id)arg2 expectedValue:(id)arg3;
- (id)_errorForMissingRequiredKey:(id)arg1;
- (bool)_isValidDomain:(id)arg1;
- (id)_parseAgentOrUserIdentifierWithSigningDomainIdentifier:(id)arg1;
- (id)_parseBodyLength;
- (id)_parseCanonicalizedBodyHash;
- (id)_parseCopiedHeaderFields;
- (id)_parseMessageCanonicalizationAlgorithm;
- (id)_parseQueryMethod;
- (id)_parseSelector;
- (id)_parseSignatureDataWithHeaderBody:(id)arg1;
- (id)_parseSignatureExpiration;
- (id)_parseSignatureTimestamp;
- (id)_parseSignedHeaderFields;
- (id)_parseSigningAlgorithm;
- (id)_parseSigningDomainIdentifier;
- (id)_parseVersion;
- (id)agentOrUserIdentifier;
- (unsigned long long)bodyCanonicalizationAlgorithm;
- (id)bodyForCanonicalization;
- (id)bodyLength;
- (id)canonicalizedBodyHash;
- (id)copiedHeaderFields;
- (unsigned long long)hashingAlgorithm;
- (unsigned long long)headerCanonicalizationAlgorithm;
- (id)headerNameForCanonicalization;
- (id)initWithHeaderFieldName:(id)arg1 headerBody:(id)arg2 error:(out id*)arg3;
- (id)queryMethods;
- (id)selector;
- (id)signatureData;
- (double)signatureExpiration;
- (double)signatureTimestamp;
- (id)signedHeaderFields;
- (unsigned long long)signingAlgorithm;
- (id)signingDomainIdentifier;
- (id)version;

@end