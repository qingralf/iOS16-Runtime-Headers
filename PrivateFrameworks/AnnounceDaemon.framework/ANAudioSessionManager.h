/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AnnounceDaemon.framework/AnnounceDaemon
 */

@interface ANAudioSessionManager : NSObject {
    AVAudioSession * _audioSession;
    NSObject<OS_os_log> * _log;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _timer;
}

@property (nonatomic, readonly) AVAudioSession *audioSession;
@property (nonatomic, readonly) NSObject<OS_os_log> *log;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *timer;

- (void).cxx_destruct;
- (void)_cancelTimer;
- (void)_deactivateAudioSession;
- (void)_handleTimerExpired;
- (bool)activateAudioSessionWithError:(id*)arg1;
- (id)audioSession;
- (void)deactivateAudioSessionAfterDelay:(double)arg1;
- (void)dealloc;
- (id)initWithAudioSession:(id)arg1 queue:(id)arg2 endpointID:(id)arg3;
- (id)log;
- (id)queue;
- (void)setTimer:(id)arg1;
- (id)timer;

@end