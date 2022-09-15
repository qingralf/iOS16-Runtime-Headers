/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PosterKit.framework/PosterKit
 */

@interface PRPosterTimeFontConfiguration : NSObject <BSDescriptionStreamable, BSXPCSecureCoding, NSCopying, NSSecureCoding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *uniqueIdentifier;

+ (id)configurationWithTimeFontConfiguration:(id)arg1 extensionBundleIdentifier:(id)arg2;
+ (id)configurationWithTimeFontConfiguration:(id)arg1 extensionBundleURL:(id)arg2;
+ (id)defaultConfiguration;
+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void)appendDescriptionToFormatter:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)timeFontConfigurationWithExtensionBundle:(id)arg1;
- (id)timeFontConfigurationWithExtensionBundleIdentifier:(id)arg1;
- (id)timeFontConfigurationWithExtensionBundleURL:(id)arg1;
- (id)timeFontIdentifier;
- (id)uniqueIdentifier;

@end