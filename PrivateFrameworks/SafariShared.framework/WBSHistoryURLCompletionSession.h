/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSHistoryURLCompletionSession : NSObject <WBSURLCompletionDataSource, WBSURLCompletionSessionProtocol> {
    WBSHistoryServiceDatabase * _database;
    WBSHistoryService * _historyService;
    NSObject<OS_dispatch_queue> * _internalQueue;
    WBSURLCompletionDatabase * _urlCompletionDatabase;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_databaseConnectionOptions;
- (void)_ensureDatabaseIsWarmed;
- (void)_getBestMatchesForTypedString:(id)arg1 limit:(unsigned long long)arg2 forQueryID:(long long)arg3 withSearchParameters:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)_matchSnapshotForCompletionMatch:(id)arg1;
- (void)dealloc;
- (void)enumerateMatchDataForTypedStringHint:(id)arg1 options:(unsigned long long)arg2 withBlock:(id /* block */)arg3;
- (id)fakeBookmarkMatchDataWithURLString:(id)arg1 title:(id)arg2 shouldPreload:(bool)arg3;
- (void)getBestMatchesForTypedString:(id)arg1 limit:(unsigned long long)arg2 forQueryID:(long long)arg3 withSearchParameters:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)initWithHistoryService:(id)arg1;

@end
