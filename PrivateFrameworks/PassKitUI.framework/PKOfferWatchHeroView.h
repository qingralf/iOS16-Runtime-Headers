/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKOfferWatchHeroView : UIView {
    UIImageView * _passImageView;
    PKWatchHeroImageView * _watchView;
}

@property (nonatomic, retain) PKWatchHeroImageView *watchView;

- (void).cxx_destruct;
- (id)_deviceBackgroundColor;
- (bool)_isSmallPhone;
- (id)init;
- (void)layoutSubviews;
- (void)setCardImage:(id)arg1;
- (void)setWatchView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)watchView;

@end
