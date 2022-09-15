/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWAudioFileSinkNode : BWFileSinkNode {
    unsigned long long  _adjustedMinFreeDiskSpace;
    struct OpaqueCMByteStream { } * _byteStream;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _curFileDuration;
    unsigned long long  _curFileSize;
    bool  _didBeginFileWriterSession;
    struct OpaqueFigFormatWriter { } * _formatWriter;
    char * _parentPath;
    NSObject<OS_dispatch_queue> * _propertySyncQueue;
    FigCaptureAudioFileRecordingSettings * _settings;
    FigStateMachine * _stateMachine;
    int  _trackID;
}

+ (void)initialize;

- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (id)initWithSinkID:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })lastFileDuration;
- (unsigned long long)lastFileSize;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;

@end