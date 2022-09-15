/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileSafariUI.framework/MobileSafariUI
 */

@interface BrowserToolbar : _SFToolbar {
    UIToolbar * _replacementToolbar;
}

@property (nonatomic, readonly) UIToolbar *replacementToolbar;

// Image: /System/Library/PrivateFrameworks/MobileSafariUI.framework/MobileSafariUI

- (void).cxx_destruct;
- (void)_sceneDidEnterBackground:(id)arg1;
- (void)_sceneWillEnterForeground:(id)arg1;
- (void)_updateItemsForReplacementToolbar;
- (void)layoutSubviews;
- (id)replacementToolbar;
- (void)setReplacementToolbar:(id)arg1 tintStyle:(long long)arg2 withAnimationDelay:(double)arg3;

// Image: /System/Library/AccessibilityBundles/MobileSafariUI.axbundle/MobileSafariUI

+ (Class)safeCategoryBaseClass;

- (void)_accessibilityLoadAccessibilityInformation;
- (long long)accessibilityContainerType;
- (bool)accessibilityElementsHidden;
- (id)initWithPlacement:(long long)arg1 hideBackground:(bool)arg2;
- (void)setItems:(id)arg1 animated:(bool)arg2;

@end