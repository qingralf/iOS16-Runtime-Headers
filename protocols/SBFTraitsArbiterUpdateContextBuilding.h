/* Generated by RuntimeBrowser.
 */

@protocol SBFTraitsArbiterUpdateContextBuilding <NSObject>

@required

- (bool)forceOrientationResolution;
- (SBFTraitsSettingsActuationContext *)orientationActuationContext;
- (NSString *)reason;
- (NSArray *)requestingParticipantsUniqueIdentifiers;
- (void)setForceOrientationResolution:(bool)arg1;
- (void)setOrientationActuationContext:(SBFTraitsSettingsActuationContext *)arg1;
- (void)setReason:(NSString *)arg1;
- (void)setRequestingParticipantsUniqueIdentifiers:(NSArray *)arg1;

@end
