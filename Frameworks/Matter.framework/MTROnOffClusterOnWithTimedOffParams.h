/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Matter.framework/Matter
 */

@interface MTROnOffClusterOnWithTimedOffParams : NSObject {
    NSNumber * _offWaitTime;
    NSNumber * _onOffControl;
    NSNumber * _onTime;
    NSNumber * _timedInvokeTimeoutMs;
}

@property (nonatomic, retain) NSNumber *offWaitTime;
@property (nonatomic, retain) NSNumber *onOffControl;
@property (nonatomic, retain) NSNumber *onTime;
@property (nonatomic, retain) NSNumber *timedInvokeTimeoutMs;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)offWaitTime;
- (id)onOffControl;
- (id)onTime;
- (void)setOffWaitTime:(id)arg1;
- (void)setOnOffControl:(id)arg1;
- (void)setOnTime:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (id)timedInvokeTimeoutMs;

@end