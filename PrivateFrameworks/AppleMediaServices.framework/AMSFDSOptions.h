/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSFDSOptions : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _action;
    NSString * _bundleIdentifier;
}

@property (nonatomic) unsigned long long action;
@property (nonatomic, copy) NSString *bundleIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)action;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAction:(unsigned long long)arg1;
- (void)setBundleIdentifier:(id)arg1;

@end