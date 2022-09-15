/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate
 */

@interface PUActivityItemSource : PXObservable <PHAssetExportRequestDelegate, PUActivityItemSourceOperationDelegate, PUMutableActivityItemSource, UIActivityItemApplicationExtensionSource, UIActivityItemDeferredSource, UIActivityItemImageDataProvider, UIActivityItemSource> {
    PHAssetExportRequest * __assetExportRequest;
    NSURL * __assetsLibraryURL;
    NSProgress * __exportProgress;
    id /* block */  __exportProgressHandler;
    NSItemProvider * __pasteboardItemProvider;
    NSDictionary * __pasteboardRepresentation;
    PUActivityItemSourceAnchorOperation * _anchorOperation;
    PHAsset * _asset;
    NSString * _assetOriginalFilenameBase;
    NSDictionary * _cachedSharingVariants;
    NSObject<OS_dispatch_group> * _cachedSharingVariantsDisptachGroup;
    id /* block */  _completionHandler;
    PUActivityItemSourceOperation * _currentOperation;
    PUActivityItemSourceConfiguration * _exportConfiguration;
    NSObject<OS_dispatch_queue> * _externalIsolation;
    NSError * _lastPreparationError;
    NSMutableSet * _onDemandExports;
    id /* block */  _postCompletionHandler;
    NSDate * _preparationStepSignpostIntervalStartTime;
    NSMutableDictionary * _preparationStepTimingInfo;
    long long  _prepareItemEventCPAnalyticsSignpostId;
    id /* block */  _progressHandler;
    struct { 
        bool excludeLiveness; 
        bool excludeLocation; 
        bool excludeCaption; 
        bool excludeAccessibilityDescription; 
        bool includeAllOriginalResources; 
    }  _sharingPreferences;
    NSMutableDictionary * _sharingURLs;
    NSString * _sharingUUID;
    bool  _shouldAnchorPreparation;
    bool  _shouldSendAnalyticsInterval;
    bool  _shouldSkipPreparation;
    unsigned long long  _signpostId;
    unsigned long long  _state;
}

@property (setter=_setAssetExportRequest:, nonatomic, retain) PHAssetExportRequest *_assetExportRequest;
@property (setter=_setAssetsLibraryURL:, retain) NSURL *_assetsLibraryURL;
@property (setter=_setExportProgress:, nonatomic, retain) NSProgress *_exportProgress;
@property (setter=_setExportProgressHandler:, nonatomic, copy) id /* block */ _exportProgressHandler;
@property (retain) NSItemProvider *_pasteboardItemProvider;
@property (setter=_setPasteboardRepresentation:, retain) NSDictionary *_pasteboardRepresentation;
@property (nonatomic, readonly) PHAsset *asset;
@property (copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PUActivityItemSourceConfiguration *exportConfiguration;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *externalIsolation;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSError *lastPreparationError;
@property (copy) id /* block */ postCompletionHandler;
@property (nonatomic, retain) NSDate *preparationStepSignpostIntervalStartTime;
@property (nonatomic, readonly) NSMutableDictionary *preparationStepTimingInfo;
@property (nonatomic, readonly) long long prepareItemEventCPAnalyticsSignpostId;
@property (copy) id /* block */ progressHandler;
@property (nonatomic, readonly) struct { bool x1; bool x2; bool x3; bool x4; bool x5; } sharingPreferences;
@property (nonatomic, readonly) NSString *sharingUUID;
@property (nonatomic) bool shouldAnchorPreparation;
@property (nonatomic) bool shouldSendAnalyticsInterval;
@property (nonatomic) bool shouldSkipPreparation;
@property (nonatomic, readonly) unsigned long long signpostId;
@property (nonatomic, readonly) unsigned long long state;
@property (readonly) Class superclass;

+ (void)_deleteOutputDirectoryURL:(id)arg1 forSharingUUID:(id)arg2;
+ (id)_exportResultHandlingQueue;
+ (id)_sharingErrorWithCode:(long long)arg1 underlyingError:(id)arg2 localizedDescription:(id)arg3 additionalInfo:(id)arg4;
+ (id)activityItemSourceLog;
+ (bool)supportsAssetLocalIdentifierForActivityType:(id)arg1;

- (void).cxx_destruct;
- (id)_activityOperationQueueForExplicitRunning;
- (id)_assetExportRequest;
- (id)_assetsLibraryURL;
- (void)_beginObservingExportRequest:(id)arg1 withProgressHandler:(id /* block */)arg2;
- (bool)_copyResourceAtURL:(id)arg1 toURL:(id)arg2 shouldMove:(bool)arg3;
- (id)_createManagedURLForResourceAtURL:(id)arg1 shouldMove:(bool)arg2 forType:(long long)arg3;
- (id)_exportProgress;
- (id /* block */)_exportProgressHandler;
- (void)_fetchAlternateWithOptions:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (void)_fetchImageWithOptions:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (void)_fetchLivePhotoWithOptions:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (void)_fetchSharingVariants;
- (void)_fetchVideoWithOptions:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (id)_generateAnalyticsPayloadWithTimingInfo:(id)arg1;
- (id)_generateURLForType:(long long)arg1 withPathExtension:(id)arg2 preferredFilename:(id)arg3;
- (id)_itemForActivityType:(id)arg1;
- (id)_newOperationForActivityType:(id)arg1;
- (id)_newPasteboardItemProviderForURL:(id)arg1;
- (id)_newPasteboardRepresentationForURL:(id)arg1;
- (id)_outboundResourcesDirectoryURL;
- (id)_pasteboardItemProvider;
- (id)_pasteboardRepresentation;
- (void)_resetState;
- (id)_resourceURLForType:(long long)arg1;
- (void)_runExportRequestWithOptions:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (id)_runOnDemandExportForAsset:(id)arg1 withOptions:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)_runOnDemandSingleFileExportForAsset:(id)arg1 withOptions:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_setAssetExportRequest:(id)arg1;
- (void)_setAssetsLibraryURL:(id)arg1;
- (void)_setExportProgress:(id)arg1;
- (void)_setExportProgressHandler:(id /* block */)arg1;
- (void)_setPasteboardRepresentation:(id)arg1;
- (void)_setResourceURL:(id)arg1 forType:(long long)arg2;
- (id)_sharingVariants;
- (void)_stopObservingExportRequest;
- (id)_uniformTypeIdentifierForActivityType:(id)arg1;
- (void)activityItemSourceOperation:(id)arg1 prepareItemForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 thumbnailImageDataForActivityType:(id)arg2 suggestedSize:(struct CGSize { double x1; double x2; })arg3;
- (id)activityViewControllerApplicationExtensionItem:(id)arg1;
- (id)activityViewControllerOperation:(id)arg1;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)asset;
- (void)assetExportRequest:(id)arg1 didChangeToState:(unsigned long long)arg2 fromState:(unsigned long long)arg3;
- (void)cancel;
- (void)cleanUpExportedFiles;
- (void)commitTimingInfoForPreparationStep:(id)arg1 fromStartTime:(id)arg2;
- (id /* block */)completionHandler;
- (void)dealloc;
- (id)exportConfiguration;
- (id)externalIsolation;
- (id)finalizeTotalPreparationDurationTimingInfoDictionary;
- (id)initWithAsset:(id)arg1 sharingPreferences:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; })arg2;
- (id)lastPreparationError;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id /* block */)postCompletionHandler;
- (id)preparationStepSignpostIntervalStartTime;
- (id)preparationStepTimingInfo;
- (long long)prepareItemEventCPAnalyticsSignpostId;
- (id /* block */)progressHandler;
- (void)runWithActivityType:(id)arg1;
- (void)sendPreparationCompletedEventForActivityType:(id)arg1 preparationTimingInfo:(id)arg2 withError:(id)arg3 didCancel:(bool)arg4;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setExportConfiguration:(id)arg1;
- (void)setLastPreparationError:(id)arg1;
- (void)setPostCompletionHandler:(id /* block */)arg1;
- (void)setPreparationStepSignpostIntervalStartTime:(id)arg1;
- (void)setProgressHandler:(id /* block */)arg1;
- (void)setSharingPreferences:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; })arg1;
- (void)setShouldAnchorPreparation:(bool)arg1;
- (void)setShouldSendAnalyticsInterval:(bool)arg1;
- (void)setShouldSkipPreparation:(bool)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)set_pasteboardItemProvider:(id)arg1;
- (struct { bool x1; bool x2; bool x3; bool x4; bool x5; })sharingPreferences;
- (id)sharingUUID;
- (bool)shouldAnchorPreparation;
- (bool)shouldSendAnalyticsInterval;
- (bool)shouldSkipPreparation;
- (void)signalAnchorCompletion;
- (unsigned long long)signpostId;
- (unsigned long long)state;

@end