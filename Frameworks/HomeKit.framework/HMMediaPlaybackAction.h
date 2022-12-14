/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMMediaPlaybackAction : HMAction <HMObjectMerge, NSCopying, NSMutableCopying, NSSecureCoding> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSSet * _mediaProfiles;
    MPPlaybackArchive * _playbackArchive;
    long long  _state;
    NSNumber * _volume;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSSet *mediaProfiles;
@property (nonatomic, retain) MPPlaybackArchive *playbackArchive;
@property (nonatomic) long long state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (nonatomic, copy) NSNumber *volume;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)_actionWithInfo:(id)arg1 home:(id)arg2;
+ (id)mediaPlaybackActionWithProtoBuf:(id)arg1 home:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)__configureWithContext:(id)arg1 actionSet:(id)arg2;
- (bool)_handleUpdates:(id)arg1;
- (bool)_mergeWithNewObject:(id)arg1;
- (id)_serializeForAdd;
- (void)_updateWithAction:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)_updateWithSerializedAction:(id)arg1 home:(id)arg2;
- (id)accessoryProfiles;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)encodeAsProtoBuf;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMediaProfiles:(id)arg1 playbackState:(long long)arg2 volume:(id)arg3 playbackArchive:(id)arg4;
- (id)initWithMediaProfiles:(id)arg1 playbackState:(long long)arg2 volume:(id)arg3 playbackArchive:(id)arg4 uuid:(id)arg5;
- (id)initWithPlaybackAction:(id)arg1 uuid:(id)arg2;
- (id)initWithUUID:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isValid;
- (id)mediaProfiles;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)playbackArchive;
- (void)setMediaProfiles:(id)arg1;
- (void)setPlaybackArchive:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setVolume:(id)arg1;
- (long long)state;
- (unsigned long long)type;
- (void)updateWithAction:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)volume;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_affectedAccessoryProfiles;
- (id)hf_affectedAccessoryRepresentables;
- (id)hf_affectedCharacteristic;

@end
