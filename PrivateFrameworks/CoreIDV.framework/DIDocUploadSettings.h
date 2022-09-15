/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreIDV.framework/CoreIDV
 */

@interface DIDocUploadSettings : NSObject <NSSecureCoding> {
    bool  _base64EncodingEnabled;
    NSArray * _certificateChain;
    NSString * _encryptionVersion;
    NSString * _recipient;
}

@property (nonatomic) bool base64EncodingEnabled;
@property (nonatomic, copy) NSArray *certificateChain;
@property (nonatomic, copy) NSString *encryptionVersion;
@property (nonatomic, copy) NSString *recipient;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)base64EncodingEnabled;
- (id)certificateChain;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)encryptionVersion;
- (id)initWithCertificateChain:(id)arg1 recipient:(id)arg2 encryptionVersion:(id)arg3;
- (id)initWithCertificateChain:(id)arg1 recipient:(id)arg2 encryptionVersion:(id)arg3 base64EncodingEnabled:(bool)arg4;
- (id)initWithCoder:(id)arg1;
- (id)recipient;
- (void)setBase64EncodingEnabled:(bool)arg1;
- (void)setCertificateChain:(id)arg1;
- (void)setEncryptionVersion:(id)arg1;
- (void)setRecipient:(id)arg1;

@end