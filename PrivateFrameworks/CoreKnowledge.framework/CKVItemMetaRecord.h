/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
 */

@interface CKVItemMetaRecord : NSObject <CKVDatabaseRecord> {
    NSNumber * _created;
    NSNumber * _datasetRowId;
    NSNumber * _itemBufferHash;
    NSNumber * _itemIdHash;
    NSNumber * _modified;
    NSNumber * _rank;
    NSUUID * _recordId;
}

@property (nonatomic, readonly) NSNumber *created;
@property (nonatomic, readonly) NSNumber *datasetRowId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNumber *itemBufferHash;
@property (nonatomic, readonly) NSNumber *itemIdHash;
@property (nonatomic, readonly) NSNumber *modified;
@property (nonatomic, readonly) NSNumber *rank;
@property (nonatomic, readonly) NSUUID *recordId;
@property (readonly) Class superclass;

+ (id)genSQLCreateTable;
+ (id)recordFromDatabaseValueRow:(id)arg1;
+ (id)tableName;

- (void).cxx_destruct;
- (id)created;
- (id)datasetRowId;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDatabaseValueRow:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToItemMetaRecord:(id)arg1;
- (id)itemBufferHash;
- (id)itemIdHash;
- (id)modified;
- (id)rank;
- (id)recordId;

@end