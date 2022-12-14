/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMSharedLibraryStatusIndicator : CAMControlStatusIndicator {
    long long  _sharedLibraryMode;
}

@property (setter=setSharedLibraryMode:, nonatomic) long long sharedLibraryMode;

// Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI

- (unsigned long long)customPointSizeForImageSymbol;
- (id)imageNameForCurrentState;
- (void)setSharedLibraryMode:(long long)arg1;
- (void)setSharedLibraryMode:(long long)arg1 animated:(bool)arg2;
- (long long)sharedLibraryMode;
- (bool)shouldFillOutlineForCurrentState;
- (bool)shouldShowSlashForCurrentState;
- (bool)shouldUseActiveTintForCurrentState;
- (bool)shouldUseSlash;

// Image: /System/Library/AccessibilityBundles/CameraUI.axbundle/CameraUI

+ (Class)safeCategoryBaseClass;

- (id)_axLabelForSharedLibraryMode:(long long)arg1;
- (id)accessibilityLabel;

@end
