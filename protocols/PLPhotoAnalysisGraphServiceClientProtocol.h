/* Generated by RuntimeBrowser.
 */

@protocol PLPhotoAnalysisGraphServiceClientProtocol

@required

- (void)generateSuggestionsWithOptions:(void *)arg1 context:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSDictionary *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)requestAssetCollectionsRelatedToAssetWithLocalIdentifier:(void *)arg1 options:(void *)arg2 context:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: NSString *, NSDictionary *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)requestAssetSearchKeywordsForAssetCollectionUUIDs:(void *)arg1 ofType:(void *)arg2 withOptions:(void *)arg3 context:(void *)arg4 reply:(void *)arg5; // needs 5 arg types, found 11: NSArray *, unsigned long long, NSDictionary *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)requestEnergyStatusWithContext:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)requestGraphSearchMetadataWithOptions:(void *)arg1 context:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSDictionary *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)requestIconicSceneScoreForAssetLocalIdentifiers:(void *)arg1 context:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSArray *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)requestSearchIndexKeywordsForAssetCollectionUUIDs:(void *)arg1 ofType:(void *)arg2 withOptions:(void *)arg3 context:(void *)arg4 reply:(void *)arg5; // needs 5 arg types, found 11: NSArray *, unsigned long long, NSDictionary *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)requestSearchableAssetUUIDsBySocialGroupForAssetCollectionUUIDs:(void *)arg1 ofType:(void *)arg2 isFullAnalysis:(void *)arg3 withOptions:(void *)arg4 context:(void *)arg5 reply:(void *)arg6; // needs 6 arg types, found 12: NSArray *, unsigned long long, bool, NSDictionary *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)requestSignalModelInfosWithContext:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)requestSynonymsDictionariesWithContext:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)requestUpdateFeaturedContentBasedOnUserFeedbackWithContext:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)requestZeroKeywordsWithOptions:(void *)arg1 context:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSDictionary *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)runCurationWithItems:(void *)arg1 options:(void *)arg2 context:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: NSDictionary *, NSDictionary *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*

@end
