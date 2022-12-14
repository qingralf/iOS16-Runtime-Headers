/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ExtensionFoundation.framework/ExtensionFoundation
 */

@interface _EXLaunchConfiguration : NSObject <NSSecureCoding> {
    _EXExtensionIdentity * _extensionIdentity;
    _EXExtensionInstanceIdentifier * _instanceIdentifier;
    NSArray * _preferredLanguages;
    NSString * _sandboxProfileName;
}

@property (readonly) _EXExtensionIdentity *extensionIdentity;
@property (retain) _EXExtensionInstanceIdentifier *instanceIdentifier;
@property (copy) NSArray *preferredLanguages;
@property (copy) NSString *sandboxProfileName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionIdentity;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithExtensionIdentity:(id)arg1;
- (id)instanceIdentifier;
- (bool)isEqual:(id)arg1;
- (bool)isLaunchConfigurationEqual:(id)arg1;
- (id)preferredLanguages;
- (id)sandboxProfileName;
- (void)setInstanceIdentifier:(id)arg1;
- (void)setPreferredLanguages:(id)arg1;
- (void)setSandboxProfileName:(id)arg1;

@end
