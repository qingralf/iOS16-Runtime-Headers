/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
 */

@interface TRICancelableMAOperation : NSObject <TRIFetchOpCanceling> {
    _PASLock * _lock;
}

@property (nonatomic, readonly) bool isCanceled;

- (void).cxx_destruct;
- (void)addSemaphore:(id)arg1;
- (void)cancel;
- (id)init;
- (bool)isCanceled;
- (void)setCurrentAsset:(id)arg1;

@end
