/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMHDRStatusIndicator : CAMControlStatusIndicator {
    bool  _autoHDRAllowed;
    long long  _hdrMode;
}

@property (getter=isAutoHDRAllowed, nonatomic) bool autoHDRAllowed;
@property (setter=setHDRMode:, nonatomic) long long hdrMode;

// Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI

- (long long)hdrMode;
- (id)imageNameForAXHUD;
- (id)imageNameForCurrentState;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isAutoHDRAllowed;
- (void)setAllowAutoHDR:(bool)arg1;
- (void)setAutoHDRAllowed:(bool)arg1;
- (void)setHDRMode:(long long)arg1;
- (void)setHDRMode:(long long)arg1 animated:(bool)arg2;
- (void)setOrientation:(long long)arg1 animated:(bool)arg2;
- (bool)shouldShowSlashForCurrentState;
- (bool)shouldUseActiveTintForCurrentState;
- (bool)shouldUseSlash;

// Image: /System/Library/AccessibilityBundles/CameraUI.axbundle/CameraUI

+ (Class)safeCategoryBaseClass;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;

@end
