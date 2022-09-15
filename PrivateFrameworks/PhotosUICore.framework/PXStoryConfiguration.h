/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXStoryConfiguration : NSObject <NSCopying, PXStoryQueueParticipant> {
    <PXDisplayAssetCollection> * _assetCollection;
    <PXAssetCollectionActionPerformerDelegate> * _assetCollectionActionPerformerDelegate;
    <PXDisplayAssetFetchResult> * _assets;
    <PXCloudCapabilitiesProvider> * _cloudCapabilitiesProvider;
    <PXTapToRadarDiagnosticProvider> * _containerTapToRadarDiagnosticsProvider;
    <PXStoryDetailedSaliencyProducer> * _detailedSaliencyProducer;
    bool  _disableBufferingController;
    <PXStoryErrorReporter> * _errorReporter;
    PXStoryErrorRepository * _errorRepository;
    long long  _initialViewMode;
    <PXDisplayAsset> * _keyAsset;
    NSString * _launchType;
    NSObject<OS_os_log> * _log;
    unsigned long long  _logContext;
    PXMediaProvider * _mediaProvider;
    <PXStoryMusicCurationProvider> * _musicCurationProvider;
    unsigned long long  _options;
    PXStoryConfiguration * _parentConfiguration;
    <PFStoryRecipe> * _persistableRecipe;
    NSObject<PXAnonymousViewController> * _presentingViewController;
    NSArray * _referencePersons;
    <PXStoryRelatedProducer> * _relatedProducer;
    PXStorySongsConfiguration * _songsConfiguration;
    long long  _songsProducerKind;
    NSObject<OS_dispatch_queue> * _storyQueue;
    <PXStoryStyleProducer> * _styleProducer;
    <PXStoryTimelineProducer> * _timelineProducer;
    <PXUserDefaultsDataSource> * _userDefaults;
    NSMutableDictionary * _userInfo;
    PXVolumeController * _volumeController;
}

@property (nonatomic, readonly) <PXDisplayAssetCollection> *assetCollection;
@property (nonatomic) <PXAssetCollectionActionPerformerDelegate> *assetCollectionActionPerformerDelegate;
@property (nonatomic, readonly) <PXDisplayAssetFetchResult> *assets;
@property (nonatomic, retain) <PXCloudCapabilitiesProvider> *cloudCapabilitiesProvider;
@property (nonatomic) <PXTapToRadarDiagnosticProvider> *containerTapToRadarDiagnosticsProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <PXStoryDetailedSaliencyProducer> *detailedSaliencyProducer;
@property (nonatomic) bool disableBufferingController;
@property (nonatomic, readonly) <PXStoryErrorReporter> *errorReporter;
@property (nonatomic, readonly) PXStoryErrorRepository *errorRepository;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long initialViewMode;
@property (nonatomic, readonly) bool isAppleMusicPreview;
@property (nonatomic, readonly) bool isExportPreview;
@property (nonatomic, readonly) bool isPresentedForAirPlay;
@property (nonatomic, readonly) bool isRelated;
@property (nonatomic, readonly) <PXDisplayAsset> *keyAsset;
@property (nonatomic, retain) NSString *launchType;
@property (nonatomic, retain) NSObject<OS_os_log> *log;
@property (nonatomic) unsigned long long logContext;
@property (nonatomic, retain) PXMediaProvider *mediaProvider;
@property (nonatomic, retain) <PXStoryMusicCurationProvider> *musicCurationProvider;
@property (nonatomic) unsigned long long options;
@property (nonatomic, readonly) PXStoryConfiguration *parentConfiguration;
@property (nonatomic, readonly) <PFStoryRecipe> *persistableRecipe;
@property (nonatomic, readonly) PHAssetCollection *photoKitAssetCollection;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic) NSObject<PXAnonymousViewController> *presentingViewController;
@property (nonatomic, readonly) NSArray *referencePersons;
@property (nonatomic, retain) <PXStoryRelatedProducer> *relatedProducer;
@property (nonatomic, readonly) bool shouldDismissAtEnd;
@property (nonatomic, retain) PXStorySongsConfiguration *songsConfiguration;
@property (nonatomic) long long songsProducerKind;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *storyQueue;
@property (nonatomic, retain) <PXStoryStyleProducer> *styleProducer;
@property (readonly) Class superclass;
@property (nonatomic, retain) <PXStoryTimelineProducer> *timelineProducer;
@property (nonatomic, retain) <PXUserDefaultsDataSource> *userDefaults;
@property (nonatomic, readonly) NSMutableDictionary *userInfo;
@property (nonatomic, retain) PXVolumeController *volumeController;

- (void).cxx_destruct;
- (void)_copyPropertiesFromConfiguration:(id)arg1;
- (id)assetCollection;
- (id)assetCollectionActionPerformerDelegate;
- (id)assets;
- (id)cloudCapabilitiesProvider;
- (id)containerTapToRadarDiagnosticsProvider;
- (id)copyForMusicPreviewWithCuratedSongs:(id)arg1;
- (id)copyWithAdditionalOptions:(unsigned long long)arg1;
- (id)copyWithAssetCollection:(id)arg1;
- (id)copyWithKeyAsset:(id)arg1;
- (id)copyWithParentConfiguration:(id)arg1;
- (id)copyWithStoryQueue:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)detailedSaliencyProducer;
- (bool)disableBufferingController;
- (id)errorReporter;
- (id)errorRepository;
- (id)init;
- (id)initWithAssetCollection:(id)arg1;
- (id)initWithAssetCollection:(id)arg1 assets:(id)arg2 keyAsset:(id)arg3 referencePersons:(id)arg4 persistableRecipe:(id)arg5 musicCurationProvider:(id)arg6 errorRepository:(id)arg7 queue:(id)arg8 parentConfiguration:(id)arg9;
- (id)initWithAssetCollection:(id)arg1 keyAsset:(id)arg2;
- (id)initWithAssetCollection:(id)arg1 keyAsset:(id)arg2 referencePersons:(id)arg3;
- (id)initWithAssets:(id)arg1;
- (id)initWithAssets:(id)arg1 keyAsset:(id)arg2 persistableRecipe:(id)arg3;
- (id)initWithPersistableRecipe:(id)arg1;
- (long long)initialViewMode;
- (bool)isAppleMusicPreview;
- (bool)isExportPreview;
- (bool)isPresentedForAirPlay;
- (bool)isRelated;
- (id)keyAsset;
- (id)launchType;
- (id)log;
- (unsigned long long)logContext;
- (id)mediaProvider;
- (id)musicCurationProvider;
- (unsigned long long)options;
- (id)parentConfiguration;
- (id)persistableRecipe;
- (id)photoKitAssetCollection;
- (id)photoLibrary;
- (id)presentingViewController;
- (id)referencePersons;
- (id)relatedProducer;
- (void)setAssetCollectionActionPerformerDelegate:(id)arg1;
- (void)setCloudCapabilitiesProvider:(id)arg1;
- (void)setContainerTapToRadarDiagnosticsProvider:(id)arg1;
- (void)setDetailedSaliencyProducer:(id)arg1;
- (void)setDisableBufferingController:(bool)arg1;
- (void)setInitialViewMode:(long long)arg1;
- (void)setLaunchType:(id)arg1;
- (void)setLog:(id)arg1;
- (void)setLogContext:(unsigned long long)arg1;
- (void)setMediaProvider:(id)arg1;
- (void)setMusicCurationProvider:(id)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)setRelatedProducer:(id)arg1;
- (void)setSongsConfiguration:(id)arg1;
- (void)setSongsProducerKind:(long long)arg1;
- (void)setStyleProducer:(id)arg1;
- (void)setTimelineProducer:(id)arg1;
- (void)setUserDefaults:(id)arg1;
- (void)setVolumeController:(id)arg1;
- (bool)shouldDismissAtEnd;
- (id)songsConfiguration;
- (long long)songsProducerKind;
- (id)storyQueue;
- (id)styleProducer;
- (id)timelineProducer;
- (id)userDefaults;
- (id)userInfo;
- (id)volumeController;

@end