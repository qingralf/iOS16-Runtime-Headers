/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVScrubbingGesturePlatformAdapter : NSObject {
    <AVScrubbingGesturePlatformAdapterDelegate> * _delegate;
    bool  _gestureEnabled;
}

@property (nonatomic) <AVScrubbingGesturePlatformAdapterDelegate> *delegate;
@property (nonatomic, readonly) bool gestureActive;
@property (nonatomic) bool gestureEnabled;
@property (nonatomic, readonly) float timelineVelocity;

- (void).cxx_destruct;
- (id)_abstractInit;
- (id)delegate;
- (bool)gestureActive;
- (bool)gestureEnabled;
- (void)setDelegate:(id)arg1;
- (void)setGestureEnabled:(bool)arg1;
- (float)timelineVelocity;

@end