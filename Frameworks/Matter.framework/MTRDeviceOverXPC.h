/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Matter.framework/Matter
 */

@interface MTRDeviceOverXPC : MTRBaseDevice {
    <NSCopying> * _controller;
    unsigned long long  _nodeId;
    MTRDeviceControllerXPCConnection * _xpcConnection;
}

@property (nonatomic, readonly) <NSCopying> *controller;
@property (nonatomic, readonly) unsigned long long nodeId;
@property (nonatomic, readonly) MTRDeviceControllerXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (id)controller;
- (void)deregisterReportHandlersWithClientQueue:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithController:(id)arg1 deviceId:(unsigned long long)arg2 xpcConnection:(id)arg3;
- (void)invokeCommandWithEndpointId:(id)arg1 clusterId:(id)arg2 commandId:(id)arg3 commandFields:(id)arg4 timedInvokeTimeout:(id)arg5 clientQueue:(id)arg6 completion:(id /* block */)arg7;
- (unsigned long long)nodeId;
- (void)readAttributeWithEndpointId:(id)arg1 clusterId:(id)arg2 attributeId:(id)arg3 params:(id)arg4 clientQueue:(id)arg5 completion:(id /* block */)arg6;
- (void)subscribeAttributeWithEndpointId:(id)arg1 clusterId:(id)arg2 attributeId:(id)arg3 minInterval:(id)arg4 maxInterval:(id)arg5 params:(id)arg6 clientQueue:(id)arg7 reportHandler:(id /* block */)arg8 subscriptionEstablished:(id /* block */)arg9;
- (void)subscribeWithQueue:(id)arg1 minInterval:(unsigned short)arg2 maxInterval:(unsigned short)arg3 params:(id)arg4 cacheContainer:(id)arg5 attributeReportHandler:(id /* block */)arg6 eventReportHandler:(id /* block */)arg7 errorHandler:(id /* block */)arg8 subscriptionEstablished:(id /* block */)arg9;
- (void)writeAttributeWithEndpointId:(id)arg1 clusterId:(id)arg2 attributeId:(id)arg3 value:(id)arg4 timedWriteTimeout:(id)arg5 clientQueue:(id)arg6 completion:(id /* block */)arg7;
- (id)xpcConnection;

@end