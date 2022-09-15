/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
 */

@interface DNDAppAction : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    LNAction * _action;
    bool  _enabled;
}

@property (nonatomic, readonly, copy) LNAction *action;
@property (getter=isEnabled, nonatomic, readonly) bool enabled;
@property (nonatomic, readonly, copy) NSString *identifier;

+ (bool)runtimeIsSupported:(id*)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)action;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithAction:(id)arg1 enabled:(bool)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setEnabled:(bool)arg1;

@end