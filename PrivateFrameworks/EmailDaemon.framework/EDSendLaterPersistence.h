/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

@interface EDSendLaterPersistence : NSObject <EDPersistenceDatabaseSchemaProvider, EFLoggable> {
    EDPersistenceDatabase * _database;
    <EDMessageChangeHookResponder> * _hookResponder;
    NSObject<OS_dispatch_queue> * _writeQueue;
}

@property (nonatomic, retain) EDPersistenceDatabase *database;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <EDMessageChangeHookResponder> *hookResponder;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *writeQueue;

+ (id)log;
+ (id)tablesAndForeignKeysToResolve:(id*)arg1 associationsToResolve:(id*)arg2;

- (void).cxx_destruct;
- (id)database;
- (id)hookResponder;
- (id)initWithDatabase:(id)arg1 hookResponder:(id)arg2;
- (void)persistSendLaterForMessages:(id)arg1 date:(id)arg2;
- (void)setDatabase:(id)arg1;
- (void)setWriteQueue:(id)arg1;
- (id)writeQueue;

@end
