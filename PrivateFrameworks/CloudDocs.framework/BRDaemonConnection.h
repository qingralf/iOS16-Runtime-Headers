/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRDaemonConnection : NSXPCConnection {
    bool  _isUsingTokenService;
    NSUUID * _uuid;
}

+ (void)clearURLCache;
+ (void)clearURLCacheForPersonaID:(id)arg1;
+ (id)cloudDocsAppSupportURL;
+ (id)cloudDocsAppSupportURLForPersonaID:(id)arg1 needsPersonaSwitch:(bool)arg2;
+ (id)cloudDocsCachesURL;
+ (id)cloudDocsCachesURLForPersonaID:(id)arg1 needsPersonaSwitch:(bool)arg2;
+ (id)defaultConnection;
+ (id)defaultConnectionIfExists;
+ (id)homeDirectoryURL;
+ (id)homeDirectoryURLForPersonaID:(id)arg1 needsPersonaSwitch:(bool)arg2;
+ (void)initialize;
+ (void)invalidateCachedURLProperties;
+ (void)invalidateCachedURLPropertiesForPersonaID:(id)arg1;
+ (id)mobileDocumentsURL;
+ (id)mobileDocumentsURLForPersonaID:(id)arg1 needsPersonaSwitch:(bool)arg2;
+ (id)secondaryConnection;
+ (id)secondaryConnectionIfExists;
+ (id)syncedDesktopURL;
+ (id)syncedDesktopURLForPersonaID:(id)arg1 needsPersonaSwitch:(bool)arg2;
+ (id)syncedDocumentsURL;
+ (id)syncedDocumentsURLForPersonaID:(id)arg1 needsPersonaSwitch:(bool)arg2;
+ (id)syncedRootURLs;
+ (id)syncedRootURLsForPersonaID:(id)arg1 needsPersonaSwitch:(bool)arg2;
+ (id)t_connectionForUUID:(id)arg1;
+ (void)t_setDefaultConnection:(id)arg1;
+ (void)t_setMobileDocumentsURL:(id)arg1;

- (void).cxx_destruct;
- (void)_setupAndResume;
- (id)initUsingUserLocalDaemon;
- (id)initUsingUserLocalDaemonTokenService;
- (id)newFPFSSyncProxy;
- (id)newLegacySyncProxy;
- (id)newSyncProxy;
- (id)newSyncTokenProxy;

@end