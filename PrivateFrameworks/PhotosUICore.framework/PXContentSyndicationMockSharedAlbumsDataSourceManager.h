/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXContentSyndicationMockSharedAlbumsDataSourceManager : PXContentSyndicationDataSourceManager <PXCollectionsDataSourceManagerObserver> {
    <PXContentSyndicationAssetFetchResultProvider> * _assetFetchResultProvider;
    <PXContentSyndicationSocialLayerHighlightProvider> * _highlightProvider;
    <PXUIImageProvider> * _imageProvider;
    PXCollectionsDataSourceManager * _sharedAlbumsDataSourceManager;
}

@property (nonatomic, readonly) PXContentSyndicationMockSharedAlbumsDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PXCollectionsDataSourceManager *sharedAlbumsDataSourceManager;
@property (readonly) Class superclass;

+ (id)createCountsController;

- (void).cxx_destruct;
- (void)_handleDataSourceChange;
- (id)allAssetsFetchResult;
- (id)assetFetchResultProvider;
- (id)createAssetsDataSourceManager;
- (id)createInitialDataSource;
- (id)imageProvider;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)setSharedAlbumsDataSourceManager:(id)arg1;
- (id)sharedAlbumsDataSourceManager;
- (id)socialLayerHighlightProvider;

@end