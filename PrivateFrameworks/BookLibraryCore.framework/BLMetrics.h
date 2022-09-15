/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BookLibraryCore.framework/BookLibraryCore
 */

@interface BLMetrics : NSObject {
    BLServiceProxy * _serviceProxy;
}

@property (nonatomic, retain) BLServiceProxy *serviceProxy;

+ (void)flushInProcessWithCompletion:(id /* block */)arg1;
+ (id)metrics;

- (void).cxx_destruct;
- (void)enqueueEvents:(id)arg1;
- (void)flush;
- (id)init;
- (id)serviceProxy;
- (void)setAutoFlushEnabled:(bool)arg1;
- (void)setServiceProxy:(id)arg1;

@end