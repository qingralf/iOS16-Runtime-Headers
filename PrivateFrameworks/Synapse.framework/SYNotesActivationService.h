/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Synapse.framework/Synapse
 */

@interface SYNotesActivationService : NSObject <NSXPCListenerDelegate, SYNotesActivationServiceProtocol> {
    NSXPCListener * __listener;
    NSObject<OS_dispatch_queue> * __serviceQueue;
}

@property (setter=_setListener:, nonatomic, retain) NSXPCListener *_listener;
@property (setter=_setServiceQueue:, nonatomic, retain) NSObject<OS_dispatch_queue> *_serviceQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_listener;
- (id)_serviceQueue;
- (void)_setListener:(id)arg1;
- (void)_setServiceQueue:(id)arg1;
- (oneway void)activateNotesWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)beginListeningToConnections;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end
