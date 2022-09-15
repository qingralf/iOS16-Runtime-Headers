/* Generated by RuntimeBrowser.
 */

@protocol NSPServerCommands <NSObject>

@optional

- (void)convertPrivacyProxyConfigurationWithCompletionHandler:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)establishTrustWithEdgeSetForIdentifier:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)fetchAppRuleForLabel:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)fetchCurrentConfigurationWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSPConfiguration *, void*
- (void)fetchEdgeSetForIdentifier:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)fetchPrivateAccessTokenWithFetcher:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSPPrivateAccessTokenFetcher *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)fetchStateForClient:(void *)arg1 withPeerEndpoint:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 10: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSString *, NSURL *, void*
- (void)getForceFallbackWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)getGeohashSharingPreferenceWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)getOverrideIngressProxyWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 9: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSString *, NSData *, NSError *, void*
- (void)getPreferredProxyWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)getPreferredResolverWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)getPrivacyProxyAccountTypeWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSError *, void*
- (void)getPrivacyProxyConfiguration:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)getPrivacyProxyDomainFilters:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)getPrivacyProxyEffectiveUserTierWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSError *, void*
- (void)getPrivacyProxyInfoWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PrivacyProxyInfo *, NSError *, void*
- (void)getPrivacyProxyPolicyWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)getPrivacyProxyServiceStatusTimelineWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)getPrivacyProxyServiceStatusWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PrivacyProxyServiceStatus *, NSError *, void*
- (void)getPrivacyProxyStatusWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)getPrivacyProxyTrafficStateWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSError *, void*
- (void)getPrivacyProxyUserTierWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSError *, void*
- (void)getPrivateAccessTokensEnabledWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)locationAuthorizationStatusWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)mergePrivacyProxyPolicy:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)overrideIngressProxy:(void *)arg1 fallbackProxy:(void *)arg2 key:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: NSString *, NSString *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)overridePreferredProxy:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)overridePreferredResolver:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)privateAccessTokensAllowTools:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)refreshWaldoNowWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSString *, void*
- (bool)removePrivacyProxyPolicy;
- (void)reportPrivacyProxyNetworkStatus:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: PrivacyProxyNetworkStatus *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)reportPrivacyProxyServiceStatus:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)reportUsage:(NPUsageReport *)arg1 fromClient:(NSString *)arg2;
- (void)sendRTCReport:(void *)arg1 errorCode:(void *)arg2 url:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: long long, long long, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setAppRule:(void *)arg1 forLabel:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSPAppRule *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)setCurrentConfiguration:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: NSPConfiguration *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)setCurrentLatitude:(double)arg1 longitude:(double)arg2 timestamp:(NSDate *)arg3 forClient:(NSString *)arg4;
- (void)setEdgeSet:(void *)arg1 forIdentifier:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NPWaldo *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)setForceFallback:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setGeohashOverride:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setGeohashSharingPreference:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setLocationMonitorInterval:(double)arg1;
- (void)setPreferredPathRoutingEnabled:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setPrivacyProxyConfiguration:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)setPrivacyProxyPolicy:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)setPrivacyProxyStatus:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setPrivacyProxyTrafficState:(void *)arg1 proxyTraffic:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: unsigned long long, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setPrivacyProxyUserTier:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setPrivateAccessTokensEnabled:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setTestLatencyMap:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)startLocationMonitor;
- (void)startProxyToMPTCPConverterProxyWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)stopLocationMonitor;
- (void)stopProxyToMPTCPConverterProxyWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end