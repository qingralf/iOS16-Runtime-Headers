/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMAccessoryInvitation : NSObject <HMObjectMerge, NSSecureCoding> {
    HMAccessory * _accessory;
    NSUUID * _identifier;
    long long  _state;
}

@property (nonatomic) HMAccessory *accessory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSUUID *identifier;
@property (nonatomic) long long state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_mergeWithNewObject:(id)arg1;
- (id)accessory;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithAccessory:(id)arg1 identifier:(id)arg2 state:(long long)arg3;
- (id)initWithCoder:(id)arg1;
- (void)setAccessory:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setState:(long long)arg1;
- (long long)state;
- (id)uniqueIdentifier;

@end