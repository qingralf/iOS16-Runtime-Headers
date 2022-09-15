/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
 */

@interface TRIXPCInternalServiceListener : NSObject <NSXPCListenerDelegate> {
    NSXPCInterface * _interface;
    TRIXPCInternalServiceWrapper * _wrapper;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithServerContextPromise:(id)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end