/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKSQLiteTable : NSObject <CKSQLiteDatabaseKeyValueProperties> {
    NSMutableDictionary * _compiledStatementsByLabel;
    NSString * _dbTableName;
    bool  _logOperations;
    NSString * _logicalTableName;
    NSArray * _primaryKeyProperties;
    struct { 
        struct _opaque_pthread_t {} *accessThread; 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } lock; 
    }  _serializer;
    CKSQLiteDatabase * _strongDB;
    CKSQLiteTableGroup * _tableGroup;
    struct _opaque_pthread_t { long long x1; struct __darwin_pthread_handler_rec {} *x2; BOOL x3[8176]; } * _transactionThread;
}

@property (nonatomic, readonly, copy) NSString *dbTableName;
@property (nonatomic) bool logOperations;
@property (nonatomic, readonly, copy) NSString *logicalTableName;
@property (nonatomic, readonly) NSArray *primaryKeyProperties;
@property (nonatomic) CKSQLiteTableGroup *tableGroup;

+ (id)allPropertyNames;
+ (id)dbProperties;
+ (unsigned long long)dbVersion;
+ (void)decodeEntry:(id)arg1 withCoder:(id)arg2;
+ (id)descriptionOfEntry:(id)arg1;
+ (id)descriptionOfProperties:(id)arg1 from:(id)arg2;
+ (void)encodeEntry:(id)arg1 withCoder:(id)arg2;
+ (bool)entriesHaveEqualProperties:(id)arg1 other:(id)arg2 includePrimaryKeys:(bool)arg3;
+ (Class)entryClass;
+ (void)enumerateClassPropertyDictionariesWithBlock:(id /* block */)arg1;
+ (void)enumeratePropertyDataWithBlock:(id /* block */)arg1;
+ (unsigned int)propertyCount;
+ (id)propertyType:(id)arg1;
+ (void)setValue:(id)arg1 forProperty:(id)arg2 inObject:(id)arg3;
+ (id)valueForProperty:(id)arg1 inObject:(id)arg2;

- (void).cxx_destruct;
- (id)UUIDValueForKey:(id)arg1;
- (void)_addPredicateForMatching:(id)arg1 toStatement:(id)arg2;
- (id)_bindProperties:(id)arg1 valueObject:(id)arg2 inStatement:(id)arg3 includePrimaryKeys:(bool)arg4;
- (id)_fetchPropertiesUsingStatement:(id)arg1 inObject:(id)arg2 matchingDBProperties:(id)arg3 label:(id)arg4;
- (id)_performEnumerationWithBlock:(id /* block */)arg1 usingEnumerator:(id /* block */)arg2;
- (id)_performInsertOrUpdateStatement:(id)arg1 usingObject:(id)arg2;
- (id)_predicateForMatchingProperties:(id)arg1;
- (id)_statementForFetchingEntriesMatchingObject:(id)arg1 label:(id)arg2 error:(id*)arg3 setupBlock:(id /* block */)arg4;
- (id)_valueDictionaryForProperties:(id)arg1 inObject:(id)arg2 nilPropertyError:(id*)arg3 selForNilPropertyError:(SEL)arg4;
- (id)addPredicateToStatement:(id)arg1 predicate:(id /* block */)arg2;
- (void)addTransactionCompletionHandler:(id /* block */)arg1;
- (void)assertNotSerialized;
- (void)assertSerialized;
- (void)cacheStatement:(id)arg1;
- (id)compiledStatementWithLabel:(id)arg1 creationBlock:(id /* block */)arg2;
- (unsigned long long)count:(id*)arg1;
- (unsigned long long)countOfEntriesMatching:(id)arg1 label:(id)arg2 error:(id*)arg3 predicate:(id /* block */)arg4;
- (id)createTableSQL;
- (id)dataValueForKey:(id)arg1;
- (id)dateValueForKey:(id)arg1;
- (id)db;
- (id)dbTableName;
- (void)dealloc;
- (unsigned long long)deleteAllEntries:(id*)arg1;
- (unsigned long long)deleteEntriesMatching:(id)arg1 label:(id)arg2 error:(id*)arg3 predicate:(id /* block */)arg4;
- (id)deleteObject:(id)arg1;
- (id)deletePrimaryKeyValue:(id)arg1;
- (id)entriesMatchingObject:(id)arg1 label:(id)arg2 error:(id*)arg3 setupBlock:(id /* block */)arg4;
- (id)entriesWithValues:(id)arg1 label:(id)arg2 error:(id*)arg3 setupBlock:(id /* block */)arg4;
- (id)entryEnumerator:(id*)arg1;
- (id)entryWithPrimaryKey:(id)arg1 fetchProperties:(id)arg2 error:(id*)arg3;
- (id)entryWithValues:(id)arg1 label:(id)arg2 error:(id*)arg3 setupBlock:(id /* block */)arg4;
- (id)enumerateEntrieswithBlock:(id /* block */)arg1;
- (id)fetchAllEntries:(id*)arg1;
- (id)fetchAllProperties:(id)arg1;
- (id)fetchProperties:(id)arg1 inObject:(id)arg2 matchingDBProperties:(id)arg3 label:(id)arg4;
- (id)fetchProperties:(id)arg1 label:(id)arg2 error:(id*)arg3;
- (id)finishInitializing:(bool)arg1;
- (bool)hasEntries:(id*)arg1;
- (id)init;
- (id)initWithLogicalTableName:(id)arg1;
- (id)insertObject:(id)arg1;
- (id)insertObject:(id)arg1 orUpdateProperties:(id)arg2 label:(id)arg3;
- (void)invalidateCachedStatements;
- (bool)logOperations;
- (id)logicalTableName;
- (id)maximumValueOfProperty:(id)arg1 error:(id*)arg2;
- (id)minimumValueOfProperty:(id)arg1 error:(id*)arg2;
- (id)newEntryObject;
- (id)nonKeyProperties;
- (id)numberValueForKey:(id)arg1;
- (id)objectValueForKey:(id)arg1;
- (id)performInTransaction:(id /* block */)arg1;
- (void)performMaintenance;
- (id)performTransaction:(id /* block */)arg1;
- (id)predicateForMatchingPrimaryKeys;
- (id)primaryKeyProperties;
- (id)primaryKeyValuesInEntry:(id)arg1;
- (void)serializeTable:(id /* block */)arg1;
- (void)setDataValue:(id)arg1 forKey:(id)arg2;
- (void)setDateValue:(id)arg1 forKey:(id)arg2;
- (void)setDb:(id)arg1;
- (void)setDbTableName:(id)arg1;
- (void)setLogOperations:(bool)arg1;
- (void)setNumberValue:(id)arg1 forKey:(id)arg2;
- (void)setObjectValue:(id)arg1 forKey:(id)arg2;
- (unsigned long long)setProperties:(id)arg1 valuesToStore:(id)arg2 inEntriesMatching:(id)arg3 label:(id)arg4 error:(id*)arg5 predicate:(id /* block */)arg6;
- (void)setStringValue:(id)arg1 forKey:(id)arg2;
- (void)setTableGroup:(id)arg1;
- (void)setUUIDValue:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forProperty:(id)arg2 inObject:(id)arg3;
- (long long)sizeOfProperty:(id)arg1 error:(id*)arg2;
- (long long)sizeOfProperty:(id)arg1 inEntriesMatching:(id)arg2 label:(id)arg3 error:(id*)arg4 predicate:(id /* block */)arg5;
- (long long)sizeOfProperty:(id)arg1 inEntry:(id)arg2 label:(id)arg3 error:(id*)arg4;
- (id)statementForFetchingProperties:(id)arg1 inEntriesMatchingColumns:(id)arg2 error:(id*)arg3;
- (id)stringValueForKey:(id)arg1;
- (long long)sumOfProperty:(id)arg1 error:(id*)arg2;
- (long long)sumOfProperty:(id)arg1 inEntriesMatching:(id)arg2 label:(id)arg3 error:(id*)arg4 predicate:(id /* block */)arg5;
- (id)tableGroup;
- (id)updateProperties:(id)arg1 usingObject:(id)arg2 label:(id)arg3;
- (id)updateUsingObject:(id)arg1;
- (id)valueForProperty:(id)arg1 inObject:(id)arg2;

@end
