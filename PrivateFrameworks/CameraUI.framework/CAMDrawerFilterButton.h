/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMDrawerFilterButton : CAMControlDrawerCustomButton {
    bool  _on;
}

@property (getter=isOn, nonatomic) bool on;

// Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI

- (long long)controlType;
- (id)imageNameForCurrentState;
- (bool)isOn;
- (bool)isSelfExpanding;
- (void)setOn:(bool)arg1;
- (bool)shouldUseActiveTintForCurrentState;
- (bool)shouldUseHierarchicalSymbol;

// Image: /System/Library/AccessibilityBundles/CameraUI.axbundle/CameraUI

+ (Class)safeCategoryBaseClass;

- (long long)_accessibilityExpandedStatus;
- (id)accessibilityIdentifier;
- (id)accessibilityLabel;
- (id)accessibilityValue;

@end