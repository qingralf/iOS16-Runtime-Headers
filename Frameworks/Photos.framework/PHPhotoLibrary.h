/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHPhotoLibrary : NSObject <CPLStatusDelegate, PHBatchFetchingArrayDataSource, PHPerformChangesRequest, PVPhotoLibraryProtocol> {
    NSHashTable * _availabilityObservers;
    NSMutableDictionary * _changeNotificationInfo;
    bool  _clearsOIDCacheAfterFetchResultDealloc;
    PHFetchOptions * _customLibrarySpecificFetchOptions;
    NSHashTable * _externalChangeObservers;
    NSHashTable * _fetchResultsRegisteredForChangeNotifications;
    PAImageConversionServiceClient * _imageConversionServiceClient;
    NSHashTable * _internalChangeObservers;
    bool  _isChangeHandlingActive;
    bool  _isChangeHandlingAuthorized;
    struct atomic_flag { 
        _Atomic bool _Value; 
    }  _isChangeProcessingPending;
    _Atomic bool  _isCompletedPostOpenInitialization;
    NSObject<OS_dispatch_queue> * _isolationQueue;
    double  _lastChangeProcessingStarted;
    PLLazyObject * _lazyAlbumRootFolderObjectID;
    PLLazyObject * _lazyAppPrivateData;
    PLLazyObject * _lazyBackgroundQueueObjectFetchingPhotoLibrary;
    PLLazyObject * _lazyBackgroundQueuePhotoLibrary;
    PLLazyObject * _lazyCPLStatus;
    PLLazyObject * _lazyCacheMetricsCollectorClient;
    PLLazyObject * _lazyChangeHandlingPhotoLibrary;
    PLLazyObject * _lazyIsReadyForAnalysis;
    PLLazyObject * _lazyMainQueueConcurrencyPhotoLibrary;
    PLLazyObject * _lazyMainQueuePhotoLibrary;
    PLLazyObject * _lazyPhotoLibrary;
    PLLazyObject * _lazyProjectAlbumRootFolderObjectID;
    PLLazyObject * _lazyUserInitiatedQueuePhotoLibrary;
    PLFileSystemVolume * _libraryFileSystemVolume;
    NSError * _openError;
    bool  _opened;
    PHPerformChangesRequest * _performChangesRequest;
    PLPhotoLibraryBundle * _photoLibraryBundle;
    NSURL * _photoLibraryURL;
    NSProgress * _postOpenProgress;
    bool  _postsPersistentHistoryChangedNotifications;
    PLPhotoLibrary * _transactionPhotoLibrary;
    NSObject<OS_dispatch_queue> * _transactionQueue;
    unsigned short  _type;
    NSError * _unavailabilityReason;
    bool  _unknownMergeEvent;
    PAVideoConversionServiceClient * _videoConversionServiceClient;
    long long  _wellKnownPhotoLibraryIdentifier;
}

@property (nonatomic, readonly) NSManagedObjectID *albumRootFolderObjectID;
@property (nonatomic, readonly) PHPhotoLibraryAppPrivateData *appPrivateData;
@property (nonatomic, readonly) PLAssetsdClient *assetsdClient;
@property (nonatomic, retain) NSHashTable *availabilityObservers;
@property (readonly) PLPhotoLibrary *backgroundQueueObjectFetchingPhotoLibrary;
@property (readonly) PLPhotoLibrary *backgroundQueuePhotoLibrary;
@property (nonatomic, readonly) PLCacheMetricsCollectorClient *cacheMetricsCollector;
@property (readonly) PLPhotoLibrary *changeHandlingPhotoLibrary;
@property (nonatomic, retain) NSMutableDictionary *changeNotificationInfo;
@property (nonatomic) bool clearsOIDCacheAfterFetchResultDealloc;
@property (getter=isCloudPhotoLibraryEnabled, nonatomic, readonly) bool cloudPhotoLibraryEnabled;
@property (nonatomic, readonly) CPLStatus *cplStatus;
@property (nonatomic, readonly) PHPersistentChangeToken *currentChangeToken;
@property (nonatomic, readonly) PHPersistentChangeToken *currentToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSHashTable *externalChangeObservers;
@property (nonatomic, retain) NSHashTable *fetchResultsRegisteredForChangeNotifications;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PAImageConversionServiceClient *imageConversionServiceClient;
@property (nonatomic, retain) NSHashTable *internalChangeObservers;
@property (nonatomic) bool isChangeHandlingActive;
@property (nonatomic) bool isChangeHandlingAuthorized;
@property (nonatomic, readonly) bool isCloudPhotoLibrary;
@property (nonatomic, readonly) bool isReadOnlyCloudPhotoLibrary;
@property (nonatomic, readonly) bool isReadyForAnalysis;
@property (nonatomic, readonly) bool isSystemPhotoLibrary;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *isolationQueue;
@property (nonatomic) double lastChangeProcessingStarted;
@property (nonatomic, readonly) PLPhotoLibrary *mainQueueConcurrencyPhotoLibrary;
@property (readonly) PLPhotoLibrary *mainQueuePhotoLibrary;
@property (nonatomic, retain) PHPerformChangesRequest *performChangesRequest;
@property (nonatomic, readonly) PLPhotoAnalysisServiceClient *photoAnalysisClient;
@property (readonly) PLPhotoLibrary *photoLibrary;
@property (readonly) PLPhotoLibraryBundle *photoLibraryBundle;
@property (nonatomic, readonly) NSURL *photoLibraryURL;
@property (nonatomic, readonly) NSProgress *postOpenProgress;
@property bool postsPersistentHistoryChangedNotifications;
@property (nonatomic, readonly) NSManagedObjectID *projectAlbumRootFolderObjectID;
@property (getter=px_areChangesPaused, nonatomic, readonly) bool px_changesPaused;
@property (readonly) PXPhotoLibraryLocalDefaults *px_localDefaults;
@property (nonatomic, readonly) PXSharedLibrarySharingSuggestionsCountsManager *px_sharedLibrarySharingSuggestionsCountsManager;
@property (nonatomic, readonly, copy) PHFetchOptions *px_standardLibrarySpecificFetchOptions;
@property (readonly) Class superclass;
@property (readonly) PLPhotoLibrary *transactionPhotoLibrary;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *transactionQueue;
@property (nonatomic, readonly) unsigned short type;
@property (retain) NSError *unavailabilityReason;
@property (nonatomic) bool unknownMergeEvent;
@property (readonly) PLPhotoLibrary *userInitiatedQueuePhotoLibrary;
@property (nonatomic, readonly) NSString *uuid;
@property (readonly) PLPhotoKitVariationCache *variationCache;
@property (nonatomic, retain) PAVideoConversionServiceClient *videoConversionServiceClient;
@property (nonatomic, readonly) long long wellKnownPhotoLibraryIdentifier;

// Image: /System/Library/Frameworks/Photos.framework/Photos

+ (Class)PHObjectClassForEntityName:(id)arg1;
+ (Class)PHObjectClassForOID:(id)arg1;
+ (Class)PHObjectClassForObjectType:(long long)arg1;
+ (id)PHObjectClasses;
+ (id)PHObjectClassesByEntityName;
+ (bool)_checkAuthorizationStatusForAPIAccessLevel:(long long)arg1 suppressPrompt:(bool)arg2;
+ (id)_countOfAnalysisVersionsForKey:(id)arg1 inLibrary:(id)arg2;
+ (unsigned long long)_countOfAssetsWithPredicate:(id)arg1 entityName:(id)arg2 inLibrary:(id)arg3;
+ (id)_effectiveRootEntity:(id)arg1;
+ (void)_forceUserInterfaceReload;
+ (bool)_isInternalObserver:(id)arg1;
+ (long long)_photosAccessAllowedForAccessLevel:(long long)arg1;
+ (void)_requestAuthorizationForAccessLevel:(long long)arg1 supportsLimited:(bool)arg2 handler:(id /* block */)arg3;
+ (id)_sharedPhotoLibrary;
+ (void)assertRunningInExtension;
+ (void)assertTransaction;
+ (long long)authorizationStatus;
+ (long long)authorizationStatusForAccessLevel:(long long)arg1;
+ (bool)checkAuthorizationStatusForAPIAccessLevel:(long long)arg1;
+ (Class)classForFetchType:(id)arg1;
+ (long long)collectionListTypeForIdentifierCode:(id)arg1;
+ (bool)createOrUpgradePhotoLibraryWithWellKnownIdentifier:(long long)arg1 error:(id*)arg2;
+ (void)enableMultiLibraryMode;
+ (id)fetchTypeForLocalIdentifierCode:(id)arg1;
+ (bool)hasSharedPhotoLibrary;
+ (id)imagePickerPhotoLibrary;
+ (void)initialize;
+ (bool)isMultiLibraryModeEnabled;
+ (bool)isPhotosApplicationInstalled;
+ (bool)isSystemPhotoLibraryURL:(id)arg1;
+ (double)nextOverrideTimeIntervalForSystemBudgets:(unsigned long long)arg1;
+ (id)openPhotoLibraryWithWellKnownIdentifier:(long long)arg1 error:(id*)arg2;
+ (id)photoLibraryForCurrentTransaction;
+ (id)predicateForAssetsAnalyzedForFacesWithAssetObjectIDs:(id)arg1;
+ (void)removeAllUniquedOIDs;
+ (void)requestAuthorization:(id /* block */)arg1;
+ (void)requestAuthorizationForAccessLevel:(long long)arg1 handler:(id /* block */)arg2;
+ (bool)setImagePickerPhotoLibrary:(id)arg1 error:(id*)arg2;
+ (void)setNeedsToRepairKeyCuratedAssetForMemories:(id)arg1;
+ (void)setSharedPhotoLibrary:(id)arg1;
+ (bool)setSystemPhotoLibraryURL:(id)arg1 error:(id*)arg2;
+ (id)sharedContactStore;
+ (id)sharedLazyPhotoLibraryForCMM;
+ (id)sharedMomentSharePhotoLibrary;
+ (id)sharedPhotoLibrary;
+ (bool)shouldDisplayMergeCandidates:(id)arg1 forPerson:(id)arg2;
+ (id)stringFromPHPhotoLibraryType:(unsigned short)arg1;
+ (const char *)systemPhotoLibraryAvailableNotificationName;
+ (id)systemPhotoLibraryURL;
+ (const char *)systemPhotoLibraryURLChangeNotificationName;
+ (id)uniqueObjectIDCache;
+ (id)uniquedOID:(id)arg1;
+ (id)uniquedOIDs:(id)arg1;
+ (id)uniquedOIDsFromObjects:(id)arg1;
+ (id)wellKnownPhotoLibraryURLForIdentifier:(long long)arg1;

- (void).cxx_destruct;
- (void)_addObservers:(id)arg1 authorizationStatus:(long long)arg2;
- (id)_adjustedSincePredicateWithDate:(id)arg1;
- (double)_analysisProgressForHighlight:(id)arg1 fetchCountBlock:(id /* block */)arg2;
- (id)_assetKindPredicateForTaskID:(unsigned long long)arg1;
- (id)_assetOIDsForHighlight:(id)arg1 withContext:(id)arg2;
- (void)_beginTransaction;
- (void)_callLegacyCompletionTarget:(id)arg1 completionSelector:(SEL)arg2 contextInfo:(void*)arg3 withSuccess:(bool)arg4 error:(id)arg5;
- (void)_cancelTransactionOnExecutionContext:(id)arg1 withInstrumentation:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)_cloudIdentifierKeysByFetchType;
- (void)_commitTransactionOnExecutionContext:(id)arg1 withInstrumentation:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)_computeFingerprintsForAssetsWithObjectIDsByUUID:(id)arg1;
- (void)_denyTransactionOnExecutionContext:(id)arg1 withInstrumentation:(id)arg2 authorizationStatus:(long long)arg3 accessLevel:(long long)arg4 completionHandler:(id /* block */)arg5;
- (void)_endTransaction;
- (id)_errorForAuthorizationStatus:(long long)arg1 accessLevel:(long long)arg2;
- (id)_fetchOptionsForMediaProcessingTaskID:(unsigned long long)arg1 priority:(unsigned long long)arg2 analysisVersion:(int)arg3 sceneConfidenceThreshold:(float)arg4 adjustedSinceDate:(id)arg5 error:(id*)arg6;
- (id)_fetchPersistentChangesSinceToken:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)_fingerPrintsForAssetUUIDs:(id)arg1;
- (id)_getAssetLocalIdentifiersByFingerPrintForFingerPrints:(id)arg1;
- (id)_getCloudClient;
- (id)_getPhotoKitClient;
- (void)_handleLibraryBecameUnavailable:(id)arg1 reason:(id)arg2;
- (void)_handleServiceConnectionClosed:(id)arg1;
- (bool)_hasChangeObservers;
- (id)_imagesInternalPredicate;
- (void)_importExportRequests:(id)arg1 assetCollection:(id)arg2 bundleStagingDirectoryURL:(id)arg3 resultHandler:(id /* block */)arg4;
- (void)_importIntoLibraryWithAssetCollection:(id)arg1 assetBundles:(id)arg2 resultHandler:(id /* block */)arg3;
- (void)_importRenderedAssets:(id)arg1 assetCollection:(id)arg2 bundleStagingDirectoryURL:(id)arg3 resultHandler:(id /* block */)arg4;
- (long long)_initialRetryCountForChangesRequest:(id)arg1;
- (id)_initializeAppPrivateData;
- (id)_initializeCPLStatus;
- (id)_initializeIsReadyForAnalysis;
- (id)_internalPredicateForTaskID:(unsigned long long)arg1 priority:(unsigned long long)arg2 analysisVersion:(int)arg3 sceneConfidenceThreshold:(float)arg4 adjustedSinceDate:(id)arg5;
- (void)_invalidateEverythingWithReason:(id)arg1;
- (bool)_isValidTaskID:(unsigned long long)arg1;
- (id)_lazyPhotoLibrary;
- (id)_livePhotosInternalPredicate;
- (id)_moviesInternalPredicate;
- (id)_needsProcessingPredicateForTaskID:(unsigned long long)arg1 analysisVersion:(int)arg2;
- (id)_nonPanoInternalPredicate;
- (void)_notifyAvailabilityObserversWithReason:(id)arg1;
- (void)_notifyPersistentChangeObservers;
- (void)_onQueueNotifyAvailabilityObserversWithReason:(id)arg1;
- (void)_pauseChangeHandlingIfNeeded;
- (id)_photoLibraryForAnalysisState;
- (id)_popChangesRequest;
- (bool)_postOpenInitializationWithError:(id*)arg1;
- (bool)_preflightRequest:(id)arg1 withError:(id*)arg2;
- (id)_priorityPredicateForTaskID:(unsigned long long)arg1 priority:(unsigned long long)arg2 sceneConfidenceThreshold:(float)arg3;
- (void)_processPendingChanges;
- (id)_propertySetsForTaskID:(unsigned long long)arg1;
- (double)_ratioOfAssetsAtOrAboveVersion:(short)arg1 forKey:(id)arg2;
- (void)_removeObserver:(id)arg1;
- (void)_resumeChangeHandlingIfNeeded;
- (void)_sendChangesRequest:(id)arg1 onExecutionContext:(id)arg2 withInstrumentation:(id)arg3 remainingRetryCount:(long long)arg4 reply:(id /* block */)arg5;
- (void)_sendChangesRequest:(id)arg1 onExecutionContext:(id)arg2 withInstrumentation:(id)arg3 reply:(id /* block */)arg4;
- (bool)_setUnavailabilityReason:(id)arg1;
- (bool)_shouldIncludeAllBurstAssetsForTaskID:(unsigned long long)arg1;
- (bool)_shouldIncludeGuestAssetsForTaskID:(unsigned long long)arg1;
- (bool)_shouldIncludeHiddenAssetsForTaskID:(unsigned long long)arg1;
- (bool)_shouldIncludeTrashedAssetsForTaskID:(unsigned long long)arg1;
- (void)_startObservingServiceConnectionInvalidated;
- (void)_startWatchingFileSystemVolumeForLibraryAvailability;
- (void)_startWatchingForLibraryAvailability;
- (void)_stopObservingServiceConnectionInvalidated;
- (void)_stopWatchingFileSystemVolumeForLibraryAvailability;
- (void)_stopWatchingForLibraryAvailability;
- (void)accountDidChange:(id)arg1;
- (id)albumRootFolderObjectID;
- (id)allSocialGroupsForPersonIdentifier:(id)arg1 error:(id*)arg2;
- (id)allowedEntities;
- (id)analysisProgressCountsForWorkerType:(short)arg1;
- (id)appPrivateData;
- (void)appPrivateDataWriteFailedWithError:(id)arg1;
- (void)assertTransaction;
- (id)assetIdentifiersForPersonIdentifiers:(id)arg1 error:(id*)arg2;
- (id)assetUUIDsAllowedForCurationFromAssets:(id)arg1;
- (bool)assetsArePendingForDuplicateMergeProcessingWithLocalIdentifiers:(id)arg1;
- (id)assetsdClient;
- (id)availabilityObservers;
- (id)backgroundQueueObjectFetchingPhotoLibrary;
- (id)backgroundQueuePhotoLibrary;
- (id)bfa_fetchObjectsForOIDs:(id)arg1 propertyHint:(unsigned long long)arg2 overrideResultsWithClass:(Class)arg3;
- (id)bfa_fetchedObjectsForOIDs:(id)arg1 propertySetClass:(Class)arg2;
- (id)bfa_photoLibrary;
- (id)bfa_tombstoneObjectForOID:(id)arg1 uuid:(id)arg2 propertyHint:(unsigned long long)arg3 overrideResultsWithClass:(Class)arg4;
- (id)cacheMetricsCollector;
- (void)cancelOperationsWithIdentifiers:(id)arg1 reply:(id /* block */)arg2;
- (id)changeHandlingPhotoLibrary;
- (id)changeNotificationInfo;
- (id)changeRequestForUUID:(id)arg1;
- (bool)clearsOIDCacheAfterFetchResultDealloc;
- (void)close;
- (void)closeWithReason:(id)arg1;
- (id)cloudIdentifierMappingsForLocalIdentifiers:(id)arg1;
- (id)cloudIdentifiersForLocalIdentifiers:(id)arg1;
- (unsigned long long)countOfClusteringEligibleFaces;
- (unsigned long long)countOfDirtyFaceGroups;
- (unsigned long long)countOfFaceCropsToBeGenerated;
- (void)countOfReferencedMediaWithCompletionHandler:(id /* block */)arg1;
- (unsigned long long)countOfUnclusteredFaces;
- (unsigned long long)countOfUnprocessedFaceCrops;
- (id)cplStatus;
- (bool)createOrUpgradeLibraryUsingOptions:(id)arg1 error:(id*)arg2;
- (bool)createPhotoLibraryUsingOptions:(id)arg1 error:(id*)arg2;
- (bool)createPhotoLibraryWithError:(id*)arg1;
- (bool)createPhotoLibraryWithOptions:(unsigned long long)arg1 error:(id*)arg2;
- (id)curationDebugInformationForAssetCollectionWithLocalIdentifier:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)curationDebugInformationForAssetLocalIdentifier:(id)arg1 error:(id*)arg2;
- (id)currentChangeToken;
- (id)currentToken;
- (void)dealloc;
- (id)debugDescription;
- (id)exportGraphForPurpose:(id)arg1 error:(id*)arg2;
- (id)externalChangeObservers;
- (id)faceAnalysisProcessingCounts;
- (id)faceAnalysisProgressCounts;
- (double)faceAnalysisProgressForHighlight:(id)arg1 error:(id*)arg2;
- (id)faceClusterSequenceNumbersOfFacesWithClusterSequenceNumbers:(id)arg1 error:(id*)arg2;
- (id)faceClusterSequenceNumbersOfKeyFacesInAlgorithmicFaceGroupsForPerson:(id)arg1 verifiedClusterSequenceNumbers:(id)arg2;
- (id)fetchAssetsForMediaProcessingTaskID:(unsigned long long)arg1 priority:(unsigned long long)arg2 analysisVersion:(int)arg3 sceneConfidenceThreshold:(float)arg4 adjustedSinceDate:(id)arg5 error:(id*)arg6;
- (id)fetchDictionariesByPHClassForOIDs:(id)arg1 propertyHint:(unsigned long long)arg2 includeTrash:(bool)arg3 overrideWithPHClass:(Class)arg4;
- (id)fetchPHObjectsForOIDs:(id)arg1;
- (id)fetchPHObjectsForOIDs:(id)arg1 propertyHint:(unsigned long long)arg2 includeTrash:(bool)arg3 overrideResultsWithClass:(Class)arg4;
- (id)fetchPHObjectsForUUIDs:(id)arg1 entityName:(id)arg2;
- (id)fetchPersistentChangesSinceToken:(id)arg1 error:(id*)arg2;
- (id)fetchPersistentChangesWithRequest:(id)arg1 error:(id*)arg2;
- (id)fetchResultsRegisteredForChangeNotifications;
- (id)fetchUpdatedObject:(id)arg1;
- (id)fetchedObjectsForOIDs:(id)arg1 propertySetClass:(Class)arg2;
- (id)graphStatisticsDescription:(id*)arg1;
- (id)graphStatusDescription:(id*)arg1;
- (void)handleMergeNotification:(id)arg1;
- (id)highlightDebugInformationForHighlightWithLocalIdentifier:(id)arg1 error:(id*)arg2;
- (id)imageConversionServiceClient;
- (void)importAssetsFromLibrary:(id)arg1 assetIdentifiers:(id)arg2 containerIdentifier:(id)arg3 resultHandler:(id /* block */)arg4;
- (id)inferredContactByPersonLocalIdentifierForPersonLocalIdentifiers:(id)arg1;
- (id)inferredContactForPersonLocalIdentifier:(id)arg1;
- (id)init;
- (id)initMomentShareLibrary;
- (id)initSharedLibrary;
- (id)initWithPLPhotoLibrary:(id)arg1;
- (id)initWithPLPhotoLibrary:(id)arg1 type:(unsigned short)arg2;
- (id)initWithPhotoLibraryBundle:(id)arg1 type:(unsigned short)arg2;
- (id)initWithPhotoLibraryURL:(id)arg1;
- (id)initWithPhotoLibraryURL:(id)arg1 type:(unsigned short)arg2;
- (id)internalChangeObservers;
- (bool)internal_processIdenticalDuplicatesWithError:(id*)arg1;
- (bool)invalidatePersistentGraphCachesAndReturnError:(id*)arg1;
- (bool)invalidateTransientGraphCachesAndReturnError:(id*)arg1;
- (bool)isChangeHandlingActive;
- (bool)isChangeHandlingAuthorized;
- (bool)isCloudPhotoLibrary;
- (bool)isCloudPhotoLibraryEnabled;
- (bool)isFaceProcessingFinished;
- (bool)isPHPhotoLibraryForCMM;
- (bool)isReadOnlyCloudPhotoLibrary;
- (bool)isReadyForAnalysis;
- (bool)isSystemPhotoLibrary;
- (id)isolationQueue;
- (double)lastChangeProcessingStarted;
- (void)legacySaveImageDataToCameraRoll:(id)arg1 completionTarget:(id)arg2 completionSelector:(SEL)arg3 contextInfo:(void*)arg4;
- (void)legacySaveImageToCameraRoll:(id)arg1 completionTarget:(id)arg2 completionSelector:(SEL)arg3 contextInfo:(void*)arg4;
- (void)legacySaveScreenshotToCameraRoll:(id)arg1 completionTarget:(id)arg2 completionSelector:(SEL)arg3 contextInfo:(void*)arg4;
- (void)legacySaveVideoToCameraRoll:(id)arg1 completionTarget:(id)arg2 completionSelector:(SEL)arg3 contextInfo:(void*)arg4;
- (id)libraryID;
- (id)librarySpecificFetchOptions;
- (id)localIdentifierMappingsForCloudIdentifiers:(id)arg1;
- (id)localIdentifiersForCloudIdentifiers:(id)arg1;
- (id)lookupCloudIdentifiersForLocalIdentifiers:(id)arg1;
- (id)lookupLocalIdentifiersForCloudIdentifiers:(id)arg1;
- (id)mainQueueConcurrencyPhotoLibrary;
- (id)mainQueueManagedObjectContext;
- (id)mainQueuePhotoLibrary;
- (id)managedObjectContext;
- (id)managedObjectContextForCurrentQueueQoS;
- (id)memoryDebugInformationForMemoryWithLocalIdentifier:(id)arg1 error:(id*)arg2;
- (void)mergeDuplicateAssetsWithLocalIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)migrationDate;
- (id)newClusteringEligibleFacesFetchOptions;
- (id)newFaceCropsToBeGeneratedFetchOptions;
- (id)newUnclusteredFacesFetchOptions;
- (id)objectFetchingContextForCurrentQueueQoS;
- (id)objectFetchingManagedObjectContextForObject:(id)arg1 propertySet:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (bool)openAndWaitWithUpgrade:(bool)arg1 error:(id*)arg2;
- (bool)openAndWaitWithUpgrade:(bool)arg1 options:(id)arg2 error:(id*)arg3;
- (id)pathManager;
- (void)performCancellableChanges:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (bool)performCancellableChangesAndWait:(id /* block */)arg1 error:(id*)arg2;
- (void)performChanges:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (bool)performChangesAndWait:(id /* block */)arg1 error:(id*)arg2;
- (id)performChangesRequest;
- (void)personPromotionProcessingStatusForUserInterface:(id /* block */)arg1;
- (bool)petVIPModelExists;
- (id)photoAnalysisClient;
- (bool)photoAnalysisClientAllowed;
- (id)photoLibrary;
- (id)photoLibraryBundle;
- (id)photoLibraryForCurrentQueueQoS;
- (id)photoLibraryURL;
- (id)plLibraryOptionsFromPHOptions:(id)arg1 createOptions:(unsigned long long*)arg2;
- (id)pl_photoLibraryForCMM;
- (id)pl_syncProgressAlbums;
- (id)postOpenProgress;
- (bool)postsPersistentHistoryChangedNotifications;
- (bool)processUniversalSearchJITForAssetLocalIdentifier:(id)arg1 processingTypes:(unsigned long long)arg2 error:(id*)arg3;
- (id)processUniversalSearchJITForCoreSpotlightUniqueIdentifier:(id)arg1 bundleID:(id)arg2 processingTypes:(unsigned long long)arg3 error:(id*)arg4;
- (id)projectAlbumRootFolderObjectID;
- (id)queryForType:(id)arg1 withIdentifiers:(id)arg2 local:(bool)arg3;
- (double)ratioOfAssetsAtOrAboveFaceAnalysisVersion:(short)arg1;
- (double)ratioOfAssetsAtOrAboveSceneAnalysisVersion:(short)arg1;
- (double)ratioOfAssetsWithFacesProcessed;
- (double)ratioOfAssetsWithFullAnalysisProcessed;
- (double)ratioOfAssetsWithScenesProcessed;
- (void)recordDeleteRequest:(id)arg1;
- (void)recordInsertRequest:(id)arg1;
- (void)recordUpdateRequest:(id)arg1;
- (void)registerAvailabilityObserver:(id)arg1;
- (void)registerChangeObserver:(id)arg1;
- (void)registerFetchResult:(id)arg1;
- (id)relatedDebugInformationBetweenAssetForLocalIdentifier:(id)arg1 andRelatedAssetCollectionForLocalIdentifier:(id)arg2 options:(id)arg3 precision:(unsigned long long)arg4 relatedType:(unsigned long long)arg5 error:(id*)arg6;
- (id)relatedDebugInformationBetweenReferenceAssetCollectionForLocalIdentifier:(id)arg1 andRelatedAssetCollectionForLocalIdentifier:(id)arg2 options:(id)arg3 precision:(unsigned long long)arg4 relatedType:(unsigned long long)arg5 error:(id*)arg6;
- (bool)requestAssetRevGeocodingForAssetLocalIdentifiers:(id)arg1 withError:(id*)arg2;
- (bool)requestAssetRevGeocodingWithError:(id*)arg1;
- (id)requestAssetSearchKeywordsForAssetCollectionUUIDs:(id)arg1 ofType:(unsigned long long)arg2 withOptions:(id)arg3 error:(id*)arg4;
- (bool)requestEnrichmentWithOptions:(id)arg1 error:(id*)arg2;
- (void)requestGenerateQuestionsWithOptions:(id)arg1 reply:(id /* block */)arg2;
- (id)requestGraphInferencesSummaryWithDateInterval:(id)arg1 error:(id*)arg2;
- (id)requestGraphInferencesSummaryWithMomentLocalIdentifiers:(id)arg1 error:(id*)arg2;
- (id)requestGraphMomentLocalIdentifiersWithDateInterval:(id)arg1 error:(id*)arg2;
- (void)requestGraphReadyNotificationWithCoalescingIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)requestGraphRebuildProgressWithCompletion:(id /* block */)arg1;
- (void)requestGraphRebuildWithOptions:(id)arg1 progress:(id)arg2 completion:(id /* block */)arg3;
- (void)requestGraphRebuildWithProgress:(id)arg1 completion:(id /* block */)arg2;
- (id)requestGraphSearchMetadataWithOptions:(id)arg1 error:(id*)arg2;
- (bool)requestHighlightCollectionEnrichmentWithOptions:(id)arg1 error:(id*)arg2;
- (bool)requestHighlightEnrichmentWithOptions:(id)arg1 error:(id*)arg2;
- (void)requestHighlightEstimatesWithCompletion:(id /* block */)arg1;
- (int)requestProcessingTypes:(unsigned long long)arg1 forAssetsWithLocalIdentifiers:(id)arg2 progressHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (bool)requestSandboxExtensionsIfNeededWithError:(id*)arg1;
- (void)requestSearchIndexGraphUpdates:(id)arg1 supportingData:(id)arg2 withCompletion:(id /* block */)arg3;
- (id)requestSearchIndexKeywordsForAssetCollectionUUIDs:(id)arg1 ofType:(unsigned long long)arg2 withOptions:(id)arg3 error:(id*)arg4;
- (void)requestSearchIndexUpdates:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)requestSearchableAssetUUIDsBySocialGroupForAssetCollectionUUIDs:(id)arg1 ofType:(unsigned long long)arg2 isFullAnalysis:(bool)arg3 withOptions:(id)arg4 error:(id*)arg5;
- (bool)requestStartSharedLibrarySuggestionResultWithError:(id*)arg1;
- (void)requestSyndicationProcessingWithOptions:(id)arg1 reply:(id /* block */)arg2;
- (id)requestSynonymsDictionariesWithError:(id*)arg1;
- (id)requestTextFeaturesForMomentLocalIdentifiers:(id)arg1 error:(id*)arg2;
- (void)requestTotalProgressCountsForWorkerType:(short)arg1 states:(id)arg2 completion:(id /* block */)arg3;
- (id)requestZeroKeywordsWithOptions:(id)arg1 error:(id*)arg2;
- (void)resetFaceAnalysisWithResetLevel:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)resetLimitedLibraryAccessForApplication:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)runPFLWithAttachments:(id)arg1 recipeUserInfo:(id)arg2 resultBlock:(id /* block */)arg3;
- (void)runShadowEvaluationWithRecipe:(id)arg1 models:(id)arg2 trialDeploymentID:(id)arg3 trialExperimentID:(id)arg4 trialTreatmentID:(id)arg5 resultBlock:(id /* block */)arg6;
- (double)sceneAnalysisProgressForHighlight:(id)arg1 usingSceneVersion:(short)arg2;
- (id)sceneTaxonomyDetectorNodeSceneIDsFromSceneID:(unsigned int)arg1 sceneTaxonomy:(id)arg2;
- (void)setAvailabilityObservers:(id)arg1;
- (void)setChangeNotificationInfo:(id)arg1;
- (void)setChangeRequest:(id)arg1 forUUID:(id)arg2;
- (void)setClearsOIDCacheAfterFetchResultDealloc:(bool)arg1;
- (void)setCustomLibrarySpecificFetchOptions:(id)arg1;
- (void)setExternalChangeObservers:(id)arg1;
- (void)setFetchResultsRegisteredForChangeNotifications:(id)arg1;
- (void)setImageConversionServiceClient:(id)arg1;
- (void)setInternalChangeObservers:(id)arg1;
- (void)setIsChangeHandlingActive:(bool)arg1;
- (void)setIsChangeHandlingAuthorized:(bool)arg1;
- (void)setIsolationQueue:(id)arg1;
- (void)setLastChangeProcessingStarted:(double)arg1;
- (void)setPerformChangesRequest:(id)arg1;
- (void)setPostsPersistentHistoryChangedNotifications:(bool)arg1;
- (void)setTransactionQueue:(id)arg1;
- (void)setUnavailabilityReason:(id)arg1;
- (void)setUnknownMergeEvent:(bool)arg1;
- (void)setVideoConversionServiceClient:(id)arg1;
- (void)setWidgetTimelineGeneratedForDisplaySize:(struct CGSize { double x1; double x2; })arg1;
- (id)sharingMessageSuggestionDebugInformationForAssetCollectionLocalIdentifier:(id)arg1 error:(id*)arg2;
- (id)sharingSuggestionDebugInformationForAssetCollectionLocalIdentifier:(id)arg1 error:(id*)arg2;
- (id)sharingSuggestionWithRandomPick:(bool)arg1 fallbackToRecentMoments:(bool)arg2 needsNotification:(bool)arg3;
- (bool)shouldMobileSlideShowLaunchWithError:(id*)arg1;
- (void)simulateMemoriesNotificationWithOptions:(id)arg1 reply:(id /* block */)arg2;
- (id)socialGroupsForPersonIdentifiers:(id)arg1 error:(id*)arg2;
- (id)sortedArrayOfPersonIdentifiers:(id)arg1 error:(id*)arg2;
- (void)statusDidChange:(id)arg1;
- (id)suggestedContactsForPersonLocalIdentifier:(id)arg1;
- (id)suggestedMePersonIdentifierWithError:(id*)arg1;
- (id)suggestionsForPersonLocalIdentifier:(id)arg1 clusterSequenceNumbers:(id)arg2 excludePersonLocalIdentifiers:(id)arg3 minimumSuggestionFaceCount:(unsigned long long)arg4;
- (id)transactionPhotoLibrary;
- (id)transactionQueue;
- (unsigned short)type;
- (id)unavailabilityReason;
- (bool)unknownMergeEvent;
- (void)unregisterAvailabilityObserver:(id)arg1;
- (void)unregisterChangeObserver:(id)arg1;
- (void)unregisterFetchResult:(id)arg1;
- (id)upgradePhotoLibraryUsingOptions:(id)arg1 completion:(id /* block */)arg2;
- (id)urlForApplicationDataFolderIdentifier:(long long)arg1;
- (id)userInitiatedQueuePhotoLibrary;
- (id)uuid;
- (id)variationCache;
- (id)videoConversionServiceClient;
- (long long)wellKnownPhotoLibraryIdentifier;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

- (void)presentLimitedLibraryPickerFromViewController:(id)arg1;
- (void)presentLimitedLibraryPickerFromViewController:(id)arg1 completionHandler:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/MediaAnalysis.framework/MediaAnalysis

+ (id)_defaultAssetPropertySets;
+ (id)_defaultFacePropertySets;
+ (id)_phFaceSortDescriptors;
+ (id)_phPeopleSortDescriptors;
+ (id)vcp_defaultMediaAnalysisDatabaseFilepath;
+ (id)vcp_defaultPhotoLibrary;
+ (id)vcp_defaultURL;

- (id)_analysisPreferencesURL;
- (id)_defaultAssetFetchOptions;
- (id)_defaultFetchOptions;
- (double)_progressFromWorkerStatesDictionary:(id)arg1;
- (void)_updateAnalysisPreferencesWithEntries:(id)arg1 keysToRemove:(id)arg2;
- (unsigned long long)mad_countOfUnclusteredFaces;
- (id)mad_unclusteredFacesFetchOptions;
- (float)pv_faceProcessingProgress;
- (id)pv_fetchAssetsForFaceGroup:(id)arg1;
- (id)pv_fetchAssetsForFaceLocalIdentifiers:(id)arg1;
- (id)pv_fetchAssetsForPerson:(id)arg1;
- (id)pv_fetchAssetsInMoment:(id)arg1;
- (id)pv_fetchAssetsWithLocalIdentifiers:(id)arg1;
- (id)pv_fetchCandidatePersonsForPerson:(id)arg1;
- (id)pv_fetchFaceGroups;
- (id)pv_fetchFaceGroupsForPerson:(id)arg1;
- (id)pv_fetchFacesForFaceGroup:(id)arg1;
- (id)pv_fetchFacesForPerson:(id)arg1;
- (id)pv_fetchFacesForPerson:(id)arg1 inMoment:(id)arg2;
- (id)pv_fetchFacesForPersonLocalIdentifiers:(id)arg1 inMoment:(id)arg2;
- (id)pv_fetchFacesGroupedByAssetLocalIdentifierForAssets:(id)arg1;
- (id)pv_fetchFacesWithLocalIdentifiers:(id)arg1;
- (id)pv_fetchInvalidAssetIdentifiersForCommonComparison;
- (id)pv_fetchInvalidCandidatePersonsForPerson:(id)arg1;
- (id)pv_fetchMoments;
- (id)pv_fetchMomentsForAssetsWithLocalIdentifiers:(id)arg1;
- (id)pv_fetchMomentsForPerson:(id)arg1;
- (id)pv_fetchMomentsWithLocalIdentifiers:(id)arg1;
- (id)pv_fetchPersonsGroupedByAssetLocalIdentifierForAssets:(id)arg1;
- (id)pv_fetchPersonsInMoment:(id)arg1;
- (id)pv_fetchPersonsWithLocalIdentifiers:(id)arg1;
- (id)pv_fetchPersonsWithType:(unsigned long long)arg1;
- (id)pv_lastAssetDate;
- (unsigned long long)pv_numberOfFacesWithFaceprints;
- (bool)pv_performChangesAndWait:(id /* block */)arg1 error:(id*)arg2;
- (id)pv_persistentStorageDirectoryURL;
- (bool)vcp_allowInMemoryDownload;
- (id)vcp_analysisPreferences;
- (bool)vcp_anyAssetsForTaskID:(unsigned long long)arg1;
- (unsigned long long)vcp_assetCountForTaskID:(unsigned long long)arg1;
- (unsigned long long)vcp_assetCountWithInternalPredicate:(id)arg1 forTaskID:(unsigned long long)arg2;
- (unsigned long long)vcp_assetCountWithMediaType:(long long)arg1 forTaskID:(unsigned long long)arg2;
- (id)vcp_description;
- (bool)vcp_eligibleForStreaming:(bool)arg1;
- (id)vcp_faceAnalysisStateFilepath;
- (bool)vcp_isCPLDownloadComplete;
- (bool)vcp_isCPLEnabled;
- (bool)vcp_isCPLSyncComplete;
- (bool)vcp_isSyndicationLibrary;
- (id)vcp_libraryScaleShortDescription;
- (id)vcp_mediaAnalysisDatabaseFilepath;
- (id)vcp_mediaAnalysisDirectory;
- (unsigned long long)vcp_requiredFaceLibraryProcessingSubTasks;
- (bool)vcp_requiresDownloadForTask:(unsigned long long)arg1;
- (bool)vcp_requiresProcessingForTask:(unsigned long long)arg1;
- (void)vcp_setAnalysisPreferencesValue:(id)arg1 forKey:(id)arg2;
- (bool)vcp_supportsInMemoryDownload;
- (id)vcp_vipModelFilepathForVIPType:(unsigned long long)arg1;
- (id)vcp_vipModelLastGenerationDateForVIPType:(unsigned long long)arg1;
- (id)vcp_visionCacheStorageDirectoryURL;

// Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis

+ (id)_defaultAssetPropertySets;
+ (id)_defaultFacePropertySets;
+ (id)_phFaceSortDescriptors;
+ (id)_phPeopleSortDescriptors;

- (id)_defaultAssetFetchOptions;
- (id)_defaultFetchOptions;
- (float)pv_faceProcessingProgress;
- (id)pv_fetchAssetsForFaceGroup:(id)arg1;
- (id)pv_fetchAssetsForFaceLocalIdentifiers:(id)arg1;
- (id)pv_fetchAssetsForPerson:(id)arg1;
- (id)pv_fetchAssetsInMoment:(id)arg1;
- (id)pv_fetchAssetsWithLocalIdentifiers:(id)arg1;
- (id)pv_fetchCandidatePersonsForPerson:(id)arg1;
- (id)pv_fetchFaceGroups;
- (id)pv_fetchFaceGroupsForPerson:(id)arg1;
- (id)pv_fetchFacesForFaceGroup:(id)arg1;
- (id)pv_fetchFacesForPerson:(id)arg1;
- (id)pv_fetchFacesForPerson:(id)arg1 inMoment:(id)arg2;
- (id)pv_fetchFacesForPersonLocalIdentifiers:(id)arg1 inMoment:(id)arg2;
- (id)pv_fetchFacesGroupedByAssetLocalIdentifierForAssets:(id)arg1;
- (id)pv_fetchFacesWithLocalIdentifiers:(id)arg1;
- (id)pv_fetchInvalidAssetIdentifiersForCommonComparison;
- (id)pv_fetchInvalidCandidatePersonsForPerson:(id)arg1;
- (id)pv_fetchMoments;
- (id)pv_fetchMomentsForAssetsWithLocalIdentifiers:(id)arg1;
- (id)pv_fetchMomentsForPerson:(id)arg1;
- (id)pv_fetchMomentsWithLocalIdentifiers:(id)arg1;
- (id)pv_fetchPersonsGroupedByAssetLocalIdentifierForAssets:(id)arg1;
- (id)pv_fetchPersonsInMoment:(id)arg1;
- (id)pv_fetchPersonsWithLocalIdentifiers:(id)arg1;
- (id)pv_fetchPersonsWithType:(unsigned long long)arg1;
- (id)pv_lastAssetDate;
- (unsigned long long)pv_numberOfFacesWithFaceprints;
- (bool)pv_performChangesAndWait:(id /* block */)arg1 error:(id*)arg2;
- (id)pv_persistentStorageDirectoryURL;

// Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph

- (id)pg_urlForGraphApplicationData;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (id)px_appPhotoLibrary;
+ (id)px_deprecated_appPhotoLibrary;
+ (id)px_systemPhotoLibrary;

- (bool)px_areChangesPaused;
- (id)px_assetCollectionForSmartAlbumWithSubtype:(long long)arg1;
- (id)px_assetCollectionWithLocalIdentifier:(id)arg1;
- (id)px_assetCollectionWithTransientIdentifier:(id)arg1;
- (id)px_beginPausingChangesWithTimeout:(double)arg1 identifier:(id)arg2;
- (id)px_changeDistributor;
- (id)px_collectionListWithLocalIdentifier:(id)arg1;
- (id)px_collectionListWithTransientIdentifier:(id)arg1;
- (void)px_endPausingChanges:(id)arg1;
- (bool)px_fetchHasNoVisibleAssets;
- (id)px_localDefaults;
- (id)px_memoryWithLocalIdentifier:(id)arg1;
- (id)px_objectWithLocalIdentifier:(id)arg1;
- (void)px_registerChangeObserver:(id)arg1;
- (id)px_sharedLibrarySharingSuggestionsCountsManager;
- (id)px_standardLibrarySpecificFetchOptions;
- (void)px_unregisterChangeObserver:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit

+ (id)pk_appPhotoLibrary;

@end
