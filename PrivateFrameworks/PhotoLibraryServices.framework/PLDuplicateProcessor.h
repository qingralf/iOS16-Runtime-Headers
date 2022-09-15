/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLDuplicateProcessor : NSObject {
    bool  _enableEXIFDataAccess;
    NSMutableSet * _inFlightMergeAssetUuids;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _inFlightMergeLock;
    PLLazyObject * _lazyAppPrivateData;
    PLLibraryServicesManager * _lsm;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _processingLock;
}

+ (bool)isValidDuplicateProcessorForLibraryServicesManager:(id)arg1;
+ (void)signalBackgroundJobSeviceDuplicateProcessingWithLibrary:(id)arg1;

- (void).cxx_destruct;
- (id)_albumGroupingFromAssets:(id)arg1 localIdentifierToCloudIdentifiers:(id)arg2 library:(id)arg3;
- (id)_appPrivateData;
- (bool)_batchEnumerateOrGenerateAssetObjectIdsFromStartingAssetOIDs:(id)arg1 library:(id)arg2 error:(id*)arg3 continuationHandler:(id /* block */)arg4 processingBatchBlock:(id /* block */)arg5;
- (id)_buildInterruptBatchFromStartingOIDs:(id)arg1 library:(id)arg2;
- (bool)_checkMergeFeatureEnabled:(id*)arg1;
- (void)_cloudScopedIdentifiersFromAssetUUIDS:(id)arg1 library:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)_detectDuplicatesAndInsertIntoDuplicateAlbumWithPhotoLibrary:(id)arg1 detector:(id)arg2 duplicateType:(short)arg3 error:(id*)arg4;
- (id)_duplicateAlbumsFromAssets:(id)arg1;
- (id)_fetchAssetOIDsForPhotoLibrary:(id)arg1 error:(id*)arg2;
- (id)_fetchAssetsFromReference:(id)arg1 library:(id)arg2 error:(id*)arg3;
- (id)_fetchAssetsWithPhotoLibrary:(id)arg1 assetObjectIDs:(id)arg2 error:(id*)arg3;
- (void)_inFlightMergeAssetsAddUUIDs:(id)arg1;
- (void)_inFlightMergeAssetsRemoveUUIDs:(id)arg1;
- (bool)_insertIntoDuplicateAlbum:(id)arg1 assets:(id)arg2 duplicateType:(short)arg3 photoLibrary:(id)arg4 error:(id*)arg5;
- (bool)_isAssetValidForMerge:(id)arg1;
- (bool)_moveDuplicateAlbumAssestFromAlbums:(id)arg1 toTargetAlbum:(id)arg2 duplicateType:(short)arg3 error:(id*)arg4;
- (id)_photoLibrary;
- (bool)_processDuplicatesWithPhotoLibrary:(id)arg1 processingType:(unsigned long long)arg2 assetObjectIds:(id)arg3 error:(id*)arg4;
- (bool)_processedDuplicateAssetSubGroupWithPhotoLibrary:(id)arg1 assetObjectIDs:(id)arg2 duplicateType:(short)arg3 error:(id*)arg4;
- (id)_processedDuplicateAssetsWithPhotoLibrary:(id)arg1 assetObjectIDs:(id)arg2 duplicateType:(short)arg3 associatedDuplicateAlbum:(id*)arg4 error:(id*)arg5;
- (bool)_processedRemoveExclusionGroupAssetsWithPhotoLibrary:(id)arg1 assetObjectIDs:(id)arg2 error:(id*)arg3;
- (id)_resumeInterruptMarker;
- (void)_setInterruptMarker:(id)arg1;
- (id)_sortMergeDuplicateAssets:(id)arg1 library:(id)arg2 error:(id*)arg3;
- (bool)assetsArePendingForDuplicateMergeProcessing:(id)arg1;
- (id)initWithLibraryServicesManager:(id)arg1;
- (void)mergeDuplicateAssetsWithAssetUUIDs:(id)arg1 library:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)processDuplicatesOfAssetObjectIds:(id)arg1 processingType:(unsigned long long)arg2 library:(id)arg3 error:(id*)arg4 continuationHandler:(id /* block */)arg5;

@end