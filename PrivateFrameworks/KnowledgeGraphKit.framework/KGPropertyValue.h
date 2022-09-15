/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
 */

@interface KGPropertyValue : NSObject

@property (nonatomic, readonly) unsigned long long dataType;
@property (nonatomic, readonly) <MAPropertyTypeProtocol> *maPropertyValue;

+ (id)kgPropertiesWithMAProperties:(id)arg1;
+ (id)kgPropertyValueWithMAPropertyValue:(id)arg1;

- (unsigned long long)dataType;
- (id)description;
- (id)initForSubclasses;
- (id)maPropertyValue;

@end