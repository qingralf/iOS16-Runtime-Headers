/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCuratedLibraryAssetsDataSourceManagerConfiguration : NSObject

@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;

+ (id)configurationWithPhotoLibrary:(id)arg1;
+ (id)configurationWithYearsAssetsDataSourceManager:(id)arg1 monthsAssetsDataSourceManager:(id)arg2 daysAssetsDataSourceManager:(id)arg3 allPhotosAssetsDataSourceManager:(id)arg4;

- (id)configurationForZoomLevel:(long long)arg1;
- (id)keyAssetCollectionReferenceInDataSource:(id)arg1 zoomLevel:(long long)arg2 matchingAssetCollectionReference:(id)arg3 fromDataSource:(id)arg4 zoomLevel:(long long)arg5;
- (id)photoLibrary;

@end
