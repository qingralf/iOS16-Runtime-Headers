/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKSQLiteCacheTable : CKSQLiteTable {
    double  _cacheExpirationTime;
    unsigned long long  _cachedEntryCount;
    NSDate * _cachedOldestExpirationDate;
    unsigned long long  _dataSize;
    unsigned long long  _dataSizeLimit;
    bool  _dataSizeLimitEnabled;
    NSArray * _dataSizeProperties;
    unsigned long long  _entryCountLimit;
    bool  _entryCountLimitEnabled;
    bool  _expirationTimeEnabled;
    double  _expireDelay;
    bool  _inTransaction;
    bool  _isDatabaseAvailable;
    bool  _isExpiring;
    NSDate * _lastExpireDate;
    long long  _pendingCountChange;
    long long  _pendingSizeChange;
}

@property (nonatomic, readonly) double cacheExpirationTime;
@property (nonatomic, readonly) unsigned long long dataSizeLimit;
@property (nonatomic, readonly) unsigned long long entryCountLimit;
@property (nonatomic, readonly) double expireDelay;
@property (nonatomic, readonly) NSDate *lastExpireDate;

+ (id)dbProperties;

- (void).cxx_destruct;
- (double)cacheExpirationTime;
- (unsigned long long)dataSizeForEntry:(id)arg1 error:(id*)arg2;
- (unsigned long long)dataSizeLimit;
- (unsigned long long)deleteEntriesMatching:(id)arg1 label:(id)arg2 error:(id*)arg3 predicate:(id /* block */)arg4;
- (unsigned long long)entryCountLimit;
- (void)expire;
- (unsigned long long)expireByCount;
- (unsigned long long)expireByDataSize;
- (unsigned long long)expireByTime:(id)arg1;
- (double)expireDelay;
- (id)extendExpiration:(id)arg1;
- (void)fetchExpirationDate:(id)arg1;
- (id)finishInitializing:(bool)arg1;
- (id)initWithLogicalTableName:(id)arg1 entryCountLimit:(unsigned long long)arg2 dataSizeLimit:(unsigned long long)arg3 expirationTime:(double)arg4 expireDelay:(double)arg5;
- (id)insertObject:(id)arg1;
- (id)lastExpireDate;
- (id)newEntryObject;
- (id)oldestExpirationDate;
- (id)oldestFirstEnumerator;
- (id)performTransaction:(id /* block */)arg1;
- (void)periodicExpire;
- (void)setCacheExpirationTime:(double)arg1;
- (void)setDataSizeLimit:(unsigned long long)arg1;
- (void)setEntryCountLimit:(unsigned long long)arg1;
- (id)setEntryExpiration:(id)arg1 date:(id)arg2;
- (unsigned long long)setProperties:(id)arg1 valuesToStore:(id)arg2 inEntriesMatching:(id)arg3 label:(id)arg4 error:(id*)arg5 predicate:(id /* block */)arg6;

@end