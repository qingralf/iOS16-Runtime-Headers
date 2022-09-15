/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFTraitsArbiterUpdateOrientationResolutionPolicySpecifier : NSObject <SBFTraitsPreferencesStageResolutionPolicySpecifying> {
    SBFTraitsSettingsActuationContext * _actuationContext;
    NSNumber * _componentOrder;
    bool  _forceResolution;
    NSArray * _participantsUniqueIdentifiers;
}

@property (nonatomic, retain) SBFTraitsSettingsActuationContext *actuationContext;
@property (nonatomic, readonly) NSNumber *componentOrder;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool forceResolution;
@property (readonly) unsigned long long hash;
@property (nonatomic) NSArray *participantsUniqueIdentifiers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)actuationContext;
- (id)componentOrder;
- (bool)forceResolution;
- (id)initWithComponentOrder:(id)arg1;
- (id)participantsUniqueIdentifiers;
- (long long)preferencesType;
- (void)setActuationContext:(id)arg1;
- (void)setForceResolution:(bool)arg1;
- (void)setParticipantsUniqueIdentifiers:(id)arg1;
- (void)updateStageParticipantsResolutionPolicies:(id)arg1 context:(id)arg2;

@end