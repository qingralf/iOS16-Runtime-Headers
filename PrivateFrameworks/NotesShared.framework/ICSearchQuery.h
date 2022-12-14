/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICSearchQuery : NSObject {
    NSArray * _externalRankingQueries;
    bool  _modernResultsOnly;
    NSDictionary * _queryResults;
    NSString * _queryString;
    ICRankingQueriesDefinition * _rankingQueriesDefinition;
    CSSearchQuery * _searchQuery;
    NSObject<OS_dispatch_semaphore> * _synchronousSemaphore;
    bool  _wasForceStopped;
}

@property (nonatomic, retain) NSArray *externalRankingQueries;
@property (nonatomic) bool modernResultsOnly;
@property (nonatomic, retain) NSDictionary *queryResults;
@property (nonatomic, copy) NSString *queryString;
@property (nonatomic, readonly) NSArray *rankingQueries;
@property (nonatomic, retain) ICRankingQueriesDefinition *rankingQueriesDefinition;
@property (nonatomic, retain) CSSearchQuery *searchQuery;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *synchronousSemaphore;
@property (nonatomic) bool wasForceStopped;

+ (id)defaultAttributesToReturnFromCoreSpotlight;
+ (id)fetchDefaultAttributesForIdentifiers:(id)arg1;
+ (id)fetchModernNoteSearchableItemAttributesFromCoreDataForObjectIDURIs:(id)arg1 context:(id)arg2;
+ (id)queryForClassifiedImages;

- (void).cxx_destruct;
- (void)cancel;
- (id)externalRankingQueries;
- (void)forceStop;
- (id)initWithQueryString:(id)arg1 externalRankingQueries:(id)arg2 modernResultsOnly:(bool)arg3;
- (id)initWithQueryString:(id)arg1 rankingQueriesDefinition:(id)arg2 modernResultsOnly:(bool)arg3;
- (bool)modernResultsOnly;
- (id)queryResults;
- (id)queryString;
- (id)rankingQueries;
- (id)rankingQueriesDefinition;
- (bool)run:(id*)arg1;
- (id)searchQuery;
- (void)setExternalRankingQueries:(id)arg1;
- (void)setModernResultsOnly:(bool)arg1;
- (void)setQueryResults:(id)arg1;
- (void)setQueryString:(id)arg1;
- (void)setRankingQueriesDefinition:(id)arg1;
- (void)setSearchQuery:(id)arg1;
- (void)setSynchronousSemaphore:(id)arg1;
- (void)setWasForceStopped:(bool)arg1;
- (void)setupWithAttributes:(id)arg1;
- (id)synchronousSemaphore;
- (bool)wasForceStopped;

@end
