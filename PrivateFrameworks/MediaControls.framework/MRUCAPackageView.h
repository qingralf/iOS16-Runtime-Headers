/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface MRUCAPackageView : UIView {
    NSString * _glyphState;
    CAPackage * _package;
    CALayer * _packageLayer;
    NSString * _packageName;
    struct CATransform3D { 
        double m11; 
        double m12; 
        double m13; 
        double m14; 
        double m21; 
        double m22; 
        double m23; 
        double m24; 
        double m31; 
        double m32; 
        double m33; 
        double m34; 
        double m41; 
        double m42; 
        double m43; 
        double m44; 
    }  _permanentTransform;
    double  _scale;
    CAStateController * _stateController;
}

@property (nonatomic, retain) NSString *glyphState;
@property (nonatomic, retain) NSString *packageName;
@property (nonatomic) struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; } permanentTransform;
@property (nonatomic) double scale;

- (void).cxx_destruct;
- (void)_setPackage:(id)arg1;
- (void)clear;
- (id)glyphState;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)mru_applyVisualStylingWithColor:(id)arg1 alpha:(double)arg2 blendMode:(long long)arg3;
- (void)mt_applyVisualStyling:(id)arg1;
- (id)packageName;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })permanentTransform;
- (double)scale;
- (void)setAsset:(id)arg1;
- (void)setGlyphState:(id)arg1;
- (void)setPackageName:(id)arg1;
- (void)setPermanentTransform:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg1;
- (void)setScale:(double)arg1;
- (void)setTintColor:(id)arg1;

@end