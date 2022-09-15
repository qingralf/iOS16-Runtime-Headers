/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ImageCaptureCore.framework/ImageCaptureCore
 */

@interface ICCameraItem : NSObject {
    NSString * _UTI;
    bool  _addedAfterContentCatalogCompleted;
    NSDate * _creationDate;
    ICCameraDevice * _device;
    bool  _inTemporaryStore;
    bool  _locked;
    NSDate * _modificationDate;
    NSString * _name;
    unsigned int  _objectHandle;
    unsigned long long  _objectID;
    unsigned long long  _ownerID;
    ICCameraFolder * _parentFolder;
    unsigned long long  _parentID;
    unsigned long long  _privMetadataState;
    unsigned long long  _privThumbnailState;
    unsigned int  _ptpObjectHandle;
    bool  _raw;
    NSString * _relativeFileSystemPath;
    unsigned long long  _twinID;
    NSMutableDictionary * _userData;
    id  _userObject;
}

@property (nonatomic) NSString *UTI;
@property (getter=wasAddedAfterContentCatalogCompleted, nonatomic) bool addedAfterContentCatalogCompleted;
@property (nonatomic, copy) NSDate *creationDate;
@property (nonatomic, retain) ICCameraDevice *device;
@property (nonatomic, readonly) NSString *fileSystemPath;
@property (readonly) bool hasMetadata;
@property (readonly) bool hasThumbnail;
@property (getter=isInTemporaryStore, nonatomic) bool inTemporaryStore;
@property (readonly) struct CGImage { }*largeThumbnailIfAvailable;
@property (getter=isLocked, nonatomic) bool locked;
@property (nonatomic, readonly) NSDictionary *metadata;
@property (readonly) NSDictionary *metadataIfAvailable;
@property (readonly) unsigned long long metadataState;
@property (nonatomic, copy) NSDate *modificationDate;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) unsigned int objectHandle;
@property (readonly) unsigned long long objectID;
@property (readonly) unsigned long long ownerID;
@property (nonatomic, retain) ICCameraFolder *parentFolder;
@property (readonly) unsigned long long parentID;
@property (nonatomic) unsigned long long privMetadataState;
@property (nonatomic) unsigned long long privThumbnailState;
@property (nonatomic) unsigned int ptpObjectHandle;
@property (getter=isRaw, nonatomic) bool raw;
@property (readonly) NSString *relativeFileSystemPath;
@property (nonatomic, readonly) struct CGImage { }*thumbnail;
@property (readonly) struct CGImage { }*thumbnailIfAvailable;
@property (readonly) unsigned long long thumbnailState;
@property (readonly) unsigned long long twinID;
@property (nonatomic, retain) NSMutableDictionary *userData;
@property (retain) id userObject;

- (id)UTI;
- (void)appendToPath:(id)arg1;
- (long long)compareCameraItem:(id)arg1;
- (id)creationDate;
- (void)dealloc;
- (id)description;
- (id)device;
- (id)fileSystemPath;
- (void)flushMetadataCache;
- (void)flushThumbnailCache;
- (bool)hasMetadata;
- (bool)hasThumbnail;
- (id)initWithDictionary:(id)arg1 parentFolder:(id)arg2 device:(id)arg3;
- (id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3;
- (bool)isInTemporaryStore;
- (bool)isLocked;
- (bool)isRaw;
- (struct CGImage { }*)largeThumbnailIfAvailable;
- (id)metadata;
- (id)metadataIfAvailable;
- (unsigned long long)metadataState;
- (id)modificationDate;
- (id)name;
- (unsigned int)objectHandle;
- (unsigned long long)objectID;
- (unsigned long long)ownerID;
- (id)parentFolder;
- (unsigned long long)parentID;
- (unsigned long long)privMetadataState;
- (unsigned long long)privThumbnailState;
- (unsigned int)ptpObjectHandle;
- (id)relativeFileSystemPath;
- (void)requestMetadata;
- (void)requestThumbnail;
- (void)setAddedAfterContentCatalogCompleted:(bool)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setDevice:(id)arg1;
- (void)setInTemporaryStore:(bool)arg1;
- (void)setLocked:(bool)arg1;
- (void)setMetadataState:(unsigned long long)arg1;
- (void)setModificationDate:(id)arg1;
- (void)setName:(id)arg1;
- (void)setObjectHandle:(unsigned int)arg1;
- (void)setObjectID:(unsigned long long)arg1;
- (void)setOwnerID:(unsigned long long)arg1;
- (void)setParentFolder:(id)arg1;
- (void)setParentID:(unsigned long long)arg1;
- (void)setPrivMetadataState:(unsigned long long)arg1;
- (void)setPrivThumbnailState:(unsigned long long)arg1;
- (void)setPtpObjectHandle:(unsigned int)arg1;
- (void)setRaw:(bool)arg1;
- (void)setThumbnailState:(unsigned long long)arg1;
- (void)setTwinID:(unsigned long long)arg1;
- (void)setUTI:(id)arg1;
- (void)setUserData:(id)arg1;
- (void)setUserObject:(id)arg1;
- (struct CGImage { }*)thumbnail;
- (struct CGImage { }*)thumbnailIfAvailable;
- (unsigned long long)thumbnailState;
- (unsigned long long)twinID;
- (unsigned long long)unsignedIntegerValue;
- (id)userData;
- (id)userObject;
- (id)valueForUndefinedKey:(id)arg1;
- (bool)wasAddedAfterContentCatalogCompleted;

@end