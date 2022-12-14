/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHSearchQuery : CHQuery {
    bool  _caseMatchingOnly;
    NSArray * _foundItems;
    bool  _fullWordsOnly;
    NSString * _queryString;
}

@property (nonatomic) bool caseMatchingOnly;
@property (setter=_setFoundItems:, nonatomic, copy) NSArray *foundItems;
@property (nonatomic) bool fullWordsOnly;
@property (nonatomic, copy) NSString *queryString;

- (void).cxx_destruct;
- (void)_enumerateMatchesForStrokeGroupResult:(id)arg1 locales:(id)arg2 queryString:(id)arg3 usingBlock:(id /* block */)arg4;
- (bool)_findMatchingTokenPathInResult:(id)arg1 initialTokenLocation:(struct { long long x1; long long x2; long long x3; })arg2 queryString:(id)arg3 fromIndex:(long long)arg4 coveredStrokeIndexes:(id)arg5 reverseMatchedTokens:(id*)arg6;
- (bool)_isMatchSeparatorBeforeToken:(id)arg1 atLocation:(struct { long long x1; long long x2; long long x3; })arg2 inResult:(id)arg3 queryString:(id)arg4 fromIndex:(long long)arg5 matchedLength:(long long*)arg6;
- (bool)_isMatchStringForToken:(id)arg1 queryString:(id)arg2 fromIndex:(long long)arg3 matchedLength:(long long*)arg4;
- (void)_setFoundItems:(id)arg1;
- (bool)caseMatchingOnly;
- (id)debugName;
- (id)foundItems;
- (bool)fullWordsOnly;
- (id)initWithRecognitionSession:(id)arg1;
- (id)q_foundItemsForSearchString:(id)arg1 sessionResult:(id)arg2;
- (void)q_updateQueryResult;
- (id)queryString;
- (void)setCaseMatchingOnly:(bool)arg1;
- (void)setFullWordsOnly:(bool)arg1;
- (void)setQueryString:(id)arg1;
- (void)stop;

@end
