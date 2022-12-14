/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

@interface PSUI5GStandaloneCache : NSObject <CoreTelephonyClientCarrierBundleDelegate, CoreTelephonyClientDataDelegate, CoreTelephonyClientRegistrationDelegate> {
    NSMutableDictionary * _SACapabilityDict;
    NSMutableDictionary * _SAEnabledDict;
    NSMutableDictionary * _SAStatusDict;
    bool  _cacheNeedsRefresh;
    CoreTelephonyClient * _client;
    PSSimStatusCache * _simStatusCache;
}

@property (retain) NSMutableDictionary *SACapabilityDict;
@property (retain) NSMutableDictionary *SAEnabledDict;
@property (retain) NSMutableDictionary *SAStatusDict;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)SACapabilityDict;
- (id)SAEnabledDict;
- (id)SAStatusDict;
- (void)carrierBundleChange:(id)arg1;
- (void)clearCache;
- (void)clearCacheAndRefresh;
- (void)currentDataSimChanged:(id)arg1;
- (void)dealloc;
- (void)fetch5GSupportAndEnabledStatusIfNeeded;
- (void)fetchNRDisableStatus;
- (id)getLogger;
- (unsigned long long)getUserInteractableStatusReasonMaskForContext:(id)arg1;
- (id)init;
- (id)initPrivate;
- (id)initWithCoreTelephonyClient:(id)arg1 simStatusCache:(id)arg2;
- (bool)is5GSAEnabledForContext:(id)arg1;
- (bool)is5GSASupportedForContext:(id)arg1;
- (bool)is5GSASwitchUserInteractableForContext:(id)arg1;
- (void)notifyClientsNeedRefresh;
- (void)nrDisableStatusChanged:(id)arg1 status:(id)arg2;
- (id)set5GSAEnabled:(bool)arg1 forContext:(id)arg2;
- (void)setSACapabilityDict:(id)arg1;
- (void)setSAEnabledDict:(id)arg1;
- (void)setSAStatusDict:(id)arg1;
- (void)willEnterForeground;

@end
