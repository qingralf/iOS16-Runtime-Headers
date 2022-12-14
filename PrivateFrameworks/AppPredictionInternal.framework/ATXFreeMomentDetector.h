/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXFreeMomentDetector : NSObject <ATXFreeMomentTriggersListenerDelegate, UNUserNotificationCenterDelegate> {
    <ATXFreeMomentDetectorDelegate> * _freeMomentDetectorDelegate;
    NSObject<OS_dispatch_queue> * _freeMomentEndedQueue;
    UNUserNotificationCenter * _notificationCenter;
    NSUserDefaults * _userDefaults;
    ATXFreeMomentTriggersListener * freeMomentTriggersListner;
    ATXMotionStateListener * motionStateChangeListener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <ATXFreeMomentDetectorDelegate> *freeMomentDetectorDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)detectFreeMoment:(id)arg1;
- (int)detectFreeMomentUsingAppLaunchHeuristics:(id)arg1;
- (int)detectFreeMomentUsingPhoneUnlockHeuristics:(id)arg1;
- (void)displayFreeMomentNotificationForReason:(int)arg1 withFeatureVector:(id)arg2;
- (id)freeMomentDetectorDelegate;
- (id)init;
- (id)lastFreeMomentTimeStamp;
- (bool)lastWorkMeetingOfDayEnded:(id)arg1;
- (bool)meetingIsOnGoing:(id)arg1;
- (bool)motionStateChangedFromMovingToStationary:(id)arg1;
- (bool)motionStateChangedFromStationaryToWalking:(id)arg1;
- (bool)phoneUnlocksWithinLastNSeconds:(id)arg1;
- (void)setFreeMomentDetectorDelegate:(id)arg1;
- (void)showFreeMomentNotificationIfApplicable;
- (bool)timeBetweenTwoMeetings:(id)arg1;
- (bool)twoHoursSinceLastFreeMoment:(id)arg1;
- (void)updateLastFreeMomentTimeStamp;

@end
