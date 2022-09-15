/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKPersistentEvent : EKPersistentCalendarItem

+ (id)defaultPropertiesToLoad;
+ (id)eventWithRandomUUID;
+ (Class)meltedClass;
+ (id)relations;

- (id)actions;
- (long long)availability;
- (id)birthdayContactIdentifier;
- (id)birthdayContactName;
- (id)birthdayID;
- (bool)canForward;
- (id)conferenceURLDetectedString;
- (id)conferenceURLString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)disallowProposeNewTime;
- (id)endDate;
- (id)endDateRaw;
- (int)entityType;
- (int)externalTrackingStatus;
- (bool)firedTTL;
- (unsigned int)invitationChangedProperties;
- (unsigned long long)invitationStatus;
- (unsigned long long)junkStatus;
- (long long)locationPredictionState;
- (bool)needsOccurrenceCacheUpdate;
- (id)organizer;
- (id)originalStartDate;
- (id)participationStatusModifiedDate;
- (long long)privacyLevel;
- (id)proposedStartDate;
- (id)recurrenceSet;
- (id)responseComment;
- (void)setActions:(id)arg1;
- (void)setAvailability:(long long)arg1;
- (void)setBirthdayContactIdentifier:(id)arg1;
- (void)setBirthdayContactName:(id)arg1;
- (void)setBirthdayID:(id)arg1;
- (void)setCanForward:(bool)arg1;
- (void)setConferenceURLDetectedString:(id)arg1;
- (void)setConferenceURLString:(id)arg1;
- (void)setDisallowProposeNewTime:(bool)arg1;
- (void)setEndDate:(id)arg1;
- (void)setEndDateRaw:(id)arg1;
- (void)setExternalTrackingStatus:(int)arg1;
- (void)setFiredTTL:(bool)arg1;
- (void)setInvitationChangedProperties:(unsigned int)arg1;
- (void)setInvitationStatus:(unsigned long long)arg1;
- (void)setJunkStatus:(unsigned long long)arg1;
- (void)setLocationPredictionState:(long long)arg1;
- (void)setNeedsOccurrenceCacheUpdate:(bool)arg1;
- (void)setOriginalStartDate:(id)arg1;
- (void)setParticipationStatusModifiedDate:(id)arg1;
- (void)setPrivacyLevel:(long long)arg1;
- (void)setProposedStartDate:(id)arg1;
- (void)setRecurrenceSet:(id)arg1;
- (void)setResponseComment:(id)arg1;
- (void)setSpecialDayString:(id)arg1;
- (void)setStatus:(long long)arg1;
- (void)setSuggestionInfo:(id)arg1;
- (void)setTravelAdvisoryBehavior:(long long)arg1;
- (void)setTravelTime:(id)arg1;
- (id)specialDayString;
- (long long)status;
- (id)suggestionInfo;
- (long long)travelAdvisoryBehavior;
- (id)travelTime;

@end