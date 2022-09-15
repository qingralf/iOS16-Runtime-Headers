/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeoplePickerCollectionViewCell : UICollectionViewCell {
    UIImageView * _badgeView;
    bool  _disabled;
    UIImageView * _imageView;
    UILabel * _nameLabel;
}

@property (getter=isDisabled, nonatomic) bool disabled;
@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic, readonly) UILabel *nameLabel;

- (void).cxx_destruct;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isDisabled;
- (void)layoutSubviews;
- (id)nameLabel;
- (void)prepareForReuse;
- (void)setDisabled:(bool)arg1;
- (void)setSelected:(bool)arg1;

@end