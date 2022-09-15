/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMContinuityCaptureCore.framework/CMContinuityCaptureCore
 */

@interface CMContinuityCaptureThermalMonitor : NSObject {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    <CMContinuityCaptureThermalMonitorDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _internalQueue;
    int  _registrationToken;
    unsigned long long  _thermalLevel;
}

@property (readonly) unsigned long long thermalLevel;

- (void).cxx_destruct;
- (void)_thermalNotification:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 delegate:(id)arg2;
- (unsigned long long)thermalLevel;

@end