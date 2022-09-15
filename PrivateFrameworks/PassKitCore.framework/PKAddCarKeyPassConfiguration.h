/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKAddCarKeyPassConfiguration : PKAddSecureElementPassConfiguration {
    NSString * _appIdentifier;
    NSString * _manufacturerIdentifier;
    NSString * _password;
    NSString * _provisioningTemplateIdentifier;
    unsigned long long  _supportedRadioTechnologies;
}

@property (nonatomic, copy) NSString *appIdentifier;
@property (nonatomic, copy) NSString *manufacturerIdentifier;
@property (nonatomic, copy) NSString *password;
@property (nonatomic, retain) NSString *provisioningTemplateIdentifier;
@property (nonatomic) unsigned long long supportedRadioTechnologies;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)manufacturerIdentifier;
- (id)password;
- (id)provisioningTemplateIdentifier;
- (void)setAppIdentifier:(id)arg1;
- (void)setManufacturerIdentifier:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setProvisioningTemplateIdentifier:(id)arg1;
- (void)setSupportedRadioTechnologies:(unsigned long long)arg1;
- (unsigned long long)supportedRadioTechnologies;

@end