/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKContainerImplementation : NSObject <CKXPCContainerScopedClient> {
    CKAccountOverrideInfo * _accountOverrideInfo;
    NSOperationQueue * _backgroundThrottlingOperationQueue;
    CKContainerSetupInfo * _cachedSetupInfo;
    bool  _captureResponseHTTPHeaders;
    NSMutableArray * _codeServiceImplementations;
    <NSObject> * _connectionInterruptedObserver;
    CKContainerID * _containerID;
    <CKXPCContainerScopedDaemon> * _containerScopedDaemonProxyCreator;
    CKRecordID * _containerScopedUserID_locked;
    NSOperationQueue * _convenienceOperationQueue;
    NSLock * _daemonConnectionLock;
    NSOperationQueue * _discretionaryThrottlingOperationQueue;
    NSXPCConnection * _discretionaryXPCConnection;
    NSNumber * _fakeDeviceToDeviceEncryptionAvailability;
    bool  _hasCachedSetupInfo;
    bool  _hasValidContainerScopedDaemonProxyCreator;
    bool  _hasValidDiscretionaryXPCConnection;
    CKContainerOptions * _options;
    CKRecordID * _orgAdminUserID_locked;
    CKDatabaseImplementation * _organizationCloudDatabaseImplementation;
    NSString * _personaIdentifier;
    CKDatabaseImplementation * _privateCloudDatabaseImplementation;
    CKDatabaseImplementation * _publicCloudDatabaseImplementation;
    CKEntitlements * _resolvedEntitlements;
    NSMutableArray * _sandboxExtensionHandles;
    CKDatabaseImplementation * _sharedCloudDatabaseImplementation;
    NSHashTable * _sharingUIObservers;
    NSString * _sourceApplicationBundleIdentifier;
    NSString * _sourceApplicationSecondaryIdentifier;
    unsigned long long  _stateHandle;
    int  _statusReportToken;
    NSOperationQueue * _throttlingOperationQueue;
    CKContainer * _unconfiguredWrappingContainer;
    NSObject<OS_dispatch_queue> * _underlyingDispatchQueue;
    CKUploadRequestManager * _uploadRequestManager;
}

@property (nonatomic, retain) NSOperationQueue *backgroundThrottlingOperationQueue;
@property (nonatomic, retain) CKContainerSetupInfo *cachedSetupInfo;
@property (nonatomic) bool captureResponseHTTPHeaders;
@property (nonatomic, retain) NSMutableArray *codeServiceImplementations;
@property (nonatomic, copy) CKContainerID *containerID;
@property (nonatomic, readonly, copy) NSString *containerIdentifier;
@property (nonatomic, retain) CKRecordID *containerScopedUserID;
@property (nonatomic, readonly) NSOperationQueue *convenienceOperationQueue;
@property (nonatomic, retain) NSOperationQueue *discretionaryThrottlingOperationQueue;
@property (nonatomic, retain) NSXPCConnection *discretionaryXPCConnection;
@property (nonatomic, retain) NSNumber *fakeDeviceToDeviceEncryptionAvailability;
@property (nonatomic) bool hasCachedSetupInfo;
@property (nonatomic, copy) CKContainerOptions *options;
@property (nonatomic, retain) CKRecordID *orgAdminUserID;
@property (nonatomic, retain) CKDatabaseImplementation *organizationCloudDatabaseImplementation;
@property (nonatomic, copy) NSString *personaIdentifier;
@property (nonatomic, retain) CKDatabaseImplementation *privateCloudDatabaseImplementation;
@property (nonatomic, retain) CKDatabaseImplementation *publicCloudDatabaseImplementation;
@property (nonatomic, retain) CKEntitlements *resolvedEntitlements;
@property (nonatomic, retain) CKDatabaseImplementation *sharedCloudDatabaseImplementation;
@property (nonatomic) int statusReportToken;
@property (nonatomic, retain) NSOperationQueue *throttlingOperationQueue;
@property (nonatomic) CKContainer *unconfiguredWrappingContainer;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *underlyingDispatchQueue;
@property (nonatomic, readonly) CKUploadRequestManager *uploadRequestManager;

+ (void)initialize;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)CKStatusReportArray;
- (id)_discretionaryDaemonMachServiceConnection;
- (void)_scheduleConvenienceOperation:(id)arg1 wrappingContainer:(id)arg2 convenienceConfiguration:(id)arg3;
- (void)_submitEventMetric:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)acceptShareMetadata:(id)arg1 wrappingContainer:(id)arg2 convenienceConfiguration:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)accountInfoWithCompletionHandler:(id /* block */)arg1;
- (void)accountStatusWithCompletionHandler:(id /* block */)arg1;
- (void)addOperation:(id)arg1 wrappingContainer:(id)arg2 convenienceConfiguration:(id)arg3;
- (id)applicationBundleIdentifierForPush;
- (id)backgroundThrottlingOperationQueue;
- (id)cachedSetupInfo;
- (void)cancelUploadRequests;
- (bool)captureResponseHTTPHeaders;
- (void)clearContainerFromMetadataCache;
- (void)clearPILSCacheForLookupInfos:(id)arg1;
- (id)codeServiceImplementationWithName:(id)arg1;
- (id)codeServiceImplementationWithName:(id)arg1 databaseScope:(long long)arg2;
- (id)codeServiceImplementationWithName:(id)arg1 databaseScope:(long long)arg2 serviceInstanceURL:(id)arg3;
- (id)codeServiceImplementationWithName:(id)arg1 serviceInstanceURL:(id)arg2;
- (id)codeServiceImplementations;
- (void)consumeSandboxExtensions:(id)arg1 reply:(id /* block */)arg2;
- (id)containerID;
- (id)containerIdentifier;
- (id)containerScopedUserID;
- (id)convenienceOperationQueue;
- (void)dealloc;
- (void)decryptPersonalInfoOnShare:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)description;
- (id)deviceContext;
- (void)deviceCountWithCompletionHandler:(id /* block */)arg1;
- (void)discoverAllIdentitiesWithWrappingContainer:(id)arg1 convenienceConfiguration:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)discoverUserIdentityWithEmailAddress:(id)arg1 wrappingContainer:(id)arg2 convenienceConfiguration:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)discoverUserIdentityWithPhoneNumber:(id)arg1 wrappingContainer:(id)arg2 convenienceConfiguration:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)discoverUserIdentityWithUserRecordID:(id)arg1 wrappingContainer:(id)arg2 convenienceConfiguration:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)discretionaryThrottlingOperationQueue;
- (id)discretionaryXPCConnection;
- (void)dropDetachedContainersWithCompletionHandler:(id /* block */)arg1;
- (void)dumpDaemonStatusReport;
- (void)dumpDaemonStatusReportToFileHandle:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)fakeDeviceToDeviceEncryptionAvailability;
- (void)fetchAllLongLivedOperationIDsWithCompletionHandler:(id /* block */)arg1;
- (void)fetchCurrentDeviceIDWithCompletionHandler:(id /* block */)arg1;
- (void)fetchCurrentUserBoundaryKeyWithCompletionHandler:(id /* block */)arg1;
- (void)fetchFrameworkCachesDirectoryWithCompletionHandler:(id /* block */)arg1;
- (void)fetchFullNameAndFormattedUsernameOfAccountWithCompletionHandler:(id /* block */)arg1;
- (void)fetchFullNameAndPrimaryEmailOnAccountWithCompletionHandler:(id /* block */)arg1;
- (void)fetchLongLivedOperationWithID:(id)arg1 wrappingContainer:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)fetchOrgAdminUserRecordIDWithCompletionHandler:(id /* block */)arg1;
- (void)fetchServerEnvironment:(id /* block */)arg1;
- (void)fetchShareMetadataWithURL:(id)arg1 wrappingContainer:(id)arg2 convenienceConfiguration:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)fetchShareParticipantWithEmailAddress:(id)arg1 wrappingContainer:(id)arg2 convenienceConfiguration:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)fetchShareParticipantWithLookupInfo:(id)arg1 wrappingContainer:(id)arg2 convenienceConfiguration:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)fetchShareParticipantWithPhoneNumber:(id)arg1 wrappingContainer:(id)arg2 convenienceConfiguration:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)fetchShareParticipantWithUserRecordID:(id)arg1 wrappingContainer:(id)arg2 convenienceConfiguration:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)fetchUserRecordIDWithCompletionHandler:(id /* block */)arg1;
- (void)fetchXPCCriteriaWithCompletionHandler:(id /* block */)arg1;
- (void)getNewWebSharingIdentityDataWithCompletionHandler:(id /* block */)arg1;
- (void)getOutstandingOperationCountWithCompletionHandler:(id /* block */)arg1;
- (void)handleRecordChanged:(id)arg1 changeType:(long long)arg2 record:(id)arg3 error:(id)arg4;
- (void)handleSharingUIUpdatedShare:(id)arg1 recordID:(id)arg2 isDeleted:(bool)arg3 error:(id)arg4 reply:(id /* block */)arg5;
- (bool)hasCachedSetupInfo;
- (id)initWithContainerID:(id)arg1 options:(id)arg2 unconfiguredWrappingContainer:(id)arg3;
- (void)manuallyTriggerUploadRequests;
- (id)options;
- (id)orgAdminUserID;
- (id)organizationCloudDatabaseImplementation;
- (id)personaIdentifier;
- (id)primaryIdentifier;
- (id)privateCloudDatabaseImplementation;
- (id)publicCloudDatabaseImplementation;
- (id)recordChangeProvider;
- (void)registerForAssetRequests:(id /* block */)arg1 packageRequests:(id /* block */)arg2 machServiceName:(id)arg3;
- (void)registerForAssetUploadRequests:(id /* block */)arg1;
- (void)registerForAssetUploadRequests:(id /* block */)arg1 machServiceName:(id)arg2;
- (void)registerForPackageUploadRequests:(id /* block */)arg1;
- (void)registerForPackageUploadRequests:(id /* block */)arg1 machServiceName:(id)arg2;
- (void)reloadAccountWithCompletionHandler:(id /* block */)arg1;
- (void)representativeDataclassEnabledWithCompletionHandler:(id /* block */)arg1;
- (void)requestApplicationPermission:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)resetAllApplicationPermissionsWithCompletionHandler:(id /* block */)arg1;
- (id)resolvedEntitlements;
- (void)serverPreferredPushEnvironmentSynchronous:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)serverPreferredPushEnvironmentWithCompletionHandler:(id /* block */)arg1;
- (id)serverPreferredPushEnvironmentWithError:(id*)arg1;
- (void)setApplicationPermission:(unsigned long long)arg1 enabled:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)setBackgroundThrottlingOperationQueue:(id)arg1;
- (void)setCachedSetupInfo:(id)arg1;
- (void)setCaptureResponseHTTPHeaders:(bool)arg1;
- (void)setCodeServiceImplementations:(id)arg1;
- (void)setContainerID:(id)arg1;
- (void)setContainerScopedUserID:(id)arg1;
- (void)setDiscretionaryThrottlingOperationQueue:(id)arg1;
- (void)setDiscretionaryXPCConnection:(id)arg1;
- (void)setFakeDeviceToDeviceEncryptionAvailability:(id)arg1;
- (void)setFakeError:(id)arg1 forNextRequestOfClassName:(id)arg2;
- (void)setFakeResponseOperationResult:(id)arg1 forNextRequestOfClassName:(id)arg2 forItemID:(id)arg3 withLifetime:(int)arg4;
- (void)setHasCachedSetupInfo:(bool)arg1;
- (void)setOptions:(id)arg1;
- (void)setOrgAdminUserID:(id)arg1;
- (void)setOrganizationCloudDatabaseImplementation:(id)arg1;
- (void)setPersonaIdentifier:(id)arg1;
- (void)setPrivateCloudDatabaseImplementation:(id)arg1;
- (void)setPublicCloudDatabaseImplementation:(id)arg1;
- (void)setResolvedEntitlements:(id)arg1;
- (void)setSharedCloudDatabaseImplementation:(id)arg1;
- (void)setSourceApplicationBundleIdentifier:(id)arg1;
- (void)setSourceApplicationSecondaryIdentifier:(id)arg1;
- (void)setStatusReportToken:(int)arg1;
- (void)setThrottlingOperationQueue:(id)arg1;
- (void)setUnconfiguredWrappingContainer:(id)arg1;
- (void)setUnderlyingDispatchQueue:(id)arg1;
- (id)setupInfo;
- (id)sharedCloudDatabaseImplementation;
- (id)sourceApplicationBundleIdentifier;
- (id)sourceApplicationSecondaryIdentifier;
- (void)statusForApplicationPermission:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)statusGroupsForApplicationPermission:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (int)statusReportToken;
- (void)submitEventMetric:(id)arg1;
- (void)submitEventMetric:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)throttlingOperationQueue;
- (void)tossConfigWithCompletionHandler:(id /* block */)arg1;
- (id)unconfiguredWrappingContainer;
- (id)underlyingDispatchQueue;
- (void)unregisterFromUploadRequests;
- (void)unregisterFromUploadRequestsWithMachServiceName:(id)arg1;
- (id)untrustedEntitlements;
- (id)uploadRequestManager;
- (void)wipeAllCachesAndDie;

@end