/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LinkServices.framework/LinkServices
 */

@interface LNAppEntityConnectionPolicy : NSObject {
    NSString * _appEntityIdentifier;
    NSString * _appEntityMangledTypeName;
    LNEffectiveBundleIdentifier * _effectiveBundleIdentifier;
}

@property (nonatomic, readonly) NSString *appEntityIdentifier;
@property (nonatomic, readonly) NSString *appEntityMangledTypeName;
@property (nonatomic, readonly) LNEffectiveBundleIdentifier *effectiveBundleIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appEntityIdentifier;
- (id)appEntityMangledTypeName;
- (id)connectionWithError:(id*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)effectiveBundleIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAppEntityIdentifier:(id)arg1 appEntityMangledTypeName:(id)arg2 effectiveBundleIdentifier:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end