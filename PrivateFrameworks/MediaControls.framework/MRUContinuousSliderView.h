/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface MRUContinuousSliderView : CCUIContinuousSliderView {
    UIImageSymbolConfiguration * _imageSymbolConfiguration;
    UIView * _materialView;
    MRUOutputDeviceAsset * _outputDeviceAsset;
}

@property (nonatomic, retain) UIImageSymbolConfiguration *imageSymbolConfiguration;
@property (nonatomic, readonly) UIView *materialView;
@property (nonatomic, readonly) MRUOutputDeviceAsset *outputDeviceAsset;

// Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls

- (void).cxx_destruct;
- (id)createBackgroundView;
- (id)imageSymbolConfiguration;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)materialView;
- (id)outputDeviceAsset;
- (void)setContinuousSliderCornerRadius:(double)arg1;
- (void)setImageSymbolConfiguration:(id)arg1;
- (void)setOutputDeviceAsset:(id)arg1 state:(id)arg2 animated:(bool)arg3;

// Image: /System/Library/AccessibilityBundles/MediaControls.axbundle/MediaControls

+ (Class)safeCategoryBaseClass;

- (id)accessibilityLabel;
- (id)accessibilityValue;

@end
