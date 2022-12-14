/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface AVCScreenCapture : NSObject {
    NSObject<OS_dispatch_queue> * _avConferenceScreenCaptureQueue;
    AVConferenceXPCClient * _connection;
    id  _delegate;
}

@property (nonatomic, readonly) <AVCScreenCaptureDelegate> *delegate;

+ (unsigned char)capabilities;
+ (unsigned char)captureCapabilities;

- (void)dealloc;
- (id)delegate;
- (void)deregisterBlocksForNotifications;
- (id)initWithDelegate:(id)arg1 withConfig:(id)arg2;
- (id)newNSErrorWithErrorDictionary:(id)arg1;
- (void)registerBlocksForNotifications;
- (void)reportScreenShareIsStarting:(bool)arg1;
- (void)startCapture;
- (void)stopCapture;
- (void)updateScreenCaptureWithConfig:(id)arg1;

@end
