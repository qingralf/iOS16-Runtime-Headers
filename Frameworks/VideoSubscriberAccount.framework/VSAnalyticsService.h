/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSAnalyticsService : VSServiceListener <VSAnalyticsServiceProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)init;
- (void)recordFederatedPunchoutEventWithError:(id)arg1 metadata:(id)arg2;
- (void)recordNowPlayingBrokenEventWithBundleID:(id)arg1;

@end