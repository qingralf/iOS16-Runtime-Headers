/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
 */

@interface BPSTimer : BPSPublisher {
    id /* block */  _getTimestamp;
    double  _interval;
    <BPSPublisher> * _upstream;
}

@property (nonatomic, readonly) id /* block */ getTimestamp;
@property (nonatomic, readonly) double interval;
@property (nonatomic, readonly) <BPSPublisher> *upstream;

- (void).cxx_destruct;
- (id /* block */)getTimestamp;
- (id)initWithUpstream:(id)arg1 interval:(double)arg2 getTimestamp:(id /* block */)arg3;
- (double)interval;
- (void)subscribe:(id)arg1;
- (id)upstream;

@end
