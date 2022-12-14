/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKMatchmaker : NSObject {
    NSMutableArray * _acceptedInviteesTokens;
    NSMutableSet * _autoMatchedPlayers;
    GKDispatchGroup * _compatibilityHashGroup;
    GKMatchRequest * _currentMatchRequest;
    bool  _generatingCompatiblityHashes;
    unsigned long long  _inviteApproach;
    id /* block */  _inviteHandler;
    NSMutableSet * _invitedInvitees;
    NSMutableSet * _invitedNearbyPlayers;
    NSMutableSet * _invitedShareInvitees;
    id /* block */  _inviteeResponseHandler;
    NSSet * _invitees;
    NSDictionary * _inviteesByUserID;
    NSString * _inviterPlayerID;
    NSObject<OS_dispatch_queue> * _lookForInviteQueue;
    GKMatch * _match;
    int  _matching;
    bool  _nearbyAdvertising;
    bool  _nearbyBrowsing;
    NSSet * _nearbyCompatibleShortVersionHashes;
    NSSet * _nearbyCompatibleVersionHashes;
    GKDiscovery * _nearbyDiscovery;
    bool  _nearbyDiscoverySetup;
    NSMutableDictionary * _nearbyInvites;
    id /* block */  _nearbyPlayerHandler;
    id /* block */  _nearbyPlayerIDHandler;
    NSMutableDictionary * _nearbyPlayers;
    double  _nearbyQueryAllowance;
    NSDate * _nearbyQueryLastCheckDate;
    id /* block */  _recipientResponseHandler;
    bool  _serverHosted;
    NSMutableArray * _shareInvitees;
    id /* block */  _sharePlayPlayerHandler;
    NSMutableSet * _siblingInvitees;
    bool  _wasNearbyBrowsing;
}

@property (nonatomic, retain) NSMutableArray *acceptedInviteesTokens;
@property (nonatomic, readonly) bool allInviteesDidRespond;
@property (nonatomic, retain) NSMutableSet *autoMatchedPlayers;
@property (nonatomic, retain) GKDispatchGroup *compatibilityHashGroup;
@property (nonatomic, retain) GKMatchRequest *currentMatchRequest;
@property (nonatomic) bool generatingCompatiblityHashes;
@property (nonatomic, readonly) bool hasInviteListener;
@property (nonatomic) unsigned long long inviteApproach;
@property (nonatomic, copy) id /* block */ inviteHandler;
@property (nonatomic, retain) NSMutableSet *invitedInvitees;
@property (nonatomic, retain) NSMutableSet *invitedNearbyPlayers;
@property (nonatomic, retain) NSMutableSet *invitedShareInvitees;
@property (nonatomic, copy) id /* block */ inviteeResponseHandler;
@property (nonatomic, retain) NSSet *invitees;
@property (retain) NSDictionary *inviteesByUserID;
@property (nonatomic, retain) NSString *inviterPlayerID;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *lookForInviteQueue;
@property (nonatomic, retain) GKMatch *match;
@property int matching;
@property (nonatomic) bool nearbyAdvertising;
@property (nonatomic) bool nearbyBrowsing;
@property (nonatomic, retain) NSSet *nearbyCompatibleShortVersionHashes;
@property (nonatomic, retain) NSSet *nearbyCompatibleVersionHashes;
@property (nonatomic, retain) GKDiscovery *nearbyDiscovery;
@property (nonatomic) bool nearbyDiscoverySetup;
@property (nonatomic, retain) NSMutableDictionary *nearbyInvites;
@property (nonatomic, copy) id /* block */ nearbyPlayerHandler;
@property (nonatomic, copy) id /* block */ nearbyPlayerIDHandler;
@property (retain) NSMutableDictionary *nearbyPlayers;
@property (nonatomic) double nearbyQueryAllowance;
@property (nonatomic, retain) NSDate *nearbyQueryLastCheckDate;
@property (nonatomic, copy) id /* block */ recipientResponseHandler;
@property (nonatomic) bool serverHosted;
@property (nonatomic, retain) NSMutableArray *shareInvitees;
@property (nonatomic, copy) id /* block */ sharePlayPlayerHandler;
@property (nonatomic, retain) NSMutableSet *siblingInvitees;
@property (nonatomic) bool wasNearbyBrowsing;

+ (id)descriptionForNearbyDictionary:(id)arg1;
+ (id)sharedMatchmaker;
+ (id)syncQueue;

- (void).cxx_destruct;
- (id)_nearbyDeviceWithDeviceID:(id)arg1;
- (void)_request:(id)arg1 match:(id)arg2 rematchID:(id)arg3 serverHosted:(bool)arg4 playerCount:(long long)arg5 connectionData:(id)arg6 completionHandler:(id /* block */)arg7;
- (void)acceptNearbyInvite:(id)arg1 connectionData:(id)arg2;
- (id)acceptedInviteesTokens;
- (void)activateGroupActivity;
- (void)addPlayersForHostedMatchRequest:(id)arg1 existingPlayerCount:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)addPlayersForHostedMatchRequest:(id)arg1 existingPlayerCount:(long long)arg2 devicePushToken:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)addPlayersToMatch:(id)arg1 matchRequest:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)addPlayersToMatch:(id)arg1 matchRequest:(id)arg2 devicePushToken:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)allInvitedInvitees;
- (id)allInvitedInviteesAndInMatchRequestRecipients;
- (bool)allInviteesDidRespond;
- (void)applicationDidEnterBackgroundNotification:(id)arg1;
- (void)applicationWillEnterForegroundNotification:(id)arg1;
- (void)applicationWillTerminateNotification:(id)arg1;
- (id)autoMatchedPlayers;
- (bool)canPlayMultiplayerGameWithPlayers:(id)arg1;
- (void)cancel;
- (void)cancelInviteToPlayer:(id)arg1;
- (void)cancelNearbyInvitesToPlayers:(id)arg1;
- (void)cancelPendingInviteToPlayer:(id)arg1;
- (void)cancelPendingInvitesAndMarkInviteComplete:(bool)arg1;
- (void)cancelSentNearbyInvites;
- (void)changeGroupActivityStateToGameStarted;
- (id)compatibilityHashGroup;
- (id)compatibilityHashQueue;
- (void)createLeaderboardForRequest:(id)arg1 withHandler:(id /* block */)arg2;
- (long long)currentEnvironment;
- (id)currentMatchRequest;
- (void)dealloc;
- (void)declineNearbyInviteFromDevice:(id)arg1 reason:(long long)arg2;
- (id)declineReasonString:(long long)arg1;
- (void)declineReceivedNearbyInvites;
- (void)determineIfShouldRespondToNearbyPlayer:(id)arg1 handler:(id /* block */)arg2;
- (void)doneMatchmaking;
- (void)endGroupActivity;
- (void)establishNearbyFriendRelationships:(id)arg1 fromDevice:(id)arg2;
- (void)findMatchForRequest:(id)arg1 devicePushToken:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)findMatchForRequest:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)findPlayersForHostedMatchRequest:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)findPlayersForHostedRequest:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)findRematchForMatch:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)finishMatchmakingForMatch:(id)arg1;
- (void)finishedAuthenticating;
- (void)foundNearbyDeviceID:(id)arg1 discoveryInfo:(id)arg2;
- (void)generateHashedCompatibiltySetWithHandler:(id /* block */)arg1;
- (bool)generatingCompatiblityHashes;
- (void)getHashedCompatibilitySetsWithHandler:(id /* block */)arg1;
- (void)groupActivityInvitePlayer:(id)arg1 withDevicePushToken:(id)arg2;
- (void)handleNearbyInvite:(id)arg1 fromDevice:(id)arg2;
- (void)handleNearbyInviteResponse:(id)arg1 fromDevice:(id)arg2;
- (void)handleNearbyProfileQuery:(id)arg1 fromDevice:(id)arg2;
- (void)handleNearbyProfileResponse:(id)arg1 fromDevice:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)hasExistingInviteSessionWithHandler:(id /* block */)arg1;
- (bool)hasInviteListener;
- (id)hashForBundleID:(id)arg1 version:(id)arg2 platform:(long long)arg3;
- (id)hashForCurrentGameUsingBundleVersion;
- (id)hashForCurrentGameUsingShortBundleVersionAndPlatform;
- (id)init;
- (void)inviteAnyNearbyPlayersWithRequest:(id)arg1 handler:(id /* block */)arg2;
- (unsigned long long)inviteApproach;
- (id /* block */)inviteHandler;
- (void)invitePlayersWithRequest:(id)arg1 serverHosted:(bool)arg2 devicePushToken:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)invitePlayersWithRequest:(id)arg1 serverHosted:(bool)arg2 onlineConnectionData:(id)arg3 devicePushToken:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)invitedInvitees;
- (id)invitedNearbyPlayers;
- (id)invitedShareInvitees;
- (void)inviteeAcceptedNotification:(id)arg1;
- (void)inviteeDeclinedNotification:(id)arg1;
- (id /* block */)inviteeResponseHandler;
- (id)invitees;
- (id)inviteesByUserID;
- (id)inviterPlayerID;
- (void)leaveGroupActivity;
- (void)loadConnectivitySettingsWithCompletionHandler:(id /* block */)arg1;
- (void)loadPhotoDataDictionaryWithHandler:(id /* block */)arg1;
- (void)loadURLForMatch:(id)arg1 matchRequest:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)localPlayerAcceptedGameInvite;
- (void)localPlayerAcceptedGameInviteNotification:(id)arg1;
- (void)localPlayerAcceptedNearbyInvite:(id)arg1;
- (void)localPlayerRespondedToNearbyInvite:(id)arg1;
- (void)lookForGroupActivities;
- (void)lookForInvite;
- (id)lookForInviteQueue;
- (void)lostNearbyDeviceID:(id)arg1;
- (id)match;
- (void)matchForInvite:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)matchForNearbyInvite:(id)arg1 handler:(id /* block */)arg2;
- (void)matchForRemoteInvite:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)matchRequestRecipientsSet:(id)arg1;
- (void)matchWithRequest:(id)arg1 currentMatch:(id)arg2 hostedCurrentPlayerCount:(long long)arg3 serverHosted:(bool)arg4 rematchID:(id)arg5 devicePushToken:(id)arg6 completionHandler:(id /* block */)arg7;
- (int)matching;
- (bool)nearbyAdvertising;
- (bool)nearbyBrowsing;
- (id)nearbyCompatibleShortVersionHashes;
- (id)nearbyCompatibleVersionHashes;
- (void)nearbyDataReceived:(id)arg1;
- (id)nearbyDeviceWithDeviceID:(id)arg1;
- (id)nearbyDevicesForPlayer:(id)arg1 withState:(long long)arg2;
- (id)nearbyDiscovery;
- (bool)nearbyDiscoverySetup;
- (id)nearbyInviteFromPlayer:(id)arg1;
- (void)nearbyInviteWasCancelled:(id)arg1 fromDevice:(id)arg2;
- (id)nearbyInvites;
- (void)nearbyPlayerFound:(id)arg1;
- (id /* block */)nearbyPlayerHandler;
- (id /* block */)nearbyPlayerIDHandler;
- (void)nearbyPlayerLost:(id)arg1;
- (id)nearbyPlayers;
- (double)nearbyQueryAllowance;
- (id)nearbyQueryLastCheckDate;
- (int)numberOfNearbyDevicesForPlayer:(id)arg1 withState:(long long)arg2;
- (void)performSync:(id /* block */)arg1;
- (void)presentNearbyInvite:(id)arg1 fromDevice:(id)arg2;
- (id)profileDictionaryForLocalPlayer;
- (void)queryActivityWithCompletionHandler:(id /* block */)arg1;
- (void)queryPlayerGroupActivity:(unsigned long long)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)receivedData:(id)arg1 fromNearbyDeviceID:(id)arg2;
- (id /* block */)recipientResponseHandler;
- (void)reduceRecipientsForMatchRequest:(id)arg1 toPlayersWithPlayerIDs:(id)arg2;
- (void)registeredListentersChanged;
- (bool)removeInvitee:(id)arg1;
- (void)removeNearbyInviteFromPlayer:(id)arg1;
- (void)reportPlayerConnectedWithPlayerID:(id)arg1 forMatch:(id)arg2;
- (void)reportResponse:(long long)arg1 forInvitees:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)resetGroupActivity;
- (void)respondToHostedInvite:(id)arg1 completionHandler:(id /* block */)arg2;
- (long long)responseForDeclineReason:(long long)arg1;
- (void)saveNearbyInvite:(id)arg1 fromPlayer:(id)arg2;
- (void)sendProfileResponseToDevice:(id)arg1;
- (bool)serverHosted;
- (void)setAcceptedInviteesTokens:(id)arg1;
- (void)setAutoMatchedPlayers:(id)arg1;
- (void)setCompatibilityHashGroup:(id)arg1;
- (void)setConnectivitySettings:(id)arg1;
- (void)setCurrentMatchRequest:(id)arg1;
- (void)setGeneratingCompatiblityHashes:(bool)arg1;
- (void)setInviteApproach:(unsigned long long)arg1;
- (void)setInviteHandler:(id /* block */)arg1;
- (void)setInvitedInvitees:(id)arg1;
- (void)setInvitedNearbyPlayers:(id)arg1;
- (void)setInvitedShareInvitees:(id)arg1;
- (void)setInviteeResponseHandler:(id /* block */)arg1;
- (void)setInvitees:(id)arg1;
- (void)setInviteesByUserID:(id)arg1;
- (void)setInviterPlayerID:(id)arg1;
- (void)setLookForInviteQueue:(id)arg1;
- (void)setMatch:(id)arg1;
- (void)setMatching:(int)arg1;
- (void)setNearbyAdvertising:(bool)arg1;
- (void)setNearbyBrowsing:(bool)arg1;
- (void)setNearbyCompatibleShortVersionHashes:(id)arg1;
- (void)setNearbyCompatibleVersionHashes:(id)arg1;
- (void)setNearbyDevice:(id)arg1 reachable:(bool)arg2;
- (void)setNearbyDiscovery:(id)arg1;
- (void)setNearbyDiscoverySetup:(bool)arg1;
- (void)setNearbyInvites:(id)arg1;
- (void)setNearbyPlayerAccepted:(id)arg1 connectionData:(id)arg2;
- (void)setNearbyPlayerAccepted:(id)arg1 deviceID:(id)arg2 connectionData:(id)arg3;
- (void)setNearbyPlayerDeclined:(id)arg1 deviceID:(id)arg2 reason:(long long)arg3;
- (void)setNearbyPlayerDeclined:(id)arg1 reason:(long long)arg2;
- (void)setNearbyPlayerFailed:(id)arg1;
- (void)setNearbyPlayerFailed:(id)arg1 deviceID:(id)arg2;
- (void)setNearbyPlayerHandler:(id /* block */)arg1;
- (void)setNearbyPlayerIDHandler:(id /* block */)arg1;
- (void)setNearbyPlayers:(id)arg1;
- (void)setNearbyQueryAllowance:(double)arg1;
- (void)setNearbyQueryLastCheckDate:(id)arg1;
- (void)setRecipientResponseHandler:(id /* block */)arg1;
- (void)setServerHosted:(bool)arg1;
- (void)setShareInvitees:(id)arg1;
- (void)setShareInvitees:(id)arg1 propogateToDaemon:(bool)arg2;
- (void)setSharePlayPlayerHandler:(id /* block */)arg1;
- (void)setSiblingInvitees:(id)arg1;
- (void)setWasNearbyBrowsing:(bool)arg1;
- (void)setupNearbyDiscovery;
- (id)shareInvitees;
- (void)sharePlayPlayerFound:(id)arg1;
- (id /* block */)sharePlayPlayerHandler;
- (bool)shouldRespondToNearbyQuery;
- (void)showSharePlayMatchDeclinedToJoinAlertWithReason:(long long)arg1;
- (id)siblingInvitees;
- (void)startBrowsingForNearbyPlayersWithHandler:(id /* block */)arg1;
- (void)startBrowsingForNearbyPlayersWithReachableHandler:(id /* block */)arg1;
- (void)startBrowsingForSharePlayPlayersWithHandler:(id /* block */)arg1;
- (void)startNearbyAdvertising;
- (void)startNearbyBrowsing;
- (void)stopBrowsingForNearbyPlayers;
- (void)stopBrowsingForSharePlayPlayers;
- (void)stopNearbyAdvertising;
- (void)stopNearbyBrowsing;
- (id)unreleasedHash;
- (void)updateNearbyAdvertising;
- (void)userCancelledMatching;
- (bool)wasNearbyBrowsing;

@end
