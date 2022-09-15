/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicKitInternal.framework/MusicKitInternal
 */

@interface MusicKit_SoftLinking_MPCloudController : NSObject {
    MPCloudController * _underlyingCloudController;
}

@property (nonatomic, readonly) bool canShowCloudDownloadButtons;

+ (id)canShowCloudDownloadButtonsDidChangeNotificationName;
+ (id)sharedCloudController;

- (void).cxx_destruct;
- (void)_handleCanShowCloudDownloadButtonsDidChangeNotification:(id)arg1;
- (id)_initWithUnderlyingCloudController:(id)arg1;
- (bool)canShowCloudDownloadButtons;
- (long long)cloudAddToPlaylistBehavior;
- (void)dealloc;
- (void)setCloudAddToPlaylistBehavior:(long long)arg1 completionHandler:(id /* block */)arg2;

@end