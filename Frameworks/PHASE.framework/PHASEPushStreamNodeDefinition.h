/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PHASE.framework/PHASE
 */

@interface PHASEPushStreamNodeDefinition : PHASEGeneratorNodeDefinition {
    AVAudioFormat * _format;
    bool  _normalize;
    double  _referenceGainDbSpl;
}

@property (nonatomic, readonly) AVAudioFormat *format;
@property (nonatomic) bool normalize;
@property (nonatomic) double referenceGainDbSpl;

+ (id)new;

- (void).cxx_destruct;
- (id)format;
- (id)init;
- (id)initWithMixerDefinition:(id)arg1 format:(id)arg2;
- (id)initWithMixerDefinition:(id)arg1 format:(id)arg2 identifier:(id)arg3;
- (id)initWithMixerDefinition:(id)arg1 format:(id)arg2 uid:(id)arg3;
- (bool)normalize;
- (double)referenceGainDbSpl;
- (void)setNormalize:(bool)arg1;
- (void)setReferenceGainDbSpl:(double)arg1;

@end