/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGPhotosChallengeMetricEventFetchHelper : NSObject {
    NSDictionary * _activePersonUUIDByPersonUUID;
    NSDictionary * _assetByAssetIdentifier;
    NSDictionary * _assetByAssetSyndicationIdentifier;
    PGSuggestionSession * _featuredPhotosSuggestionSession;
    PGManager * _manager;
    NSDictionary * _memoryByMemoryIdentifier;
    NSDictionary * _momentUUIDByAssetIdentifier;
    PHPhotoLibrary * _photoLibrary;
    NSDictionary * _questionsByQuestionTypeByEntityType;
    NSSet * _tripKeyAssetIdentifiers;
}

@property (nonatomic, retain) NSDictionary *activePersonUUIDByPersonUUID;
@property (nonatomic, retain) NSDictionary *assetByAssetIdentifier;
@property (nonatomic, retain) NSDictionary *assetByAssetSyndicationIdentifier;
@property (nonatomic, retain) PGSuggestionSession *featuredPhotosSuggestionSession;
@property (nonatomic, retain) NSDictionary *memoryByMemoryIdentifier;
@property (nonatomic, retain) NSDictionary *momentUUIDByAssetIdentifier;
@property (nonatomic, retain) NSDictionary *questionsByQuestionTypeByEntityType;
@property (nonatomic, retain) NSSet *tripKeyAssetIdentifiers;

- (void).cxx_destruct;
- (void)_buildQuestionsByQuestionTypeByEntityTypeFromQuestions:(id)arg1;
- (void)_prefetchActivePersonUUIDByPersonUUID;
- (void)_prefetchAssetByAssetIdentifier;
- (void)_prefetchAssetByAssetSyndicationIdentifier;
- (void)_prefetchMemoryByMemoryIdentifier;
- (void)_prefetchMomentUUIDByAssetIdentifier;
- (void)_prefetchQuestions;
- (void)_prefetchTripKeyAssetIdentifiers;
- (id)activePersonUUIDByPersonUUID;
- (id)assetByAssetIdentifier;
- (id)assetByAssetSyndicationIdentifier;
- (id)featuredPhotosSuggestionSession;
- (id)initForTestingWithQuestions:(id)arg1 assetsByAssetId:(id)arg2 momentUUIDByAssetIdentifier:(id)arg3 activePersonUUIDByPersonUUID:(id)arg4 tripKeyAssetIdentifiers:(id)arg5;
- (id)initWithGraphManager:(id)arg1;
- (id)memoryByMemoryIdentifier;
- (id)momentUUIDByAssetIdentifier;
- (id)questionsByQuestionTypeByEntityType;
- (id)questionsForQuestionMetricType:(unsigned short)arg1;
- (id)questionsForQuestionType:(unsigned short)arg1 questionEntityTypes:(id)arg2;
- (void)setActivePersonUUIDByPersonUUID:(id)arg1;
- (void)setAssetByAssetIdentifier:(id)arg1;
- (void)setAssetByAssetSyndicationIdentifier:(id)arg1;
- (void)setFeaturedPhotosSuggestionSession:(id)arg1;
- (void)setMemoryByMemoryIdentifier:(id)arg1;
- (void)setMomentUUIDByAssetIdentifier:(id)arg1;
- (void)setQuestionsByQuestionTypeByEntityType:(id)arg1;
- (void)setTripKeyAssetIdentifiers:(id)arg1;
- (bool)suggestsToStartSharedLibraryWithError:(id*)arg1;
- (id)tripKeyAssetIdentifiers;

@end