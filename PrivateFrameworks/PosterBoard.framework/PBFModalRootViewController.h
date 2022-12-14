/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PosterBoard.framework/PosterBoard
 */

@interface PBFModalRootViewController : UIViewController <BSDescriptionProviding, PBFFocusPosterSelectionViewControllerDelegate, PBFPosterEditingIngestionManagerDelegate, PBFPosterGalleryPreviewViewControllerDelegate, PBFPosterRackCollectionViewControllerDelegate, PREditingSceneViewControllerDelegate, PREditingSceneViewControllerObserver, UISheetPresentationControllerDelegate, _UISceneBSActionHandler, _UISceneComponentProviding, _UISceneSettingsDiffAction> {
    <PBFBehaviorAssertionProviding> * _behaviorAssertionProvider;
    PBFPosterExtensionDataStore * _dataStore;
    bool  _didAppearOnce;
    <BSInvalidatable> * _editingSessionInProgressAssertion;
    <PRUIModalEntryPoint> * _entryPoint;
    PBFGalleryMutableDataProvider * _galleryDataProvider;
    bool  _invalidated;
    UIScene * _parentScene;
    <BSInvalidatable> * _snapshotterInUseAssertion;
    PRMutablePosterDescriptor * _temporaryDescriptor;
}

@property (getter=_scene, setter=_setScene:, nonatomic) UIScene *_scene;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (struct PREditingSceneViewControllerTopButtonLayout { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; })_topButtonLayout;
+ (void)prewarmTopButtonLayout;

- (void).cxx_destruct;
- (id)_actionHandlersForScene:(id)arg1;
- (void)_displayViewControllerAsSheet:(id)arg1;
- (void)_galleryEditingSceneViewController:(id)arg1 userDidDismissWithAction:(long long)arg2 updatedConfiguration:(id)arg3 updatedConfiguredProperties:(id)arg4 completion:(id /* block */)arg5;
- (void)_handleSheetDidDismissWithResponse:(id)arg1;
- (void)_handleSheetWillDismissWithResponse:(id)arg1;
- (bool)_isPhotosEntryPoint;
- (void)_logEditWithPosterUUID:(id)arg1 lastModifiedDate:(id)arg2;
- (void)_performActionsForUIScene:(id)arg1 withUpdatedFBSScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5 lifecycleActionType:(unsigned int)arg6;
- (id)_posterLimitExceededAlertWithButtonActionHandler:(id /* block */)arg1;
- (void)_presentEditingForNewPosterFromConfiguration:(id)arg1;
- (void)_presentEditingForPosterConfiguration:(id)arg1;
- (void)_presentGallery;
- (void)_presentLegacyAlert;
- (void)_reload;
- (id)_respondToActions:(id)arg1 forFBSScene:(id)arg2 inUIScene:(id)arg3 fromTransitionContext:(id)arg4;
- (id)_scene;
- (void)_setScene:(id)arg1;
- (id)_settingsDiffActionsForScene:(id)arg1;
- (void)_setupGalleryDataProviderIfNeeded;
- (void)_standaloneEditingSceneViewController:(id)arg1 userDidDismissWithAction:(long long)arg2 updatedConfiguration:(id)arg3 updatedConfiguredProperties:(id)arg4 completion:(id /* block */)arg5;
- (void)dataStoreDidTearDown:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)editingIngestionManager:(id)arg1 didAccept:(id)arg2 userChoice:(long long)arg3;
- (void)editingSceneViewController:(id)arg1 userDidDismissWithAction:(long long)arg2 updatedConfiguration:(id)arg3 updatedConfiguredProperties:(id)arg4 completion:(id /* block */)arg5;
- (void)editingSceneViewControllerDidFinalize:(id)arg1;
- (void)focusPosterSelectionViewController:(id)arg1 didDismissWithResponse:(id)arg2;
- (void)focusPosterSelectionViewController:(id)arg1 willDismissWithResponse:(id)arg2;
- (void)galleryViewController:(id)arg1 didSelectPreview:(id)arg2 fromPreviewView:(id)arg3;
- (void)galleryViewController:(id)arg1 willDisplayPreview:(id)arg2;
- (id)galleryViewController:(id)arg1 willUseAnimationController:(id)arg2 forDismissingEditingViewControllerWithAction:(long long)arg3;
- (id)initWithScene:(id)arg1;
- (id)initWithScene:(id)arg1 dataStore:(id)arg2 behaviorAssertionProvider:(id)arg3;
- (void)invalidate;
- (void)posterExtensionDataStore:(id)arg1 didUpdateGalleryConfiguration:(id)arg2;
- (void)posterRackCollectionViewControllerDidPressCancel:(id)arg1;
- (bool)posterRackCollectionViewControllerDidPressDone:(id)arg1;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)presentationControllerWillDismiss:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (struct PREditingSceneViewControllerTopButtonLayout { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; })topButtonLayoutForEditingSceneViewController:(id)arg1;
- (struct PREditingSceneViewControllerTopButtonLayout { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; })topButtonLayoutForFocusPosterSelectionViewController:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;

@end
