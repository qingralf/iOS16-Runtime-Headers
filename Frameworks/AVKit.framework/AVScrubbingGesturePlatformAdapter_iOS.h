/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVScrubbingGesturePlatformAdapter_iOS : AVScrubbingGesturePlatformAdapter <UIGestureRecognizerDelegate> {
    float  _coordinateVelocityConstant;
    float  _coordinateVelocityScale;
    float  _deviceCoordinateVelocityScaleFactor;
    long long  _gestureActiveCount;
    AVScrubbingGesturePlatformConfiguration * _gestureConfiguration;
    bool  _gestureEnabled;
    AVScrubbingPanGestureRecognizer * _panGestureRecognizer;
    float  _timelineVelocity;
    AVTouchGestureRecognizer * _touchGestureRecognizer;
    UIView * _view;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_panGestureAction:(id)arg1;
- (void)_touchGestureAction:(id)arg1;
- (bool)gestureActive;
- (bool)gestureEnabled;
- (bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithView:(id)arg1;
- (void)setGestureEnabled:(bool)arg1;
- (float)timelineVelocity;

@end