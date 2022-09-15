/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEIKEv2AuthenticationProtocol : NSObject <NSCopying> {
    unsigned long long  _digitalSignatureAlgorithm;
    unsigned long long  _method;
}

@property (nonatomic, readonly) unsigned long long digitalSignatureAlgorithm;
@property (nonatomic, readonly) bool isCertificate;
@property (nonatomic, readonly) bool isDigitalSignature;
@property (nonatomic, readonly) unsigned long long method;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)digitalSignatureAlgorithm;
- (unsigned long long)hash;
- (id)initWithDigitalSignature:(unsigned long long)arg1;
- (id)initWithMethod:(unsigned long long)arg1;
- (bool)isCertificate;
- (bool)isDigitalSignature;
- (bool)isEqual:(id)arg1;
- (unsigned long long)method;

@end