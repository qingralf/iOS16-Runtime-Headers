/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHJapaneseTokenizationAndConversionStep : CHPostprocessingStep {
    struct __MecabraContext { } * _mecabraContextRef;
    CHMecabraWrapper * _mecabraWrapper;
    CHStringOVSChecker * _ovsStringChecker;
    bool  _promoteKanaConversion;
    void * _wordLanguageModel;
}

@property (nonatomic, readonly) struct __MecabraContext { }*mecabraContextRef;
@property (nonatomic, readonly) CHMecabraWrapper *mecabraWrapper;
@property (nonatomic, retain) CHStringOVSChecker *ovsStringChecker;
@property (nonatomic, readonly) bool promoteKanaConversion;
@property (nonatomic, readonly) void*wordLanguageModel;

- (void).cxx_destruct;
- (id)_extendedConversionCandidates:(id)arg1 withPhraseCandidates:(id)arg2;
- (id)_updatedTokenFromToken:(id)arg1 withString:(id)arg2;
- (void)dealloc;
- (id)initWithMecabra:(id)arg1 wordLanguageModel:(void*)arg2 ovsStringChecker:(id)arg3 promoteKanaConversion:(bool)arg4;
- (struct __MecabraContext { }*)mecabraContextRef;
- (id)mecabraWrapper;
- (id)ovsStringChecker;
- (id)process:(id)arg1 options:(id)arg2;
- (bool)promoteKanaConversion;
- (void)setOvsStringChecker:(id)arg1;
- (void*)wordLanguageModel;

@end
