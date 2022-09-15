/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate
 */

@interface PUAssetExplorerReviewScreenViewController : UIViewController <PUAssetExplorerReviewScreenActionManagerDelegate, PUReviewAssetProvider, PXChangeObserver> {
    PUAssetExplorerReviewScreenActionManager * __actionManager;
    PUBrowsingSession * __browsingSession;
    PUAssetsDataSourceManager * __clientDataSourceManager;
    PUMediaProvider * __clientMediaProvider;
    UIAlertController * __failedReviewAssetRequestAlertController;
    bool  __lowMemoryMode;
    unsigned long long  __options;
    PUActivityProgressController * __requestProgressController;
    <PUReviewAssetProvider> * __reviewAssetProvider;
    NSMutableDictionary * __reviewAssetRequestsByUUID;
    PUAssetExplorerReviewScreenAssetsDataSourceManager * __reviewDataSourceManager;
    PUJoiningMediaProvider * __reviewMediaProvider;
    PUReviewScreenSpec * __spec;
    NSMutableDictionary * __substituteAssetsByUUID;
    <PUAssetExplorerReviewScreenViewControllerDelegate> * _delegate;
    struct { 
        bool respondsToDidPressCancel; 
        bool respondsToDidPressRetake; 
        bool respondsToDidPerformCompletionAction; 
        bool respondsToCanPerformActionType; 
        bool respondsToShouldEnableActionType; 
        bool respondsToWillTransitionToSize; 
        bool respondsToFileSizeMenu; 
    }  _delegateFlags;
    NSSet * _initialDisabledLivePhotoAssetUUIDs;
    NSIndexPath * _initialIndexPath;
    NSSet * _initialSelectedAssetUUIDs;
    PUPhotoPickerResizeTaskDescriptorViewModel * _resizeTaskDescriptorViewModel;
    PUReviewScreenBarsModel * _reviewBarsModel;
    NSNumber * _selectionCountLimit;
    unsigned long long  _sourceType;
}

@property (nonatomic, readonly) PUAssetExplorerReviewScreenActionManager *_actionManager;
@property (nonatomic, readonly) PUBrowsingSession *_browsingSession;
@property (nonatomic, readonly) PUAssetsDataSourceManager *_clientDataSourceManager;
@property (nonatomic, readonly) PUMediaProvider *_clientMediaProvider;
@property (setter=_setFailedReviewAssetRequestAlertController:, nonatomic, retain) UIAlertController *_failedReviewAssetRequestAlertController;
@property (nonatomic, readonly) bool _lowMemoryMode;
@property (nonatomic, readonly) unsigned long long _options;
@property (setter=_setRequestProgressController:, nonatomic, retain) PUActivityProgressController *_requestProgressController;
@property (nonatomic, readonly) <PUReviewAssetProvider> *_reviewAssetProvider;
@property (nonatomic, readonly) NSMutableDictionary *_reviewAssetRequestsByUUID;
@property (nonatomic, readonly) PUAssetExplorerReviewScreenAssetsDataSourceManager *_reviewDataSourceManager;
@property (nonatomic, readonly) PUJoiningMediaProvider *_reviewMediaProvider;
@property (nonatomic, readonly) PUReviewScreenSpec *_spec;
@property (nonatomic, readonly) NSMutableDictionary *_substituteAssetsByUUID;
@property (nonatomic, readonly) PUAssetsDataSourceManager *dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUAssetExplorerReviewScreenViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSSet *initialDisabledLivePhotoAssetUUIDs;
@property (nonatomic, readonly, copy) NSIndexPath *initialIndexPath;
@property (nonatomic, readonly, copy) NSSet *initialSelectedAssetUUIDs;
@property (nonatomic, readonly) PUMediaProvider *mediaProvider;
@property (nonatomic, readonly) PUPhotoPickerResizeTaskDescriptorViewModel *resizeTaskDescriptorViewModel;
@property (nonatomic, readonly) PUReviewScreenBarsModel *reviewBarsModel;
@property (nonatomic, readonly) NSNumber *selectionCountLimit;
@property (nonatomic, readonly) unsigned long long sourceType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_actionManager;
- (id)_browsingSession;
- (void)_cancelReviewAssetRequestForAssetUUID:(id)arg1;
- (void)_cancelReviewAssetRequests;
- (id)_clientDataSourceManager;
- (id)_clientMediaProvider;
- (id)_createBrowsingSessionIfNecessary;
- (id)_createProgressControllerForRemainingRequests:(id)arg1;
- (id)_createReviewAssetRequestForAsset:(id)arg1;
- (void)_deleteAllLinkedFiles;
- (id)_failedReviewAssetRequestAlertController;
- (id)_fileSizeMenuForSelectedUUIDs:(id)arg1;
- (id)_getSelectedSubstituteAssetsAndRemoveFilesForUnneededAssets;
- (void)_handleCompletionAction:(unsigned long long)arg1;
- (void)_handleFailedReviewAssetRequestAlertControllerDismissal;
- (void)_handleProgressControllerCanceled:(id)arg1;
- (void)_handleReviewAssetRequest:(id)arg1 completedWithSuccess:(bool)arg2 canceled:(bool)arg3 error:(id)arg4 reviewAsset:(id)arg5;
- (void)_handleSelectionChanged;
- (bool)_lowMemoryMode;
- (unsigned long long)_options;
- (void)_performCancelAction;
- (void)_performCompletionAction:(unsigned long long)arg1;
- (void)_performCompletionActionSteps:(unsigned long long)arg1;
- (void)_performRetakeAction;
- (void)_presentConfidentialityAlertWithConfirmAction:(id /* block */)arg1 abortAction:(id /* block */)arg2;
- (id)_remainingReviewAssetRequests;
- (id)_requestProgressController;
- (void)_requestReviewAssetForAsset:(id)arg1;
- (id)_reviewAssetProvider;
- (id)_reviewAssetRequestForAssetUUID:(id)arg1;
- (id)_reviewAssetRequestsByUUID;
- (id)_reviewDataSourceManager;
- (id)_reviewMediaProvider;
- (void)_setFailedReviewAssetRequestAlertController:(id)arg1;
- (void)_setRequestProgressController:(id)arg1;
- (void)_setSubstituteAsset:(id)arg1;
- (void)_showFailedReviewAssetRequestAlert;
- (id)_spec;
- (id)_substituteAssetForUUID:(id)arg1;
- (id)_substituteAssetsByUUID;
- (void)_tearDownProgressController;
- (id)_titleForSelectedAssetUUIDs:(id)arg1;
- (void)_updateForCompletedReviewAssetRequest:(id)arg1;
- (void)_updateWithSubstituteAsset:(id)arg1 shouldSelect:(bool)arg2;
- (bool)assetExplorerReviewScreenActionManager:(id)arg1 canPerformActionType:(unsigned long long)arg2 onAsset:(id)arg3 inAssetCollection:(id)arg4;
- (void)assetExplorerReviewScreenActionManager:(id)arg1 didPressFunEffectsForAsset:(id)arg2;
- (void)assetExplorerReviewScreenActionManager:(id)arg1 didPressSelectForAsset:(id)arg2;
- (void)assetExplorerReviewScreenActionManager:(id)arg1 didToggleLivePhoto:(id)arg2;
- (bool)assetExplorerReviewScreenActionManager:(id)arg1 shouldEnableActionType:(unsigned long long)arg2 onAsset:(id)arg3 inAssetCollection:(id)arg4;
- (void)assetExplorerReviewScreenActionManagerDidPressCancel:(id)arg1;
- (void)assetExplorerReviewScreenActionManagerDidPressDeselectAll:(id)arg1;
- (void)assetExplorerReviewScreenActionManagerDidPressDone:(id)arg1;
- (void)assetExplorerReviewScreenActionManagerDidPressRetake:(id)arg1;
- (void)assetExplorerReviewScreenActionManagerDidPressSelectAll:(id)arg1;
- (void)assetExplorerReviewScreenActionManagerDidPressSend:(id)arg1;
- (id)dataSourceManager;
- (id)delegate;
- (void)funEffectsViewController:(id)arg1 didSaveAsset:(id)arg2 withCompletion:(unsigned long long)arg3;
- (id)initWithDataSourceManager:(id)arg1 mediaProvider:(id)arg2 reviewAssetProvider:(id)arg3 initialIndexPath:(id)arg4 initialSelectedAssetUUIDs:(id)arg5 initialDisabledLivePhotoAssetUUIDs:(id)arg6 selectionCountLimit:(id)arg7 sourceType:(unsigned long long)arg8 lowMemoryMode:(bool)arg9 options:(unsigned long long)arg10;
- (id)initWithDataSourceManager:(id)arg1 mediaProvider:(id)arg2 reviewAssetProvider:(id)arg3 initialIndexPath:(id)arg4 initialSelectedAssetUUIDs:(id)arg5 initialDisabledLivePhotoAssetUUIDs:(id)arg6 selectionCountLimit:(id)arg7 sourceType:(unsigned long long)arg8 lowMemoryMode:(bool)arg9 reviewBarsModel:(id)arg10 resizeTaskDescriptorViewModel:(id)arg11 options:(unsigned long long)arg12;
- (id)initWithDataSourceManager:(id)arg1 mediaProvider:(id)arg2 reviewAssetProvider:(id)arg3 initialIndexPath:(id)arg4 initialSelectedAssetUUIDs:(id)arg5 initialDisabledLivePhotoAssetUUIDs:(id)arg6 sourceType:(unsigned long long)arg7;
- (id)initWithDataSourceManager:(id)arg1 mediaProvider:(id)arg2 reviewAssetProvider:(id)arg3 initialIndexPath:(id)arg4 initialSelectedAssetUUIDs:(id)arg5 initialDisabledLivePhotoAssetUUIDs:(id)arg6 sourceType:(unsigned long long)arg7 reviewBarsModel:(id)arg8 options:(unsigned long long)arg9;
- (id)initialDisabledLivePhotoAssetUUIDs;
- (id)initialIndexPath;
- (id)initialSelectedAssetUUIDs;
- (void)loadView;
- (id)mediaProvider;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)photoEditController:(id)arg1 didFinishEditingSessionForAsset:(id)arg2 completed:(bool)arg3;
- (void)photoMarkupController:(id)arg1 didFinishWithSavedAsset:(id)arg2;
- (id)resizeTaskDescriptorViewModel;
- (id)reviewAssetProviderRequestForDisplayAsset:(id)arg1;
- (id)reviewBarsModel;
- (id)reviewScreenBarsModelForAssetExplorerReviewScreenActionManager:(id)arg1;
- (id)selectionCountLimit;
- (void)setDelegate:(id)arg1;
- (unsigned long long)sourceType;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end