/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChronoUIServices.framework/ChronoUIServices
 */

@interface CHUISWidgetHostViewController : UIViewController <BSDescriptionProviding, BSInvalidatable, CHSWidgetDescriptorProviderObserver, CHUISKeybagObserver, FBSceneDelegate, FBSceneLayerManagerObserver, LSApplicationWorkspaceObserverProtocol> {
    bool  _animationsPaused;
    NSString * _cachedSceneLogDigest;
    bool  _canAppearInSecureEnvironment;
    unsigned long long  _colorScheme;
    bool  _contentPaused;
    unsigned long long  _contentType;
    <CHUISWidgetHostViewControllerDelegate> * _delegate;
    CHSWidgetDescriptor * _descriptor;
    CHSWidgetDescriptorProvider * _descriptorProvider;
    BSContinuousMachTimer * _detachedSceneTimer;
    NSMutableArray * _detachedSceneTimerEvaluationReasons;
    double  _detachedSceneTimerInterval;
    bool  _disableViewTransitionAnimations;
    bool  _drawSystemBackgroundMaterialIfNecessary;
    unsigned long long  _effectivePresentationMode;
    unsigned long long  _inSecureEnvironment;
    CHSInlineTextParameters * _inlineTextParameters;
    bool  _interactionDisabled;
    bool  _invalidated;
    bool  _isInViewDidDisappear;
    CHUISKeybag * _keybag;
    UIView * _liveSceneSnapshotView;
    UIVisualEffectView * _materialView;
    CHSWidgetMetrics * _metrics;
    bool  _metricsDefineSize;
    _UICAPackageView * _persistedWidgetSnapshotCaarView;
    UIImageView * _persistedWidgetSnapshotImageView;
    UIView * _persistedWidgetSnapshotViewContainer;
    CHUISPreferences * _preferences;
    bool  _prefersUnredactedContentInLowLuminanceEnvironment;
    unsigned long long  _requestedPresentationMode;
    FBScene * _scene;
    BLSHBacklightFBSceneEnvironmentActionHandler * _sceneBacklightActionHandler;
    <BLSHBacklightSceneHostEnvironment> * _sceneBacklightEnvironment;
    bool  _sceneForeground;
    <UIScenePresenter> * _scenePresenter;
    FBSceneWorkspace * _sceneWorkspace;
    CHSScreenshotManager * _screenshotManager;
    bool  _shouldShareTouchesWithHost;
    bool  _showsWidgetLabel;
    unsigned long long  _signpostID;
    UILabel * _snapshotDebugLabel;
    UIView * _snapshotDebugView;
    unsigned long long  _snapshotHidingSequence;
    <BSInvalidatable> * _stateCaptureAssertion;
    bool  _supportsLowLuminance;
    CHSWidgetTintParameters * _tintParameters;
    NSMutableDictionary * _touchDeliveryPolicyAssertions;
    id  _userInfo;
    bool  _usesSystemBackgroundMaterial;
    BSUIVibrancyConfiguration * _vibrancyConfiguration;
    BSUIVibrancyEffectView * _vibrancyEffectView;
    CHUISWidgetVisibilitySettings * _visibilitySettings;
    bool  _visibleEntryShouldSnapshot;
    NSMutableArray * _waitForSceneContentReadyBlocks;
    CHSWidget * _widget;
    NSString * _widgetConfigurationIdentifier;
    CHSWidgetMetrics * _widgetMetrics;
    unsigned long long  _widgetPriority;
}

@property (nonatomic, readonly) UIView *_liveSceneSnapshotView;
@property (nonatomic, readonly) UIView *_liveSceneView;
@property (nonatomic, readonly) UIView *_staticCAARSnapshotView;
@property (nonatomic, readonly) UIView *_staticImageSnapshotView;
@property (nonatomic, readonly) UIView *_staticSnapshotContainerView;
@property (getter=areAnimationsPaused, nonatomic) bool animationsPaused;
@property (nonatomic, readonly) <BLSHBacklightSceneHostEnvironment> *backlightHostEnvironment;
@property (nonatomic) bool canAppearInSecureEnvironment;
@property (nonatomic, readonly) CHUISWidgetSceneClientSettings *clientSettings;
@property (nonatomic) unsigned long long colorScheme;
@property (getter=isContentPaused, nonatomic) bool contentPaused;
@property (nonatomic) unsigned long long contentType;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CHUISWidgetHostViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=_detachedSceneTimerInterval, setter=_setDetachedSceneTimerInterval:, nonatomic) double detachedSceneTimerInterval;
@property (getter=_disableViewTransitionAnimations, setter=_setDisableViewTransitionAnimations:, nonatomic) bool disableViewTransitionAnimations;
@property (nonatomic) bool drawSystemBackgroundMaterialIfNecessary;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) CHSInlineTextParameters *inlineTextParameters;
@property (getter=isInteractionDisabled, nonatomic) bool interactionDisabled;
@property (nonatomic, readonly, copy) CHSWidgetMetrics *metrics;
@property (nonatomic) bool metricsDefineSize;
@property (nonatomic) bool prefersUnredactedContentInLowLuminanceEnvironment;
@property (nonatomic) unsigned long long presentationMode;
@property (getter=_scene, setter=_setScene:, nonatomic, retain) FBScene *scene;
@property (getter=_scenePresenter, setter=_setScenePresenter:, nonatomic, retain) <UIScenePresenter> *scenePresenter;
@property (getter=_screenshotManager, setter=_setScreenshotManager:, nonatomic, retain) CHSScreenshotManager *screenshotManager;
@property (nonatomic) bool shouldShareTouchesWithHost;
@property (nonatomic) bool showsComplicationLabel;
@property (nonatomic) bool showsWidgetLabel;
@property (nonatomic, readonly) UIView *snapshotView;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsLowLuminance;
@property (nonatomic, copy) CHSWidgetTintParameters *tintParameters;
@property (nonatomic, retain) id userInfo;
@property (nonatomic, readonly) bool usesSystemBackgroundMaterial;
@property (nonatomic, copy) BSUIVibrancyConfiguration *vibrancyConfiguration;
@property (nonatomic) unsigned long long visibility;
@property (getter=_visibilitySettings, setter=_setVisibilitySettings:, nonatomic, retain) CHUISWidgetVisibilitySettings *visibilitySettings;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleBounds;
@property (getter=shouldVisibleEntrySnapshot, nonatomic) bool visibleEntryShouldSnapshot;
@property (nonatomic, copy) CHSWidget *widget;
@property (nonatomic, readonly, copy) NSString *widgetConfigurationIdentifier;
@property (nonatomic) unsigned long long widgetPriority;

// Image: /System/Library/PrivateFrameworks/ChronoUIServices.framework/ChronoUIServices

+ (id)_compatibilityMetrics;
+ (id)viewControllers;

- (void).cxx_destruct;
- (void)__evaluateDetachedSceneTimerForReason:(id)arg1;
- (int)_actualBackgroundViewMode;
- (void)_applyLiveSnapshotContentsFromSnapshot:(id)arg1;
- (void)_applySecurityPolicyToLayer:(id)arg1;
- (void)_applySecurityPolicyToLayer:(id)arg1 allowsPrivacySensitiveContent:(bool)arg2;
- (id)_cachedSceneLogDigest;
- (bool)_canLiveSnapshot;
- (bool)_canShowWhileLocked;
- (void)_clearTouchDeliveryPolicies;
- (id)_containerView;
- (void)_createWidgetSnapshotViews;
- (double)_detachedSceneTimerInterval;
- (bool)_disableViewTransitionAnimations;
- (id)_effectiveBackgroundColor;
- (double)_effectiveCornerRadius;
- (double)_effectiveViewCornerRadius;
- (void)_ensureAndEvaluateSnapshotView;
- (void)_evaluateEffectivePresentationMode;
- (void)_executeSceneContentReadyOperations;
- (int)_expectedBackgroundViewMode;
- (bool)_hasScene;
- (void)_hideSnapshotViewsAnimated:(bool)arg1;
- (void)_hideSnapshotViewsAnimated:(bool)arg1 forceCompleteTeardown:(bool)arg2;
- (unsigned long long)_inSecureEnvironment;
- (void)_invalidateDetachedSceneTimerForReason:(id)arg1;
- (void)_invalidateDetachedSceneTimerForReason:(id)arg1 ignoreLogging:(bool)arg2;
- (bool)_isAppearingOrAppeared;
- (bool)_isVibrancyEffectEnabled;
- (id)_liveSceneSnapshotView;
- (id)_liveSceneView;
- (id)_liveSnapshotView;
- (id)_logDigest;
- (void)_modifyVisibilitySettings:(id /* block */)arg1;
- (id)_newPersistedSnapshotView;
- (id)_persistedSnapshotContext;
- (id)_persistedWidgetSnapshotViewContainer;
- (void)_resetLogDigests;
- (id)_scene;
- (id)_scenePresenter;
- (void)_scheduleEvaluationOfDetachedSceneTimerForReason:(id)arg1;
- (id)_screenshotManager;
- (void)_setBackgroundViewMode:(int)arg1;
- (void)_setCanAppearInSecureEnvironment:(bool)arg1 force:(bool)arg2;
- (void)_setDetachedSceneTimerInterval:(double)arg1;
- (void)_setDisableViewTransitionAnimations:(bool)arg1;
- (void)_setEffectivePresentationMode:(unsigned long long)arg1;
- (void)_setEffectivePresentationMode:(unsigned long long)arg1 forceExistingRebuild:(bool)arg2;
- (void)_setInSecureEnvironment:(unsigned long long)arg1 forReason:(id)arg2;
- (void)_setScene:(id)arg1;
- (void)_setScenePresenter:(id)arg1;
- (void)_setScreenshotManager:(id)arg1;
- (void)_setVisibilitySettings:(id)arg1;
- (id)_snapshotImageFromURL:(id)arg1;
- (id)_snapshotViewIgnoringVibrancyEffect:(bool)arg1;
- (id)_stateDumpDescription;
- (id)_staticCAARSnapshotView;
- (id)_staticImageSnapshotView;
- (id)_staticSnapshotContainerView;
- (void)_tearDownScene;
- (void)_updateBackgroundMaterialAndColor;
- (void)_updateDescriptorIfNecessary;
- (void)_updateSceneToForeground:(bool)arg1;
- (void)_updateSnapshotDebugLabelText:(id)arg1;
- (void)_updateTouchDeliveryPolicies;
- (void)_updateVibrancyEffectView;
- (void)_updateViewsCornerRadius;
- (id)_visibilitySettings;
- (id)additionalSnapshotPresentationContext;
- (bool)areAnimationsDisabled;
- (bool)areAnimationsPaused;
- (id)backlightHostEnvironment;
- (bool)canAppearInSecureEnvironment;
- (id)cancelTouchesForCurrentEventInHostedContent;
- (id)clientSettings;
- (unsigned long long)colorScheme;
- (unsigned long long)contentType;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)descriptorsDidChangeForDescriptorProvider:(id)arg1;
- (bool)drawSystemBackgroundMaterialIfNecessary;
- (void)ensureContentWithTimeout:(double)arg1 completion:(id /* block */)arg2;
- (id)handleActions:(id)arg1;
- (id)initWithWidget:(id)arg1 metrics:(id)arg2 widgetConfigurationIdentifier:(id)arg3;
- (id)initWithWidget:(id)arg1 metrics:(id)arg2 widgetConfigurationIdentifier:(id)arg3 descriptorProvider:(id)arg4 sceneWorkspace:(id)arg5 screenshotManager:(id)arg6 preferences:(id)arg7 keybag:(id)arg8;
- (id)inlineTextParameters;
- (void)invalidate;
- (bool)isContentPaused;
- (bool)isInteractionDisabled;
- (void)keybagStateDidChange:(id)arg1;
- (void)loadView;
- (void)log:(id)arg1;
- (void)logDebug:(id)arg1;
- (id)metrics;
- (bool)metricsDefineSize;
- (void)modifySceneSettings:(id /* block */)arg1;
- (bool)prefersUnredactedContentInLowLuminanceEnvironment;
- (unsigned long long)presentationMode;
- (void)prewarmContent;
- (void)requestLaunch;
- (void)scene:(id)arg1 didReceiveActions:(id)arg2;
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (void)sceneContentStateDidChange:(id)arg1;
- (void)sceneDidDeactivate:(id)arg1 withError:(id)arg2;
- (void)sceneDidUpdateClientSettingsWithDiff:(id)arg1 oldClientSettings:(id)arg2 newClientSettings:(id)arg3 transitionContext:(id)arg4;
- (void)sceneLayerManagerDidStartTrackingLayers:(id)arg1;
- (void)sceneLayerManagerDidStopTrackingLayers:(id)arg1;
- (void)sceneLayerManagerDidUpdateLayers:(id)arg1;
- (id)sceneSpecification;
- (void)setAnimationsDisabled:(bool)arg1;
- (void)setAnimationsPaused:(bool)arg1;
- (void)setCanAppearInSecureEnvironment:(bool)arg1;
- (void)setColorScheme:(unsigned long long)arg1;
- (void)setContentPaused:(bool)arg1;
- (void)setContentType:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDrawSystemBackgroundMaterialIfNecessary:(bool)arg1;
- (void)setInlineTextParameters:(id)arg1;
- (void)setInteractionDisabled:(bool)arg1;
- (void)setMetricsDefineSize:(bool)arg1;
- (void)setPrefersUnredactedContentInLowLuminanceEnvironment:(bool)arg1;
- (void)setPresentationMode:(unsigned long long)arg1;
- (void)setShouldShareTouchesWithHost:(bool)arg1;
- (void)setShowsComplicationLabel:(bool)arg1;
- (void)setShowsWidgetLabel:(bool)arg1;
- (void)setSupportsLowLuminance:(bool)arg1;
- (void)setTintParameters:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setVibrancyConfiguration:(id)arg1;
- (void)setVisibility:(unsigned long long)arg1;
- (void)setVisibleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setVisibleEntryShouldSnapshot:(bool)arg1;
- (void)setWidget:(id)arg1;
- (void)setWidgetPriority:(unsigned long long)arg1;
- (bool)shouldShareTouchesWithHost;
- (bool)shouldVisibleEntrySnapshot;
- (bool)showsComplicationLabel;
- (bool)showsWidgetLabel;
- (void)snapshotContentWithTimeout:(double)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (id)snapshotView;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (bool)supportsLowLuminance;
- (id)tintParameters;
- (id)userInfo;
- (bool)usesSystemBackgroundMaterial;
- (id)vibrancyConfiguration;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(bool)arg2;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (unsigned long long)visibility;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleBounds;
- (id)widget;
- (id)widgetConfigurationIdentifier;
- (unsigned long long)widgetPriority;
- (void)willModifySceneClientSettings:(id)arg1;
- (void)willModifySceneSettings:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PosterKit.framework/PosterKit

- (id)pr_initWithComplicationDescriptor:(id)arg1;

@end