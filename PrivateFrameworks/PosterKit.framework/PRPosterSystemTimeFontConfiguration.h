/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PosterKit.framework/PosterKit
 */

@interface PRPosterSystemTimeFontConfiguration : PRPosterTimeFontConfiguration {
    NSString * _timeFontIdentifier;
}

@property (nonatomic, readonly, copy) NSString *timeFontIdentifier;

+ (id)defaultTimeFontIdentifier;
+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)appendDescriptionToFormatter:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimeFontIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)timeFontConfigurationWithExtensionBundleURL:(id)arg1;
- (id)timeFontIdentifier;
- (id)uniqueIdentifier;

@end
