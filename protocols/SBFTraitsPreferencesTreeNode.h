/* Generated by RuntimeBrowser.
 */

@protocol SBFTraitsPreferencesTreeNode <NSObject>

@required

- (void)addChild:(id <SBFTraitsPreferencesTreeNode>)arg1;
- (NSArray *)children;
- (NSString *)debugLastOrientationSettingsValidationFailureReason;
- (bool)debugLastSettingsWereValidated;
- (double)order;
- (<SBFTraitsPreferencesTreeNode> *)parent;
- (SBFTraitsParticipant *)participant;
- (NSString *)role;
- (void)setChildren:(NSArray *)arg1;
- (void)setDebugLastOrientationSettingsValidationFailureReason:(NSString *)arg1;
- (void)setDebugLastSettingsWereValidated:(bool)arg1;
- (void)setOrder:(double)arg1;
- (void)setParent:(id <SBFTraitsPreferencesTreeNode>)arg1;
- (<SBFTraitsSettingsUpdating> *)settingsUpdater;
- (NSString *)uniqueIdentifier;

@end
