/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContainerManagerCommon.framework/ContainerManagerCommon
 */

@interface MCMLink : NSObject <NSCopying> {
    unsigned long long  _attributes;
    MCMContainerIdentityMinimal * _containerIdentity;
    bool  _implied;
    MCMContainerIdentityMinimal * _originContainerIdentity;
}

@property (nonatomic, readonly) unsigned long long attributes;
@property (nonatomic, readonly) MCMContainerIdentityMinimal *containerIdentity;
@property (nonatomic, readonly) bool implied;
@property (nonatomic, readonly) MCMContainerIdentityMinimal *originContainerIdentity;

+ (id)linkFromPlist:(id)arg1 originContainerIdentity:(id)arg2 userIdentityCache:(id)arg3 error:(unsigned long long*)arg4;

- (void).cxx_destruct;
- (unsigned long long)attributes;
- (id)containerIdentity;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)implied;
- (id)initWithLibsystemLink:(struct container_link_s { struct container_object_s {} *x1; struct container_object_s {} *x2; unsigned long long x3; bool x4; }*)arg1 defaultUserIdentity:(id)arg2 userIdentityCache:(id)arg3 error:(unsigned long long*)arg4;
- (id)initWithOriginContainerIdentity:(id)arg1 containerIdentity:(id)arg2 attributes:(unsigned long long)arg3 implied:(bool)arg4;
- (id)initWithPlist:(id)arg1 originContainerIdentity:(id)arg2 userIdentityCache:(id)arg3 error:(unsigned long long*)arg4;
- (id)initWithVersion1PlistDictionary:(id)arg1 originContainerIdentity:(id)arg2 userIdentityCache:(id)arg3 error:(unsigned long long*)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToLink:(id)arg1;
- (bool)isFuzzyEqualToLink:(id)arg1;
- (id)linkByMergingWithLink:(id)arg1;
- (id)linkBySubtractingAttributes:(unsigned long long)arg1;
- (id)linkInverted;
- (id)originContainerIdentity;
- (id)plist;

@end
