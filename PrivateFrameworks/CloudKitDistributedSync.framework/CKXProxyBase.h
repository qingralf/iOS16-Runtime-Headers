/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDistributedSync.framework/CloudKitDistributedSync
 */

@interface CKXProxyBase : NSObject {
    CKXBackingStore * _backingStore;
    bool  _committed;
    long long  _scope;
}

@property (nonatomic, readonly) CKXBackingStore *backingStore;
@property (nonatomic, readonly) bool committed;
@property (nonatomic) long long scope;

- (void).cxx_destruct;
- (id)_init;
- (void)associateWithBackingStore:(id)arg1;
- (id)backingStore;
- (void)commit;
- (bool)committed;
- (bool)isMutable;
- (void)reset;
- (long long)scope;
- (void)setScope:(long long)arg1;

@end
