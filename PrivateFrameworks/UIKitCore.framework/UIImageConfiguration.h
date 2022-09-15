/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIImageConfiguration : NSObject <NSCopying, NSSecureCoding, UIImageConfiguration> {
    bool  _ignoresDynamicType;
    UITraitCollection * _traitCollection;
}

@property (nonatomic, readonly) bool _ignoresDynamicType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITraitCollection *traitCollection;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_applyConfigurationValuesTo:(id)arg1;
- (id)_configurationIgnoringDynamicType;
- (bool)_hasColorConfigurationWithTintColor;
- (bool)_ignoresDynamicType;
- (id)_init;
- (id)_initWithTraitCollection:(id)arg1;
- (bool)_isUnspecified;
- (bool)_shouldApplyConfiguration:(id)arg1;
- (id)configurationByApplyingConfiguration:(id)arg1;
- (id)configurationWithTraitCollection:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEquivalentToConfiguration:(id)arg1;
- (id)traitCollection;

@end