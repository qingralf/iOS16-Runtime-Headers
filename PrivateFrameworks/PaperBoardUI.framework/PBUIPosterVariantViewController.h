/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PaperBoardUI.framework/PaperBoardUI
 */

@interface PBUIPosterVariantViewController : UIViewController <BSDescriptionProviding, FBSceneLayerManagerObserver, FBSceneObserver, PBUIColorStatisticsDelegate, PBUIPosterComponent, PBUIURLSourceDelegate> {
    UIVisualEffectView * _blurView;
    BSUIMappedImageCache * _cache;
    UIView * _contentContainer;
    PBUIPosterVariantViewController * _counterpart;
    <PBUIPosterComponentDelegate> * _delegate;
    unsigned long long  _lastExtantUpdate;
    bool  _parallaxApplied;
    PBUIFixedReplicaSourceProvider * _portalProvider;
    PBUIColorStatistics * _posterColorStatistics;
    <UIScenePresenter> * _presenter;
    FBScene * _scene;
    UIView<UIScenePresentation> * _sceneView;
    BSAtomicFlag * _snapshotNeeded;
    PBUICachedSnapshotEffectProvider * _snapshotProvider;
    BSAtomicFlag * _snapshotScheduled;
    PBUIURLBackedSnapshotSource * _snapshotSource;
    PBUISnapshotReplicaView * _snapshotView;
    long long  _variant;
}

@property (nonatomic, readonly) UIColor *averageColor;
@property (nonatomic, readonly) double averageContrast;
@property (nonatomic, readonly) BSUIMappedImageCache *cache;
@property (nonatomic, readonly) PBUIColorStatistics *contentColorStatistics;
@property (nonatomic) PBUIPosterVariantViewController *counterpart;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PBUIPosterComponentDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, readonly) <UIScenePresenter> *presenter;
@property (nonatomic, readonly) FBScene *scene;
@property (nonatomic, readonly) UIImage *snapshot;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long variant;

+ (id)snapshotFormat;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_monitorScene:(id)arg1;
- (id)_posterInstanceURL;
- (void)_scheduleSnapshotIfNeeded;
- (void)_snapshot;
- (id)_snapshotMetadataURL;
- (id)_snapshotURL;
- (void)_updateParallax;
- (void)_updatePresentation;
- (bool)areSettingsAppropriateForSnapshotting:(id)arg1;
- (id)averageColor;
- (double)averageContrast;
- (id)cache;
- (void)colorStatisticsDidChange:(id)arg1;
- (id)contentColorStatistics;
- (id)counterpart;
- (id)delegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (bool)evaluateSnapshotPreconditions;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithScene:(id)arg1 cache:(id)arg2;
- (id)initWithScene:(id)arg1 storagePath:(id)arg2;
- (void)invalidate;
- (void)invalidateSnapshotPreconditions;
- (id)legibilitySettings;
- (void)legibilitySettingsDidChange;
- (id)makePortalSourceWithLegibilitySettings:(id)arg1;
- (void)performSnapshotOnQueue:(id)arg1 completion:(id /* block */)arg2;
- (id)portalSourceProvider;
- (bool)postprocessNewSnapshot:(id)arg1 colorStatistics:(id)arg2 error:(out id*)arg3;
- (id)presenter;
- (id)scene;
- (void)scene:(id)arg1 clientDidConnect:(id)arg2;
- (void)scene:(id)arg1 didApplyUpdateWithContext:(id)arg2;
- (void)scene:(id)arg1 didCompleteUpdateWithContext:(id)arg2 error:(id)arg3;
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (void)sceneContentStateDidChange:(id)arg1;
- (void)sceneDidActivate:(id)arg1;
- (void)sceneLayerManagerDidUpdateLayers:(id)arg1;
- (void)sceneWillDeactivate:(id)arg1 withError:(id)arg2;
- (void)setBlurEnabled:(bool)arg1;
- (void)setCounterpart:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNeedsNewSnapshot;
- (void)setPosterAverageColor:(id)arg1;
- (bool)setSnapshotVersionForURL:(id)arg1;
- (id)snapshot;
- (id)snapshotContentDirectory;
- (void)snapshotIfNeeded;
- (void)snapshotSource:(id)arg1 failedToReadColorStatisticsAtURL:(id)arg2 error:(id)arg3;
- (void)snapshotSource:(id)arg1 failedToReadSnapshotAtURL:(id)arg2 error:(id)arg3;
- (id)snapshotSourceProvider;
- (unsigned char)snapshotVersionForURL:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (bool)updatePresentation;
- (long long)variant;
- (void)viewDidLoad;

@end