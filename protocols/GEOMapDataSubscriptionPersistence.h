/* Generated by RuntimeBrowser.
 */

@protocol GEOMapDataSubscriptionPersistence <NSObject>

@required

- (void)addSubscriptionWithIdentifier:(void *)arg1 auditToken:(void *)arg2 dataTypes:(void *)arg3 policy:(void *)arg4 region:(void *)arg5 expirationDate:(void *)arg6 callbackQueue:(void *)arg7 completionHandler:(void *)arg8; // needs 8 arg types, found 14: NSString *, GEOApplicationAuditToken *, unsigned long long, long long, GEOMapRegion *, NSDate *, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GEOMapDataSubscription *, NSError *, void*
- (void)fetchSubscriptionsWithIdentifiers:(void *)arg1 callbackQueue:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSArray *, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)removeSubscriptionWithIdentifier:(void *)arg1 callbackQueue:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
