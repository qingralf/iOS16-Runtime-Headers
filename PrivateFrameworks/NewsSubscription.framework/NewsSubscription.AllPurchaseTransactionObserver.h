/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsSubscription.framework/NewsSubscription
 */

@interface NewsSubscription.AllPurchaseTransactionObserver : NSObject <FCBundleSubscriptionChangeObserver> {
    void appConfigurationManager;
    void bundleSubscriptionDetectionManager;
    void configurationManager;
    void entitlementService;
    void failedTransactionPurchaseContexts;
    void familySharingLandingPageLauncher;
    void inAppSubscriptionStatusChecker;
    void purchaseAdContextEntriesManager;
    void purchaseController;
    void router;
    void subscriptionController;
    void tagController;
    void tracker;
    void webOptinFlowManager;
}

- (void).cxx_destruct;
- (void)bundleSubscriptionDidSubscribe:(id)arg1 hideBundleDetectionUI:(bool)arg2;
- (void)handlePurchaseAddedNotificationWithNotification:(id)arg1;
- (id)init;
- (void)subscriptionsFoundDismissedWithNotification:(id)arg1;

@end
