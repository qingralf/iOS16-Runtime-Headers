/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UITextModernLoupeView : UIView {
    UIView * _backgroundView;
    CADisplayLink * _displayLink;
    UIView * _glowView;
    UIView * _maskView;
    struct CGPoint { 
        double x; 
        double y; 
    }  _modelPosition;
    UIView * _portalContainerView;
    _UIPortalView * _portalView;
    UIView * _sourceView;
    bool  _statusBarHidden;
    bool  _visible;
    double  _visualOffset;
}

@property (nonatomic, readonly) <UICoordinateSpace> *containerCoordinateSpace;
@property (nonatomic) struct CGPoint { double x1; double x2; } modelPosition;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } preferredSize;
@property (nonatomic) bool statusBarHidden;
@property (nonatomic) bool visible;
@property (nonatomic) double visualOffset;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (bool)isModernLoupeEnabled;

- (void).cxx_destruct;
- (void)_displayLinkFired:(id)arg1;
- (void)_stopDisplayLink;
- (void)_updateColorsForTraitCollection:(id)arg1;

// Image: /usr/lib/libMainThreadChecker.dylib

- (id)backgroundColorIfNecessary;
- (id)containerCoordinateSpace;
- (id)initWithSourceView:(id)arg1;
- (void)layoutSubviews;
- (struct CGPoint { double x1; double x2; })modelPosition;
- (struct CGSize { double x1; double x2; })preferredSize;
- (void)setModelPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setStatusBarHidden:(bool)arg1;
- (void)setVisible:(bool)arg1;
- (void)setVisible:(bool)arg1 animated:(bool)arg2;
- (void)setVisible:(bool)arg1 animated:(bool)arg2 removeWhenComplete:(bool)arg3;
- (void)setVisualOffset:(double)arg1;
- (bool)statusBarHidden;
- (void)traitCollectionDidChange:(id)arg1;
- (bool)visible;
- (double)visualOffset;

@end