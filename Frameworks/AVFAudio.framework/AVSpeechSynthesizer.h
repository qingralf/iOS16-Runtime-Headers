/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFAudio.framework/AVFAudio
 */

@interface AVSpeechSynthesizer : NSObject {
    <AVSpeechSynthesizerDelegate> * _delegate;
    bool  _mixToTelephonyUplink;
    NSArray * _outputChannels;
    bool  _paused;
    bool  _speaking;
    bool  _usesApplicationAudioSession;
}

@property (nonatomic) <AVSpeechSynthesizerDelegate> *delegate;
@property (nonatomic) bool mixToTelephonyUplink;
@property (nonatomic, retain) NSArray *outputChannels;
@property (getter=isPaused, nonatomic, readonly) bool paused;
@property (setter=smu_setAudioSessionCategory:, nonatomic, retain) NSString *smu_audioSessionCategory;
@property (getter=isSpeaking, nonatomic, readonly) bool speaking;
@property (nonatomic) bool usesApplicationAudioSession;

// Image: /System/Library/Frameworks/AVFAudio.framework/AVFAudio

+ (void)initialize;

- (void).cxx_destruct;
- (bool)continueSpeaking;
- (id)delegate;
- (bool)isPaused;
- (bool)isSpeaking;
- (bool)mixToTelephonyUplink;
- (id)outputChannels;
- (bool)pauseSpeakingAtBoundary:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMixToTelephonyUplink:(bool)arg1;
- (void)setOutputChannels:(id)arg1;
- (void)setUsesApplicationAudioSession:(bool)arg1;
- (void)speakUtterance:(id)arg1;
- (bool)stopSpeakingAtBoundary:(long long)arg1;
- (bool)usesApplicationAudioSession;
- (void)writeUtterance:(id)arg1 toBufferCallback:(id /* block */)arg2;
- (void)writeUtterance:(id)arg1 toBufferCallback:(id /* block */)arg2 toMarkerCallback:(id /* block */)arg3;

// Image: /System/Library/PrivateFrameworks/SeymourUI.framework/SeymourUI

- (id)smu_audioSessionCategory;
- (void)smu_setAudioSessionCategory:(id)arg1;

@end