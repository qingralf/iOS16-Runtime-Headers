/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
 */

@interface AUPeakLimiterViewController : AURealtimeDrawingBaseViewController {
    _TtC12CoreAudioKit13AUKnobControl * attackKnob;
    NSLayoutConstraint * attackSpacer;
    _TtC12CoreAudioKit21AULimiterControlsView * controlsView;
    long long  displayMode;
    _TtC12CoreAudioKit13AUKnobControl * gainKnob;
    NSLayoutConstraint * gainSpacer;
    _TtC12CoreAudioKit18AULimiterGraphView * graphView;
    _TtC12CoreAudioKit21CAAdjustingHeaderView * headerView;
    unsigned int  loopIndex;
    float  maxPeak;
    NSMutableArray * permanentConstraints;
    struct CGSize { 
        double width; 
        double height; 
    }  previousSize;
    _TtC12CoreAudioKit13AUKnobControl * releaseKnob;
    NSMutableArray * temporaryConstraints;
    UIView * viewContainer;
    NSNumberFormatter * wholeNumberFormatter;
}

- (void).cxx_destruct;
- (void)cleanup;
- (void)configureViewFor:(id)arg1;
- (void)doRealtimeDrawing;
- (void)knobReleased:(id)arg1;
- (void)knobTouched:(id)arg1;
- (void)knobValueChanged:(id)arg1;
- (float)limitAmount:(unsigned int)arg1;
- (id)nameFor:(unsigned int)arg1;
- (void)prepareData;
- (void)priv_eventListener:(void*)arg1 event:(const struct AudioUnitEvent { unsigned int x1; union { struct AudioUnitParameter { struct OpaqueAudioComponentInstance {} *x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; } x_2_1_1; struct AudioUnitProperty { struct OpaqueAudioComponentInstance {} *x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; unsigned int x_2_2_4; } x_2_1_2; } x2; }*)arg2 value:(float)arg3;
- (void)registerParameters;
- (void)setWithParameter:(unsigned int)arg1 value:(float)arg2;
- (void)setupConstraints;
- (id)shortNameFor:(unsigned int)arg1;
- (id)unitLabelFor:(unsigned int)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end