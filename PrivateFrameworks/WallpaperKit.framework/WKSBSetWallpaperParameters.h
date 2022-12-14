/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WallpaperKit.framework/WallpaperKit
 */

@interface WKSBSetWallpaperParameters : NSObject {
    NSString * _wallpaperLocation;
    <WKWallpaperRepresenting> * _wallpaperRepresenting;
}

@property (nonatomic, readonly) bool isProceduralWallpaper;
@property (nonatomic, readonly, copy) NSString *wallpaperLocation;
@property (nonatomic, readonly) <WKWallpaperRepresenting> *wallpaperRepresenting;

- (void).cxx_destruct;
- (void)_retrieveHomeScreenPreviewForAppleSystemFileBasedWallpaperWithCompletion:(id /* block */)arg1;
- (void)_retrieveHomeScreenPreviewForAppleSystemValueBasedWallpaperWithCompletion:(id /* block */)arg1;
- (void)_retrieveHomeScreenPreviewForCustomPhotoWallpaperWithCompletion:(id /* block */)arg1;
- (void)_retrieveLockScreenPreviewForAppleSystemFileBasedWallpaperWithCompletion:(id /* block */)arg1;
- (void)_retrieveLockScreenPreviewForCustomPhotoWallpaperWithCompletion:(id /* block */)arg1;
- (void)_retrievePreviewForAppleSystemDynamicWallpaperWithCompletion:(id /* block */)arg1;
- (void)_retrievePreviewForAppleSystemStripeWallpaperRepresentingWithCompletion:(id /* block */)arg1;
- (id)_wallpaperPreviewInputForStripeWallpaper:(id)arg1 wallpaperMode:(long long)arg2;
- (id)_wallpaperPreviewInputsForStripesWallpaperRepresenting;
- (id)initForHomeScreenWithWallpaperRepresenting:(id)arg1;
- (id)initForLockScreenWithWallpaperRepresenting:(id)arg1;
- (bool)isProceduralWallpaper;
- (void)resolveParametersForProceduralWallpaperWithCompletion:(id /* block */)arg1;
- (void)resolveParametersForWallpaperWithCompletion:(id /* block */)arg1;
- (id)wallpaperLocation;
- (id)wallpaperRepresenting;

@end
