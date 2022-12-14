/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
 */

@interface CoreAudioKit.CAAUEQGraphView : CoreAudioKit.CAAUGraphView {
    void accessibleElements;
    void activePointIndex;
    void controlList;
    void curve;
    void dataSource;
    void drawActivePointOnly;
    void gradientLayer;
    void paramCache;
    void plotActiveRangeOnly;
    void touchedParts;
}

@property (nonatomic, copy) NSArray *accessibilityElements;
@property (nonatomic, retain) <_TtP12CoreAudioKit27CAAUViewParameterDataSource_> *dataSource;

- (void).cxx_destruct;
- (id)accessibilityElements;
- (id)addPointControlFor:(unsigned int)arg1 for:(unsigned int)arg2;
- (id)addRegionControlFor:(unsigned int)arg1 width:(unsigned int)arg2;
- (id)addRegionControlFor:(unsigned int)arg1 width:(unsigned int)arg2 useTrianglesForWidth:(bool)arg3;
- (id)addRegionControlFor:(unsigned int)arg1 y:(unsigned int)arg2 width:(unsigned int)arg3;
- (id)addRegionControlFor:(unsigned int)arg1 y:(unsigned int)arg2 width:(unsigned int)arg3 useTrianglesForWidth:(bool)arg4;
- (void)changeControlToHorizontalPointWithIndex:(long long)arg1;
- (void)changeControlToHorizontalPointWithIndex:(long long)arg1 width:(unsigned int)arg2;
- (void)changeControlToPointWithIndex:(long long)arg1 y:(unsigned int)arg2;
- (void)changeControlToRegionWithIndex:(long long)arg1 y:(unsigned int)arg2 width:(unsigned int)arg3;
- (id)dataSource;
- (void)disableAllControls;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })graphFrame;
- (id)graphView;
- (void)handleBeginGestureWithNotification:(id)arg1;
- (void)handleEndGestureWithNotification:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)redrawCurve;
- (void)removeFromSuperview;
- (void)setAccessibilityElements:(id)arg1;
- (void)setActiveControl:(long long)arg1;
- (void)setBypassed:(long long)arg1 bypassed:(bool)arg2;
- (void)setDataSource:(id)arg1;
- (void)tintColorDidChange;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)updateViewFor:(unsigned int)arg1 value:(float)arg2;
- (float)valueForXWithLocation:(double)arg1;
- (float)valueForYWithLocation:(double)arg1;

@end
