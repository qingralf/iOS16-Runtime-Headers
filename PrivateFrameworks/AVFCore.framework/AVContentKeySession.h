/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVContentKeySession : NSObject {
    AVContentKeySessionInternal * _session;
}

@property (readonly) NSData *contentProtectionSessionIdentifier;
@property (readonly) AVContentKeyReportGroup *defaultContentKeyGroup;
@property (readonly) <AVContentKeySessionDelegate> *delegate;
@property (readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (getter=isInternal, nonatomic, readonly) bool internal;
@property (readonly) NSString *keySystem;
@property (readonly) NSURL *storageURL;

+ (id)_uniqueIDForCyptorUUID:(id)arg1 cryptorKeyRequestID:(unsigned long long)arg2;
+ (id)contentKeySessionWithKeySystem:(id)arg1;
+ (id)contentKeySessionWithKeySystem:(id)arg1 storageDirectoryAtURL:(id)arg2;
+ (struct OpaqueFigSecureStopManager { }*)copyDefaultSecureStopManagerForAppIdentifier:(id)arg1 storageDirectoryAtURL:(id)arg2;
+ (void)initialize;
+ (id)pendingExpiredSessionReportsWithAppIdentifier:(id)arg1 storageDirectoryAtURL:(id)arg2;
+ (void)removePendingExpiredSessionReports:(id)arg1 withAppIdentifier:(id)arg2 storageDirectoryAtURL:(id)arg3;

- (id)_contentKeyGroups;
- (id)_contentKeyRequestForCryptorUUID:(id)arg1 cryptorKeyRequestID:(unsigned long long)arg2;
- (void)_handleContentProtectionSessionIdentifierDidChange:(id)arg1;
- (void)_handleExternalProtectionStateChangedCallbackForCryptKeyIdentifier:(id)arg1;
- (void)_handleKeyResponseError:(id)arg1 forCryptorUUID:(id)arg2 andCryptorKeyRequestID:(unsigned long long)arg3;
- (void)_handleKeyResponseSuccessfullyProcessedForCryptorUUID:(id)arg1 andCryptorKeyRequestID:(unsigned long long)arg2;
- (void)_handleRequest:(struct __CFDictionary { }*)arg1 withRequestID:(unsigned long long)arg2 fromHandler:(struct OpaqueFigCustomURLHandler { }*)arg3 willHandleRequest:(bool*)arg4;
- (void)_handleSecureStopDidFinalizeRecordCallback;
- (void)_handleUpdateToPersistentKey:(id)arg1 forKeyIdentifier:(id)arg2;
- (id)_internalQueue;
- (void)_invokeDelegateCallbackWithBlock:(id /* block */)arg1 synchronouslyWhenDelegateQueueIsNULL:(bool)arg2;
- (bool)_makeContentKeyGroupWithIDOut:(long long*)arg1 error:(id*)arg2;
- (long long)_processContentKeyRequestWithIdentifier:(id)arg1 encryptionMode:(int)arg2 supportedProtocolVersions:(id)arg3 groupID:(long long)arg4 error:(id*)arg5;
- (void)_processContentKeyRequestWithIdentifier:(id)arg1 initializationData:(id)arg2 options:(id)arg3 groupID:(long long)arg4;
- (void)_removeContentKeyRequestForCryptorUUID:(id)arg1 cryptorKeyRequestID:(unsigned long long)arg2;
- (long long)_renewKeyWithIdentifier:(id)arg1 encryptionMode:(int)arg2 error:(id*)arg3;
- (void)_sendFinishLoadingForPreloadedKeyRequest:(struct __CFDictionary { }*)arg1 withRequestID:(unsigned long long)arg2 fromHandler:(struct OpaqueFigCustomURLHandler { }*)arg3 error:(id)arg4;
- (void)_setContentKeyRequest:(id)arg1 forCryptorUUID:(id)arg2 cryptorKeyRequestID:(unsigned long long)arg3;
- (void)_setWeakReferenceForContentKeyRequest:(id)arg1 withCryptorUUID:(id)arg2;
- (id)_weakReference;
- (void)_willDeallocOrFinalize;
- (void)addContentKeyRecipient:(id)arg1;
- (bool)clientCanReceivePersistableContentKeyRequest;
- (id)contentKeyRecipients;
- (void)contentKeyRequestDidProduceContentKey:(id)arg1;
- (void)contentKeyRequestDidSucceedWithBoss:(struct CMBaseObject { }*)arg1 keySpecifier:(struct FigContentKeySpecifier { }*)arg2 requestID:(long long)arg3 cryptor:(struct OpaqueFigCPECryptor { }*)arg4;
- (id)contentProtectionSessionIdentifier;
- (struct OpaqueFigCPECryptor { }*)copyCryptorForCryptKeyAttributes:(id)arg1;
- (bool)copyCryptorForFormatDescription:(struct opaqueCMFormatDescription { }*)arg1 cryptorOut:(const struct OpaqueFigCPECryptor {}**)arg2 errorOut:(id*)arg3;
- (const struct OpaqueFigCPECryptor { }*)copyCryptorForInitializationData:(id)arg1;
- (int)createAndInstallCustomURLHandlerForAsset:(id)arg1 outHandler:(struct OpaqueFigCustomURLHandler {}**)arg2;
- (const struct OpaqueFigCPECryptor { }*)createCryptorIfNecessaryForInitializationData:(id)arg1 formatDescription:(struct opaqueCMFormatDescription { }*)arg2 error:(id*)arg3;
- (void)dealloc;
- (id)defaultContentKeyGroup;
- (long long)defaultGroupID;
- (id)delegate;
- (id)delegateQueue;
- (id)description;
- (void)didProvideKeyRequestWithBoss:(struct CMBaseObject { }*)arg1 keySpecifier:(struct FigContentKeySpecifier { }*)arg2 requestID:(long long)arg3 renewalRequest:(bool)arg4;
- (void)expire;
- (void)externalProtectionStateChangedCallbackWithBoss:(struct CMBaseObject { }*)arg1 keySpecifier:(struct FigContentKeySpecifier { }*)arg2;
- (bool)hasProtector;
- (id)init;
- (id)initWithKeySystem:(id)arg1 storageDirectoryAtURL:(id)arg2;
- (id)initWithKeySystem:(id)arg1 storageDirectoryAtURL:(id)arg2 internal:(bool)arg3;
- (id)initWithStorageDirectoryAtURL:(id)arg1;
- (void)invalidateAllPersistableContentKeysForApp:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)invalidatePersistableContentKey:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)isInternal;
- (void)issueContentKeyRequest:(id)arg1;
- (void)issueContentKeyRequest:(id)arg1 toDelegateWithCallbackSelector:(SEL)arg2;
- (id)issueContentKeyRequestForInitializationData:(id)arg1;
- (void)issueContentKeyRequestWithCustomURLHandler:(struct OpaqueFigCustomURLHandler { }*)arg1 identifier:(id)arg2 requestInfo:(struct __CFDictionary { }*)arg3 requestID:(unsigned long long)arg4 providesPersistableKey:(bool)arg5;
- (void)issueContentKeyRequestWithPreloadingRequestOptions:(id)arg1 identifier:(id)arg2 initializationData:(id)arg3 providesPersistableKey:(bool)arg4;
- (void)issueContentKeyRequests:(id)arg1 forInitializationData:(id)arg2;
- (void)issuePersistableContentKeyRequest:(id)arg1;
- (void)issuePersistableContentKeyRequestForKeySpecifier:(struct FigContentKeySpecifier { }*)arg1 initializationData:(id)arg2 keyIDFromInitializationData:(id)arg3 contentIdentifier:(id)arg4 requestID:(long long)arg5 preloadingRequestOptions:(id)arg6 identifier:(id)arg7;
- (void)issueRenewableContentKeyRequest:(id)arg1;
- (id)keyRequestByID:(long long)arg1;
- (id)keySystem;
- (id)makeContentKeyGroup;
- (void)makeSecureTokenForExpirationDateOfPersistableContentKey:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)processContentKeyRequestForPSSHEntries:(id)arg1 initializationData:(id)arg2 groupID:(long long)arg3 options:(id)arg4;
- (void)processContentKeyRequestForSinf:(id)arg1 initializationData:(id)arg2 groupID:(long long)arg3 options:(id)arg4;
- (void)processContentKeyRequestForTransportStreamWithCodecType:(id)arg1 initializationData:(id)arg2 groupID:(long long)arg3 options:(id)arg4;
- (void)processContentKeyRequestWithIdentifier:(id)arg1 initializationData:(id)arg2 options:(id)arg3;
- (void)removeContentKeyRecipient:(id)arg1;
- (void)removeResourcesForID:(long long)arg1;
- (void)renewExpiringResponseDataForContentKeyRequest:(id)arg1;
- (int)setAppIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (id)storageURL;
- (void)trackRequest:(id)arg1 byRequestID:(long long)arg2;

@end
