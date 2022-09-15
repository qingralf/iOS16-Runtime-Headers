/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKit.framework/NanoTimeKit
 */

@interface NTKGreenfieldAddWatchFaceManager : NSObject <NTKFaceCollectionObserver> {
    NSUUID * _addedFaceID;
    NSSet * _appsThatRequireUpdatesItemIds;
    NTKGreenfieldDecodedRecipe * _decodedRecipe;
    unsigned long long  _decodingState;
    <NTKGreenfieldAddWatchFaceManagerDelegate> * _delegate;
    NTKGreenfieldDownloader * _downloader;
    NSError * _failedError;
    NSMutableSet * _installedComplicationIds;
    bool  _isLibraryTimeout;
    NTKPersistentFaceCollection * _library;
    NSTimer * _libraryTimeoutTimer;
    NSSet * _locallyAvailableItemIds;
    NSMutableArray * _orderedPendingComplicationsItemIds;
    long long  _remainingAppsToInstallCount;
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSMutableSet * _skippedPendingComplicationsItemIds;
    NSString * _sourceApplicationBundleIdentifier;
    long long  _totalNonInstalledAppCount;
    unsigned long long  _totalNonInstalledSlotCount;
    unsigned long long  _uiState;
    NSMutableSet * _unavailableComplicationsNames;
    NSMutableSet * _unavailableComplicationsSlots;
    long long  _viewedNonInstalledAppCount;
}

@property (nonatomic, readonly) NSString *addFaceDescription;
@property (nonatomic, readonly) NSUUID *addedFaceID;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NTKGreenfieldDecodedRecipe *decodedRecipe;
@property (nonatomic) <NTKGreenfieldAddWatchFaceManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long remainingAppsToInstallCount;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long totalNonInstalledAppCount;
@property (nonatomic, readonly) long long viewedNonInstalledAppCount;

- (void).cxx_destruct;
- (id)_addToLibraryOrUpdateFaceInLibrary;
- (id)_analyticsExitScreenNameForCurrentState;
- (id)_analyticsModelForAddFaceEvents;
- (id)_appNameFromItemId:(id)arg1;
- (void)_buildUnavailableComplicationsInformationWithInstalledBundleIds:(id)arg1;
- (bool)_canAddFaceWithoutAllCompicationInstalled;
- (void)_cancelLibraryTimeoutTimer;
- (void)_cleanUpDownloader;
- (id)_curPendingComplicationItemId;
- (void)_decodeUrl:(id)arg1;
- (void)_handleAddWatchFaceManagerDidFinishWithError:(id)arg1;
- (void)_libraryTimeoutTimerFired;
- (id)_missingAppsDescription;
- (void)_moveAndNotifyDelegateToStartStateIfPossible;
- (void)_queue_fetchInstalledAppsOnWatchWithithCompletionBlock:(id /* block */)arg1;
- (id)_queue_fetchLocallyAvailableAppsWithError:(id*)arg1;
- (void)_refreshInstalledComplicationsWithContinueBlock:(id /* block */)arg1;
- (void)_startDownloadWirthURL:(id)arg1;
- (void)_startLibraryTimeoutTimer;
- (void)_updateUIStateAndNotifyDelegate:(unsigned long long)arg1;
- (id)addFaceDescription;
- (id)addedFaceID;
- (id)canAddWatchFaceFromDecodedRecipe:(id)arg1 toLibrary:(id)arg2;
- (void)dealloc;
- (void)decodeWatchFaceWithURL:(id)arg1 sourceApplicationBundleIdentifier:(id)arg2;
- (id)decodedRecipe;
- (id)delegate;
- (void)faceCollectionDidLoad:(id)arg1;
- (void)handleAddToMyFacesAction;
- (void)handleContinueAction;
- (void)handleDidExitAddWatchFaceFlow;
- (void)handleDoneAction;
- (void)handleRevisitSkippedComplicationsAction;
- (void)handleSkipComplicationAction;
- (bool)hasSkippedComplications;
- (id)init;
- (void)markComplicationAsInstalled;
- (void)openAppStore;
- (long long)remainingAppsToInstallCount;
- (long long)remainingComplicationsToInstallCount;
- (void)setDelegate:(id)arg1;
- (id)skippedComplicationsSlots;
- (long long)totalNonInstalledAppCount;
- (long long)viewedNonInstalledAppCount;

@end