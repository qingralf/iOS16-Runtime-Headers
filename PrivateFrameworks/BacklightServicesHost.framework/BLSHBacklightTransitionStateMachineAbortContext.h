/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BacklightServicesHost.framework/BacklightServicesHost
 */

@interface BLSHBacklightTransitionStateMachineAbortContext : NSObject <BLSHWatchdogAbortContext> {
    unsigned long long  _abortReason;
    BLSHBacklightAggregateState * _currentState;
    BLSHBacklightEnvironmentStateMachine * _environmentStateMachine;
    const void * _payload;
    unsigned int  _payloadSize;
    BLSHPendingEventToPerform * _pendingEventToPerform;
    BLSBacklightChangeEvent * _pendingPrewarmedEvent;
    BLSHPendingUpdateDisplayMode * _pendingUpdateDisplayMode;
    BLSHPendingUpdatePresentation * _pendingUpdatePresentation;
    BLSHPendingUpdateToSpecifier * _pendingUpdateToSpecifier;
    BLSBacklightChangeEvent * _queuedEventToPerform;
    BLSHBacklightMutableTargetState * _targetState;
}

@property (nonatomic, readonly) unsigned long long abortReason;
@property (nonatomic, readonly, copy) NSString *abortReasonString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) const void*payload;
@property (nonatomic, readonly) unsigned int payloadSize;
@property (readonly) Class superclass;

+ (unsigned int)backlightChangeRequestExplanationIdentifierFromString:(id)arg1;

- (void).cxx_destruct;
- (void)_populatePayload;
- (unsigned long long)abortReason;
- (id)abortReasonString;
- (void)dealloc;
- (id)description;
- (id)initWithCurrentState:(id)arg1 targetState:(id)arg2 pendingEventToPerform:(id)arg3 pendingUpdatePresentation:(id)arg4 pendingUpdateToSpecifier:(id)arg5 pendingUpdateDisplayMode:(id)arg6 queuedEventToPerform:(id)arg7 pendingPrewarmedEvent:(id)arg8 environmentStateMachine:(id)arg9;
- (const void*)payload;
- (unsigned int)payloadSize;

@end