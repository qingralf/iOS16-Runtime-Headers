/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriNaturalLanguageParsing.framework/SiriNaturalLanguageParsing
 */

@interface UPPLNerHandler : NSObject {
    unsigned long long  _beamSize;
    struct unique_ptr<global_ner::GlobalNerHandler, std::default_delete<global_ner::GlobalNerHandler>> { 
        struct __compressed_pair<global_ner::GlobalNerHandler *, std::default_delete<global_ner::GlobalNerHandler>> { 
            struct GlobalNerHandler {} *__value_; 
        } __ptr_; 
    }  _handler;
    unsigned long long  _maxTokenLength;
    unsigned long long  _maxTokens;
    UPPLPostProcessor * _postProcessor;
    bool  _useDropOut;
    bool  _wordCharactersTensorEnabled;
    bool  _wordLengthTensorEnabled;
}

@property (nonatomic, readonly) unsigned long long beamSize;
@property (nonatomic, readonly) unsigned long long maxTokenLength;
@property (nonatomic, readonly) unsigned long long maxTokens;
@property (nonatomic, readonly) bool useDropOut;
@property (nonatomic, readonly) bool wordCharactersTensorEnabled;
@property (nonatomic, readonly) bool wordLengthTensorEnabled;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)beamSize;
- (id)generatePlumSpansForRequest:(id)arg1;
- (id)initWithLocale:(id)arg1 modelDir:(id)arg2 vocabTagsFile:(id)arg3 transParamsFile:(id)arg4 charIndicesFile:(id)arg5 configFile:(id)arg6;
- (id)initWithLocale:(id)arg1 modelDir:(id)arg2 vocabTagsFile:(id)arg3 transParamsFile:(id)arg4 charIndicesFile:(id)arg5 configFile:(id)arg6 padCharacter:(id)arg7 unkCharacter:(id)arg8;
- (void)loadConfigs:(id)arg1;
- (unsigned long long)maxTokenLength;
- (unsigned long long)maxTokens;
- (id)predictNamedEntitiesForRequest:(id)arg1;
- (bool)useDropOut;
- (bool)wordCharactersTensorEnabled;
- (bool)wordLengthTensorEnabled;

@end