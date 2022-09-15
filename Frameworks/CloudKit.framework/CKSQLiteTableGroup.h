/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKSQLiteTableGroup : NSObject <CKSQLiteDatabaseKeyValueProperties> {
    NSDate * _activityDate;
    NSString * _creatingClass;
    CKSQLiteDatabase * _db;
    bool  _deleteTablesOnDealloc;
    bool  _didCreateDatabaseTables;
    NSDictionary * _groupData;
    NSNumber * _groupID;
    NSDate * _lastUsed;
    NSString * _name;
    NSDictionary * _tablesByName;
}

@property (nonatomic, retain) NSDate *activityDate;
@property (nonatomic, copy) NSString *creatingClass;
@property (nonatomic, readonly) CKSQLiteDatabase *db;
@property (nonatomic, readonly) bool didCreateDatabaseTables;
@property (nonatomic, copy) NSDictionary *groupData;
@property (nonatomic, retain) NSNumber *groupID;
@property (nonatomic, retain) NSDate *lastUsed;
@property (nonatomic, copy) NSString *name;

+ (id)_tableGroupInDatabase:(id)arg1 withName:(id)arg2 error:(id*)arg3 create:(bool)arg4;
+ (void)enumerateGroupsInDatabase:(id)arg1 block:(id /* block */)arg2;
+ (id)existingTableGroupInDatabase:(id)arg1 withName:(id)arg2 error:(id*)arg3;
+ (double)expirationTime;
+ (void)expireGroup:(id)arg1 reason:(id)arg2;
+ (id)groupNameWithDomain:(int)arg1 domainIdentifier:(id)arg2 groupName:(id)arg3;
+ (void)groupWillExpire:(id)arg1;
+ (void)purgeGroup:(id)arg1;
+ (void)purgeGroupWithName:(id)arg1 inDatabase:(id)arg2;
+ (bool)rebootShouldClearData;
+ (bool)supportsGroupCreation;
+ (id)tableGroupInDatabase:(id)arg1 withName:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)UUIDValueForKey:(id)arg1;
- (void)_deleteTables;
- (id)_lockTables:(id)arg1 andPerformBlock:(id /* block */)arg2;
- (id)_purge;
- (id)activityDate;
- (id)addTable:(id)arg1;
- (id)allTables;
- (id)createDBTables;
- (id)createTables;
- (id)creatingClass;
- (id)dataValueForKey:(id)arg1;
- (id)dateValueForKey:(id)arg1;
- (id)db;
- (id)dbTableNameForLogicalTableName:(id)arg1;
- (void)dealloc;
- (id)description;
- (bool)didCreateDatabaseTables;
- (id)finishInitializing:(bool)arg1;
- (id)groupData;
- (id)groupID;
- (void)groupWillPurge;
- (id)initWithName:(id)arg1;
- (void)invalidateCachedStatements;
- (bool)isInvalid;
- (id)lastUsed;
- (id)migrateDataFromGroup:(id)arg1;
- (id)name;
- (id)numberValueForKey:(id)arg1;
- (id)objectValueForKey:(id)arg1;
- (id)performDataMigration;
- (id)performGroupTransaction:(id /* block */)arg1;
- (void)setActivityDate:(id)arg1;
- (void)setCreatingClass:(id)arg1;
- (void)setDataValue:(id)arg1 forKey:(id)arg2;
- (void)setDateValue:(id)arg1 forKey:(id)arg2;
- (void)setDb:(id)arg1;
- (void)setGroupData:(id)arg1;
- (void)setGroupID:(id)arg1;
- (void)setLastUsed:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNumberValue:(id)arg1 forKey:(id)arg2;
- (void)setObjectValue:(id)arg1 forKey:(id)arg2;
- (void)setStringValue:(id)arg1 forKey:(id)arg2;
- (void)setUUIDValue:(id)arg1 forKey:(id)arg2;
- (id)stringValueForKey:(id)arg1;
- (id)tableWithName:(id)arg1;
- (id)updateGroupData:(id)arg1;
- (void)updateLastUsedDate;
- (long long)validateTables:(id)arg1;

@end