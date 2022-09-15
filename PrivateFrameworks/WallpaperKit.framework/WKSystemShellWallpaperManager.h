/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WallpaperKit.framework/WallpaperKit
 */

@interface WKSystemShellWallpaperManager : NSObject {
    NSObject<OS_dispatch_queue> * __setWallpaperQueue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *_setWallpaperQueue;

+ (long long)_currentWallpaperMode;
+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_setWallpaperQueue;
- (id)init;
- (void)setHomeScreenWallpaperRepresenting:(id)arg1 completion:(id /* block */)arg2;
- (void)setLockScreenWallpaperRepresenting:(id)arg1 mirrorToHomeScreen:(bool)arg2 completion:(id /* block */)arg3;
- (void)set_setWallpaperQueue:(id)arg1;

@end