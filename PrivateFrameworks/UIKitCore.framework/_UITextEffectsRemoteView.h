/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UITextEffectsRemoteView : _UIRemoteView {
    _UIRemoteViewController * _remoteViewController;
}

@property (nonatomic) _UIRemoteViewController *remoteViewController;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (bool)_requiresWindowTouches;

- (id)remoteViewController;
- (void)setRemoteViewController:(id)arg1;
- (int)textEffectsVisibilityLevel;

// Image: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit

+ (Class)safeCategoryBaseClass;

- (id)_accessibilityHitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (long long)_accessibilitySortPriority;
- (struct CGPoint { double x1; double x2; })accessibilityActivationPoint;
- (id)accessibilityElements;

@end