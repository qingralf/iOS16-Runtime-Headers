/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKBehaviorOptions : NSObject {
    NSString * _automatedDeviceGroup;
    NSUserDefaults * _automatedDeviceGroupDefaults;
    bool  _didReadAutomatedDeviceGroup;
}

@property (nonatomic, retain) NSString *automatedDeviceGroup;
@property bool didReadAutomatedDeviceGroup;

+ (id)sharedOptions;

- (void).cxx_destruct;
- (bool)CFNetworkLogging;
- (const char *)CKCtlPrompt;
- (double)PCSCacheMinTime;
- (unsigned long long)PCSCacheSize;
- (double)PCSCacheValidTime;
- (int)PCSRetryCount;
- (id)_getDictionaryOptionForKey:(id)arg1 defaultValue:(id)arg2;
- (id)_init;
- (void)_setArrayPref:(id)arg1 forKey:(id)arg2;
- (void)_setPref:(id)arg1 forKey:(id)arg2;
- (bool)allowExpiredDNSBehavior;
- (bool)allowKeyRollingInAllContainers;
- (id)altDSIDsToManateeAvailabilitiesOverrides;
- (unsigned long long)assetEvictionGracePeriodOnHighWatermarkWithDefaultValue:(unsigned long long)arg1;
- (unsigned long long)assetEvictionGracePeriodWithDefaultValue:(unsigned long long)arg1;
- (id)automatedDeviceGroup;
- (int)backgroundSessionConnectionPoolLimitWithDefaultValue:(int)arg1;
- (id)buildVersion;
- (int)cachedRecordExpiryTime;
- (int)clientThrottleQueueWidth;
- (bool)compressRequests;
- (id)configBaseURL;
- (id)containerIdentifierToEmailOverrides;
- (id)containerIdentifierToForceFatalManateeZoneDecryptionFailure;
- (id)customCloudDBBaseURL;
- (id)customCodeServiceBaseURL;
- (id)customDeviceServiceBaseURL;
- (id)customMetricsServiceBaseURL;
- (id)customShareServiceBaseURL;
- (void)dealloc;
- (int)defaultRetryAfter;
- (id)deviceCountOverride;
- (bool)didReadAutomatedDeviceGroup;
- (bool)disableCaching;
- (bool)enableMMCSMetricsWithDefaultValue:(bool)arg1;
- (bool)evictRecentAssets;
- (bool)fakeManateeEnabled;
- (bool)fakeManateeOverride;
- (bool)isAppleInternalInstall;
- (bool)isCurrentAppleAccountSuspended;
- (bool)isDeveloperInstall;
- (bool)logTraffic;
- (int)longlivedOperationMaxRetryCount;
- (unsigned long long)maxBatchSize;
- (unsigned long long)maxPackageDownloadsPerBatchWithDefaultValue:(unsigned long long)arg1;
- (unsigned long long)maxPackageUploadsPerBatchWithDefaultValue:(unsigned long long)arg1;
- (long long)maxRecordPCSMasterKeyRolls;
- (unsigned long long)maximumMergeableDeltaRequestSize;
- (double)maximumQueuedFetchWaitTime;
- (double)maximumThrottleSeconds;
- (double)minTTRPromptInterval;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (double)packageGCPeriod;
- (bool)pipelineFetchAllChangesRequests;
- (id)productName;
- (id)productVersion;
- (double)publicIdentitiesExpirationTimeout;
- (unsigned long long)recordCacheEntryCountLimit;
- (double)recordCacheExpireDelay;
- (unsigned long long)recordCacheSizeLimit;
- (id)recordNamesForFakingDecryptionFailure;
- (long long)releaseType;
- (void)resetMaximumMergeableDeltaRequestSize;
- (bool)rollRecordMasterKeysOnUnshare;
- (bool)rollRecordPCSMasterKeys;
- (bool)rollZonePCSIdentities;
- (bool)rollZoneSharingKeys;
- (bool)sandboxCloudD;
- (unsigned long long)savedErrorCount;
- (bool)sendDebugHeader;
- (void)setAllowKeyRollingInAllContainers:(bool)arg1;
- (void)setAltDSIDsToManateeAvailabilitiesOverrides:(id)arg1;
- (void)setAutomatedDeviceGroup:(id)arg1;
- (void)setBuildVersion:(id)arg1;
- (void)setCFNetworkLogging:(bool)arg1;
- (void)setCKCtlPrompt:(char *)arg1;
- (void)setCachedRecordExpiryTime:(int)arg1;
- (void)setCompressRequests:(bool)arg1;
- (void)setConfigBaseURL:(id)arg1;
- (void)setContainerIdentifierToEmailOverrides:(id)arg1;
- (void)setContainerIdentifierToForceFatalManateeZoneDecryptionFailure:(id)arg1;
- (void)setCustomCloudDBBaseURL:(id)arg1;
- (void)setCustomCodeServiceBaseURL:(id)arg1;
- (void)setCustomDeviceServiceBaseURL:(id)arg1;
- (void)setCustomMetricsServiceBaseURL:(id)arg1;
- (void)setCustomShareServiceBaseURL:(id)arg1;
- (void)setDeviceCountOverride:(id)arg1;
- (void)setDidReadAutomatedDeviceGroup:(bool)arg1;
- (void)setDisableCaching:(bool)arg1;
- (void)setFakeManateeEnabled:(bool)arg1;
- (void)setFakeManateeOverride:(bool)arg1;
- (void)setForceUploadRequestActivitiesToRunImmediately:(bool)arg1;
- (void)setIsCurrentAppleAccountSuspended:(bool)arg1;
- (void)setLogTraffic:(bool)arg1;
- (void)setMaximumMergeableDeltaRequestSize:(unsigned long long)arg1;
- (void)setModTimeInAssetCacheEviction:(bool)arg1;
- (void)setOperationTimeout:(double)arg1;
- (void)setOptimisticPCS:(bool)arg1;
- (void)setPCSCacheValidTime:(long long)arg1;
- (void)setProductName:(id)arg1;
- (void)setProductVersion:(id)arg1;
- (void)setRecordNamesForFakingDecryptionFailure:(id)arg1;
- (void)setRollRecordMasterKeysOnUnshare:(bool)arg1;
- (void)setRollRecordPCSMasterKeys:(bool)arg1;
- (void)setRollZonePCSIdentities:(bool)arg1;
- (void)setRollZoneSharingKeys:(bool)arg1;
- (void)setSendDebugHeader:(bool)arg1;
- (void)setSetupBaseURL:(id)arg1;
- (void)setShareURLToAccountIDSystemAcceptationOverrides:(id)arg1;
- (void)setSharingOptionsSummaryString:(id)arg1;
- (void)setShouldProfileSQL:(bool)arg1;
- (void)setSqlBatchCount:(long long)arg1;
- (void)setSqlBatchTime:(double)arg1;
- (void)setTestRunIDHeader:(id)arg1;
- (void)setTrafficLogMaximumDataSize:(int)arg1;
- (void)setTranscoderFunctionName:(id)arg1;
- (void)setTranscoderPermittedRemoteMeasurement:(id)arg1;
- (void)setTranscoderServiceName:(id)arg1;
- (void)setUseEncryption:(bool)arg1;
- (void)setUseEnhancedPCSEncryptionContext:(bool)arg1;
- (void)setUsePreauth:(bool)arg1;
- (void)setUseStingray:(bool)arg1;
- (id)setupBaseURL;
- (double)shareAcceptorRetrievingDialogDelay;
- (double)shareAcceptorRetrievingDialogMinPeriod;
- (id)shareURLToAccountIDSystemAcceptationOverrides;
- (id)sharingOptionsSummaryString;
- (bool)shouldDecryptRecordsBeforeSave;
- (bool)shouldProfileSQL;
- (long long)sqlBatchCount;
- (double)sqlBatchTime;
- (id)testRunIDHeader;
- (id)transcoderFunctionName;
- (id)transcoderPermittedRemoteMeasurement;
- (id)transcoderServiceName;
- (bool)useEncryption;
- (bool)useEnhancedPCSEncryptionContext;
- (bool)useModTimeInAssetCacheEviction;
- (bool)usePreauth;
- (id)vettedEmailsTestFormat;
- (int)xpcConnectionTimeoutSecondsWithDefaultValue:(int)arg1;

@end
