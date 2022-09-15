/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
 */

@interface CKVSpeechItemRanker : NSObject {
    NSObject<CKVDatabaseReadOnlyAccess> * _database;
    NSMutableArray * _datasets;
}

@property (nonatomic, readonly) NSObject<CKVDatabaseReadOnlyAccess> *database;

+ (id)rankersForGroup:(id)arg1 database:(id)arg2 outOriginAppIds:(id*)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (bool)addDataset:(id)arg1;
- (unsigned int)calculateItemLimit;
- (id)database;
- (id)datasets;
- (id)description;
- (bool)enumerateRankedItemsWithError:(id*)arg1 usingBlock:(id /* block */)arg2;
- (bool)hasDatasets;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDatabase:(id)arg1;
- (bool)isEqual:(id)arg1;

@end