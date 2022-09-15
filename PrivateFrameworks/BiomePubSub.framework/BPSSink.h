/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
 */

@interface BPSSink : NSObject <BPSCancellable, BPSSubscriber> {
    long long  _demand;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    id /* block */  _receivedCompletion;
    id /* block */  _receivedValue;
    BPSSubscriptionStatus * _status;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long demand;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ receivedCompletion;
@property (nonatomic, copy) id /* block */ receivedValue;
@property (nonatomic, retain) BPSSubscriptionStatus *status;
@property (readonly) Class superclass;

+ (id)new;

- (void).cxx_destruct;
- (void)cancel;
- (long long)demand;
- (id)init;
- (id)initWithReceiveBookmarkedCompletion:(id /* block */)arg1 receiveInput:(id /* block */)arg2;
- (id)initWithReceiveCompletion:(id /* block */)arg1 receiveInput:(id /* block */)arg2;
- (id)newBookmark;
- (void)receiveCompletion:(id)arg1;
- (long long)receiveInput:(id)arg1;
- (void)receiveSubscription:(id)arg1;
- (id /* block */)receivedCompletion;
- (id /* block */)receivedValue;
- (void)setDemand:(long long)arg1;
- (void)setReceivedCompletion:(id /* block */)arg1;
- (void)setReceivedValue:(id /* block */)arg1;
- (void)setStatus:(id)arg1;
- (id)status;

@end