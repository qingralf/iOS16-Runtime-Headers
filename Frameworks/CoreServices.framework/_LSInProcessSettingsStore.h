/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface _LSInProcessSettingsStore : LSSettingsStore {
    struct sqlite3 { } * _database;
    NSObject<OS_dispatch_queue> * _internalQueue;
}

@property struct sqlite3 { }*database;
@property (readonly) NSObject<OS_dispatch_queue> *internalQueue;

- (void).cxx_destruct;
- (void)_internalQueue_loadDatabase;
- (unsigned char)_internalQueue_selectUserElectionForIdentifier:(id)arg1;
- (struct sqlite3 { }*)database;
- (void)dealloc;
- (id)init;
- (id)internalQueue;
- (void)setDatabase:(struct sqlite3 { }*)arg1;
- (unsigned char)userElectionForExtensionKey:(id)arg1;

@end