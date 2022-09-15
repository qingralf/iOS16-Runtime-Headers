/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDBackgroundOperationManagerHelper : HMFObject <HMFLogging>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)addPairingOnAllAccessoriesOfHome:(id)arg1 forSharedUser:(id)arg2;
+ (void)auditSharedUserEntriesInDatabase:(id)arg1;
+ (void)auditSharedUserEntriesInDatabaseForHome:(id)arg1 withCompletionHandler:(id /* block */)arg2;
+ (bool)didAuditTimeExpiredOnThisAccessory:(id)arg1;
+ (void)dumpUsers:(id)arg1 usingTag:(id)arg2;
+ (id)logCategory;
+ (void)removeAllUsersFromAccessory:(id)arg1 withCompletionHandler:(id /* block */)arg2;
+ (void)removePairingOnAllAccessoriesOfHome:(id)arg1 forSharedUser:(id)arg2;
+ (void)scheduleAddPairingForAccessory:(id)arg1 forSharedUser:(id)arg2;
+ (void)scheduleAddPairingForAccessory:(id)arg1 sharedUser:(id)arg2;
+ (void)scheduleFullAuditForAccessory:(id)arg1;
+ (void)scheduleRemovePairingForAccessory:(id)arg1 forSharedUser:(id)arg2;
+ (void)scheduleRemovePairingForAccessory:(id)arg1 sharedUser:(id)arg2;
+ (void)scheduleRemovePairingForAccessory:(id)arg1 usingPairingIdentity:(id)arg2;

@end