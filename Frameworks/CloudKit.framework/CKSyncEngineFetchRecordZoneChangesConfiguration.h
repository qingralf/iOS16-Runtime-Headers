/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKSyncEngineFetchRecordZoneChangesConfiguration : NSObject {
    CKFetchRecordZoneChangesConfiguration * _configuration;
    bool  _shouldFetchAssetContents;
}

@property (nonatomic, retain) CKFetchRecordZoneChangesConfiguration *configuration;
@property (nonatomic) bool shouldFetchAssetContents;

- (void).cxx_destruct;
- (id)configuration;
- (id)init;
- (void)setConfiguration:(id)arg1;
- (void)setShouldFetchAssetContents:(bool)arg1;
- (bool)shouldFetchAssetContents;

@end