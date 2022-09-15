/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICCloudSyncingObjectCryptoStrategyV2 : ICCryptoStrategyBase <ICCloudSyncingObjectCryptoStrategy>

@property (readonly) bool canAuthenticate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) bool hasPassphraseSet;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long intrinsicNotesVersion;
@property (readonly) bool isAuthenticated;
@property (readonly) Class superclass;

- (id)accountDsid;
- (id)accountIdentifier;
- (id)accountKeyWithIdentifier:(id)arg1 createIfNotExist:(bool)arg2;
- (bool)canAuthenticate;
- (bool)canKeyDecrypt:(id)arg1;
- (id)currentAccountKeyIdentifier;
- (void)decryptAndMergeEncryptedJSON:(id)arg1;
- (id)decryptData:(id)arg1;
- (id)decryptObject:(id)arg1;
- (id)decryptSidecarData:(id)arg1;
- (id)decryptedDataFromFileURL:(id)arg1;
- (id)encryptData:(id)arg1;
- (bool)encryptFileFromURL:(id)arg1 toURL:(id)arg2;
- (id)encryptSidecarData:(id)arg1;
- (bool)encryptSidecarFileFromURL:(id)arg1 toURL:(id)arg2;
- (id)encryptedDataFromRecord:(id)arg1;
- (bool)hasPassphraseSet;
- (void)initializeCryptoPropertiesFromObject:(id)arg1;
- (long long)intrinsicNotesVersion;
- (bool)isAuthenticated;
- (bool)isAuthenticatedForBothObjectAndRecord:(id)arg1;
- (bool)isInICloudAccount;
- (bool)isPassphraseCorrect:(id)arg1;
- (bool)isRecordAuthenticated:(id)arg1;
- (void)loadDecryptedValuesIfNecessary;
- (void)mergeEncryptedDataFromRecord:(id)arg1;
- (void)rewrapAndDivergeKeyUsingPassphrase:(id)arg1;
- (void)saveEncryptedJSON;
- (bool)serialize:(id)arg1 toURL:(id)arg2;
- (void)serializeToEncryptedValuesJSON:(id)arg1;
- (id)unwrappedKey;

@end