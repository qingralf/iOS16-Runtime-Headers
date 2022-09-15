/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
 */

@interface MTSecureDownloadRenewalManager : NSObject {
    void delegate;
    void removalLock;
    void renewalLock;
    void secureKeyLoader;
}

+ (id)inContextKeyDataFor:(long long)arg1 ctx:(id)arg2;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)renewKeysAndRemoveExpiredDownloads;
- (void)renewKeysAndRemoveExpiredDownloadsWithUrlProtocolDelegate:(id)arg1;
- (void)requestSecureDeletionOf:(long long)arg1;
- (void)requestSecureDeletionOfOrphanedKeys;

@end