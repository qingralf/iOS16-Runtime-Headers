/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFileOpenInfo : NSObject <NSSecureCoding> {
    NSString * _UUID;
    CKAssetDownloadStagingInfo * _assetDownloadStagingInfo;
    CKAssetDownloadStagingManager * _assetDownloadStagingManager;
    NSNumber * _deviceID;
    NSFileHandle * _fileHandle;
    NSNumber * _fileID;
    NSNumber * _generationID;
    NSString * _path;
    bool  _shouldReadRawEncryptedData;
}

@property (nonatomic, retain) NSString *UUID;
@property (nonatomic, retain) CKAssetDownloadStagingInfo *assetDownloadStagingInfo;
@property (nonatomic) CKAssetDownloadStagingManager *assetDownloadStagingManager;
@property (nonatomic, retain) NSNumber *deviceID;
@property (nonatomic, retain) NSFileHandle *fileHandle;
@property (nonatomic, retain) NSNumber *fileID;
@property (nonatomic, retain) NSNumber *generationID;
@property (nonatomic, retain) NSString *path;
@property (nonatomic) bool shouldReadRawEncryptedData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)UUID;
- (id)assetDownloadStagingInfo;
- (id)assetDownloadStagingManager;
- (id)description;
- (id)deviceID;
- (void)encodeWithCoder:(id)arg1;
- (id)fileHandle;
- (id)fileID;
- (id)generationID;
- (id)initWithCoder:(id)arg1;
- (id)path;
- (void)setAssetDownloadStagingInfo:(id)arg1;
- (void)setAssetDownloadStagingManager:(id)arg1;
- (void)setDeviceID:(id)arg1;
- (void)setFileHandle:(id)arg1;
- (void)setFileID:(id)arg1;
- (void)setGenerationID:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setShouldReadRawEncryptedData:(bool)arg1;
- (void)setUUID:(id)arg1;
- (bool)shouldReadRawEncryptedData;

@end
