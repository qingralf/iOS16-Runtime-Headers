/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeDSL.framework/BiomeDSL
 */

@interface BMDSLSubscribeOn : BPSPublisher {
    <BMDSLScheduler> * _scheduler;
    BMDSL * _upstream;
}

@property (nonatomic, readonly) <BMDSLScheduler> *scheduler;
@property (nonatomic, readonly) BMDSL *upstream;

- (void).cxx_destruct;
- (id)initWithUpstream:(id)arg1 scheduler:(id)arg2;
- (id)scheduler;
- (void)subscribe:(id)arg1;
- (id)upstream;

@end
