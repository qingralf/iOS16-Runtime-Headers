/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLDuplicateMerge : NSObject {
    PLPhotoLibrary * _library;
    NSArray * _sourceAssets;
    PLDuplicateAsset * _targetAsset;
}

@property (readonly) PLManagedAsset *asset;
@property (retain) PLDuplicateAsset *targetAsset;

+ (id)_crashRecoveryMarkerFileURLWithPathManager:(id)arg1;
+ (bool)_removeCrashRecoveryMarkerFileWithPathManager:(id)arg1;
+ (bool)_writeCrashRecoveryMarkerFileForTargetAssetUUID:(id)arg1 pathManager:(id)arg2;
+ (bool)mergeAssets:(id)arg1 targetAssetOID:(id)arg2 photolibrary:(id)arg3 error:(id*)arg4;
+ (void)processCrashRecoveryMarkerFileIfNeededWithPathManager:(id)arg1;

- (void).cxx_destruct;
- (bool)_isRecentlyModifiedSourceAsset:(id)arg1;
- (bool)_isValidForDateCreatedOverwriteWithSource:(id)arg1;
- (bool)_isValidForLocationOverwriteWithSource:(id)arg1;
- (bool)_isValidForOverwriteWithSourceProperty:(id)arg1 targetProperty:(id)arg2;
- (bool)_isValidForTimezoneOverwriteWithSource:(id)arg1;
- (bool)_isValidForTitleOverwriteWithSource:(id)arg1;
- (bool)_mergeAdjustmentsFromSource:(id)arg1 error:(id*)arg2;
- (void)_mergeAlbumRelationshipsFromSource:(id)arg1;
- (void)_mergeCaptionFromSource:(id)arg1;
- (void)_mergeDateFromSource:(id)arg1;
- (void)_mergeFaceRelationshipsFromSource:(id)arg1;
- (void)_mergeFavoriteFromSource:(id)arg1;
- (void)_mergeKeywordsFromSource:(id)arg1;
- (void)_mergeLocationFromSource:(id)arg1 forceUpdate:(bool)arg2;
- (void)_mergeMemoryRelationshipsFromSource:(id)arg1;
- (void)_mergeMetadataFromSource:(id)arg1;
- (void)_mergeResourceMetadataFromSource:(id)arg1;
- (bool)_mergeResourcesFromSource:(id)arg1 error:(id*)arg2;
- (void)_mergeSharedLibraryMetadataFromSource:(id)arg1;
- (void)_mergeTimezoneFromSource:(id)arg1;
- (void)_mergeTitleFromSource:(id)arg1;
- (void)_resetMediaAnalysisStateWithType:(long long)arg1;
- (void)_setDCIMFilenameFromSource:(id)arg1;
- (id)asset;
- (id)initWithSourceAssets:(id)arg1 targetAsset:(id)arg2 photolibrary:(id)arg3;
- (bool)mergeWithError:(id*)arg1;
- (void)setTargetAsset:(id)arg1;
- (id)targetAsset;

@end