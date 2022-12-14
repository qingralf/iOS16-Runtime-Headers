/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WallpaperKit.framework/WallpaperKit
 */

@interface WKHeritageStripeImageGenerator : NSObject {
    NSCache * __wallpaperCache;
    NSObject<OS_dispatch_queue> * __wallpaperRequestQueue;
}

@property (nonatomic, retain) NSCache *_wallpaperCache;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *_wallpaperRequestQueue;

+ (id)defaultImageGenerator;

- (void).cxx_destruct;
- (id)_wallpaperCache;
- (id)_wallpaperRequestQueue;
- (id)init;
- (void)requestWallpaperImageWithBackgroundColor:(id)arg1 completion:(id /* block */)arg2;
- (id)requestWallpaperImageWithBackgroundColorSynchronous:(id)arg1;
- (void)set_wallpaperCache:(id)arg1;
- (void)set_wallpaperRequestQueue:(id)arg1;
- (id)thumbnailImageWithBackgroundColor:(id)arg1 appearanceAware:(bool)arg2;

@end
