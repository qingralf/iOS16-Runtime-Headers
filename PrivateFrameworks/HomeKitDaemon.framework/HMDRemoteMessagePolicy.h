/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy
 */

@interface HMDRemoteMessagePolicy : HMFMessagePolicy <NSMutableCopying> {
    bool  _allowsAnonymousMessage;
    bool  _requiresAccountMessage;
    bool  _requiresSecureMessage;
    unsigned long long  _roles;
    unsigned long long  _transportRestriction;
}

@property (readonly) bool allowsAnonymousMessage;
@property (readonly) bool requiresAccountMessage;
@property (readonly) bool requiresSecureMessage;
@property (readonly) unsigned long long roles;
@property (readonly) unsigned long long transportRestriction;

+ (id)defaultPolicy;
+ (id)defaultSecurePolicy;
+ (id)remoteMessagePolicyWithRequiresSecureMessage:(bool)arg1 allowsAnonymousMessage:(bool)arg2 requiresAccountMessage:(bool)arg3 transportRestriction:(unsigned long long)arg4 roles:(unsigned long long)arg5;

- (id)__initWithRequiresSecureMessage:(bool)arg1 allowsAnonymousMessage:(bool)arg2 requiresAccountMessage:(bool)arg3 transportRestriction:(unsigned long long)arg4 roles:(unsigned long long)arg5;
- (bool)allowsAnonymousMessage;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (bool)requiresAccountMessage;
- (bool)requiresSecureMessage;
- (unsigned long long)roles;
- (unsigned long long)transportRestriction;

@end
