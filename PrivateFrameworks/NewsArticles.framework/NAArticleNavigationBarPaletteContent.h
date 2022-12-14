/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsArticles.framework/NewsArticles
 */

@interface NAArticleNavigationBarPaletteContent : UIView <NUArticleMessaging, TUBarPaletteContents> {
    void bottomPaletteButtonLocation;
    void horizontalScrollOffset;
    void opaqueBar;
}

+ (double)paletteHeight;

- (void).cxx_destruct;
- (void)compressWithScale:(double)arg1 opacity:(double)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (double)paletteHeight;
- (void)setBarColor:(id)arg1;
- (void)setBarColorFor:(id)arg1 primaryColor:(id)arg2 secondaryColor:(id)arg3 primaryVisibilityFactor:(double)arg4;
- (id)setPaletteColorWithPrimaryColor:(id)arg1 secondaryColor:(id)arg2 primaryVisibilityFactor:(double)arg3;
- (id)showMessage:(long long)arg1;

@end
