/* Generated by RuntimeBrowser.
 */

@protocol PXGridPresentation <NSObject>

@optional

- (UIViewController *)createAlbumListViewControllerWithCollectionList:(PHCollectionList *)arg1;
- (PXPhotosUIViewController *)createAssetPickerPhotosAlbumViewControllerForAlbum:(PHAssetCollection *)arg1;
- (void)createGridViewControllerWithAssets:(void *)arg1 photoLibrary:(void *)arg2 withTitle:(void *)arg3 hideTabBar:(void *)arg4 gridPresentationContext:(void *)arg5 containerViewController:(void *)arg6 barsUpdateDelegate:(void *)arg7 andCompletion:(void *)arg8; // needs 8 arg types, found 13: <NSFastEnumeration> *, PHPhotoLibrary *, NSString *, bool, long long, UIViewController *, <PXGridPresentationBarsUpdateDelegate> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIViewController *, void*
- (UIViewController *)createImportHistoryGridViewControllerWithCollection:(PHCollection *)arg1;
- (UIViewController *)createPanoramaViewController;
- (UIViewController *)createPhotosAlbumViewControllerForAlbum:(PHAssetCollection *)arg1 withFetchResult:(PHFetchResult *)arg2;
- (UIViewController *)createPlacesViewControllerForAssetCollection:(PHAssetCollection *)arg1;
- (UIViewController *)createViewControllerForAssetCollection:(PHAssetCollection *)arg1;
- (UIViewController *)createViewControllerForAssetCollection:(PHAssetCollection *)arg1 existingAssetsFetchResult:(PHFetchResult *)arg2;

@end
