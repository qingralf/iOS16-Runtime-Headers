/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPSenderMinimalStrategy : MSPSenderStrategy {
    bool  _needToSendInit;
}

- (bool)_needToSendEtaRefreshFor:(id)arg1 state:(id)arg2;
- (void)_sendDestinationIfNeeded;
- (bool)_validDestinationState:(id)arg1;
- (void)addParticipants:(id)arg1;
- (void)etaUpdated:(id)arg1;
- (void)waypointsUpdated:(id)arg1;

@end
