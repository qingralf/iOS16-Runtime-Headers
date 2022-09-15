/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKOneShotDisplayLinkHandler : NSObject {
    CADisplayLink * _displayLink;
    void * _drawingAreaProxy;
}

- (void)dealloc;
- (void)displayLinkFired:(id)arg1;
- (id)initWithDrawingAreaProxy:(void*)arg1;
- (void)invalidate;
- (void)pause;
- (void)schedule;
- (void)setPreferredFramesPerSecond:(long long)arg1;

@end