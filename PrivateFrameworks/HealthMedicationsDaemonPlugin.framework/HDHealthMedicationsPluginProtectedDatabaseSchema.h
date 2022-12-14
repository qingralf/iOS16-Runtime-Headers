/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthMedicationsDaemonPlugin.framework/HealthMedicationsDaemonPlugin
 */

@interface HDHealthMedicationsPluginProtectedDatabaseSchema : NSObject <HDHealthMedicationsPluginDatabaseSchema>

@property (nonatomic, readonly) long long currentSchemaVersion;
@property (nonatomic, readonly, copy) NSArray *databaseEntities;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (long long)_sydney_createMedicationDismissedInteractionsTableWithTransaction:(id)arg1 error:(id*)arg2;
- (long long)_sydney_dropAndReAddMedicationScheduleTableWithTransaction:(id)arg1 error:(id*)arg2;
- (long long)_sydney_dropMedicationIngredientsTableWithTransaction:(id)arg1 error:(id*)arg2;
- (long long)currentSchemaVersion;
- (id)databaseEntities;
- (void)registerMigrationStepsWithMigrator:(id)arg1 schemaName:(id)arg2;

@end
