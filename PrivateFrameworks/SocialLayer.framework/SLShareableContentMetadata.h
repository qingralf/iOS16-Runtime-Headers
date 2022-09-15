/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SocialLayer.framework/SocialLayer
 */

@interface SLShareableContentMetadata : NSObject <BSXPCSecureCoding, NSSecureCoding> {
    NSString * _bundleIdentifier;
    LPLinkMetadata * _metadata;
    NSArray * _registeredTypeIdentifiers;
    NSString * _sceneIdentifier;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) LPLinkMetadata *metadata;
@property (nonatomic, readonly, copy) NSArray *registeredTypeIdentifiers;
@property (nonatomic, readonly, copy) NSString *sceneIdentifier;
@property (readonly) Class superclass;

+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)description;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSceneIdentifier:(id)arg1 bundleIdentifier:(id)arg2 registeredTypeIdentifiers:(id)arg3 metadata:(id)arg4;
- (id)metadata;
- (id)registeredTypeIdentifiers;
- (id)sceneIdentifier;

@end