/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIContextMenuHeaderView : UICollectionReusableView {
    UIVisualEffectView * _bgView;
    UIView * _contentView;
    bool  _needsConstraintRebuild;
    UIView * _separator;
    unsigned long long  _separatorStyle;
    NSString * _title;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIVisualEffectView *bgView;
@property (nonatomic, retain) UIView *contentView;
@property (nonatomic, retain) UIView *separator;
@property (nonatomic) unsigned long long separatorStyle;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (bool)_isDisplayingTitleLabel;
- (double)_separatorHeight;
- (void)_setNeedsConstraintRebuild;
- (id)_titleFont;
- (unsigned long long)_titleLabelNumberOfLines;
- (id)bgView;
- (id)contentView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })layoutMargins;
- (id)separator;
- (unsigned long long)separatorStyle;
- (void)setBackgroundMaterialGroupName:(id)arg1;
- (void)setBgView:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setSeparator:(id)arg1;
- (void)setSeparatorStyle:(unsigned long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)title;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;

@end
