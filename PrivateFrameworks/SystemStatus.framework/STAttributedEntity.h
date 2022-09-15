/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
 */

@interface STAttributedEntity : NSObject <BSDebugDescriptionProviding, BSDescriptionProviding, NSCopying, NSSecureCoding> {
    NSString * _bundleIdentifier;
    STExecutableIdentity * _executableIdentity;
    NSString * _localizedDisplayName;
    NSString * _localizedExecutableDisplayName;
    bool  _systemService;
    NSString * _website;
}

@property (nonatomic, readonly) struct { unsigned int x1[8]; } auditToken;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly, copy) NSString *bundlePath;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) STExecutableIdentity *executableIdentity;
@property (nonatomic, readonly, copy) NSString *executablePath;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *localizedDisplayName;
@property (nonatomic, readonly, copy) NSString *localizedExecutableDisplayName;
@property (readonly) Class superclass;
@property (getter=isSystemService, nonatomic, readonly) bool systemService;
@property (nonatomic, readonly, copy) NSString *website;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct { unsigned int x1[8]; })auditToken;
- (id)bundleIdentifier;
- (id)bundlePath;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)executableIdentity;
- (id)executablePath;
- (unsigned long long)hash;
- (id)initWithAuditToken:(struct { unsigned int x1[8]; })arg1;
- (id)initWithBundlePath:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithExecutableIdentity:(id)arg1;
- (id)initWithExecutableIdentity:(id)arg1 systemService:(bool)arg2;
- (id)initWithExecutableIdentity:(id)arg1 website:(id)arg2;
- (id)initWithExecutableIdentity:(id)arg1 website:(id)arg2 systemService:(bool)arg3;
- (id)initWithExecutableIdentity:(id)arg1 website:(id)arg2 systemService:(bool)arg3 bundleIdentifier:(id)arg4 localizedDisplayName:(id)arg5 localizedExecutableDisplayName:(id)arg6;
- (id)initWithExecutablePath:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isSystemService;
- (id)localizedDisplayName;
- (id)localizedExecutableDisplayName;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)website;

@end