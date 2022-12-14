/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXFreeMomentDataCollectionPBFeatureVector : PBCodable <NSCopying> {
    struct { 
        unsigned int hasTimeBeforeNextWorkMeeting : 1; 
        unsigned int lastWorkMeetingOfDayEnded : 1; 
        unsigned int motionStateChangedFromMovingToStationary : 1; 
        unsigned int motionStateChangedFromStationaryToWalking : 1; 
        unsigned int phoneUnlocksWithinLast90seconds : 1; 
        unsigned int previousAppLaunched : 1; 
        unsigned int previousWorkMeetingEndedInLast20Minutes : 1; 
        unsigned int previousWorkMeetingEndedInLastFiveMinutes : 1; 
        unsigned int prevoiusAppLaunchCategory : 1; 
        unsigned int timeSinceLastUnlock : 1; 
    }  _has;
    int  _hasTimeBeforeNextWorkMeeting;
    int  _lastWorkMeetingOfDayEnded;
    int  _motionStateChangedFromMovingToStationary;
    int  _motionStateChangedFromStationaryToWalking;
    int  _phoneUnlocksWithinLast90seconds;
    int  _previousAppLaunched;
    int  _previousWorkMeetingEndedInLast20Minutes;
    int  _previousWorkMeetingEndedInLastFiveMinutes;
    int  _prevoiusAppLaunchCategory;
    int  _timeSinceLastUnlock;
}

@property (nonatomic) bool hasHasTimeBeforeNextWorkMeeting;
@property (nonatomic) bool hasLastWorkMeetingOfDayEnded;
@property (nonatomic) bool hasMotionStateChangedFromMovingToStationary;
@property (nonatomic) bool hasMotionStateChangedFromStationaryToWalking;
@property (nonatomic) bool hasPhoneUnlocksWithinLast90seconds;
@property (nonatomic) bool hasPreviousAppLaunched;
@property (nonatomic) bool hasPreviousWorkMeetingEndedInLast20Minutes;
@property (nonatomic) bool hasPreviousWorkMeetingEndedInLastFiveMinutes;
@property (nonatomic) bool hasPrevoiusAppLaunchCategory;
@property (nonatomic) int hasTimeBeforeNextWorkMeeting;
@property (nonatomic) bool hasTimeSinceLastUnlock;
@property (nonatomic) int lastWorkMeetingOfDayEnded;
@property (nonatomic) int motionStateChangedFromMovingToStationary;
@property (nonatomic) int motionStateChangedFromStationaryToWalking;
@property (nonatomic) int phoneUnlocksWithinLast90seconds;
@property (nonatomic) int previousAppLaunched;
@property (nonatomic) int previousWorkMeetingEndedInLast20Minutes;
@property (nonatomic) int previousWorkMeetingEndedInLastFiveMinutes;
@property (nonatomic) int prevoiusAppLaunchCategory;
@property (nonatomic) int timeSinceLastUnlock;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasHasTimeBeforeNextWorkMeeting;
- (bool)hasLastWorkMeetingOfDayEnded;
- (bool)hasMotionStateChangedFromMovingToStationary;
- (bool)hasMotionStateChangedFromStationaryToWalking;
- (bool)hasPhoneUnlocksWithinLast90seconds;
- (bool)hasPreviousAppLaunched;
- (bool)hasPreviousWorkMeetingEndedInLast20Minutes;
- (bool)hasPreviousWorkMeetingEndedInLastFiveMinutes;
- (bool)hasPrevoiusAppLaunchCategory;
- (int)hasTimeBeforeNextWorkMeeting;
- (bool)hasTimeSinceLastUnlock;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)lastWorkMeetingOfDayEnded;
- (void)mergeFrom:(id)arg1;
- (int)motionStateChangedFromMovingToStationary;
- (int)motionStateChangedFromStationaryToWalking;
- (int)phoneUnlocksWithinLast90seconds;
- (int)previousAppLaunched;
- (int)previousWorkMeetingEndedInLast20Minutes;
- (int)previousWorkMeetingEndedInLastFiveMinutes;
- (int)prevoiusAppLaunchCategory;
- (bool)readFrom:(id)arg1;
- (void)setHasHasTimeBeforeNextWorkMeeting:(bool)arg1;
- (void)setHasLastWorkMeetingOfDayEnded:(bool)arg1;
- (void)setHasMotionStateChangedFromMovingToStationary:(bool)arg1;
- (void)setHasMotionStateChangedFromStationaryToWalking:(bool)arg1;
- (void)setHasPhoneUnlocksWithinLast90seconds:(bool)arg1;
- (void)setHasPreviousAppLaunched:(bool)arg1;
- (void)setHasPreviousWorkMeetingEndedInLast20Minutes:(bool)arg1;
- (void)setHasPreviousWorkMeetingEndedInLastFiveMinutes:(bool)arg1;
- (void)setHasPrevoiusAppLaunchCategory:(bool)arg1;
- (void)setHasTimeBeforeNextWorkMeeting:(int)arg1;
- (void)setHasTimeSinceLastUnlock:(bool)arg1;
- (void)setLastWorkMeetingOfDayEnded:(int)arg1;
- (void)setMotionStateChangedFromMovingToStationary:(int)arg1;
- (void)setMotionStateChangedFromStationaryToWalking:(int)arg1;
- (void)setPhoneUnlocksWithinLast90seconds:(int)arg1;
- (void)setPreviousAppLaunched:(int)arg1;
- (void)setPreviousWorkMeetingEndedInLast20Minutes:(int)arg1;
- (void)setPreviousWorkMeetingEndedInLastFiveMinutes:(int)arg1;
- (void)setPrevoiusAppLaunchCategory:(int)arg1;
- (void)setTimeSinceLastUnlock:(int)arg1;
- (int)timeSinceLastUnlock;
- (void)writeTo:(id)arg1;

@end
