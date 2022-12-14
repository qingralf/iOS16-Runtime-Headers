/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMXPCClientConnectionProxy : HMFMessageTransport <HMXPCClientMessageHandling> {
    HMXPCClient * _client;
    id /* block */  _refreshHandler;
}

@property HMXPCClient *client;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ refreshHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)client;
- (void)fetchUserInfo:(id /* block */)arg1;
- (void)handleMessage:(id)arg1;
- (void)handleMessage:(id)arg1 responseHandler:(id /* block */)arg2;
- (id)initWithRefreshHandler:(id /* block */)arg1;
- (id /* block */)refreshHandler;
- (void)sendMessage:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setClient:(id)arg1;
- (void)setRefreshHandler:(id /* block */)arg1;

@end
