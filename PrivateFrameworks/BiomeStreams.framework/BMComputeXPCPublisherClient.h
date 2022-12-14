/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
 */

@interface BMComputeXPCPublisherClient : NSObject <BMComputePublisher, BMComputePublishing> {
    NSXPCConnection * _connection;
    NSXPCListenerEndpoint * _listenerEndpoint;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _pendingEvents;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _subscriptions;
}

@property (nonatomic, readonly) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableDictionary *pendingEvents;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSMutableDictionary *subscriptions;
@property (readonly) Class superclass;

+ (void)_initializeSharedClientWithQueue:(id)arg1;
+ (void)_setQueue:(id)arg1;
+ (id)new;
+ (id)shared;

- (void).cxx_destruct;
- (void)_handleEventWithPayload:(id)arg1;
- (void)_setXPCEvent:(id)arg1 identifier:(id)arg2;
- (id)connection;
- (void)dealloc;
- (id)init;
- (id)initWithQueue:(id)arg1 listenerEndpoint:(id)arg2;
- (id)pendingEvents;
- (id)queue;
- (void)receiveInputForIdentifier:(id)arg1 streamIdentifier:(id)arg2 storeEvent:(id)arg3;
- (void)subscribe:(id)arg1;
- (id)subscriptions;
- (void)unsubscribeWithIdentifier:(id)arg1;

@end
