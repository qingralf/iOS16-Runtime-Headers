/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
 */

@interface CoreAudioKit.CAAUGraphView : UIView {
    void activeWidth;
    void animateChanges;
    void areasHidden;
    void border;
    void editPoint;
    void fill;
    void graphLayer;
    void gridPoint;
    void gridPointHighlighted;
    void gridPointSelected;
    void guide;
    void guideHighlight;
    void hideLabels;
    void inactiveAreas;
    void labelGap;
    void margins;
    void offsetXLabels;
    void touchDown;
    void widthAreaFill;
    void xAxis;
    void xGrids;
    void xLabels;
    void yAxis;
    void yGrids;
    void yLabels;
}

@property (nonatomic) bool hideLabels;

- (void).cxx_destruct;
- (void)configureWithData:(id)arg1;
- (id)data;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (bool)hideLabels;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSublayersOfLayer:(id)arg1;
- (double)locationForXWithValue:(float)arg1;
- (double)locationForYWithValue:(float)arg1;
- (void)setHideLabels:(bool)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end