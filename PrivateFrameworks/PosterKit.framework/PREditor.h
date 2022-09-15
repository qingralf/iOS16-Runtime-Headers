/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PosterKit.framework/PosterKit
 */

@interface PREditor : NSObject <PREditingFontAndColorPickerViewControllerDelegate, UIAdaptivePresentationControllerDelegate, UISceneDelegate, _UISceneComponentProviding, _UISceneSettingsDiffAction> {
    long long  _acceptButtonType;
    UIMenu * _actionsMenu;
    NSHashTable * _backgroundTasks;
    PREditingColorVariationStore * _colorVariationStore;
    bool  _complicationsDisallowed;
    bool  _complicationsRowConfigured;
    PRPosterMutableConfiguredProperties * _configuredProperties;
    bool  _controlsHidden;
    bool  _coveredByHostModalPresentation;
    <PRInvalidatable> * _coveredByHostModalPresentationDisableLookSwitchingAssertion;
    PREditingLook * _currentLook;
    PROverridableDateProvider * _dateProvider;
    NSMutableDictionary * _defaultTitleStyleConfigurationPerLook;
    <PREditingDelegate> * _delegate;
    bool  _depthEffectDisallowed;
    bool  _didDelayDismissWithAcceptAction;
    bool  _disconnected;
    long long  _editingContext;
    <PRPosterEditingEnvironment> * _environment;
    long long  _focusedComplicationElement;
    PREditingFontAndColorPickerViewController * _fontAndColorPickerViewController;
    bool  _hasUpdatedLookProperties;
    bool  _hasUpdatedLooks;
    PREditingLook * _initialLook;
    bool  _inlineComplicationConfigured;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _leadingTopButtonFrame;
    NSHashTable * _lookSwitchingAssertions;
    double  _looksScrollingDecelerationRate;
    bool  _perspectiveZoomDisallowed;
    <PRPosterEditingPreferences> * _preferences;
    bool  _presentingModalViewController;
    <PRInvalidatable> * _presentingModalViewControllerDisableLookSwitchingAssertion;
    PREditorRootViewController * _rootViewController;
    UIWindowScene * _scene;
    FBSceneWorkspace * _sceneWorkspace;
    long long  _status;
    PRMutablePosterConfiguration * _targetConfig;
    UIAction * _togglingDepthEffectAction;
    UIAction * _togglingPerspectiveZoomAction;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _trailingTopButtonFrame;
    bool  _usesEditingLayout;
    long long  _variant;
    bool  _viewsSharedBetweenLooks;
    UIWindow * _window;
}

@property (getter=_scene, setter=_setScene:, nonatomic) UIScene *_scene;
@property (nonatomic) long long acceptButtonType;
@property (nonatomic, copy) UIMenu *actionsMenu;
@property (getter=areComplicationsDisallowed, nonatomic) bool complicationsDisallowed;
@property (getter=isComplicationsRowConfigured, nonatomic) bool complicationsRowConfigured;
@property (nonatomic, retain) PRPosterMutableConfiguredProperties *configuredProperties;
@property (nonatomic, readonly) UIView *contentOverlayView;
@property (getter=areControlsHidden, nonatomic) bool controlsHidden;
@property (getter=isCoveredByHostModalPresentation, nonatomic) bool coveredByHostModalPresentation;
@property (nonatomic, retain) <PRInvalidatable> *coveredByHostModalPresentationDisableLookSwitchingAssertion;
@property (nonatomic, copy) PREditingLook *currentLook;
@property (nonatomic, readonly) PROverridableDateProvider *dateProvider;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <PREditingDelegate> *delegate;
@property (getter=isDepthEffectDisallowed, nonatomic) bool depthEffectDisallowed;
@property (getter=isDepthEffectEnabled, nonatomic) bool depthEffectEnabled;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didDelayDismissWithAcceptAction;
@property (nonatomic) long long editingContext;
@property (nonatomic, readonly) <PRPosterEditingEnvironment> *environment;
@property (nonatomic) long long focusedComplicationElement;
@property (nonatomic) bool hasUpdatedLookProperties;
@property (nonatomic) bool hasUpdatedLooks;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) PREditingLook *initialLook;
@property (getter=isInlineComplicationConfigured, nonatomic) bool inlineComplicationConfigured;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } leadingTopButtonFrame;
@property (nonatomic) double looksScrollingDecelerationRate;
@property (getter=isPerspectiveZoomDisallowed, nonatomic) bool perspectiveZoomDisallowed;
@property (getter=isPerspectiveZoomEnabled, nonatomic) bool perspectiveZoomEnabled;
@property (nonatomic, readonly) <PRPosterEditingPreferences> *preferences;
@property (getter=isPresentingModalViewController, nonatomic) bool presentingModalViewController;
@property (nonatomic, retain) <PRInvalidatable> *presentingModalViewControllerDisableLookSwitchingAssertion;
@property (nonatomic, retain) PREditorRootViewController *rootViewController;
@property (nonatomic, readonly) FBSceneWorkspace *sceneWorkspace;
@property (nonatomic) long long status;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIAction *togglingDepthEffectAction;
@property (nonatomic, readonly) UIAction *togglingPerspectiveZoomAction;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } trailingTopButtonFrame;
@property (nonatomic) bool usesEditingLayout;
@property (nonatomic) long long variant;
@property (getter=areViewsSharedBetweenLooks, nonatomic) bool viewsSharedBetweenLooks;

- (void).cxx_destruct;
- (void)_applyStylePropertiesFromConfiguredProperties:(id)arg1 toConfiguredProperties:(id)arg2 forLook:(id)arg3;
- (id)_contentLuminanceValuesForCurrentLooks;
- (id)_defaultLuminanceValuesForLooks:(id)arg1 initialLook:(id)arg2 initialLookLuminanceValue:(double)arg3;
- (void)_discardRootViewController;
- (void)_performActionsForUIScene:(id)arg1 withUpdatedFBSScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5 lifecycleActionType:(unsigned int)arg6;
- (void)_rebuildRootViewController;
- (id)_refetchLooks;
- (void)_refetchLooksAndBuildUI;
- (id)_refetchLooksForProperties;
- (void)_refreshDefaultTitleStyleConfigurationsForLooks:(id)arg1 luminanceForLooks:(id)arg2 initialLook:(id)arg3 configuredTitleStyleConfiguration:(id)arg4;
- (id)_refreshLuminanceValuesForCurrentPerLookLuminanceValues:(id)arg1;
- (id)_scene;
- (void)_setScene:(id)arg1;
- (id)_settingsDiffActionsForScene:(id)arg1;
- (void)_togglePerspectiveZoom;
- (long long)acceptButtonType;
- (id)actionsMenu;
- (id)additionalFontsForFontAndColorPickerViewController:(id)arg1;
- (void)appendDescriptionToFormatter:(id)arg1;
- (bool)areComplicationsAllowed;
- (bool)areComplicationsDisallowed;
- (bool)areControlsHidden;
- (bool)areViewsSharedBetweenLooks;
- (unsigned long long)backgroundTypeForLuminance:(double)arg1;
- (id)beginBackgroundTaskForReason:(id)arg1;
- (id)configuredProperties;
- (id)contentOverlayView;
- (id)coveredByHostModalPresentationDisableLookSwitchingAssertion;
- (void)createColorVariationStoreIfNeeded;
- (id)currentLook;
- (id)dateProvider;
- (void)dealloc;
- (id)debugDescription;
- (id)defaultTitleStyleConfigurationForLook:(id)arg1;
- (id)delegate;
- (id)delegateSafeForCallbackType:(long long)arg1;
- (bool)didDelayDismissWithAcceptAction;
- (void)didFinishTransitionToLook:(id)arg1;
- (id)disableSwitchingLooksForReason:(id)arg1;
- (void)dismissViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (bool)displaysHeaderElements;
- (long long)editingContext;
- (id)effectiveTitleStyleConfigurationForLook:(id)arg1;
- (void)endBackgroundTask:(id)arg1 completionStatus:(long long)arg2;
- (id)environment;
- (id)extensionBundle;
- (id)extensionBundleURL;
- (long long)focusedComplicationElement;
- (void)fontAndColorPickerViewController:(id)arg1 didUpdateDesiredDetent:(double)arg2;
- (bool)fontAndColorPickerViewController:(id)arg1 shouldShowFont:(id)arg2;
- (void)fontAndColorPickerViewControllerDidFinish:(id)arg1;
- (bool)hasUpdatedLookProperties;
- (bool)hasUpdatedLooks;
- (id)homeScreenConfigurationWithPosterProvidedColorConfigurations;
- (id)initWithDelegate:(id)arg1;
- (id)initWithScene:(id)arg1;
- (id)initialLook;
- (bool)isComplicationsRowConfigured;
- (bool)isCoveredByHostModalPresentation;
- (bool)isDepthEffectDisabled;
- (bool)isDepthEffectDisallowed;
- (bool)isDepthEffectEffectivelyDisabled;
- (bool)isDepthEffectEnabled;
- (bool)isInlineComplicationConfigured;
- (bool)isPerspectiveZoomDisallowed;
- (bool)isPerspectiveZoomEnabled;
- (bool)isPresentingModalViewController;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })leadingTopButtonFrame;
- (double)looksScrollingDecelerationRate;
- (id)preferences;
- (id)prepareActionsMenu:(id)arg1;
- (void)presentColorPickerWithConfiguration:(id)arg1 changeHandler:(id /* block */)arg2;
- (void)presentColorPickerWithPrompt:(id)arg1 suggestedColors:(id)arg2 selectedColor:(id)arg3 changeHandler:(id /* block */)arg4;
- (void)presentFontAndColorPickerWithPrompt:(id)arg1 titleStyleConfiguration:(id)arg2 colorPickerConfiguration:(id)arg3 changeHandler:(id /* block */)arg4;
- (void)presentTimeStyleEditor;
- (void)presentViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)presentedViewControllerDismissalDidEnd:(id)arg1;
- (void)presentedViewControllerDismissalWillBegin:(id)arg1;
- (id)presentingModalViewControllerDisableLookSwitchingAssertion;
- (void)removeLookSwitchingAssertion:(id)arg1;
- (void)requestDismissalWithAction:(long long)arg1;
- (void)requireGestureRecognizerToFailForLooksScroll:(id)arg1;
- (id)rootViewController;
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;
- (void)sceneDidDisconnect:(id)arg1;
- (id)sceneWorkspace;
- (void)setAcceptButtonType:(long long)arg1;
- (void)setActionsMenu:(id)arg1;
- (void)setAlternateDateEnabled:(bool)arg1;
- (void)setComplicationsDisallowed:(bool)arg1;
- (void)setComplicationsRowConfigured:(bool)arg1;
- (void)setComplicationsVibrancyConfiguration:(id)arg1;
- (void)setConfiguredProperties:(id)arg1;
- (void)setControlsHidden:(bool)arg1;
- (void)setCoveredByHostModalPresentation:(bool)arg1;
- (void)setCoveredByHostModalPresentationDisableLookSwitchingAssertion:(id)arg1;
- (void)setCurrentLook:(id)arg1;
- (void)setDepthEffectDisallowed:(bool)arg1;
- (void)setDepthEffectEnabled:(bool)arg1;
- (void)setDidDelayDismissWithAcceptAction:(bool)arg1;
- (void)setEditingContext:(long long)arg1;
- (void)setEditingFocusActive:(bool)arg1;
- (void)setFocusedComplicationElement:(long long)arg1;
- (void)setHasUpdatedLookProperties:(bool)arg1;
- (void)setHasUpdatedLooks:(bool)arg1;
- (void)setInitialLook:(id)arg1;
- (void)setInlineComplicationConfigured:(bool)arg1;
- (void)setLeadingTopButtonFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLooksScrollingDecelerationRate:(double)arg1;
- (void)setPerspectiveZoomDisallowed:(bool)arg1;
- (void)setPerspectiveZoomEnabled:(bool)arg1;
- (void)setPresentingModalViewController:(bool)arg1;
- (void)setPresentingModalViewControllerDisableLookSwitchingAssertion:(id)arg1;
- (void)setRootViewController:(id)arg1;
- (void)setStatus:(long long)arg1;
- (void)setTrailingTopButtonFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setUsesEditingLayout:(bool)arg1;
- (void)setVariant:(long long)arg1;
- (void)setViewsSharedBetweenLooks:(bool)arg1;
- (bool)shouldApplyTitleStyleAcrossAllLooksFromConfiguredTitleStyleConfiguration:(id)arg1;
- (bool)shouldIgnorePreviouslyConfiguredTitleStyleConfiguration;
- (long long)status;
- (unsigned long long)timeViewControllerDisplayedElements;
- (void)toggleDepthEffect;
- (id)togglingDepthEffectAction;
- (id)togglingPerspectiveZoomAction;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })trailingTopButtonFrame;
- (void)updateActions;
- (void)updateLookProperties;
- (void)updateLooks;
- (void)updateLuminanceValuesForLooks;
- (void)updatePreferences:(id /* block */)arg1;
- (void)updateRootViewControllerActionsMenu;
- (void)updateScrollViewDecelerationRate:(id)arg1;
- (bool)usesEditingLayout;
- (long long)variant;

@end