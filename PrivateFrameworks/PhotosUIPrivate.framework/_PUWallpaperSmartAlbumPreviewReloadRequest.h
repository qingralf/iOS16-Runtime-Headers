/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate
 */

@interface _PUWallpaperSmartAlbumPreviewReloadRequest : NSObject <PXWallpaperSmartAlbumDataSourceChangeObserver> {
    id /* block */  _completion;
    PXWallpaperSmartAlbumDataSource * _smartAlbumDataSource;
}

@property (nonatomic, copy) id /* block */ completion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PXWallpaperSmartAlbumDataSource *smartAlbumDataSource;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)completion;
- (id)initWithPhotoLibrary:(id)arg1 shuffleConfiguration:(id)arg2 completion:(id /* block */)arg3;
- (void)setCompletion:(id /* block */)arg1;
- (void)setSmartAlbumDataSource:(id)arg1;
- (id)smartAlbumDataSource;
- (void)wallpaperSmartAlbumDataSourceAvailableTypesDidChange:(id)arg1;
- (void)wallpaperSmartAlbumDataSourcePreviewAssetsDidChange:(id)arg1;

@end
