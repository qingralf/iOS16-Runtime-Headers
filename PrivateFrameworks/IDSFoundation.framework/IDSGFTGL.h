/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSGFTGL : IDSGlobalLink {
    bool  _allowE2E;
    NSData * _keyMaterialData;
    unsigned int  _keyMaterialDataCounter;
    id /* block */  _keyMaterialSentHandler;
    NSArray * _remoteCandidatePairs;
    NSMutableArray * _virtualCandidatePairs;
}

- (void).cxx_destruct;
- (void)_destroyVirtualRelayLinksForCandidatePair:(id)arg1;
- (void)_disableE2E;
- (void)_discardCandidatePairsWithOption:(bool)arg1;
- (void)_discardKeyMaterialMessage:(long long)arg1;
- (void)_enableE2E;
- (id)_findVirtualCandidatePair:(id)arg1;
- (long long)_getQRAllocateType;
- (void)_notifyDefaultUnderlyingLinkChanged:(id)arg1 error:(long long)arg2;
- (bool)_postProcessAllocbindResponse:(id)arg1 candidatePair:(id)arg2 candidatePairToken:(id)arg3;
- (bool)_postProcessQUICAllocbindResponse:(id)arg1 candidatePair:(id)arg2;
- (void)_processCommandRelayInterfaceInfo:(id)arg1 candidatePairToken:(id)arg2;
- (void)_processReceivedRemoteCandidatePairs:(id)arg1;
- (bool)_processRemovedLocalAddressList:(id)arg1;
- (void)_sendConnectionDataWithRemovedAddressList:(id)arg1;
- (void)_sendRelayInterfaceInfo:(id)arg1;
- (bool)_setupNewQRLinkIfNecessary:(id)arg1;
- (void)_setupVirtualCandidatePairs:(id)arg1 remoteCandidatePair:(id)arg2;
- (void)disconnectWithCompletionHandler:(id /* block */)arg1;
- (void)enableUPlusOneSessionForTransition:(bool)arg1;
- (void)invalidate;
- (void)manageDesignatedDestinations:(id)arg1 relayGroupID:(id)arg2 relaySessionID:(id)arg3 withType:(unsigned short)arg4 sessionStateCounter:(unsigned int)arg5;
- (void)receiveJoinNotificationFromAParticipant;
- (void)removeParticipantIDs:(id)arg1 relayGroupID:(id)arg2 relaySessionID:(id)arg3 sessionStateCounter:(unsigned int)arg4;
- (void)sendKeyMaterialMessageData:(id)arg1 relayGroupID:(id)arg2 destinationURIs:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)setDefaultUnderlyingLink:(BOOL)arg1;
- (void)setIsUPlusOneSession:(bool)arg1;
- (void)setParticipantType:(unsigned short)arg1 relayGroupID:(id)arg2 relaySessionID:(id)arg3 sessionStateCounter:(unsigned int)arg4;
- (void)setTimeBase:(id)arg1;
- (void)startWithOptions:(id)arg1;
- (void)updateURIToParticipantIDs:(id)arg1 relaySessionID:(id)arg2 sessionInfo:(id)arg3;

@end