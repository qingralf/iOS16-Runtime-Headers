/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotoKitAssetCollectionDeleteActionPerformer : PXPhotoKitAssetCollectionActionPerformer

+ (bool)canPerformOnAssetCollectionReference:(id)arg1 withInputs:(id)arg2;
+ (id)createStandardActionWithTitle:(id)arg1 image:(id)arg2 handler:(id /* block */)arg3;
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 assetCollectionReference:(id)arg2 withInputs:(id)arg3;
+ (id)systemImageNameForAssetCollectionReference:(id)arg1 withInputs:(id)arg2;

- (void)_promptDeleteConfirmationWithCompletionHandler:(id /* block */)arg1;
- (void)performUserInteractionTask;

@end