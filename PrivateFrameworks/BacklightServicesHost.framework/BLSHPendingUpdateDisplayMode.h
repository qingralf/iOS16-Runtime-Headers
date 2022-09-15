/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BacklightServicesHost.framework/BacklightServicesHost
 */

@interface BLSHPendingUpdateDisplayMode : NSObject <BLSHPendingOperation> {
    bool  _completed;
    bool  _started;
    long long  _targetDisplayMode;
}

@property (getter=isCompleted) bool completed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) BLSHPendingUpdateDisplayMode *first;
@property (getter=isFullyCompleted, readonly) bool fullyCompleted;
@property (readonly) unsigned long long hash;
@property (readonly) bool isDirectRamp;
@property (readonly) bool isTwoPhaseUpdate;
@property (readonly) BLSHPendingUpdateDisplayMode *last;
@property (readonly) BLSHPendingDirectRampDisplayMode *rampOperation;
@property (getter=isStarted) bool started;
@property (readonly) Class superclass;
@property (readonly) long long targetDisplayMode;
@property (readonly) long long type;
@property (readonly) BLSHPendingUpdateDisplayMode *updateOperation;

+ (id)operationForUpdateFromCurrentDisplayMode:(long long)arg1 toTargetDisplayMode:(long long)arg2;

- (id)description;
- (id)first;
- (id)initWithTargetDisplayMode:(long long)arg1;
- (bool)isCompleted;
- (bool)isDirectRamp;
- (bool)isFullyCompleted;
- (bool)isStarted;
- (bool)isTwoPhaseUpdate;
- (id)last;
- (id)rampOperation;
- (void)setCompleted:(bool)arg1;
- (void)setStarted:(bool)arg1;
- (long long)targetDisplayMode;
- (long long)type;
- (id)updateOperation;

@end