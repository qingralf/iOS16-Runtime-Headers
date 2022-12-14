/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsUI.framework/MapsUI
 */

@interface MUAppleRatingRowView : MKViewWithHairline {
    MUStackLayout * _stackLayout;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
    <MURatingPercentageViewModel> * _viewModel;
}

@property (nonatomic, retain) <MURatingPercentageViewModel> *viewModel;

- (void).cxx_destruct;
- (id)_attributesWithFont:(id)arg1 color:(id)arg2;
- (void)_contentSizeDidChange;
- (id)_ratingSubtitleAttributedString;
- (void)_setupConstraints;
- (void)_setupSubviews;
- (void)_updateAppearance;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setViewModel:(id)arg1;
- (id)viewModel;

@end
