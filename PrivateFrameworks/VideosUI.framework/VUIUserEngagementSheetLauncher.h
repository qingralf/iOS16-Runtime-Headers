/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIUserEngagementSheetLauncher : NSObject <AMSUserNotificationAuthorizationDelegate> {
    bool  _hasAppLostConnectivity;
    NSString * _lastTabIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasAppLostConnectivity;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *lastTabIdentifier;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_deleteKeysUsedForSheetPresentation;
- (void)_handleNetworkReachabilityDidChangeNotification:(id)arg1;
- (void)_handleTabBarChange:(id)arg1;
- (void)_handleUserNotificationAction:(long long)arg1;
- (id)_init;
- (void)_showNotificationAuthorizationSheet;
- (void)dealloc;
- (void)handleAMSEngagementPresentationSheet:(bool)arg1;
- (void)handleAppEnteredBackgroundForUserEngagementSheet;
- (void)handleEngagementRequest:(id)arg1 completion:(id /* block */)arg2;
- (bool)hasAppLostConnectivity;
- (id)init;
- (bool)isAnotherSheetShowingToUser;
- (id)lastTabIdentifier;
- (void)setHasAppLostConnectivity:(bool)arg1;
- (void)setLastTabIdentifier:(id)arg1;

@end