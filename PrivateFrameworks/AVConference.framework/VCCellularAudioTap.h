/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCCellularAudioTap : NSObject <VCAudioIODelegate, VCAudioPowerSpectrumSourceDelegate> {
    long long  _audioSessionId;
    NSMutableDictionary * _audioTapIOMap;
    <VCServerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    int  _processId;
    NSObject<OS_dispatch_queue> * _stateQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VCServerDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (unsigned int)audioIOTypeFromTapType:(unsigned int)arg1;

- (bool)addAudioTapForStreamToken:(long long)arg1 tapType:(unsigned int)arg2 error:(id*)arg3;
- (struct _VCAudioIOInitConfiguration { unsigned int x1; unsigned int x2; int x3; int x4; unsigned int x5; unsigned char x6; bool x7; id x8; int x9; id x10; int (*x11)(); void *x12; id x13; int (*x14)(); void *x15; unsigned int x16; unsigned int x17; bool x18; unsigned long long x19; unsigned int x20; long long x21; long long x22; unsigned long long x23; })audioIOConfigWithAudioType:(unsigned int)arg1 realtimeContext:(void*)arg2;
- (void)audioPowerSpectrumSinkDidRegister;
- (void)audioPowerSpectrumSinkDidUnregister;
- (void)controllerFormatChanged:(const struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned int x_1_1_8; unsigned int x_1_1_9; } x1; unsigned int x2; }*)arg1;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (void)didResume;
- (void)didResumeAudioIO:(id)arg1;
- (void)didServerDie;
- (void)didStart:(bool)arg1 error:(id)arg2;
- (void)didStop:(bool)arg1 error:(id)arg2;
- (void)didSuspend;
- (void)didSuspendAudioIO:(id)arg1;
- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo { unsigned int x1; double x2; }*)arg1;
- (id)initWithProcessId:(int)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
- (int)registerAudioTapForStreamToken:(long long)arg1 tapType:(unsigned int)arg2;
- (bool)removeAudioTapForStreamToken:(long long)arg1 error:(id*)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)unregisterAudioTapForStreamToken:(long long)arg1;

@end
