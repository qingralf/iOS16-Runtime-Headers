/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PosterBoard.framework/PosterBoard
 */

@interface PBFEditingZoomAnimationController : NSObject {
    UIView * _complicationsView;
    double  _previewCornerRadius;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _previewFrame;
    UIImage * _previewImage;
}

@property (nonatomic, readonly) UIView *complicationsView;
@property (nonatomic, readonly) double previewCornerRadius;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } previewFrame;
@property (nonatomic, readonly) UIImage *previewImage;

- (void).cxx_destruct;
- (id)buildDimmingView;
- (id)buildZoomingViewWithPreviewImage:(id)arg1 previewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 editingView:(id)arg3 complicationsView:(id)arg4;
- (id)complicationsView;
- (id)initWithPreviewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 previewCornerRadius:(double)arg2 previewImage:(id)arg3 complicationsView:(id)arg4;
- (double)previewCornerRadius;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })previewFrame;
- (id)previewImage;

@end