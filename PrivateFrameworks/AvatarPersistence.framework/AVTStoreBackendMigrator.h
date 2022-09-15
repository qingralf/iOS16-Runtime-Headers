/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AvatarPersistence.framework/AvatarPersistence
 */

@interface AVTStoreBackendMigrator : NSObject <AVTStoreBackendMigrator> {
    AVTCoreEnvironment * _environment;
    <AVTUILogger> * _logger;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) AVTCoreEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <AVTUILogger> *logger;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)environment;
- (id)initWithEnvironment:(id)arg1;
- (id)logger;
- (bool)migrateContentFromSource:(id)arg1 toDestination:(id)arg2 error:(id*)arg3;
- (id)updatedRecordsForMigratingRecords:(id)arg1 source:(id)arg2 destinationBackend:(id)arg3 error:(id*)arg4;

@end