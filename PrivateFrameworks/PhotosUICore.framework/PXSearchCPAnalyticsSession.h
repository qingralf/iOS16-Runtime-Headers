/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXSearchCPAnalyticsSession : NSObject {
    unsigned long long  _beginType;
    unsigned long long  _firstAssetActionResultType;
    unsigned long long  _firstAssetActionType;
    unsigned long long  _firstEnteredCollectionResultType;
    bool  _isValid;
    PXSearchActiveSearch * _lastActiveSearch;
    PXSearchQuery * _lastSearch;
    unsigned long long  _numberOfCompletionSelections;
    unsigned long long  _numberOfNextTokenSelections;
    unsigned long long  _numberOfSearches;
    unsigned long long  _numberOfSearchesUntilFirstAssetAction;
    unsigned long long  _numberOfSearchesUntilFirstEnteredCollection;
    unsigned long long  _numberOfSearchesUntilFirstOneUpInTopAssets;
    unsigned long long  _numberOfSearchesUntilFirstSuccess;
    unsigned long long  _numberOfSearchesWithNoResults;
    unsigned long long  _numberOfSearchesWithWordEmbeddings;
    unsigned long long  _numberOfWordEmbeddingSelections;
    double  _startTime;
    bool  _successful;
    double  _timeIntervalFirstAssetAction;
    double  _timeIntervalFirstEnteredCollection;
    double  _timeIntervalFirstOneUpInTopAssets;
    double  _timeIntervalSuccess;
    bool  _userInteractedWithCurrentSearch;
}

@property (nonatomic) unsigned long long beginType;
@property (nonatomic) unsigned long long firstAssetActionResultType;
@property (nonatomic) unsigned long long firstAssetActionType;
@property (nonatomic) unsigned long long firstEnteredCollectionResultType;
@property (nonatomic) bool isValid;
@property (nonatomic, retain) PXSearchActiveSearch *lastActiveSearch;
@property (nonatomic, retain) PXSearchQuery *lastSearch;
@property (nonatomic) unsigned long long numberOfCompletionSelections;
@property (nonatomic) unsigned long long numberOfNextTokenSelections;
@property (nonatomic) unsigned long long numberOfSearches;
@property (nonatomic) unsigned long long numberOfSearchesUntilFirstAssetAction;
@property (nonatomic) unsigned long long numberOfSearchesUntilFirstEnteredCollection;
@property (nonatomic) unsigned long long numberOfSearchesUntilFirstOneUpInTopAssets;
@property (nonatomic) unsigned long long numberOfSearchesUntilFirstSuccess;
@property (nonatomic) unsigned long long numberOfSearchesWithNoResults;
@property (nonatomic) unsigned long long numberOfSearchesWithWordEmbeddings;
@property (nonatomic) unsigned long long numberOfWordEmbeddingSelections;
@property (nonatomic) double startTime;
@property (nonatomic) bool successful;
@property (nonatomic) double timeIntervalFirstAssetAction;
@property (nonatomic) double timeIntervalFirstEnteredCollection;
@property (nonatomic) double timeIntervalFirstOneUpInTopAssets;
@property (nonatomic) double timeIntervalSuccess;
@property (nonatomic) bool userInteractedWithCurrentSearch;

+ (id)_bucketedTimeInterval:(double)arg1;
+ (id)_cappedSearchCount:(unsigned long long)arg1;
+ (id)_stringForActionType:(unsigned long long)arg1;
+ (id)_stringForResultType:(unsigned long long)arg1;
+ (id)_stringForSessionBeginType:(unsigned long long)arg1;
+ (void)logNoSearchResultsFoundSiriSearch;

- (void).cxx_destruct;
- (void)_logSuccess;
- (unsigned long long)beginType;
- (void)endAndInvalidateSession;
- (unsigned long long)firstAssetActionResultType;
- (unsigned long long)firstAssetActionType;
- (unsigned long long)firstEnteredCollectionResultType;
- (id)initWithBeginType:(unsigned long long)arg1;
- (bool)isValid;
- (id)lastActiveSearch;
- (id)lastSearch;
- (void)logActiveSearch:(id)arg1;
- (void)logAssetAction:(unsigned long long)arg1 inResult:(unsigned long long)arg2;
- (void)logEnteredCollectionResult:(unsigned long long)arg1;
- (void)logNoSearchResultsFound;
- (void)logOneUpInTopAssets;
- (void)logSearch:(id)arg1;
- (void)logSearchNextTokenSuggestionTapped;
- (void)logSearchWordCompletionTapped;
- (void)logSearchWordEmbeddingSelected;
- (void)logSearchWordEmbeddingsPresented;
- (unsigned long long)numberOfCompletionSelections;
- (unsigned long long)numberOfNextTokenSelections;
- (unsigned long long)numberOfSearches;
- (unsigned long long)numberOfSearchesUntilFirstAssetAction;
- (unsigned long long)numberOfSearchesUntilFirstEnteredCollection;
- (unsigned long long)numberOfSearchesUntilFirstOneUpInTopAssets;
- (unsigned long long)numberOfSearchesUntilFirstSuccess;
- (unsigned long long)numberOfSearchesWithNoResults;
- (unsigned long long)numberOfSearchesWithWordEmbeddings;
- (unsigned long long)numberOfWordEmbeddingSelections;
- (void)setBeginType:(unsigned long long)arg1;
- (void)setFirstAssetActionResultType:(unsigned long long)arg1;
- (void)setFirstAssetActionType:(unsigned long long)arg1;
- (void)setFirstEnteredCollectionResultType:(unsigned long long)arg1;
- (void)setIsValid:(bool)arg1;
- (void)setLastActiveSearch:(id)arg1;
- (void)setLastSearch:(id)arg1;
- (void)setNumberOfCompletionSelections:(unsigned long long)arg1;
- (void)setNumberOfNextTokenSelections:(unsigned long long)arg1;
- (void)setNumberOfSearches:(unsigned long long)arg1;
- (void)setNumberOfSearchesUntilFirstAssetAction:(unsigned long long)arg1;
- (void)setNumberOfSearchesUntilFirstEnteredCollection:(unsigned long long)arg1;
- (void)setNumberOfSearchesUntilFirstOneUpInTopAssets:(unsigned long long)arg1;
- (void)setNumberOfSearchesUntilFirstSuccess:(unsigned long long)arg1;
- (void)setNumberOfSearchesWithNoResults:(unsigned long long)arg1;
- (void)setNumberOfSearchesWithWordEmbeddings:(unsigned long long)arg1;
- (void)setNumberOfWordEmbeddingSelections:(unsigned long long)arg1;
- (void)setStartTime:(double)arg1;
- (void)setSuccessful:(bool)arg1;
- (void)setTimeIntervalFirstAssetAction:(double)arg1;
- (void)setTimeIntervalFirstEnteredCollection:(double)arg1;
- (void)setTimeIntervalFirstOneUpInTopAssets:(double)arg1;
- (void)setTimeIntervalSuccess:(double)arg1;
- (void)setUserInteractedWithCurrentSearch:(bool)arg1;
- (double)startTime;
- (bool)successful;
- (double)timeIntervalFirstAssetAction;
- (double)timeIntervalFirstEnteredCollection;
- (double)timeIntervalFirstOneUpInTopAssets;
- (double)timeIntervalSuccess;
- (bool)userInteractedWithCurrentSearch;

@end