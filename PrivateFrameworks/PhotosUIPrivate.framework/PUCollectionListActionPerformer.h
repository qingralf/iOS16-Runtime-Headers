/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate
 */

@interface PUCollectionListActionPerformer : PXCollectionListActionPerformer <PHPickerViewControllerDelegate, PUAlbumStreamActivityDelegate, UIAdaptivePresentationControllerDelegate> {
    PUAlbumStreamActivity * __albumStreamActivity;
    UIAlertAction * _createAlbumAlertAction;
    id /* block */  _finishedPickingBlock;
}

@property (nonatomic, retain) PUAlbumStreamActivity *_albumStreamActivity;
@property (setter=_setCreateAlbumAlertAction:, nonatomic) UIAlertAction *createAlbumAlertAction;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ finishedPickingBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_canUseSelectionForActionType:(id)arg1 selectionProvider:(id)arg2;
+ (id)localizedTitleForActionType:(id)arg1 selectionProvider:(id)arg2;

- (void).cxx_destruct;
- (id)_albumStreamActivity;
- (void)_setCreateAlbumAlertAction:(id)arg1;
- (void)_updateCreateAlbumTextField:(id)arg1;
- (id)_validateNewCollectionTitle:(id)arg1;
- (void)albumStreamActivity:(id)arg1 didFinishSuccessfully:(bool)arg2;
- (void)albumStreamActivity:(id)arg1 dismissViewController:(id)arg2 completion:(id /* block */)arg3;
- (void)albumStreamActivity:(id)arg1 presentViewController:(id)arg2;
- (id)createAlbumAlertAction;
- (id /* block */)finishedPickingBlock;
- (void)handleCreateSharedAlbum;
- (void)picker:(id)arg1 didFinishPicking:(id)arg2;
- (void)presentSetupUIForAlbumCreationWithCompletionHandler:(id /* block */)arg1;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)setFinishedPickingBlock:(id /* block */)arg1;
- (void)set_albumStreamActivity:(id)arg1;

@end