/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MacinTalk.framework/MacinTalk
 */

@interface MTMacinTalkAUSPAudioUnit : AVSpeechSynthesisProviderAudioUnit <MacinTalkPhraseProcessorDelegate> {
    void _outputBusses;
    void currentBuffer;
    void currentPhraseProcessor;
    void currentPlainTalkString;
    void currentSegmentOffset;
    void lastVoice;
    void outputBus;
    void requests;
    void ssmlMarkerPosition;
    void voice;
}

@property (nonatomic, readonly) id /* block */ internalRenderBlock;
@property (nonatomic, readonly) AUAudioUnitBusArray *outputBusses;
@property (nonatomic, copy) NSArray *speechVoices;

- (void).cxx_destruct;
- (bool)allocateRenderResourcesAndReturnError:(id*)arg1;
- (void)cancelSpeechRequest;
- (void)didFinishGeneratingSamples;
- (void)didGenerateSamplesForPhoneme:(long long)arg1 phonemeOpcode:(short)arg2;
- (void)didGenerateSamplesForWord:(long long)arg1 stringPosition:(unsigned long long)arg2 length:(unsigned short)arg3;
- (id)initWithComponentDescription:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (id /* block */)internalRenderBlock;
- (id)outputBusses;
- (void)setSpeechVoices:(id)arg1;
- (id)speechVoices;
- (void)synthesizeSpeechRequest:(id)arg1;

@end