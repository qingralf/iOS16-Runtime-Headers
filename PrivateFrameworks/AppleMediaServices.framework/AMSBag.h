/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSBag : NSObject <AMSBagProtocol, AMSMescalBagContract, AMSMetricsBagContract> {
    <AMSBagDataSourceProtocol> * _dataSource;
    AMSProcessInfo * _processInfo;
    struct optional<AMSCore::Bag> { 
        union { 
            BOOL __null_state_; 
            struct Bag { 
                int (**_vptr$ILoggable)(); 
                struct shared_ptr<AMSCore::IBagDataSource> { 
                    struct IBagDataSource {} *__ptr_; 
                    struct __shared_weak_count {} *__cntrl_; 
                } mDataSource; 
            } __val_; 
        } ; 
        bool __engaged_; 
    }  _underlyingBag;
}

@property (nonatomic, readonly) AMSBagValue *TFOSamplingPercentage;
@property (nonatomic, readonly) AMSBagValue *TFOSamplingSessionDuration;
@property (nonatomic, readonly) AMSBagValue *TLSSamplingPercentage;
@property (nonatomic, readonly) AMSBagValue *TLSSamplingSessionDuration;
@property (nonatomic, readonly) AMSBagValue *apsAllowedProductTypes;
@property (nonatomic, readonly) AMSBagValue *apsEnabledPatterns;
@property (nonatomic, readonly) AMSBagValue *apsSamplingPercent;
@property (nonatomic, retain) <AMSBagDataSourceProtocol> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *descriptionExtended;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (getter=isExpired, nonatomic, readonly) bool expired;
@property (nonatomic, readonly) AMSBagValue *guidRegexes;
@property (nonatomic, readonly) AMSBagValue *guidSchemes;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) AMSBagValue *mescalCertificateURL;
@property (nonatomic, readonly) <AMSMescalBagContract> *mescalContract;
@property (nonatomic, readonly) AMSBagValue *mescalPrimingURL;
@property (nonatomic, readonly) AMSBagValue *mescalSetupURL;
@property (nonatomic, readonly) AMSBagValue *mescalSignSapRequests;
@property (nonatomic, readonly) AMSBagValue *mescalSignSapResponses;
@property (nonatomic, readonly) AMSBagValue *mescalSignedActions;
@property (nonatomic, readonly) <AMSMetricsBagContract> *metricsContract;
@property (nonatomic, readonly) AMSBagValue *metricsDictionary;
@property (nonatomic, readonly) AMSBagValue *metricsURL;
@property (nonatomic, readonly) AMSBagValue *metricsUrl;
@property (nonatomic, copy) AMSProcessInfo *processInfo;
@property (nonatomic, readonly, copy) NSString *profile;
@property (nonatomic, readonly, copy) NSString *profileVersion;
@property (nonatomic, readonly) AMSBagValue *storefrontSuffix;
@property (readonly) Class superclass;
@property (nonatomic, readonly) AMSBagValue *trustedDomains;
@property (nonatomic) struct optional<AMSCore::Bag> { union { BOOL x_1_1_1; struct Bag { int (**x_2_2_1)(); struct shared_ptr<AMSCore::IBagDataSource> { struct IBagDataSource {} *x_2_3_1; struct __shared_weak_count {} *x_2_3_2; } x_2_2_2; } x_1_1_2; } x1; bool x2; } underlyingBag;

// Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices

+ (void)_resetBagCache;
+ (id)bagCache;
+ (id)bagCacheAccessQueue;
+ (id)bagForProfile:(id)arg1 profileVersion:(id)arg2;
+ (id)bagForProfile:(id)arg1 profileVersion:(id)arg2 processInfo:(id)arg3;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)URLForKey:(id)arg1;
- (id)URLForKey:(id)arg1 account:(id)arg2;
- (id)_temporaryDictionary;
- (id)arrayForKey:(id)arg1;
- (id)boolForKey:(id)arg1;
- (void)createSnapshotWithCompletion:(id /* block */)arg1;
- (id)dataSource;
- (id)description;
- (id)descriptionExtended;
- (id)dictionaryForKey:(id)arg1;
- (id)doubleForKey:(id)arg1;
- (id)expirationDate;
- (id)initWithBag:(struct Bag { int (**x1)(); struct shared_ptr<AMSCore::IBagDataSource> { struct IBagDataSource {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; })arg1 processInfo:(id)arg2;
- (id)initWithDataSource:(id)arg1;
- (id)integerForKey:(id)arg1;
- (bool)isExpired;
- (bool)isLoaded;
- (id)processInfo;
- (id)profile;
- (id)profileVersion;
- (void)setDataSource:(id)arg1;
- (void)setDefaultValue:(id)arg1 forKey:(id)arg2;
- (void)setProcessInfo:(id)arg1;
- (void)setUnderlyingBag:(struct optional<AMSCore::Bag> { union { BOOL x_1_1_1; struct Bag { int (**x_2_2_1)(); struct shared_ptr<AMSCore::IBagDataSource> { struct IBagDataSource {} *x_2_3_1; struct __shared_weak_count {} *x_2_3_2; } x_2_2_2; } x_1_1_2; } x1; bool x2; })arg1;
- (id)stringForKey:(id)arg1;
- (struct optional<AMSCore::Bag> { union { BOOL x_1_1_1; struct Bag { int (**x_2_2_1)(); struct shared_ptr<AMSCore::IBagDataSource> { struct IBagDataSource {} *x_2_3_1; struct __shared_weak_count {} *x_2_3_2; } x_2_2_2; } x_1_1_2; } x1; bool x2; })underlyingBag;

// Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount

+ (id)vs_defaultBag;

// Image: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI

+ (id)amsui_internalBag;

// Image: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit

+ (id)metricsAMSBagWithProfileName:(id)arg1 profileVersion:(id)arg2;

- (id)mescalCertificateURL;
- (id)mescalPrimingURL;
- (id)mescalSetupURL;
- (id)mescalSignSapRequests;
- (id)mescalSignSapResponses;
- (id)mescalSignedActions;
- (id)metricsDictionary;
- (id)trustedDomains;

// Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI

+ (id)vui_defaultBag;

// Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit

+ (void)registerAdditionalBagKey:(id)arg1 withValueType:(unsigned long long)arg2;
+ (id)wlk_defaultBag;

@end
