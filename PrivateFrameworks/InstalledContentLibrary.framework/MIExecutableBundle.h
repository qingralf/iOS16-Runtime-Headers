/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/InstalledContentLibrary.framework/InstalledContentLibrary
 */

@interface MIExecutableBundle : MIBundle {
    MIBundleContainer * _bundleContainer;
    struct __CFBundle { } * _cfBundle;
    unsigned long long  _codeSignatureVerificationState;
    MICodeSigningInfo * _codeSigningInfo;
    NSError * _codeSigningInfoError;
    MIInstallationIdentity * _installationIdentity;
    unsigned long long  _lsInstallType;
    NSString * _watchKitAppExecutableHash;
    MIPluginKitBundle * _watchKitPlugin;
    MIEmbeddedWatchBundle * _wk2AppBundle;
    NSError * _wk2AppBundleError;
}

@property (nonatomic) MIBundleContainer *bundleContainer;
@property (nonatomic, readonly) struct __CFBundle { }*cfBundle;
@property (nonatomic, readonly) unsigned long long codeSignatureVerificationState;
@property (nonatomic, retain) MICodeSigningInfo *codeSigningInfo;
@property (nonatomic, retain) NSError *codeSigningInfoError;
@property (nonatomic, readonly, copy) NSString *companionAppIdentifier;
@property (nonatomic, readonly) unsigned long long compatibilityState;
@property (nonatomic, readonly, copy) NSArray *counterpartIdentifiers;
@property (nonatomic, readonly) Class dataContainerClass;
@property (nonatomic, readonly) unsigned long long dataContainerContentClass;
@property (nonatomic, readonly) unsigned long long estimatedMemoryUsageToValidate;
@property (nonatomic, readonly, copy) NSString *executableName;
@property (nonatomic, readonly) NSURL *executableURL;
@property (nonatomic, readonly) bool hasSinf;
@property (nonatomic, readonly) bool hasWatchCustomNotification;
@property (nonatomic, readonly) bool hasWatchGlance;
@property (nonatomic, retain) MIInstallationIdentity *installationIdentity;
@property (nonatomic, readonly) bool isExtensionBasedWatchKitApp;
@property (nonatomic, readonly) bool isExtensionlessWatchKitApp;
@property (nonatomic, readonly) bool isWatchOnlyApp;
@property (nonatomic) unsigned long long lsInstallType;
@property (nonatomic, readonly) unsigned int maxLinkedSDKVersion;
@property (nonatomic, readonly) bool minimumWatchOSVersionIsPreV6;
@property (nonatomic, readonly) bool needsSinf;
@property (nonatomic, readonly) NSURL *rootSinfURL;
@property (nonatomic, readonly) NSURL *rootSupfURL;
@property (nonatomic, readonly) NSURL *rootSuppURL;
@property (nonatomic, retain) NSString *watchKitAppExecutableHash;
@property (nonatomic, readonly) bool watchKitAppRunsIndependentlyOfCompanion;
@property (nonatomic, retain) MIPluginKitBundle *watchKitPlugin;
@property (nonatomic, retain) MIEmbeddedWatchBundle *wk2AppBundle;
@property (nonatomic, retain) NSError *wk2AppBundleError;

+ (id)bundlesInParentBundle:(id)arg1 subDirectory:(id)arg2 matchingPredicate:(id /* block */)arg3 error:(id*)arg4;
+ (bool)isGrandfatheredNonContainerizedForSigningInfo:(id)arg1;

- (void).cxx_destruct;
- (id)_codeSigningInfoFromMCM;
- (id)_dataContainerCreatingIfNeeded:(bool)arg1 makeLive:(bool)arg2 checkIfNeeded:(bool)arg3 created:(bool*)arg4 error:(id*)arg5;
- (id)_discoverWatchAppBundleAsPlaceholder:(bool)arg1 error:(id*)arg2;
- (bool)_hasNoConflictWithSystemAppsForSigningInfo:(id)arg1 error:(id*)arg2;
- (bool)_hasNonContainerizingEntitlement:(id)arg1 checkSeatbeltProfiles:(bool)arg2;
- (bool)_hasResource:(id)arg1 withExtension:(id)arg2;
- (int)_installEmbeddedProvisioningProfileAtURL:(id)arg1 withProgress:(id /* block */)arg2;
- (bool)_validateWithError:(id*)arg1;
- (bool)allowsAppExtensionsNotInExtensionCache;
- (void)bestEffortRollbackSinfData:(id)arg1;
- (id)bundleContainer;
- (id)bundleSignatureVersionWithError:(id*)arg1;
- (struct __CFBundle { }*)cfBundle;
- (unsigned long long)codeSignatureVerificationState;
- (id)codeSigningInfo;
- (id)codeSigningInfoByValidatingResources:(bool)arg1 performingOnlineAuthorization:(bool)arg2 ignoringCachedSigningInfo:(bool)arg3 checkingTrustCacheIfApplicable:(bool)arg4 skippingProfileIDValidation:(bool)arg5 error:(id*)arg6;
- (id)codeSigningInfoError;
- (id)companionAppIdentifier;
- (unsigned long long)compatibilityState;
- (id)counterpartIdentifiers;
- (Class)dataContainerClass;
- (unsigned long long)dataContainerContentClass;
- (id)dataContainerCreatingIfNeeded:(bool)arg1 makeLive:(bool)arg2 created:(bool*)arg3 error:(id*)arg4;
- (id)dataContainerWithError:(id*)arg1;
- (void)dealloc;
- (unsigned long long)estimatedMemoryUsageToValidate;
- (id)executableName;
- (id)executableURL;
- (id)fairPlaySinfInfoWithError:(id*)arg1;
- (bool)hasNoConflictsWithOtherInstalledEntitiesForSigningInfo:(id)arg1 error:(id*)arg2;
- (bool)hasOnlyAllowedWatchKitAppInfoPlistKeysForWatchKitVersion:(unsigned char)arg1 error:(id*)arg2;
- (bool)hasSinf;
- (bool)hasWatchCustomNotification;
- (bool)hasWatchGlance;
- (id)initForTesting;
- (id)initWithBundleInContainer:(id)arg1 withExtension:(id)arg2 error:(id*)arg3;
- (int)installEmbeddedProvisioningProfileWithProgress:(id /* block */)arg1;
- (int)installMacStyleEmbeddedProvisioningProfileWithProgress:(id /* block */)arg1;
- (id)installationIdentity;
- (id)installationIdentitySettingIfNotSet:(bool)arg1 withError:(id*)arg2;
- (bool)isExtensionBasedWatchKitApp;
- (bool)isExtensionlessWatchKitApp;
- (bool)isWatchOnlyApp;
- (unsigned long long)lsInstallType;
- (id)lsInstallTypeWithError:(id*)arg1;
- (bool)makeAndSetNewInstallationIdentityWithError:(id*)arg1;
- (bool)makeExecutableWithError:(id*)arg1;
- (unsigned int)maxLinkedSDKVersion;
- (bool)minimumWatchOSVersionIsPreV6;
- (bool)needsDataContainer;
- (bool)needsSinf;
- (void)removeSinf;
- (bool)replicateRootSinfWithError:(id*)arg1;
- (id)rootSinfURL;
- (id)rootSupfURL;
- (id)rootSuppURL;
- (void)setBundleContainer:(id)arg1;
- (void)setBundleParentDirectoryURL:(id)arg1;
- (void)setCodeSigningInfo:(id)arg1;
- (void)setCodeSigningInfoError:(id)arg1;
- (void)setInstallationIdentity:(id)arg1;
- (void)setLsInstallType:(unsigned long long)arg1;
- (void)setWatchKitAppExecutableHash:(id)arg1;
- (void)setWatchKitPlugin:(id)arg1;
- (void)setWk2AppBundle:(id)arg1;
- (void)setWk2AppBundleError:(id)arg1;
- (bool)transferInstallationIdentityFromBundle:(id)arg1 error:(id*)arg2;
- (id)updateAndValidateSinf:(id)arg1 error:(id*)arg2;
- (id)updateAndValidateSinf:(id)arg1 withRollback:(bool)arg2 error:(id*)arg3;
- (bool)updateMCMWithCodeSigningInfoAsAdvanceCopy:(bool)arg1 withError:(id*)arg2;
- (bool)updateSinfWithData:(id)arg1 error:(id*)arg2;
- (bool)validatePluginKitMetadataWithError:(id*)arg1;
- (bool)validateSinfWithError:(id*)arg1;
- (id)watchKitAppBundleForWKVersionOrEarlier:(unsigned char)arg1 error:(id*)arg2;
- (id)watchKitAppExecutableHash;
- (id)watchKitAppExecutableHashWithError:(id*)arg1;
- (bool)watchKitAppRunsIndependentlyOfCompanion;
- (id)watchKitPlugin;
- (id)watchKitPluginWithError:(id*)arg1;
- (id)watchKitV2AppBundleWithError:(id*)arg1;
- (unsigned char)watchKitVersionWithError:(id*)arg1;
- (id)wk2AppBundle;
- (id)wk2AppBundleError;

@end