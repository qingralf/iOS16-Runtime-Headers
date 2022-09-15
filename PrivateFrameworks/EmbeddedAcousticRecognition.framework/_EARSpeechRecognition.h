/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

@interface _EARSpeechRecognition : NSObject <NSCopying> {
    NSArray * _interpretationIndices;
    NSArray * _tokenSausage;
}

@property (nonatomic, readonly, copy) NSArray *interpretationIndices;
@property (nonatomic, copy) NSArray *tokenSausage;

- (void).cxx_destruct;
- (id)_initWithNBestList:(const void*)arg1 useHatText:(bool)arg2;
- (id)_initWithTokenPhraseChoiceList:(const void*)arg1;
- (id)_initWithTokenSausage:(id)arg1 interpretationIndices:(id)arg2;
- (struct pair<std::vector<std::vector<unsigned int>>, std::vector<std::vector<std::vector<quasar::Token>>>> { struct vector<std::vector<unsigned int>, std::allocator<std::vector<unsigned int>>> { void *x_1_1_1; void *x_1_1_2; struct __compressed_pair<std::vector<unsigned int> *, std::allocator<std::vector<unsigned int>>> { void *x_3_2_1; } x_1_1_3; } x1; struct vector<std::vector<std::vector<quasar::Token>>, std::allocator<std::vector<std::vector<quasar::Token>>>> { void *x_2_1_1; void *x_2_1_2; struct __compressed_pair<std::vector<std::vector<quasar::Token>> *, std::allocator<std::vector<std::vector<quasar::Token>>>> { void *x_3_2_1; } x_2_1_3; } x2; })_tokenPhraseChoiceList;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)granularizedRecognition;
- (unsigned long long)hash;
- (id)interpretationIndices;
- (bool)isEqual:(id)arg1;
- (id)nBest;
- (id)oneBest;
- (void)setTokenSausage:(id)arg1;
- (id)tokenSausage;

@end