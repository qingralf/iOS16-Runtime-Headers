/* Generated by RuntimeBrowser.
 */

@protocol FCUserEventHistoryStorageType <NSObject>

@required

- (NSURL *)baseDirectoryURL;
- (void)clearAllSessions;
- (NSDate *)earliestSessionDate;
- (FCUserEventHistoryMetadata *)metadata;
- (NSArray *)prunedSessionIDs;
- (unsigned long long)prunedSessionSize;
- (NSArray *)sessionIDs;
- (NSArray *)sessions;
- (void)setMetadataWithAggregateStoreGenerationTime:(long long)arg1 aggregateTotalCount:(long long)arg2 meanCountOfEvents:(double)arg3 standardDeviationOfEvents:(double)arg4 totalEventsCount:(long long)arg5;
- (unsigned long long)size;
- (void)storeSessionID:(NSString *)arg1 sessionData:(NSData *)arg2;
- (void)writeJSON:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, NSData *, id /* block */, FCUserEventHistorySession *, void*

@end