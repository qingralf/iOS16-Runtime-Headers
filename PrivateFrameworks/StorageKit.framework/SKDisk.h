/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StorageKit.framework/StorageKit
 */

@interface SKDisk : NSObject {
    unsigned long long  _childCount;
    NSObject * _daDiskRef;
    NSString * _diskIdentifier;
    NSNumber * _diskObjectID;
    SKFilesystem * _filesystem;
    NSString * _filesystemType;
    NSString * _ioContent;
    bool  _isCaseSensitive;
    bool  _isDiskImage;
    bool  _isInternal;
    bool  _isJournaled;
    bool  _isLocked;
    bool  _isOSInternal;
    bool  _isPartitionDisk;
    bool  _isPhysicalDisk;
    bool  _isValid;
    bool  _isWholeDisk;
    NSString * _mediaUUID;
    NSString * _mountPoint;
    SKDiskPrivateCache * _privateCache;
    NSString * _role;
    NSArray * _sortedChildren;
    unsigned long long  _startLocation;
    bool  _supportsJournaling;
    bool  _supportsRepair;
    bool  _supportsVerify;
    unsigned long long  _totalSpace;
    NSString * _type;
    unsigned long long  _unformattedSize;
    NSString * _volumeName;
    NSString * _volumeUUID;
}

@property unsigned long long childCount;
@property (readonly) NSString *contentDiskIdentifier;
@property (retain) NSString *diskIdentifier;
@property (nonatomic, retain) NSNumber *diskObjectID;
@property (retain) SKFilesystem *filesystem;
@property (retain) NSString *filesystemType;
@property (retain) NSString *ioContent;
@property bool isCaseSensitive;
@property bool isDiskImage;
@property bool isInternal;
@property bool isJournaled;
@property bool isLocked;
@property bool isOSInternal;
@property bool isPartitionDisk;
@property bool isPhysicalDisk;
@property bool isValid;
@property (readonly) bool isVirtualDiskType;
@property bool isWholeDisk;
@property (retain) NSString *mediaUUID;
@property (retain) NSString *mountPoint;
@property (nonatomic, retain) SKDiskPrivateCache *privateCache;
@property (retain) NSString *role;
@property unsigned long long startLocation;
@property bool supportsJournaling;
@property bool supportsRepair;
@property bool supportsVerify;
@property unsigned long long totalSpace;
@property (retain) NSString *type;
@property unsigned long long unformattedSize;
@property (retain) NSString *volumeName;
@property (retain) NSString *volumeUUID;

+ (void)sortWithDisks:(id)arg1;

- (void).cxx_destruct;
- (id)_DAVolumeUUIDForDisk:(id)arg1;
- (id)_DAVolumeUUIDForDiskIdentifier:(id)arg1;
- (id)cachedWholeDiskByIdentifier;
- (bool)canBeErasedToRole:(id)arg1;
- (bool)canBoot;
- (bool)canResize;
- (unsigned long long)childCount;
- (id)children;
- (id)contentDiskIdentifier;
- (id)description;
- (id)dictionaryRepresentation;
- (id)diskIdentifier;
- (id)diskObjectID;
- (bool)ejectWithCompletionBlock:(id /* block */)arg1;
- (bool)ejectWithError:(id*)arg1;
- (void)expireCache;
- (void)expireCacheWithCompletionBlock:(id /* block */)arg1;
- (void)expireCacheWithOptions:(unsigned long long)arg1 completionBlock:(id /* block */)arg2;
- (id)filesystem;
- (id)filesystemType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)innerDescription;
- (id)ioContent;
- (bool)isCaseSensitive;
- (bool)isDiskImage;
- (bool)isEqual:(id)arg1;
- (bool)isInternal;
- (bool)isJournaled;
- (bool)isLocked;
- (bool)isOSInternal;
- (bool)isPartitionDisk;
- (bool)isPhysicalDisk;
- (bool)isValid;
- (bool)isVirtualDiskType;
- (bool)isWholeDisk;
- (bool)matchesDictionary:(id)arg1;
- (id)mediaUUID;
- (id)minimalDictionaryRepresentation;
- (id)mountPoint;
- (bool)mountWithCompletionBlock:(id /* block */)arg1;
- (bool)mountWithOptions:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (bool)mountWithOptionsDictionary:(id)arg1 error:(id*)arg2;
- (bool)mountWithOptionsDictionary:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (bool)mountWithParams:(id)arg1 error:(id*)arg2;
- (id)privateCache;
- (void)recacheWithOptions:(unsigned long long)arg1;
- (id)redactedDescription;
- (bool)rename:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (id)role;
- (void)setChildCount:(unsigned long long)arg1;
- (void)setDiskIdentifier:(id)arg1;
- (void)setDiskObjectID:(id)arg1;
- (void)setFilesystem:(id)arg1;
- (void)setFilesystemType:(id)arg1;
- (void)setIoContent:(id)arg1;
- (void)setIsCaseSensitive:(bool)arg1;
- (void)setIsDiskImage:(bool)arg1;
- (void)setIsInternal:(bool)arg1;
- (void)setIsJournaled:(bool)arg1;
- (void)setIsLocked:(bool)arg1;
- (void)setIsOSInternal:(bool)arg1;
- (void)setIsPartitionDisk:(bool)arg1;
- (void)setIsPhysicalDisk:(bool)arg1;
- (void)setIsValid:(bool)arg1;
- (void)setIsWholeDisk:(bool)arg1;
- (void)setMediaUUID:(id)arg1;
- (void)setMountPoint:(id)arg1;
- (void)setPrivateCache:(id)arg1;
- (void)setRole:(id)arg1;
- (void)setStartLocation:(unsigned long long)arg1;
- (void)setSupportsJournaling:(bool)arg1;
- (void)setSupportsRepair:(bool)arg1;
- (void)setSupportsVerify:(bool)arg1;
- (void)setTotalSpace:(unsigned long long)arg1;
- (void)setType:(id)arg1;
- (void)setUnformattedSize:(unsigned long long)arg1;
- (void)setVolumeName:(id)arg1;
- (void)setVolumeUUID:(id)arg1;
- (unsigned long long)startLocation;
- (id)supportedFilesystems;
- (bool)supportsJournaling;
- (bool)supportsRepair;
- (bool)supportsVerify;
- (unsigned long long)totalSpace;
- (id)type;
- (unsigned long long)unformattedSize;
- (bool)unmountWithCompletionBlock:(id /* block */)arg1;
- (bool)unmountWithOptions:(id)arg1 completionBlock:(id /* block */)arg2;
- (bool)unmountWithOptions:(id)arg1 error:(id*)arg2;
- (void)updateWithDictionary:(id)arg1;
- (id)volumeName;
- (id)volumeUUID;

@end
