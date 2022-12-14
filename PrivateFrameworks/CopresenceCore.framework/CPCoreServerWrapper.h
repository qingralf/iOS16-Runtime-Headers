/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CopresenceCore.framework/CopresenceCore
 */

@interface CPCoreServerWrapper : NSObject {
    XPCServer * _server;
    CPCoreXPCService * _service;
}

@property (nonatomic, retain) XPCServer *server;
@property (nonatomic, retain) CPCoreXPCService *service;

- (void).cxx_destruct;
- (id)init;
- (id)server;
- (id)service;
- (void)setServer:(id)arg1;
- (void)setService:(id)arg1;
- (void)start;
- (void)stop;

@end
