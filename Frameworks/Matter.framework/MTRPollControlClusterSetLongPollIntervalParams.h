/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Matter.framework/Matter
 */

@interface MTRPollControlClusterSetLongPollIntervalParams : NSObject {
    NSNumber * _newLongPollInterval;
    NSNumber * _timedInvokeTimeoutMs;
}

@property (getter=getNewLongPollInterval, nonatomic, retain) NSNumber *newLongPollInterval;
@property (nonatomic, retain) NSNumber *timedInvokeTimeoutMs;

- (void).cxx_destruct;
- (id)description;
- (id)getNewLongPollInterval;
- (id)init;
- (void)setNewLongPollInterval:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (id)timedInvokeTimeoutMs;

@end
