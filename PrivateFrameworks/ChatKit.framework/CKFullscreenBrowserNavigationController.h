/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKFullscreenBrowserNavigationController : UINavigationController <CKAdaptivePresentedControllerProtocol> {
    bool  _preserveModalPresentationStyle;
    bool  _wantsWindowedPresentation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool preserveModalPresentationStyle;
@property (nonatomic) bool shouldHidePresentingWindow;
@property (readonly) Class superclass;
@property (nonatomic) bool wantsWindowedPresentation;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (bool)constrainToPresentingVCBounds;
- (bool)forceWindowedPresentation;
- (void)loadView;
- (bool)preserveModalPresentationStyle;
- (void)setPreserveModalPresentationStyle:(bool)arg1;
- (void)setWantsWindowedPresentation:(bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (bool)wantsWindowedPresentation;

// Image: /System/Library/AccessibilityBundles/ChatKitFramework.axbundle/ChatKitFramework

+ (Class)safeCategoryBaseClass;

- (void)_accessibilityLoadAccessibilityInformation;
- (void)viewWillAppear:(bool)arg1;

@end