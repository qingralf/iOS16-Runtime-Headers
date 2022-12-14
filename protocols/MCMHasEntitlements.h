/* Generated by RuntimeBrowser.
 */

@protocol MCMHasEntitlements

@required

- (bool)allowed;
- (NSSet *)appGroupIdentifiers;
- (bool)canControlCaches;
- (bool)canDelete;
- (bool)canDeleteContainerContent;
- (bool)canManageUserManagedAssets;
- (bool)canPerformDataMigration;
- (bool)canReadReferences;
- (bool)canReadWriteReferences;
- (bool)canRepair;
- (bool)canStageSharedContent;
- (NSString *)containerRequiredIdentifier;
- (NSDictionary *)copyEntitlementsDictionaryByAddingGroupContainerOfClass:(unsigned long long)arg1 groupIdentifier:(NSString *)arg2;
- (NSDictionary *)copyEntitlementsDictionaryByRemovingGroupContainerOfClass:(unsigned long long)arg1 groupIdentifier:(NSString *)arg2;
- (bool)hasSystemContainer;
- (int)intendedDataProtectionClass;
- (bool)isEntitledForLookupWithClass:(unsigned long long)arg1 identifier:(NSString *)arg2;
- (bool)isOwnerOfContainerWithClass:(unsigned long long)arg1 identifier:(NSString *)arg2;
- (NSSet *)lookupForContainerClass:(unsigned long long)arg1;
- (bool)otherIDLookup;
- (bool)privileged;
- (bool)proxyAllowed;
- (void)prune;
- (NSDictionary *)rawEntitlements;
- (bool)requestsNoContainer;
- (NSSet *)systemGroupIdentifiers;
- (bool)testabilityAllowed;

@end
