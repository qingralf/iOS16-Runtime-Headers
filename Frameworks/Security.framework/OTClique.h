/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Security.framework/Security
 */

@interface OTClique : NSObject {
    NSString * _cliqueMemberIdentifier;
    OTConfigurationContext * _ctx;
}

@property (nonatomic, copy) NSString *cliqueMemberIdentifier;
@property (nonatomic, readonly) OTConfigurationContext *ctx;

// Image: /System/Library/Frameworks/Security.framework/Security

+ (void)createCustodianRecoveryKey:(id)arg1 uuid:(id)arg2 reply:(id /* block */)arg3;
+ (void)createInheritanceKey:(id)arg1 uuid:(id)arg2 reply:(id /* block */)arg3;
+ (id)fetchEscrowRecordsInternal:(id)arg1 error:(id*)arg2;
+ (id)findOptimalBottleIDsWithContextData:(id)arg1 error:(id*)arg2;
+ (void)generateInheritanceKey:(id)arg1 uuid:(id)arg2 reply:(id /* block */)arg3;
+ (long long)getCDPStatus:(id)arg1 error:(id*)arg2;
+ (bool)isCloudServicesAvailable;
+ (id)newFriendsWithContextData:(id)arg1 error:(id*)arg2;
+ (id)newFriendsWithContextData:(id)arg1 resetReason:(long long)arg2 error:(id*)arg3;
+ (id)performEscrowRecoveryWithContextData:(id)arg1 escrowArguments:(id)arg2 error:(id*)arg3;
+ (bool)platformSupportsSOS;
+ (void)preflightRecoverOctagonUsingCustodianRecoveryKey:(id)arg1 custodianRecoveryKey:(id)arg2 reply:(id /* block */)arg3;
+ (void)preflightRecoverOctagonUsingInheritanceKey:(id)arg1 inheritanceKey:(id)arg2 reply:(id /* block */)arg3;
+ (void)recoverOctagonUsingCustodianRecoveryKey:(id)arg1 custodianRecoveryKey:(id)arg2 reply:(id /* block */)arg3;
+ (void)recoverOctagonUsingData:(id)arg1 recoveryKey:(id)arg2 reply:(id /* block */)arg3;
+ (void)recoverOctagonUsingInheritanceKey:(id)arg1 inheritanceKey:(id)arg2 reply:(id /* block */)arg3;
+ (id)recoverWithContextData:(id)arg1 bottleID:(id)arg2 escrowedEntropy:(id)arg3 error:(id*)arg4;
+ (void)removeCustodianRecoveryKey:(id)arg1 custodianRecoveryKeyUUID:(id)arg2 reply:(id /* block */)arg3;
+ (void)removeInheritanceKey:(id)arg1 inheritanceKeyUUID:(id)arg2 reply:(id /* block */)arg3;
+ (id)resetProtectedData:(id)arg1 error:(id*)arg2;
+ (bool)setCDPEnabled:(id)arg1 error:(id*)arg2;
+ (void)setNewRecoveryKeyWithData:(id)arg1 recoveryKey:(id)arg2 reply:(id /* block */)arg3;
+ (void)storeInheritanceKey:(id)arg1 ik:(id)arg2 reply:(id /* block */)arg3;

- (void).cxx_destruct;
- (long long)_fetchCliqueStatus:(id)arg1 error:(id*)arg2;
- (bool)accountUserKeyAvailable;
- (long long)cachedCliqueStatus:(bool)arg1 error:(id*)arg2;
- (id)cliqueMemberIdentifier;
- (id)copyPeerPeerInfo:(id*)arg1;
- (id)copyViewUnawarePeerInfo:(id*)arg1;
- (id)ctx;
- (id)description;
- (bool)establish:(id*)arg1;
- (long long)fetchCliqueStatus:(id*)arg1;
- (long long)fetchCliqueStatus:(id)arg1 error:(id*)arg2;
- (void)fetchEscrowContents:(id /* block */)arg1;
- (bool)fetchUserControllableViewsSyncingEnabled:(id*)arg1;
- (id)initWithContextData:(id)arg1;
- (bool)isLastFriend:(id*)arg1;
- (bool)joinAfterRestore:(id*)arg1;
- (bool)leaveClique:(id*)arg1;
- (id)makeOTControl:(id*)arg1;
- (id)peerDeviceNamesByPeerID:(id*)arg1;
- (bool)peersHaveViewsEnabled:(id)arg1 error:(id*)arg2;
- (void)performedCDPStateMachineRun:(id)arg1 success:(bool)arg2 error:(id)arg3 reply:(id /* block */)arg4;
- (void)performedFailureCDPStateMachineRun:(id)arg1 error:(id)arg2 reply:(id /* block */)arg3;
- (void)performedSuccessfulCDPStateMachineRun:(id)arg1 reply:(id /* block */)arg2;
- (bool)removeFriendsInClique:(id)arg1 error:(id*)arg2;
- (bool)requestToJoinCircle:(id*)arg1;
- (bool)resetAndEstablish:(long long)arg1 error:(id*)arg2;
- (bool)safariPasswordSyncingEnabled:(id*)arg1;
- (void)setCliqueMemberIdentifier:(id)arg1;
- (bool)setOctagonUserControllableViewsSyncEnabled:(bool)arg1 error:(id*)arg2;
- (bool)setUserControllableViewsSyncStatus:(bool)arg1 error:(id*)arg2;
- (bool)setUserCredentialsAndDSID:(id)arg1 password:(id)arg2 error:(id*)arg3;
- (id)setupPairingChannelAsAcceptor:(id)arg1;
- (id)setupPairingChannelAsAcceptor:(id)arg1 error:(id*)arg2;
- (id)setupPairingChannelAsInitator:(id)arg1 error:(id*)arg2;
- (id)setupPairingChannelAsInitiator:(id)arg1;
- (bool)sosSafariPasswordSyncingEnabled:(id*)arg1;
- (bool)sosViewSet:(id)arg1 disabledViews:(id)arg2;
- (bool)tryUserCredentialsAndDSID:(id)arg1 password:(id)arg2 error:(id*)arg3;
- (bool)viewSet:(id)arg1 disabledViews:(id)arg2;
- (bool)waitForInitialSync:(id*)arg1;
- (bool)waitForOctagonUpgrade:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/OctagonTrust.framework/OctagonTrust

+ (id)fetchAccountWideSettings:(id)arg1 error:(id*)arg2;
+ (id)fetchAllEscrowRecords:(id)arg1 error:(id*)arg2;
+ (id)fetchAndHandleEscrowRecords:(id)arg1 shouldFilter:(bool)arg2 error:(id*)arg3;
+ (id)fetchEscrowRecords:(id)arg1 error:(id*)arg2;
+ (id)filterRecords:(id)arg1;
+ (id)filterViableSOSRecords:(id)arg1;
+ (id)handleRecoveryResults:(id)arg1 recoveredInformation:(id)arg2 record:(id)arg3 performedSilentBurn:(bool)arg4 recoverError:(id)arg5 error:(id*)arg6;
+ (bool)invalidateEscrowCache:(id)arg1 error:(id*)arg2;
+ (id)performEscrowRecovery:(id)arg1 cdpContext:(id)arg2 escrowRecord:(id)arg3 error:(id*)arg4;
+ (id)performSilentEscrowRecovery:(id)arg1 cdpContext:(id)arg2 allRecords:(id)arg3 error:(id*)arg4;
+ (id)recordMatchingLabel:(id)arg1 allRecords:(id)arg2;
+ (id)sortListPrioritizingiOSRecords:(id)arg1;

- (bool)deliverAKDeviceListDelta:(id)arg1 error:(id*)arg2;
- (id)fetchAccountSettings:(id*)arg1;
- (id)fetchTrustedSecureElementIdentities:(id*)arg1;
- (bool)removeLocalSecureElementIdentityPeerID:(id)arg1 error:(id*)arg2;
- (bool)setLocalSecureElementIdentity:(id)arg1 error:(id*)arg2;
- (id)tlkRecoverabilityForEscrowRecord:(id)arg1 error:(id*)arg2;
- (bool)waitForPriorityViewKeychainDataRecovery:(id*)arg1;

@end