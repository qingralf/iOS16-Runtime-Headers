/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface LSDatabaseBlockingFetchClient : NSObject <LSDatabaseBlockingFetchProtocol> {
    NSXPCConnection * _connection;
}

- (void).cxx_destruct;
- (void)getServerStoreBlockingWithCompletionHandler:(id /* block */)arg1;
- (id)initWithXPCConnection:(id)arg1;

@end