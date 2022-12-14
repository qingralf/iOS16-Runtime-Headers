/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DocumentManagerExecutables.framework/DocumentManagerExecutables
 */

@interface DOCLargeTagView : UIView {
    DOCTagCheckmarkView * _checkmarkView;
    long long  _style;
    DOCTagDotView * _tagDotView;
    UILabel * _tagNameLabel;
    DOCTag * _tagValue;
}

@property (nonatomic, readonly) DOCTagCheckmarkView *checkmarkView;
@property (nonatomic) long long style;
@property (nonatomic, readonly) DOCTagDotView *tagDotView;
@property (nonatomic, readonly) UILabel *tagNameLabel;
@property (nonatomic, retain) DOCTag *tagValue;

- (void).cxx_destruct;
- (id)checkmarkView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setStyle:(long long)arg1;
- (void)setTagValue:(id)arg1;
- (long long)style;
- (id)tagDotView;
- (id)tagNameLabel;
- (id)tagValue;
- (void)updateBackgroundColor;
- (void)updateBorder;

@end
