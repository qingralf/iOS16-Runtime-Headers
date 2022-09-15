/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate
 */

@interface PUOneUpEventTracker : PXMediaViewControllerEventTracker <PUBrowsingVideoPlayerChangeObserver, PUBrowsingViewModelChangeObserver, PUOneUpEventTracker, PXChangeObserver> {
    PXAssetAnalyzer * _assetAnalyzer;
    PXAssetMetadataDonator * _assetMetadataDonator;
    long long  _currentAssetDisplayIntervalSignpost;
    long long  _currentAssetSignpost;
    <PUDisplayAsset> * _currentVideoAsset;
    PUBrowsingVideoPlayer * _currentVideoPlayer;
    long long  _currentlyPlayingLivePhotoSignpost;
    long long  _currentlyPlayingStreamedVideoSignpost;
    long long  _currentlyPlayingStreamedVideoStartSignpost;
    <PUDisplayAsset> * _currentlyPlayingVideoAsset;
    double  _currentlyPlayingVideoAssetTimestamp;
    long long  _currentlyPlayingVideoSignpost;
    <PUDisplayAsset> * _currentlyStreamingVideoAsset;
    bool  _currentlyStreamingVideoDidStartActualPlayback;
    bool  _currentlyStreamingVideoIsActuallyPlaying;
    bool  _currentlyStreamingVideoIsStalled;
    long long  _currentlyStreamingVideoStallsCount;
    long long  _currentlyViewedAssetGeneration;
    double  _currentlyViewedAssetTimestamp;
    bool  _isSessionActive;
    double  _livePhotoFirstPlayWaitDuration;
    long long  _presentationOrigin;
    long long  _sessionSignpost;
    PUBrowsingViewModel * _viewModel;
}

@property (nonatomic, readonly) PXAssetAnalyzer *assetAnalyzer;
@property (nonatomic, readonly) PXAssetMetadataDonator *assetMetadataDonator;
@property (nonatomic) long long currentAssetDisplayIntervalSignpost;
@property (nonatomic) long long currentAssetSignpost;
@property (nonatomic, readonly) <PUDisplayAsset> *currentVideoAsset;
@property (nonatomic, retain) PUBrowsingVideoPlayer *currentVideoPlayer;
@property (nonatomic) long long currentlyPlayingLivePhotoSignpost;
@property (nonatomic) long long currentlyPlayingStreamedVideoSignpost;
@property (nonatomic) long long currentlyPlayingStreamedVideoStartSignpost;
@property (nonatomic, retain) <PUDisplayAsset> *currentlyPlayingVideoAsset;
@property (nonatomic, readonly) double currentlyPlayingVideoAssetTimestamp;
@property (nonatomic) long long currentlyPlayingVideoSignpost;
@property (nonatomic, retain) <PUDisplayAsset> *currentlyStreamingVideoAsset;
@property (nonatomic) bool currentlyStreamingVideoDidStartActualPlayback;
@property (nonatomic) bool currentlyStreamingVideoIsActuallyPlaying;
@property (nonatomic) bool currentlyStreamingVideoIsStalled;
@property (nonatomic) long long currentlyStreamingVideoStallsCount;
@property (nonatomic, readonly) long long currentlyViewedAssetGeneration;
@property (nonatomic, readonly) double currentlyViewedAssetTimestamp;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isSessionActive;
@property (nonatomic) double livePhotoFirstPlayWaitDuration;
@property (nonatomic, copy) NSMutableDictionary *payload;
@property (nonatomic, readonly) long long presentationOrigin;
@property (nonatomic) long long sessionSignpost;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PUBrowsingViewModel *viewModel;

- (void).cxx_destruct;
- (void)_handleLongEnoughViewDurationWithGeneration:(long long)arg1;
- (void)_invalidateCurrentVideoPlayer;
- (void)_invalidateCurrentVideoProperties;
- (void)_invalidateCurrentlyViewedAsset;
- (void)_invalidateIsSessionActive;
- (void)_logDidEndPlayingVideoAsset:(id)arg1 duration:(double)arg2;
- (void)_logDidEndSession;
- (void)_logDidStartActualPlaybackOfStreamedVideoAsset:(id)arg1;
- (void)_logDidStartPlaybackOfStreamedVideoAsset:(id)arg1;
- (void)_logDidStartPlayingVideoAsset:(id)arg1;
- (void)_logDidStartSession;
- (void)_logWillEndPlaybackOfStreamedVideoAsset:(id)arg1;
- (void)_updateCurrentVideoPlayer;
- (void)_updateCurrentVideoProperties;
- (void)_updateCurrentlyViewedAsset;
- (void)_updateIsSessionActive;
- (id)assetAnalyzer;
- (id)assetMetadataDonator;
- (long long)currentAssetDisplayIntervalSignpost;
- (long long)currentAssetSignpost;
- (id)currentVideoAsset;
- (id)currentVideoPlayer;
- (long long)currentlyPlayingLivePhotoSignpost;
- (long long)currentlyPlayingStreamedVideoSignpost;
- (long long)currentlyPlayingStreamedVideoStartSignpost;
- (id)currentlyPlayingVideoAsset;
- (double)currentlyPlayingVideoAssetTimestamp;
- (long long)currentlyPlayingVideoSignpost;
- (id)currentlyStreamingVideoAsset;
- (bool)currentlyStreamingVideoDidStartActualPlayback;
- (bool)currentlyStreamingVideoIsActuallyPlaying;
- (bool)currentlyStreamingVideoIsStalled;
- (long long)currentlyStreamingVideoStallsCount;
- (long long)currentlyViewedAssetGeneration;
- (double)currentlyViewedAssetTimestamp;
- (id)initWithViewModel:(id)arg1 presentationOrigin:(long long)arg2;
- (id)initWithViewName:(id)arg1;
- (bool)isSessionActive;
- (double)livePhotoFirstPlayWaitDuration;
- (void)logDidEndViewingMedia:(id)arg1 mediaKind:(long long)arg2 duration:(double)arg3;
- (void)logDidStartViewingMedia:(id)arg1 mediaKind:(long long)arg2;
- (void)logUserDidPlayLivePhoto:(id)arg1;
- (void)logUserDidPlayLivePhoto:(id)arg1 pressOnSubject:(bool)arg2;
- (void)logUserWillPlayLivePhoto:(id)arg1;
- (void)logUserWillPlayLivePhoto:(id)arg1 firstTimeWaitDuration:(double)arg2;
- (void)logVitalityDidEndForLivePhoto:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (long long)presentationOrigin;
- (long long)sessionSignpost;
- (void)setCurrentAssetDisplayIntervalSignpost:(long long)arg1;
- (void)setCurrentAssetSignpost:(long long)arg1;
- (void)setCurrentVideoPlayer:(id)arg1;
- (void)setCurrentlyPlayingLivePhotoSignpost:(long long)arg1;
- (void)setCurrentlyPlayingStreamedVideoSignpost:(long long)arg1;
- (void)setCurrentlyPlayingStreamedVideoStartSignpost:(long long)arg1;
- (void)setCurrentlyPlayingVideoAsset:(id)arg1;
- (void)setCurrentlyPlayingVideoSignpost:(long long)arg1;
- (void)setCurrentlyStreamingVideoAsset:(id)arg1;
- (void)setCurrentlyStreamingVideoDidStartActualPlayback:(bool)arg1;
- (void)setCurrentlyStreamingVideoIsActuallyPlaying:(bool)arg1;
- (void)setCurrentlyStreamingVideoIsStalled:(bool)arg1;
- (void)setCurrentlyStreamingVideoStallsCount:(long long)arg1;
- (void)setDisplayedAsset:(id)arg1;
- (void)setIsSessionActive:(bool)arg1;
- (void)setLivePhotoFirstPlayWaitDuration:(double)arg1;
- (void)setSessionSignpost:(long long)arg1;
- (id)viewModel;
- (void)viewModel:(id)arg1 didChange:(id)arg2;

@end