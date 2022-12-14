/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LinkMetadata.framework/LinkMetadata
 */

@interface LNLinkEnumerationValueType : LNValueType {
    NSString * _enumerationIdentifier;
}

@property (nonatomic, readonly, copy) NSString *enumerationIdentifier;

// Image: /System/Library/PrivateFrameworks/LinkMetadata.framework/LinkMetadata

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)enumerationIdentifier;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEnumerationIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (Class)objectClass;
- (id)typeIdentifierAsString;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (Class)wf_contentItemClassWithMetadata:(id)arg1 valueNamespace:(id)arg2;
- (id)wf_contentItemFromLinkValue:(id)arg1 metadata:(id)arg2 valueNamespace:(id)arg3;

@end
