/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNGuidanceManager : NSObject <MNTimeManagerObserver> {
    MNAnnouncementEngine * _announcementEngine;
    NSMutableDictionary * _announcementsSpoken;
    NSArray * _arEvents;
    bool  _canSpeakReturnToRouteAnnouncement;
    GEOComposedGuidanceEvent * _currentJunctionViewGuidanceEvent;
    GEOComposedGuidanceEvent * _currentLaneGuidanceEvent;
    <MNGuidanceManagerDelegate> * _delegate;
    NSDictionary * _eventIndexes;
    NSMutableArray * _events;
    NSMutableSet * _exclusiveSetAnnouncementsSpoken;
    NSMutableDictionary * _feedback;
    NSMutableDictionary * _hapticsTriggered;
    bool  _hasBeenOnRouteOnce;
    bool  _hasPersistentEvents;
    bool  _isInPreArrivalState;
    MNJunctionViewImageLoader * _junctionViewImageLoader;
    MNAnnouncementPlanEvent * _lastAnnouncementEvent;
    MNLocation * _location;
    GEOComposedGuidanceEvent * _nextEvent;
    GEOComposedGuidanceEvent * _pendingJunctionViewGuidanceEvent;
    GEOComposedGuidanceEvent * _previousLaneGuidanceEvent;
    NSArray * _previousSignEvents;
    GEOComposedRoute * _route;
    bool  _shouldShowChargingInfo;
    MNGuidanceSignInfo * _signInfo;
    NSMutableDictionary * _specialAREvents;
    NSMutableDictionary * _specialSignEvents;
    NSMutableDictionary * _specialSpokenEvents;
    double  _speed;
    double  _timeLastAnnouncementEnded;
    double  _timeLastAnnouncementStarted;
    NSMutableArray * _validEvents;
}

@property (nonatomic, readonly) GEOComposedWaypoint *currentWaypoint;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MNGuidanceManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *events;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isInPreArrivalState;
@property (nonatomic, retain) MNLocation *location;
@property (nonatomic) bool shouldShowChargingInfo;
@property (nonatomic) double speed;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)_adjustedVehicleSpeed;
- (id)_arrivalARGuidanceEventsForLeg:(unsigned long long)arg1;
- (id)_closestContinueAREventToRouteCoordinate:(struct { unsigned int x1; float x2; })arg1;
- (void)_considerARGuidance;
- (void)_considerAnnouncements;
- (bool)_considerArrivalAnnouncementsForLocation:(id)arg1;
- (bool)_considerChargingAnnouncementsForLocation:(id)arg1;
- (bool)_considerGetOnRouteAnnouncementsForLocation:(id)arg1;
- (void)_considerHaptics;
- (void)_considerJunctionViewGuidance;
- (void)_considerLaneGuidance;
- (bool)_considerOtherSpecialAnnouncementsForLocation:(id)arg1;
- (void)_considerPersistence;
- (void)_considerSignGuidance;
- (bool)_considerStartingAnnouncementsForLocation:(id)arg1;
- (id)_createArGuidanceInfosForEvent:(id)arg1 forStep:(id)arg2;
- (double)_distanceToEndOfRoute;
- (double)_distanceToManeuverStart;
- (double)_distanceToRouteCoordinate:(struct { unsigned int x1; float x2; })arg1;
- (id)_durationsForEvent:(id)arg1;
- (bool)_eventWasSpoken:(id)arg1;
- (void)_filterValidEvents;
- (void)_handleJunctionViewInfo:(id)arg1;
- (bool)_hasPersistentEvents;
- (double)_headingForArEvent:(id)arg1;
- (int)_indexForEventUUID:(id)arg1;
- (void)_initSpecialGuidanceEventsForRoute:(id)arg1;
- (bool)_isEVChargingEvent:(id)arg1;
- (bool)_isInArrivalState;
- (bool)_isValidEvent:(id)arg1;
- (id)_junctionViewEvents;
- (int)_maneuverTypeForAREvent:(id)arg1;
- (void)_markEventSpoken:(id)arg1;
- (id)_nextJunctionViewGuidanceEvent;
- (id)_nextLaneGuidanceEvent;
- (void)_notifyAnalyticsForNewEvents:(id)arg1 previousEvents:(id)arg2;
- (void)_notifySpeechEvent:(id)arg1 waypointCategory:(int)arg2 ignorePromptStyle:(bool)arg3;
- (void)_planAnnouncements;
- (void)_repeatSpokenEvent:(id)arg1;
- (void)_resetLastAnnouncementTime;
- (id)_selectAnnouncementForEvent:(id)arg1 withTimeRemaining:(double)arg2 withMinWaypointCategory:(int)arg3 selectedWaypointCategory:(out int*)arg4 waypoints:(id)arg5;
- (id)_serverStringDictionaryForChargingEvent:(id)arg1;
- (id)_serverStringDictionaryForEvent:(id)arg1 distance:(double)arg2 validDistance:(double)arg3 spoken:(bool)arg4 waypoints:(id)arg5;
- (id)_signForGuidanceEvent:(id)arg1 isPrimary:(bool)arg2 shouldOverridePrimaryDistances:(bool)arg3 distance:(out double*)arg4;
- (id)_sortedSignEventsFromValidSignEvents:(id)arg1;
- (id)_specialAREvents:(int)arg1 forLeg:(unsigned long long)arg2;
- (id)_specialSignEvents:(int)arg1 forLeg:(unsigned long long)arg2;
- (id)_specialSpokenEvents:(int)arg1 forLegIndex:(unsigned long long)arg2;
- (id)_spokenEventsRemainingInStep;
- (double)_timeRemainingForEvent:(id)arg1;
- (double)_timeUntilEventTrigger:(id)arg1;
- (unsigned long long)_trafficColorForRoute:(id)arg1 routeCoordinate:(struct { unsigned int x1; float x2; })arg2;
- (id)_validEventsForARGuidance;
- (id)_validEventsForSignGuidance:(out bool*)arg1;
- (id)currentWaypoint;
- (void)dealloc;
- (id)delegate;
- (double)durationOfAnnouncement:(id)arg1;
- (double)durationOfEvent:(id)arg1 announcementIndex:(unsigned long long)arg2 distance:(double)arg3;
- (id)events;
- (id)initWithRouteInfo:(id)arg1 andIsReconnecting:(bool)arg2 announcementsToIgnore:(id)arg3;
- (bool)isInPreArrivalState;
- (id)location;
- (bool)repeatLastGuidanceAnnouncement:(id)arg1;
- (void)reset;
- (void)setDelegate:(id)arg1;
- (void)setIsInPreArrivalState:(bool)arg1;
- (void)setJunctionViewImageWidth:(double)arg1 height:(double)arg2;
- (void)setLocation:(id)arg1;
- (void)setShouldShowChargingInfo:(bool)arg1;
- (void)setSpeed:(double)arg1;
- (bool)shouldShowChargingInfo;
- (double)speed;
- (void)stop;
- (void)timeManagerDidChangeProvider:(id)arg1;
- (double)timeSinceLastAnnouncement;
- (double)timeUntilNextAnnouncement;
- (void)updateDestination:(id)arg1;
- (void)updateForReroute:(id)arg1 rerouteReason:(unsigned long long)arg2;
- (void)updateGuidanceForLocation:(id)arg1 navigatorState:(int)arg2;

@end