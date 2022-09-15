/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
 */

@interface ARKeyframeList : NSObject <ARResultData> {
    const struct CV3DReconKeyframeList { } * _keyframeList;
    NSSet * _removedAnchors;
    double  _timestamp;
    NSSet * _updatedAnchors;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) const struct CV3DReconKeyframeList { }*keyframeList;
@property (retain) NSSet *removedAnchors;
@property (readonly) Class superclass;
@property (retain) NSSet *updatedAnchors;

- (void).cxx_destruct;
- (void)dealloc;
- (const struct CV3DReconKeyframeList { }*)keyframeList;
- (id)removedAnchors;
- (void)setKeyframeList:(const struct CV3DReconKeyframeList { }*)arg1 updatedAnchors:(id)arg2 removedAnchors:(id)arg3 timestamp:(double)arg4;
- (void)setRemovedAnchors:(id)arg1;
- (void)setUpdatedAnchors:(id)arg1;
- (double)timestamp;
- (id)updatedAnchors;

@end