/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeDSL.framework/BiomeDSL
 */

@interface _BMDSLStatePublisher : BMBookmarkablePublisher {
    BMDSLState * _DSLState;
    <BMDSLStateValue> * _state;
    <BPSPublisher> * _upstream;
}

@property (nonatomic, readonly) BMDSLState *DSLState;
@property (nonatomic, retain) <BMDSLStateValue> *state;
@property (nonatomic, readonly) <BPSPublisher> *upstream;

+ (id)new;
+ (id)publisherWithPublisher:(id)arg1 upstreams:(id)arg2 bookmarkState:(id)arg3;

- (void).cxx_destruct;
- (id)DSLState;
- (id)bookmarkableUpstreams;
- (bool)canStoreInternalStateInBookmark;
- (bool)canStorePassThroughValueInBookmark;
- (id)init;
- (id)initWithUpstream:(id)arg1 state:(id)arg2 DSLState:(id)arg3;
- (void)setState:(id)arg1;
- (id)state;
- (void)subscribe:(id)arg1;
- (id)upstream;

@end
