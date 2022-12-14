/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileSafariUI.framework/MobileSafariUI
 */

@interface BrowserControllerDefaultUIDelegate : NSObject <AutomationOverlayViewControllerDelegate, BrowserControllerUIDelegate, MobileSafariWindowDelegate> {
    BrowserController * _browserController;
    PrivateBrowsingObfuscationWindow * _obfuscationWindow;
    MobileSafariWindow * _window;
    AutomationOverlayWindow * _windowForAutomationOverlay;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setUpAutomationOverlay;
- (void)_tearDownAutomationOverlay;
- (void)_windowDidResignKeyWindow:(id)arg1;
- (id)appBannerForBrowserController:(id)arg1;
- (void)automationOverlayController:(id)arg1 didChangeAllowsUserInteraction:(bool)arg2;
- (void)automationOverlayControllerDidCancelAutomation:(id)arg1;
- (void)automationOverlayControllerDidDisableAutomation:(id)arg1;
- (bool)automationOverlayControllerShouldAllowUserInteraction:(id)arg1;
- (void)browserController:(id)arg1 didDisconnectFromScene:(id)arg2;
- (void)browserController:(id)arg1 setAppBanner:(id)arg2 animated:(bool)arg3;
- (void)browserController:(id)arg1 setCatalogViewController:(id)arg2;
- (void)browserController:(id)arg1 setCrashBanner:(id)arg2 animated:(bool)arg3;
- (void)browserController:(id)arg1 showWebExtensionBanner:(id)arg2;
- (id)browserController:(id)arg1 tabDocumentViewGeometryProviderForTabDocumentView:(id)arg2;
- (id)browserController:(id)arg1 tabSnapshotContentProviderForTabDocument:(id)arg2;
- (void)browserController:(id)arg1 updateViewForActiveTabDocument:(id)arg2;
- (void)browserController:(id)arg1 webExtensionWasRemotelyEnabled:(id)arg2;
- (void)browserController:(id)arg1 willConnectToScene:(id)arg2 session:(id)arg3 options:(id)arg4;
- (id)browserControllerCatalogViewController:(id)arg1;
- (double)browserControllerCatalogViewPopoverWidth:(id)arg1;
- (id)browserControllerContentContainerView:(id)arg1;
- (void)browserControllerContentContainerViewFrameDidChange:(id)arg1;
- (void)browserControllerDidBeginIgnoringUserInteraction:(id)arg1;
- (void)browserControllerDidEndIgnoringUserInteraction:(id)arg1;
- (void)browserControllerDidEndNavigationGesture:(id)arg1;
- (void)browserControllerDidEndObfuscating:(id)arg1;
- (void)browserControllerLayOutCatalogView:(id)arg1;
- (void)browserControllerMakeKey:(id)arg1;
- (void)browserControllerMakeKeyAndVisible:(id)arg1;
- (id)browserControllerNavigationBar:(id)arg1;
- (id)browserControllerNextResponder:(id)arg1;
- (bool)browserControllerShouldIncreaseTopPaddingForStartPage:(id)arg1;
- (bool)browserControllerShouldUpdateSnapshotForActiveTab:(id)arg1;
- (void)browserControllerStartPageUpdatePolicyDidChange:(id)arg1;
- (double)browserControllerStatusBarWidth:(id)arg1;
- (id)browserControllerTabBarManager:(id)arg1;
- (id)browserControllerTabHoverPreview:(id)arg1;
- (void)browserControllerWillBeginNavigationGesture:(id)arg1;
- (void)browserControllerWillBeginObfuscating:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })browserControllerWindowFrame:(id)arg1;
- (id)crashBannerForBrowserController:(id)arg1;
- (void)handleTabViewPinchForBrowserController:(id)arg1;
- (id)initWithBrowserController:(id)arg1;
- (void)safariWindow:(id)arg1 statusBarChangedFromHeight:(double)arg2 toHeight:(double)arg3;
- (id)viewControllerToPresentFromForBrowserController:(id)arg1;

@end
