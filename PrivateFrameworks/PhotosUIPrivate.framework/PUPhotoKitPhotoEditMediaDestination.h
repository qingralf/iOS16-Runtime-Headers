/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate
 */

@interface PUPhotoKitPhotoEditMediaDestination : PUMediaDestination {
    NSMutableDictionary * _pendingRequestsByRequestIdentifier;
}

@property (getter=_pendingRequestsByRequestIdentifier, nonatomic, readonly) NSMutableDictionary *pendingRequestsByRequestIdentifier;

- (void).cxx_destruct;
- (id)_fetchUpdatedAssetWithLocalIdentifier:(id)arg1 photoLibrary:(id)arg2;
- (id)_pendingRequestsByRequestIdentifier;
- (void)_requestDidFinish:(id)arg1;
- (id)_saveEditsForPhoto:(id)arg1 saveRequest:(id)arg2 completionHandler:(id /* block */)arg3;
- (long long)_workImageVersionForContentEditingOutput:(id)arg1;
- (void)cancelRequestWithIdentifier:(int)arg1;
- (void)ensureEditableCopyOfAsset:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (bool)isSavingRequestWithIdentifier:(int)arg1;
- (double)progressForRequestWithIdentifier:(int)arg1;
- (int)revertEditsForAsset:(id)arg1 completionHandler:(id /* block */)arg2;
- (int)saveEditsByCopyingAsset:(id)arg1 withResourceURL:(id)arg2 usingContentEditingOutput:(id)arg3 livePhotoEditModel:(id)arg4 completionHandler:(id /* block */)arg5;
- (int)saveEditsForAsset:(id)arg1 usingContentEditingOutput:(id)arg2 livePhotoEditModel:(id)arg3 useRawIfAvailable:(bool)arg4 completionHandler:(id /* block */)arg5;
- (int)saveInternalEditsForAsset:(id)arg1 usingCompositionController:(id)arg2 contentEditingOutput:(id)arg3 version:(long long)arg4 livePhotoEditModel:(id)arg5 originalComposition:(id)arg6 useRawIfAvailable:(bool)arg7 completionHandler:(id /* block */)arg8;
- (bool)supportsProgressForRequestWithIdentifier:(int)arg1;

@end
