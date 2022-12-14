/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFTraitsPreferencesResolutionContext : NSObject {
    NSArray * _acquiredParticipants;
    SBFTraitsArbitrationInputs * _rawInputs;
    NSArray * _stageParticipantsRoles;
    SBFTraitsArbitrationInputs * _validatedInputs;
}

@property (nonatomic, readonly) NSArray *acquiredParticipants;
@property (nonatomic, readonly) SBFTraitsArbitrationInputs *rawInputs;
@property (nonatomic, readonly) NSArray *stageParticipantsRoles;
@property (nonatomic, readonly) SBFTraitsArbitrationInputs *validatedInputs;

- (void).cxx_destruct;
- (id)acquiredParticipants;
- (id)initWithAcquiredParticipants:(id)arg1 stageParticipantsRoles:(id)arg2 validatedInputs:(id)arg3 rawInputs:(id)arg4;
- (id)rawInputs;
- (id)stageParticipantsRoles;
- (id)validatedInputs;

@end
