/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

@interface WBSSavedAccountStore : NSObject <WBSAuthenticationServicesAgentDelegate, WBSSavedAccountStorePasskeyExtras> {
    NSMutableDictionary * _allSavedAccountsHighLevelDomainToUsernameToCredentialTypesToSavedAccounts;
    WBSAuthenticationServicesAgentProxy * _authenticationServicesAgentProxy;
    bool  _hasPasskeysEligibleForAutoFill;
    bool  _hasPasswordsEligibleForAutoFill;
    NSMutableDictionary * _highLevelDomainToLegacyPlatformAuthenticatorCredentials;
    WBSKeychainCredentialNotificationMonitor * _keychainMonitor;
    id  _keychainNotificationRegistrationToken;
    NSArray * _passkeysDataInPersonalKeychain;
    NSMutableDictionary * _personalKeychainHighLevelDomainToUsernameToPasswordToSavedAccounts;
    NSObject<OS_dispatch_queue> * _queue;
    NSArray * _savedAccounts;
    NSArray * _savedAccountsWithPasswords;
}

@property (nonatomic, readonly) WBSAuthenticationServicesAgentProxy *authenticationServicesAgentProxy;
@property (nonatomic, readonly) bool hasPasskeysEligibleForAutoFill;
@property (nonatomic, readonly) bool hasPasswordsEligibleForAutoFill;
@property (nonatomic, readonly) NSSet *highLevelDomainsOfAllSavedAccountsExcludingNeverSaveMarkerPasswords;
@property (nonatomic, readonly) NSSet *highLevelDomainsOfAllSavedAccountsWithPasswordsExcludingNeverSaveMarkerPasswords;
@property (nonatomic, readonly) NSArray *savedAccounts;
@property (nonatomic, readonly) NSArray *savedAccountsExcludingNeverSaveMarkerPasswords;
@property (nonatomic, readonly) NSArray *savedAccountsWithPasswords;
@property (nonatomic, readonly) NSArray *savedAccountsWithPasswordsExcludingNeverSaveMarkerPasswords;

// Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore

+ (id)allPasskeysData;
+ (void)removeCredentialTypes:(long long)arg1 forSavedAccount:(id)arg2;
+ (id)sharedStore;

- (void).cxx_destruct;
- (id)_allInternetPasswordEntriesFromPersonalKeychain;
- (id)_allSidecarsFromPersonalKeychain;
- (bool)_canChangeSavedAccountInPersonalKeychain:(id)arg1 toUser:(id)arg2 password:(id)arg3;
- (bool)_canMergeSavedAccount:(id)arg1 withOtherSavedAccountWithoutSidecarConflict:(id)arg2;
- (void)_cleanUpRedundantCredentialsWithoutUsernames;
- (void)_ensureDomainsToUsersExists;
- (void)_fetchAndFilterAllPasskeysData;
- (id)_fetchCurrentAutoFillPasskeysWithCriteria:(id)arg1;
- (id)_getSavedAccountMatchesFromSavedAccountTreeMatchesOnInternalQueue:(id)arg1 withCriteria:(id)arg2 mergingAutoFillPasskeys:(id)arg3 nearbyDeviceOptions:(id)arg4;
- (id)_getSavedAccountTreeMatchesWithCriteriaOnInternalQueue:(id)arg1;
- (id)_getSavedAccountsMatchingCriteriaOnInternalQueue:(id)arg1;
- (id)_loadAndMergeSavedAccountsFromPersonalKeychainIntoAllSavedAccounts:(id)arg1;
- (id)_loadSavedAccounts;
- (id)_loadSavedAccountsWithPasskeysFromPasskeyData:(id)arg1 withDictionaryForSavedAccountsWithPasskeys:(id)arg2;
- (id)_loadSavedAccountsWithPasswordsFromKeychainData:(id)arg1 withDictionaryForSavedAccountsWithPasswords:(id)arg2;
- (id)_mergeLoadedSavedAccounts:(id)arg1 intoAllSavedAccounts:(id)arg2;
- (void)_mergeSavedAccountWithPasskey:(id)arg1 toSavedAccountWithPassword:(id)arg2;
- (void)_mergeSavedAccountWithPassword:(id)arg1 toSavedAccountWithPasskey:(id)arg2;
- (id)_mergeSavedAccountsWithPasskeys:(id)arg1 andSavedAccountsWithPasswords:(id)arg2 usingDictionaryForSavedAccountsWithPasswords:(id)arg3 dictionaryForSavedAccountsWithPasskeys:(id)arg4;
- (id)_persistentIdentifierForUser:(id)arg1 host:(id)arg2;
- (void)_postSavedAccountStoreDidChangeNotification;
- (void)_pruneSavedAccountTreeMatchesOnInternalQueue:(id)arg1 basedOnUsernameAndPasswordCriteria:(id)arg2 autoFillPasskeyIdentifiers:(id)arg3;
- (void)_removeSavedAccount:(id)arg1 fromCachedCollectionsForCredentialTypes:(long long)arg2;
- (void)_removeSidecarObjectsOnInternalQueueForSavedAccount:(id)arg1 withBlock:(id /* block */)arg2;
- (id)_saveAccountOnInternalQueueWithUser:(id)arg1 password:(id)arg2 protectionSpace:(id)arg3 highLevelDomain:(id)arg4;
- (void)_saveSidecarObjectsOnInternalQueueForSavedAccount:(id)arg1 withBlock:(id /* block */)arg2;
- (void)_saveSidecarObjectsOnInternalQueueForSavedAccountWithPassword:(id)arg1 withBlock:(id /* block */)arg2;
- (void)_saveSidecarOnInternalQueueForSavedAccountWithPasskey:(id)arg1 withBlock:(id /* block */)arg2;
- (id)_saveUser:(id)arg1 passkeyCredential:(id)arg2 passkeyRelyingPartyID:(id)arg3;
- (id)_savedAccountForProtectionSpace:(id)arg1 user:(id)arg2 password:(id)arg3;
- (id)_savedAccounts;
- (id)_savedAccountsWithPasswords;
- (id)_sidecarsFromKeychainSidecarData:(id)arg1;
- (void)_updateLastOneTimeShareDateforSavedAccountIfNeeded:(id)arg1;
- (void)_updateSavedAccountsAndSavedAccountsWithPasswordsDictionary:(id)arg1 withChangeFromOldUser:(id)arg2 oldPassword:(id)arg3 forSavedAccountWithPassword:(id)arg4;
- (id)authenticationServicesAgentProxy;
- (bool)canChangeSavedAccount:(id)arg1 toUser:(id)arg2 password:(id)arg3;
- (bool)canChangeSavedAccountWithRequest:(id)arg1;
- (bool)canSaveUser:(id)arg1 password:(id)arg2 forProtectionSpace:(id)arg3 highLevelDomain:(id)arg4;
- (bool)canSaveUser:(id)arg1 password:(id)arg2 forUserTypedSite:(id)arg3;
- (void)changeSavedAccount:(id)arg1 toUser:(id)arg2 password:(id)arg3;
- (void)changeSavedAccountWithRequest:(id)arg1;
- (void)dealloc;
- (void)getSavedAccountsMatchingCriteria:(id)arg1 withSynchronousCompletionHandler:(id /* block */)arg2;
- (bool)hasPasskeysEligibleForAutoFill;
- (bool)hasPasswordsEligibleForAutoFill;
- (id)highLevelDomainsOfAllSavedAccountsExcludingNeverSaveMarkerPasswords;
- (id)highLevelDomainsOfAllSavedAccountsWithPasswordsExcludingNeverSaveMarkerPasswords;
- (id)init;
- (id)initWithAuthenticationServicesAgentProxy:(id)arg1;
- (void)newPasskeysAvailableForApplicationIdentifier:(id)arg1;
- (unsigned long long)numberOfSavedAccountsForHighLevelDomain:(id)arg1;
- (id)persistentIdentifierForCredential:(id)arg1 protectionSpace:(id)arg2;
- (id)persistentIdentifierForSavedAccount:(id)arg1;
- (void)removeCredentialTypes:(long long)arg1 forSavedAccount:(id)arg2;
- (void)removeHideWarningMarkerForSavedAccount:(id)arg1;
- (void)removeLegacyPlatformCredentialsForDomains:(id)arg1;
- (void)removeSite:(id)arg1 fromSavedAccountWithPassword:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)removeTOTPGenerator:(id)arg1 forSavedAccount:(id)arg2;
- (void)reset;
- (void)resetHiddenSecurityRecommendationsWithCompletionHandler:(id /* block */)arg1;
- (void)saveHideMarker:(id)arg1 forSavedAccount:(id)arg2;
- (void)saveNotesEntry:(id)arg1 forSavedAccount:(id)arg2;
- (void)saveTOTPGenerator:(id)arg1 forSavedAccount:(id)arg2;
- (id)saveUser:(id)arg1 password:(id)arg2 forProtectionSpace:(id)arg3 highLevelDomain:(id)arg4;
- (id)saveUser:(id)arg1 password:(id)arg2 forUserTypedSite:(id)arg3;
- (id)savedAccountForURL:(id)arg1 user:(id)arg2 password:(id)arg3;
- (id)savedAccountForURLCredential:(id)arg1 protectionSpace:(id)arg2;
- (id)savedAccountWithAllMetadataForURLCredential:(id)arg1 protectionSpace:(id)arg2;
- (void)savedAccountWithAllMetadataForURLCredential:(id)arg1 protectionSpace:(id)arg2 completion:(id /* block */)arg3;
- (id)savedAccounts;
- (id)savedAccountsExcludingNeverSaveMarkerPasswords;
- (id)savedAccountsForPersistentIdentifiers:(id)arg1;
- (void)savedAccountsMatchingCriteria:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)savedAccountsWithPasswords;
- (id)savedAccountsWithPasswordsExcludingNeverSaveMarkerPasswords;
- (void)setDontSaveMarkerForSavedAccountsWithProtectionSpace:(id)arg1;
- (void)setSavedAccountAsDefault:(id)arg1 forProtectionSpace:(id)arg2;

// Image: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices

+ (id)_passkeyDataForPasskeyCredentialID:(id)arg1;
+ (id)allPasskeysData;
+ (void)deletePasskeyWithIdentifier:(id)arg1;
+ (id)exportPasskeyCredentialWithID:(id)arg1;
+ (id)importPasskeyCredential:(id)arg1;
+ (id)passkeyDataForPasskeyCredentialID:(id)arg1;
+ (void)updateUserVisibleName:(id)arg1 forPasskeyWithIdentifier:(id)arg2;

@end