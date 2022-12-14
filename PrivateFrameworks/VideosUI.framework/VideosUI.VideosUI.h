/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VideosUI.VideosUI : NSObject

+ (id)getFullorHalfSheetPromptedAt;
+ (double)getPlaybackElapsedTime;
+ (id)getTipViewControllerIfAny:(id)arg1;
+ (void)handleAppDidFinishLoading;
+ (void)handleGDPRDidChangeSignal;
+ (void)handlePlaybackDidEndForTCC;
+ (void)handleUpsellPresented:(bool)arg1;
+ (void)initializeGroupActivities;
+ (void)initializeJSContext:(id)arg1;
+ (void)initializeUIFactory;
+ (void)initializeUnifiedMessagingManager;
+ (void)markLastPlaybackEventasError;
+ (void)markLastPlaybackEventasUpsellPresented;
+ (void)markPlaybackElapsedTime:(double)arg1;
+ (void)messageViewController:(id)arg1 didSelectActionWith:(id)arg2;
+ (void)notifyAppearingViewControllerOfTabSwitch:(id)arg1;
+ (void)processDeeplink:(id)arg1;
+ (void)pushDownloadDidStartSignal;
+ (id)viewControllerWith:(id)arg1 appContext:(id)arg2 documentOptions:(id)arg3;

- (id)init;

@end
