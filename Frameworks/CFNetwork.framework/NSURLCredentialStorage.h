/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSURLCredentialStorage : NSObject {
    NSURLCredentialStorageInternal * _internal;
}

@property (nonatomic) bool _useSystemKeychain;
@property (readonly, copy) NSDictionary *allCredentials;
@property (nonatomic, readonly) NSArray *safari_allPasswordManagerSidecarEntriesInPersonalKeychain;
@property (nonatomic, readonly) NSDictionary *safari_allSafariCredentials;

// Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork

+ (id)sharedCredentialStorage;

- (struct _CFURLCredentialStorage { }*)_CFURLCredentialStorage;
- (id)_allCredentialsWithAccessControlGroup:(id)arg1 includeLegacyKeychain:(bool)arg2;
- (id)_initWithCFURLCredentialStorage:(struct _CFURLCredentialStorage { }*)arg1;
- (id)_initWithIdentifier:(id)arg1 private:(bool)arg2;
- (bool)_useSystemKeychain;
- (id)allCredentials;
- (id)credentialsForProtectionSpace:(id)arg1;
- (void)dealloc;
- (id)defaultCredentialForProtectionSpace:(id)arg1;
- (void)getCredentialsForProtectionSpace:(id)arg1 task:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)getDefaultCredentialForProtectionSpace:(id)arg1 task:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (void)removeCredential:(id)arg1 forProtectionSpace:(id)arg2;
- (void)removeCredential:(id)arg1 forProtectionSpace:(id)arg2 options:(id)arg3;
- (void)removeCredential:(id)arg1 forProtectionSpace:(id)arg2 options:(id)arg3 task:(id)arg4;
- (void)setCredential:(id)arg1 forProtectionSpace:(id)arg2;
- (void)setCredential:(id)arg1 forProtectionSpace:(id)arg2 task:(id)arg3;
- (void)setDefaultCredential:(id)arg1 forProtectionSpace:(id)arg2;
- (void)setDefaultCredential:(id)arg1 forProtectionSpace:(id)arg2 task:(id)arg3;
- (void)set_useSystemKeychain:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore

- (id)_formattedLabelWithHost:(id)arg1 user:(id)arg2;
- (id)safari_allPasswordManagerSidecarEntriesInPersonalKeychain;
- (id)safari_allSafariCredentials;
- (void)safari_deleteSynchronizableCredentialWithEmptyServerHost:(id)arg1 forHTMLFormProtectionSpace:(id)arg2;
- (void)safari_deleteSynchronizableSidecarForCredential:(id)arg1 forHTMLFormProtectionSpace:(id)arg2;
- (void)safari_setDefaultCredential:(id)arg1 forHTMLFormProtectionSpace:(id)arg2;
- (void)safari_setSynchronizableCredential:(id)arg1 forHTMLFormProtectionSpace:(id)arg2;
- (void)safari_setSynchronizableSidecar:(id)arg1 credential:(id)arg2 forHTMLFormProtectionSpace:(id)arg3;

@end
