/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iCloudQuota.framework/iCloudQuota
 */

@interface ICQCloudStorageDataController : NSObject {
    ACAccount * _account;
    bool  _shouldIgnoreCache;
}

@property (nonatomic) bool shouldIgnoreCache;

+ (id)_requestQueue;

- (void).cxx_destruct;
- (id)cachedStorageSummary;
- (void)fetchBackupinfoWithCompletion:(id /* block */)arg1;
- (void)fetchStorageByApp:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchStorageSummaryWithCompletion:(id /* block */)arg1;
- (id)initWithAccount:(id)arg1;
- (void)sendDismissStatusForTip:(id)arg1 completion:(id /* block */)arg2;
- (void)sendDisplayStatusForTip:(id)arg1 completion:(id /* block */)arg2;
- (void)setShouldIgnoreCache:(bool)arg1;
- (bool)shouldIgnoreCache;

@end
