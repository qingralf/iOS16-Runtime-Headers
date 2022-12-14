/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate
 */

@interface PUParallaxLayerLayoutInfo : NSObject {
    bool  _canApplyParallax;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _containerFrame;
    double  _parallaxAmount;
    struct CGPoint { 
        double x; 
        double y; 
    }  _parallaxVector;
    double  _visibilityAmount;
    unsigned long long  _visibilityEdge;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _visibleFrame;
}

@property (nonatomic, readonly) bool canApplyParallax;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } containerFrame;
@property (nonatomic, readonly) double parallaxAmount;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } parallaxVector;
@property (nonatomic, readonly) double visibilityAmount;
@property (nonatomic, readonly) unsigned long long visibilityEdge;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleFrame;

- (bool)canApplyParallax;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })containerFrame;
- (id)initWithVisibleFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 containerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 canApplyParallax:(bool)arg3 parallaxVector:(struct CGPoint { double x1; double x2; })arg4 parallaxAmount:(double)arg5 visibilityAmount:(double)arg6 visibilityEdge:(unsigned long long)arg7;
- (bool)isEqual:(id)arg1;
- (double)parallaxAmount;
- (struct CGPoint { double x1; double x2; })parallaxVector;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })viewFrameForLayerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)visibilityAmount;
- (unsigned long long)visibilityEdge;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleFrame;

@end
