/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICPlayActivityTable : NSObject {
    ICSQLiteConnection * _databaseConnection;
    NSString * _databasePath;
}

@property (nonatomic) unsigned long long currentEventsRevision;
@property (nonatomic, readonly, copy) NSString *eventsRevisionVersionToken;

+ (id)_defaultDatabasePath;
+ (id)_eventsDatabaseTableName;
+ (void)_migrateDatabaseFiles;
+ (id)_propertiesDatabaseTableName;
+ (bool)_setupDatabase:(id)arg1;

- (void).cxx_destruct;
- (bool)_getPlayActivityEvents:(id*)arg1 relevantRevisionsIndexSet:(id*)arg2 withStartRevision:(unsigned long long)arg3 endRevision:(unsigned long long)arg4 storeAccountID:(unsigned long long)arg5 shouldFilterStoreAccountID:(bool)arg6 additionalRevisionsIndexSet:(id)arg7 ignoredRevisionsIndexSet:(id)arg8 error:(id*)arg9;
- (bool)_removeDatabaseReturningError:(id*)arg1;
- (id)_revisionsIndexSetUsingPersisentIDGenerationBlock:(id /* block */)arg1 count:(unsigned long long)arg2;
- (bool)_setValue:(id)arg1 forDatabasePropertyKey:(id)arg2;
- (id)_valueForDatabasePropertyKey:(id)arg1;
- (unsigned long long)currentEventsRevision;
- (id)eventsRevisionVersionToken;
- (bool)getPlayActivityEvents:(id*)arg1 relevantRevisionsIndexSet:(id*)arg2 withStartRevision:(unsigned long long)arg3 endRevision:(unsigned long long)arg4 additionalRevisionsIndexSet:(id)arg5 ignoredRevisionsIndexSet:(id)arg6 error:(id*)arg7;
- (bool)getPlayActivityEvents:(id*)arg1 relevantRevisionsIndexSet:(id*)arg2 withStartRevision:(unsigned long long)arg3 endRevision:(unsigned long long)arg4 storeAccountID:(unsigned long long)arg5 additionalRevisionsIndexSet:(id)arg6 ignoredRevisionsIndexSet:(id)arg7 error:(id*)arg8;
- (id)init;
- (id)initWithDatabasePath:(id)arg1;
- (bool)insertPlayActivityEvent:(id)arg1 withRevision:(unsigned long long)arg2 returningError:(id*)arg3;
- (void)performTransactionWithBlock:(id /* block */)arg1;
- (bool)removePlayActivityEventsUpToRevision:(unsigned long long)arg1 returningError:(id*)arg2;
- (id)revisionsIndexSetForPlayActivityEventPersistentIDs:(id)arg1;
- (id)revisionsIndexSetForPlayActivityEvents:(id)arg1;
- (void)setCurrentEventsRevision:(unsigned long long)arg1;

@end