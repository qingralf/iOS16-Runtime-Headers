/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
 */

@interface ARSLAMState : NSObject <ARQATraceable, ARResultData, NSSecureCoding> {
    double  _minVergenceAngleCosine;
    const struct CV3DSLAMStateContext { } * _slamState;
    double  _timestamp;
}

@property (nonatomic, readonly) NSSet *addedAnchors;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSSet *externalAnchors;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) ARPointCloud *pointCloud;
@property (nonatomic, readonly) NSSet *removedAnchors;
@property (nonatomic, readonly) unsigned int slamMode;
@property (nonatomic, readonly) const struct CV3DSLAMStateContext { }*slamState;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly) NSDictionary *tracingEntry;
@property (nonatomic, readonly) int trackingState;
@property (nonatomic, readonly) NSSet *updatedAnchors;
@property (nonatomic, readonly) unsigned int visualSLAMState;

+ (bool)supportsSecureCoding;

- (id)addedAnchors;
- (id)addedAnchorsForGroupIdentifiers:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)externalAnchors;
- (id)externalAnchorsForGroupIdentifiers:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSLAMState:(struct CV3DSLAMStateContext { }*)arg1;
- (id)pointCloud;
- (id)removedAnchors;
- (id)removedAnchorsForGroupIdentifiers:(id)arg1;
- (bool)setSLAMState:(struct CV3DSLAMStateContext { }*)arg1;
- (unsigned int)slamMode;
- (const struct CV3DSLAMStateContext { }*)slamState;
- (double)timestamp;
- (id)tracingEntry;
- (int)trackingState;
- (id)updatedAnchors;
- (id)updatedAnchorsForGroupIdentifiers:(id)arg1;
- (unsigned int)visualSLAMState;

@end
