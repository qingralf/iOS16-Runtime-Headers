/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSKeepAlive : NSObject {
    NSString * _logKey;
    NSString * _name;
    RBSAssertion * _rbsAssertion;
    long long  _style;
    NSObject<OS_os_transaction> * _transaction;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, retain) RBSAssertion *rbsAssertion;
@property (nonatomic, readonly) long long style;

+ (void)_accessAssertionCache:(id /* block */)arg1;
+ (void)_handleAssertionExpiration;
+ (id)keepAliveWithFormat:(id)arg1;
+ (id)keepAliveWithName:(id)arg1;
+ (id)keepAliveWithName:(id)arg1 style:(long long)arg2;
+ (void)keepAliveWithName:(id)arg1 style:(long long)arg2 block:(id /* block */)arg3;
+ (id)rbs_keepAliveWithName:(id)arg1;
+ (id)rbs_keepAliveWithName:(id)arg1 style:(long long)arg2;
+ (void)rbs_keepAliveWithName:(id)arg1 style:(long long)arg2 block:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)_assertionName;
- (id)_cacheKey;
- (void)_removeOSTransaction;
- (void)_removeProcessAssertion;
- (void)_removeRBSAssertion;
- (void)_startLogTimer;
- (void)_startRBSLogTimer;
- (void)_takeOSTransaction;
- (void)_takeProcessAssertion;
- (void)_takeRBSAssertion;
- (void)dealloc;
- (id)initRBSWithName:(id)arg1;
- (id)initRBSWithName:(id)arg1 style:(long long)arg2;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 style:(long long)arg2;
- (void)invalidate;
- (id)name;
- (id)rbsAssertion;
- (void)rbs_invalidate;
- (void)setRbsAssertion:(id)arg1;
- (long long)style;

@end
