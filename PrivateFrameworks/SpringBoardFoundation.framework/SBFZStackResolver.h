/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFZStackResolver : NSObject <BSDescriptionProviding> {
    NSMutableArray * _participants;
    <BSInvalidatable> * _stateCaptureHandle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *participants;
@property (nonatomic, retain) <BSInvalidatable> *stateCaptureHandle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_registerParticipant:(id)arg1;
- (id)_registeredParticipants;
- (void)_resolveActivationStateOfSortedParticipants:(id)arg1 changedParticipantHandler:(id /* block */)arg2;
- (void)_resolveHomeAffordanceDrawingSuppressionOfSortedParticipants:(id)arg1 changedParticipantHandler:(id /* block */)arg2;
- (void)_resolveHomeGestureOwnershipOfSortedParticipants:(id)arg1 changedParticipantHandler:(id /* block */)arg2;
- (void)_resolveSystemApertureSuppressionOfSortedParticipants:(id)arg1 changedParticipantHandler:(id /* block */)arg2;
- (void)_setNeedsUpdateFromParticipant:(id)arg1;
- (void)_unregisterParticipant:(id)arg1;
- (id)_updateResolutions;
- (void)_updateResolutionsForAddedParticipant:(id)arg1 removedParticipant:(id)arg2;
- (id)acquireParticipantWithIdentifier:(long long)arg1 delegate:(id)arg2;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (id)participants;
- (void)setParticipants:(id)arg1;
- (void)setStateCaptureHandle:(id)arg1;
- (id)stateCaptureHandle;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
