/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriAnalytics.framework/SiriAnalytics
 */

@interface SiriAnalyticsLocalStorageDispatcher : NSObject <SiriAnalyticsMessageStorage> {
    void legacyStorage;
    void messageStore;
    void queue;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithQueue:(id)arg1 messageStore:(id)arg2 legacyStorage:(id)arg3;
- (void)storeMessages:(id)arg1;

@end
