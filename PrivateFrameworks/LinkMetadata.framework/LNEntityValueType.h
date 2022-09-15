/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LinkMetadata.framework/LinkMetadata
 */

@interface LNEntityValueType : LNValueType {
    NSString * _identifier;
}

@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *typeName;

// Image: /System/Library/PrivateFrameworks/LinkMetadata.framework/LinkMetadata

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithTypeName:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)metadataClassesForCoding;
- (id)typeName;

// Image: /System/Library/PrivateFrameworks/LinkServices.framework/LinkServices

- (Class)objectClass;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (Class)wf_contentItemClassWithMetadata:(id)arg1 valueNamespace:(id)arg2;
- (id)wf_contentItemFromLinkValue:(id)arg1 metadata:(id)arg2 valueNamespace:(id)arg3;

@end