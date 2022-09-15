/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy
 */

@interface HMDPhotoLibraryPerson : HMFObject {
    NSUUID * _UUID;
    NSString * _name;
}

@property (readonly, copy) NSUUID *UUID;
@property (readonly, copy) HMPerson *hmPerson;
@property (readonly, copy) NSString *name;

- (void).cxx_destruct;
- (id)UUID;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)hmPerson;
- (id)initWithHMPerson:(id)arg1;
- (id)initWithUUID:(id)arg1 name:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)name;

@end