/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIInputSetHostView : UIView

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (bool)_notifyOnExplicitLayout;
+ (bool)_shouldHitTestInputViewFirst;
+ (bool)requiresConstraintBasedLayout;

- (unsigned long long)_clipCornersOfView:(id)arg1;
- (void)_didChangeKeyplaneWithContext:(id)arg1;
- (void)_updateSafeAreaInsets;

// Image: /System/Library/AccessibilityBundles/ChatKitFramework.axbundle/ChatKitFramework

+ (Class)safeCategoryBaseClass;

- (unsigned long long)_accessibilityScannerGroupTraits;

// Image: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit

- (bool)_accessibilityIsScannerGroup;

// Image: /usr/lib/libMainThreadChecker.dylib

- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)layoutIfNeeded;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (int)textEffectsVisibilityLevel;

@end