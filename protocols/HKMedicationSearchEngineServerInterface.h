/* Generated by RuntimeBrowser.
 */

@protocol HKMedicationSearchEngineServerInterface <HKUnitTestingTaskServerInterface>

@required

- (void)remote_fetchMedicationClusterWithMachineReadableCode:(void *)arg1 codeAttributeType:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HKMedicationSearchResult *, NSError *, void*
- (void)remote_fetchMedicationClustersForCHRImportWithExistingMedications:(void *)arg1 sinceDate:(void *)arg2 limit:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSArray *, NSDate *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)remote_fetchMedicationClustersWithScanResult:(void *)arg1 limit:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSArray *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)remote_fetchMedicationClustersWithTextSearchTokens:(void *)arg1 limit:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSArray *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*

@end
