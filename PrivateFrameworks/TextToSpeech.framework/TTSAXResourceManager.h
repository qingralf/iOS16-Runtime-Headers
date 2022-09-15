/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
 */

@interface TTSAXResourceManager : NSObject <AXAssetControllerObserver> {
    NSSet * _allAvailableLanguages;
    AXAssetController * _assetController;
    NSObject<OS_dispatch_queue> * _assetLoadingQueue;
    AXAssetsService * _assetsService;
    NSString * _catalogBuildVersion;
    bool  _downloadingSamples;
    AXAssetController * _legacyCombinedVocalizerAssetController;
    AXAssetController * _legacyMacinTalkAssetController;
    NSHashTable * _observers;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _observersLock;
    NSObject<OS_dispatch_queue> * _preferenceWriteQueue;
    NSMutableDictionary * _resources;
    NSMutableDictionary * _resourcesById;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _resourcesLock;
    AXAsset * _samplesAsset;
}

@property (nonatomic, retain) NSSet *allAvailableLanguages;
@property (nonatomic, retain) AXAssetController *assetController;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *assetLoadingQueue;
@property (nonatomic, retain) AXAssetsService *assetsService;
@property (nonatomic, retain) NSString *catalogBuildVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool downloadingSamples;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AXAssetController *legacyCombinedVocalizerAssetController;
@property (nonatomic, retain) AXAssetController *legacyMacinTalkAssetController;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *preferenceWriteQueue;
@property (nonatomic, retain) AXAsset *samplesAsset;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_axAssetsForTTSAXResourceModel:(bool)arg1;
- (id)_debugCountSummaryForResources:(id)arg1;
- (void)_deleteResource:(id)arg1;
- (void)_deleteSiriVoiceAssetWithResource:(id)arg1;
- (id)_dictionaryForResources:(id)arg1;
- (void)_downloadLegacyResourceForTesting:(id)arg1;
- (void)_downloadResource:(id)arg1 userInitiated:(bool)arg2;
- (void)_downloadSiriVoiceAssetWithResource:(id)arg1;
- (id)_findAndSwapLegacyMacinTalkAssetsForMacinTalkResources:(id)arg1;
- (id)_findLocalResourcesForPath:(id)arg1;
- (id)_findResourcesForLegacyAssets;
- (id)_getSynthesisProviderResources;
- (bool)_isValidResourceTypeKey:(id)arg1;
- (unsigned long long)_managerTypeForResourceType:(unsigned long long)arg1;
- (void)_mergeInExpensiveInstalledAssets:(bool)arg1 notifyObservers:(bool)arg2;
- (void)_notifyObserversOfCacheUpdate;
- (void)_performBlockOnObservers:(id /* block */)arg1;
- (id)_readCatalogBuildNumberFromPreferences;
- (id)_readResourcesFromPreferences;
- (id)_refreshAssetForResource:(id)arg1 withAssetController:(id)arg2 installedOnly:(bool)arg3;
- (id)_refreshResourcesForManagerType:(unsigned long long)arg1;
- (id)_refreshSamples:(bool)arg1;
- (id)_refreshSiriResources:(bool)arg1;
- (id)_resourceWithVoiceId:(id)arg1 assetId:(id)arg2;
- (id)_resourcesForAssets:(id)arg1;
- (id)_resourcesWithType:(unsigned long long)arg1 subType:(unsigned long long)arg2 languageCode:(id)arg3 waitForInstalledAssets:(bool)arg4;
- (void)_stopDownloadResource:(id)arg1;
- (void)_stopDownloadSiriVoiceAssetWithResource:(id)arg1;
- (void)_updateCachedResources:(id)arg1;
- (void)_writeResourceCacheVersionToPreferences;
- (void)_writeResourcesToPreferences:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)allAvailableLanguages;
- (id)allLanguagesForVoices:(bool)arg1 waitForInstalledAssets:(bool)arg2;
- (id)allVoices:(bool)arg1;
- (id)allVoices:(bool)arg1 waitForInstalledAssets:(bool)arg2;
- (id)assetController;
- (void)assetController:(id)arg1 asset:(id)arg2 downloadProgressTotalWritten:(long long)arg3 totalExpected:(long long)arg4 isStalled:(bool)arg5 expectedTimeRemaining:(double)arg6;
- (void)assetController:(id)arg1 didFinishDownloadingAsset:(id)arg2 wasSuccessful:(bool)arg3 error:(id)arg4 hasRemainingDownloads:(bool)arg5;
- (id)assetLoadingQueue;
- (id)assetsService;
- (id)catalogBuildVersion;
- (void)dealloc;
- (id)defaultVoiceForLanguage:(id)arg1;
- (void)deleteResourceWithAssetId:(id)arg1;
- (void)deleteResourceWithVoiceId:(id)arg1;
- (void)downloadResourceWithAssetId:(id)arg1;
- (void)downloadResourceWithVoiceId:(id)arg1;
- (void)downloadResourceWithVoiceId:(id)arg1 userInitiated:(bool)arg2;
- (void)downloadSamplesIfNecessary;
- (bool)downloadingSamples;
- (id)init;
- (id)languageCodeForResourceName:(id)arg1 withType:(unsigned long long)arg2;
- (id)legacyCombinedVocalizerAssetController;
- (id)legacyMacinTalkAssetController;
- (id)preferenceWriteQueue;
- (long long)readResourceCacheVersionFromPreferences;
- (void)rebuildSystemCacheForActionType:(unsigned long long)arg1;
- (id)refreshAssetForResource:(id)arg1 installedOnly:(bool)arg2;
- (id)refreshResourcesCacheForManagerType:(unsigned long long)arg1;
- (id)refreshedResourcesForResources:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)resetInMemoryAssetCatalogs;
- (void)resetResourcesCache;
- (id)resourceWithAssetId:(id)arg1;
- (id)resourceWithVoiceId:(id)arg1;
- (id)resources;
- (id)resources:(bool)arg1;
- (id)resourcesWithLanguage:(id)arg1 type:(unsigned long long)arg2;
- (id)resourcesWithType:(unsigned long long)arg1 subType:(unsigned long long)arg2;
- (id)resourcesWithType:(unsigned long long)arg1 subType:(unsigned long long)arg2 waitForInstalledAssets:(bool)arg3;
- (id)sampleURLForVoiceId:(id)arg1;
- (id)samplesAsset;
- (void)setAllAvailableLanguages:(id)arg1;
- (void)setAssetController:(id)arg1;
- (void)setAssetLoadingQueue:(id)arg1;
- (void)setAssetsService:(id)arg1;
- (void)setCatalogBuildVersion:(id)arg1;
- (void)setDownloadingSamples:(bool)arg1;
- (void)setLegacyCombinedVocalizerAssetController:(id)arg1;
- (void)setLegacyMacinTalkAssetController:(id)arg1;
- (void)setPreferenceWriteQueue:(id)arg1;
- (void)setSamplesAsset:(id)arg1;
- (id)speechVoiceWithVoiceId:(id)arg1;
- (void)stopDownloadResourceWithVoiceId:(id)arg1;
- (id)superCompactVoiceIdForCompactVoiceId:(id)arg1;
- (void)updateCatalogBuildVersion:(id)arg1;
- (void)updateCatalogIfNeeded;

@end