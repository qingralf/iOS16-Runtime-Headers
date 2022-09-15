/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaExperience.framework/MediaExperience
 */

@interface AVSystemController : NSObject {
    struct AVSystemControllerPrivate { } * _priv;
    NSString * mCategory;
    struct OpaqueFigSystemController { } * mFigController;
    bool  mFullMute;
    float  mVolume;
}

@property (nonatomic, readonly) bool an_isCarPlayConnected;

// Image: /System/Library/PrivateFrameworks/MediaExperience.framework/MediaExperience

+ (id)compatibleAudioRouteForRoute:(id)arg1;
+ (void)postNotificationOnMainQueue:(id)arg1 notification:(id)arg2 object:(id)arg3;
+ (id)sharedAVSystemController;
+ (id)sharedInstance;

- (bool)allowUserToExceedEUVolumeLimit;
- (id)attributeForKey:(id)arg1;
- (bool)changeActiveCategoryVolume:(bool)arg1;
- (bool)changeActiveCategoryVolume:(bool)arg1 fallbackCategory:(id)arg2 resultVolume:(float*)arg3 affectedCategory:(id*)arg4;
- (bool)changeActiveCategoryVolume:(bool)arg1 forRoute:(id)arg2 andDeviceIdentifier:(id)arg3;
- (bool)changeActiveCategoryVolumeBy:(float)arg1;
- (bool)changeActiveCategoryVolumeBy:(float)arg1 fallbackCategory:(id)arg2 resultVolume:(float*)arg3 affectedCategory:(id*)arg4;
- (bool)changeActiveCategoryVolumeBy:(float)arg1 forRoute:(id)arg2 andDeviceIdentifier:(id)arg3;
- (bool)changeVolume:(bool)arg1 forCategory:(id)arg2;
- (bool)changeVolume:(bool)arg1 forCategory:(id)arg2 mode:(id)arg3;
- (bool)changeVolumeBy:(float)arg1 forCategory:(id)arg2;
- (bool)changeVolumeForRoute:(bool)arg1 forCategory:(id)arg2 mode:(id)arg3 route:(id)arg4 deviceIdentifier:(id)arg5 andRouteSubtype:(id)arg6;
- (bool)changeVolumeForRouteBy:(float)arg1 forCategory:(id)arg2 mode:(id)arg3 route:(id)arg4 deviceIdentifier:(id)arg5 andRouteSubtype:(id)arg6;
- (bool)currentRouteHasVolumeControl;
- (void)dealloc;
- (bool)didCancelRoutePicking:(id)arg1;
- (id)errorWithCode:(int)arg1 description:(id)arg2;
- (bool)getActiveCategoryMuted:(bool*)arg1;
- (bool)getActiveCategoryMuted:(bool*)arg1 forRoute:(id)arg2 andDeviceIdentifier:(id)arg3;
- (bool)getActiveCategoryVolume:(float*)arg1 andName:(id*)arg2;
- (bool)getActiveCategoryVolume:(float*)arg1 andName:(id*)arg2 fallbackCategory:(id)arg3;
- (bool)getActiveCategoryVolume:(float*)arg1 andName:(id*)arg2 forRoute:(id)arg3 andDeviceIdentifier:(id)arg4;
- (bool)getVibeIntensity:(float*)arg1;
- (bool)getVolume:(float*)arg1 forCategory:(id)arg2;
- (bool)getVolume:(float*)arg1 forCategory:(id)arg2 mode:(id)arg3;
- (bool)getVolumeForRoute:(float*)arg1 forCategory:(id)arg2 mode:(id)arg3 route:(id)arg4 deviceIdentifier:(id)arg5 andRouteSubtype:(id)arg6;
- (void)handleServerDied;
- (bool)hasRouteSharingPolicyLongFormVideo:(id)arg1;
- (id)init;
- (bool)overrideToPartnerRoute;
- (id)pickableRoutesForCategory:(id)arg1;
- (id)pickableRoutesForCategory:(id)arg1 andMode:(id)arg2;
- (void)postEffectiveVolumeNotification:(id)arg1;
- (void)postFullMuteDidChangeNotification:(id)arg1;
- (id)routeForCategory:(id)arg1;
- (bool)setActiveCategoryVolumeTo:(float)arg1;
- (bool)setActiveCategoryVolumeTo:(float)arg1 fallbackCategory:(id)arg2 resultVolume:(float*)arg3 affectedCategory:(id*)arg4;
- (bool)setActiveCategoryVolumeTo:(float)arg1 forRoute:(id)arg2 andDeviceIdentifier:(id)arg3;
- (bool)setAttribute:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (bool)setBTHFPRoute:(id)arg1 availableForVoicePrompts:(bool)arg2;
- (bool)setPickedRouteWithPassword:(id)arg1 withPassword:(id)arg2;
- (bool)setVibeIntensityTo:(float)arg1;
- (bool)setVolumeForRouteTo:(float)arg1 forCategory:(id)arg2 mode:(id)arg3 route:(id)arg4 deviceIdentifier:(id)arg5 andRouteSubtype:(id)arg6;
- (bool)setVolumeTo:(float)arg1 forCategory:(id)arg2;
- (bool)setVolumeTo:(float)arg1 forCategory:(id)arg2 mode:(id)arg3;
- (bool)shouldClientWithAudioScore:(int)arg1 hijackRoute:(id)arg2 hijackDeniedReason:(id*)arg3;
- (bool)toggleActiveCategoryMuted;
- (bool)toggleActiveCategoryMutedForRoute:(id)arg1 andDeviceIdentifier:(id)arg2;
- (int)volumeCategoryAndMode:(id)arg1 mode:(id)arg2 outCategory:(id*)arg3 outMode:(id*)arg4;
- (id)volumeCategoryForAudioCategory:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Announce.framework/Announce

- (bool)an_isCarPlayConnected;

@end