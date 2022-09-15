/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMAccessCodeAddRequestValue : NSObject <HMAccessCodeModificationRequestValue, HMFObject, NSCopying, NSSecureCoding> {
    HMAccessCodeValue * _accessCodeValue;
    NSUUID * _accessoryUUID;
}

@property (readonly, copy) HMAccessCodeValue *accessCodeValue;
@property (readonly, copy) NSUUID *accessoryUUID;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;

+ (id)shortDescription;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessCodeValue;
- (id)accessoryUUID;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAccessCodeValue:(id)arg1 accessoryUUID:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)privateDescription;
- (id)shortDescription;

@end