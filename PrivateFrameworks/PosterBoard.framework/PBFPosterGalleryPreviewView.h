/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PosterBoard.framework/PosterBoard
 */

@interface PBFPosterGalleryPreviewView : UIView {
    UIView * _loadingIndicatorContainerView;
    <PBFPosterPreview> * _posterPreview;
    PBFPosterGalleryPreviewComplicationContentView * _posterPreviewComplicationContentView;
    PBFPosterGalleryPreviewContentView * _posterPreviewContentView;
    <PBFPosterPreviewGenerator> * _posterPreviewGenerator;
    double  _posterPreviewScale;
    PBFPosterGalleryShadowContainerView * _shadowContainerView;
    PBFShadowView * _shadowView;
    bool  _showsLoadingIndicator;
}

@property (nonatomic) unsigned long long index;
@property (nonatomic, retain) <PBFPosterPreview> *posterPreview;
@property (nonatomic, retain) <PBFPosterPreviewGenerator> *posterPreviewGenerator;
@property (nonatomic, readonly) UIImage *posterPreviewImage;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } posterPreviewImageFrame;
@property (nonatomic) double posterPreviewScale;
@property (nonatomic) bool showsLoadingIndicator;

- (void).cxx_destruct;
- (void)_updatePreviewWithImage:(id)arg1 posterPreview:(id)arg2;
- (void)didMoveToWindow;
- (unsigned long long)index;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)makeComplicationsPortalView;
- (id)posterPreview;
- (id)posterPreviewGenerator;
- (id)posterPreviewImage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })posterPreviewImageFrame;
- (double)posterPreviewScale;
- (void)prepareForReuse;
- (void)setIndex:(unsigned long long)arg1;
- (void)setPosterPreview:(id)arg1;
- (void)setPosterPreviewGenerator:(id)arg1;
- (void)setPosterPreviewScale:(double)arg1;
- (void)setShowsLoadingIndicator:(bool)arg1;
- (bool)showsLoadingIndicator;
- (void)sizeToFit;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;

@end