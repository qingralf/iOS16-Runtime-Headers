/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriNaturalLanguageParsing.framework/SiriNaturalLanguageParsing
 */

@interface UPPLAlternativePrediction : NSObject {
    unsigned long long  _alternativeIndex;
    NSArray * _chunkPredictions;
    NSNumber * _nerScore;
}

@property (nonatomic, readonly) unsigned long long alternativeIndex;
@property (nonatomic, readonly) NSArray *chunkPredictions;
@property (nonatomic, readonly) NSNumber *nerScore;

- (void).cxx_destruct;
- (unsigned long long)alternativeIndex;
- (id)chunkPredictions;
- (id)dictionaryRepresentation;
- (id)initWithChunkPredictions:(id)arg1 nerScore:(id)arg2 alternativeIndex:(unsigned long long)arg3;
- (id)nerScore;

@end