/* Generated by RuntimeBrowser.
 */

@protocol FCNewsletterManager <NSObject>

@required

- (long long)activeNewsletter;
- (void)addObserver:(id <FCNewsletterSubscriptionObserver>)arg1;
- (NSString *)cachedVector;
- (bool)canSubscribe;
- (bool)canSubscribeToNewsletter:(long long)arg1;
- (bool)canUnsubscribe;
- (void)deletePersonalizationVector;
- (bool)enabled;
- (NFPromise *)forceUpdateSubscription;
- (bool)includeBundleSubscribedVector;
- (long long)includeOptions;
- (bool)includeSportsVector;
- (bool)includeUserVector;
- (bool)isEligibleForIssues;
- (bool)isOptedIntoIssues;
- (bool)isSignedIntoEmailAccount;
- (bool)isSubscribed;
- (long long)issueOptinStatus;
- (void)notifyObservers;
- (void)optOutOfIssues;
- (void)removeObserver:(id <FCNewsletterSubscriptionObserver>)arg1;
- (bool)shouldSubmitPersonalizationVector;
- (void)submitPersonalizationVector:(NTPBVersionedPersonalizationVector *)arg1 subscribedBundleChannelIDs:(NSSet *)arg2;
- (void)subscribe;
- (long long)subscription;
- (long long)subscriptionStatusForNewsletter:(long long)arg1;
- (void)unsubscribe;
- (void)updateCacheWithNewsletterString:(NSString *)arg1 includeArray:(NSArray *)arg2;
- (NFPromise *)updateSubscription;

@end