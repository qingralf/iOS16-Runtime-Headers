/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHCandidateRefinementStep : CHPostprocessingStep {
    bool  _shouldKeepAlternativeLengths;
    bool  _shouldKeepDuplicateTokenIDs;
    bool  _shouldKeepOriginalSpelling;
    bool  _shouldKeepOutOfLexiconAlternatives;
    bool  _shouldKeepOutOfPatternCandidates;
    bool  _shouldKeepSubstrings;
}

@property (nonatomic) bool shouldKeepAlternativeLengths;
@property (nonatomic) bool shouldKeepDuplicateTokenIDs;
@property (nonatomic) bool shouldKeepOriginalSpelling;
@property (nonatomic) bool shouldKeepOutOfLexiconAlternatives;
@property (nonatomic) bool shouldKeepOutOfPatternCandidates;
@property (nonatomic) bool shouldKeepSubstrings;

- (id)initWithShouldKeepOutOfPatternCandidates:(bool)arg1 shouldKeepDuplicateTokenIDs:(bool)arg2 shouldKeepOutOfLexiconAlternatives:(bool)arg3 shouldKeepAlternativeLengths:(bool)arg4 shouldKeepSubstrings:(bool)arg5 shouldKeepOriginalSpelling:(bool)arg6;
- (id)process:(id)arg1 options:(id)arg2;
- (void)setShouldKeepAlternativeLengths:(bool)arg1;
- (void)setShouldKeepDuplicateTokenIDs:(bool)arg1;
- (void)setShouldKeepOriginalSpelling:(bool)arg1;
- (void)setShouldKeepOutOfLexiconAlternatives:(bool)arg1;
- (void)setShouldKeepOutOfPatternCandidates:(bool)arg1;
- (void)setShouldKeepSubstrings:(bool)arg1;
- (bool)shouldKeepAlternativeLengths;
- (bool)shouldKeepDuplicateTokenIDs;
- (bool)shouldKeepOriginalSpelling;
- (bool)shouldKeepOutOfLexiconAlternatives;
- (bool)shouldKeepOutOfPatternCandidates;
- (bool)shouldKeepSubstrings;

@end
