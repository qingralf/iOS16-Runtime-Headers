/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDChat : NSObject <INSpeakable> {
    NSString * _accountID;
    long long  _autoDonationBehavior;
    NSDate * _autoDonationBehaviorLastModificationDate;
    NSString * _chatIdentifier;
    NSMutableDictionary * _chatInfo;
    NSString * _cloudKitRecordID;
    long long  _cloudKitSyncState;
    bool  _createEngramGroupOnMessageSend;
    NSString * _displayName;
    NSString * _engramID;
    NSString * _groupID;
    NSString * _guid;
    bool  _hasHadSuccessfulQuery;
    bool  _isArchived;
    bool  _isBlackholed;
    long long  _isFiltered;
    NSString * _lastAddressedLocalHandle;
    NSString * _lastAddressedSIMID;
    IMMessageItem * _lastMessage;
    long long  _lastMessageTimeStampOnLoad;
    long long  _lastReadMessageTimeStamp;
    NSString * _lastSeenMessageGuid;
    NSRecursiveLock * _lock;
    bool  _meCardUpdated;
    NSDictionary * _nicknamesForParticipants;
    unsigned long long  _numMessagesSent;
    NSString * _originalGroupID;
    NSArray * _participants;
    bool  _pendingENGroupParticipantUpdate;
    NSDictionary * _properties;
    NSString * _roomName;
    long long  _rowID;
    NSString * _serverChangeToken;
    NSString * _serviceName;
    long long  _state;
    unsigned char  _style;
    unsigned long long  _unreadCount;
    bool  _wasReportedAsJunk;
}

@property (readonly, retain) IMDAccount *account;
@property (copy) NSString *accountID;
@property (nonatomic, readonly) NSArray *alternativeSpeakableMatches;
@property (nonatomic, readonly) long long autoDonationBehavior;
@property (nonatomic, readonly) NSDate *autoDonationBehaviorLastModificationDate;
@property (nonatomic, readonly) <IMDaemonListenerChatProtocol> *broadcaster;
@property (copy) NSString *chatIdentifier;
@property (readonly, retain) NSDictionary *chatProperties;
@property (copy) NSString *cloudKitRecordID;
@property long long cloudKitSyncState;
@property bool createEngramGroupOnMessageSend;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *deviceIndependentID;
@property (readonly, retain) NSDictionary *dictionaryRepresentation;
@property (copy) NSString *displayName;
@property (setter=setEngramID:, copy) NSString *engramID;
@property (setter=setGroupID:, copy) NSString *groupID;
@property (copy) NSString *guid;
@property bool hasHadSuccessfulQuery;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (readonly) bool isArchived;
@property bool isBlackholed;
@property long long isFiltered;
@property (nonatomic, readonly) bool isUnnamedChat;
@property (copy) NSString *lastAddressedLocalHandle;
@property (copy) NSString *lastAddressedSIMID;
@property (retain) IMMessageItem *lastMessage;
@property long long lastMessageTimeStampOnLoad;
@property (nonatomic) long long lastReadMessageTimeStamp;
@property (readonly, copy) NSString *lastSeenMessageGuid;
@property (nonatomic, retain) NSDate *lastTUConversationCreatedDate;
@property bool meCardUpdated;
@property (nonatomic, readonly) NSDictionary *nicknamesForParticipants;
@property unsigned long long numMessagesSent;
@property (readonly, copy) NSString *originalGroupID;
@property (copy) NSArray *participants;
@property bool pendingENGroupParticipantUpdate;
@property (nonatomic, readonly) NSString *persistentID;
@property (nonatomic, readonly) NSString *personCentricID;
@property (nonatomic, readonly) NSString *pinningIdentifier;
@property (nonatomic, readonly) NSString *pronunciationHint;
@property (retain) NSDictionary *properties;
@property (copy) NSString *roomName;
@property (setter=_setRowID:) long long rowID;
@property (nonatomic, copy) NSString *serverChangeToken;
@property (readonly, retain) IMDService *service;
@property (copy) NSString *serviceName;
@property (readonly, retain) IMDServiceSession *serviceSession;
@property (nonatomic, readonly) NSString *spokenPhrase;
@property long long state;
@property unsigned char style;
@property (readonly) Class superclass;
@property (setter=_setUnreadCount:) unsigned long long unreadCount;
@property (nonatomic, readonly) NSString *vocabularyIdentifier;
@property bool wasReportedAsJunk;

+ (id)_recordType;
+ (id)chatWithCKRecord:(id)arg1;

- (void).cxx_destruct;
- (bool)_addGroupPhotoToCKRecord:(id)arg1;
- (id)_chatRegistry;
- (id)_ckUniqueID;
- (void)_convergeGroupChatIfNeededWithServiceSession:(id)arg1 account:(id)arg2 groupID:(id)arg3 incomingParticipants:(id)arg4 fromIdentifier:(id)arg5 toIdentifier:(id)arg6 receivedGroupParticipantVersion:(id)arg7 receivedGroupProtocolVersion:(id)arg8 messageTimeStamp:(id)arg9 groupPhotoCreationTime:(id)arg10;
- (id)_copyCKRecordFromExistingCKMetadataWithZoneID:(id)arg1 salt:(id)arg2;
- (id)_findChatParticipantsWithFromID:(id)arg1;
- (void)_incrementParticipantVersion;
- (id)_mergeParticipantIDs;
- (void)_modifyGroupWithServiceSession:(id)arg1 groupID:(id)arg2 toParticipants:(id)arg3 toIdentifier:(id)arg4 fromIdentifier:(id)arg5 account:(id)arg6 messageTimeStamp:(id)arg7;
- (void)_persistMergedIDMergedChatsIfNeeded:(id)arg1;
- (void)_setAutoDonationBehavior:(long long)arg1 lastModificationDate:(id)arg2;
- (void)_setParticipantVersion:(long long)arg1;
- (void)_setRowID:(long long)arg1;
- (void)_setUnreadCount:(unsigned long long)arg1;
- (id)_sortedParticipantIDHashForParticipants:(id)arg1;
- (id)_sortedParticipantIDHashForParticipants:(id)arg1 usesPersonCentricID:(bool)arg2;
- (void)_updateCachedParticipants;
- (void)_updateLastMessage:(id)arg1;
- (id)account;
- (id)accountID;
- (void)addParticipant:(id)arg1;
- (void)addParticipants:(id)arg1;
- (id)alternativeSpeakableMatches;
- (bool)applyChangesUsingCKRecord:(id)arg1;
- (long long)autoDonationBehavior;
- (id)autoDonationBehaviorLastModificationDate;
- (id)broadcaster;
- (id)chatIdentifier;
- (id)chatProperties;
- (id)cloudKitChatID;
- (id)cloudKitDebugDescription;
- (id)cloudKitRecordID;
- (long long)cloudKitSyncState;
- (long long)compareBySequenceNumberAndDateDescending:(id)arg1;
- (id)copyCKRecordRepresentationWithZoneID:(id)arg1 salt:(id)arg2;
- (id)copyDictionaryRepresentation:(bool)arg1;
- (bool)createEngramGroupOnMessageSend;
- (void)dealloc;
- (id)description;
- (id)deviceIndependentID;
- (id)dictionaryRepresentation;
- (id)dictionaryRepresentationIncludingLastMessage;
- (id)displayName;
- (id)engramID;
- (long long)engroupCreationDate;
- (id)generateNewGroupID;
- (int)getNumberOfTimesRespondedToThread;
- (id)groupID;
- (id)groupPhotoGuid;
- (id)groupPhotoUploadFailureCount;
- (id)guid;
- (bool)hasHadSuccessfulQuery;
- (id)initWithAccountID:(id)arg1 service:(id)arg2 guid:(id)arg3 groupID:(id)arg4 chatIdentifier:(id)arg5 participants:(id)arg6 roomName:(id)arg7 displayName:(id)arg8 lastAddressedLocalHandle:(id)arg9 lastAddressedSIMID:(id)arg10 properties:(id)arg11 state:(long long)arg12 style:(unsigned char)arg13 isFiltered:(long long)arg14 hasHadSuccessfulQuery:(bool)arg15 engramID:(id)arg16 serverChangeToken:(id)arg17 cloudKitSyncState:(long long)arg18 originalGroupID:(id)arg19 lastReadMessageTimeStamp:(long long)arg20 lastMessageTimeStampOnLoad:(long long)arg21 cloudKitRecordID:(id)arg22 isBlackholed:(bool)arg23 autoDonationBehavior:(long long)arg24 autoDonationBehaviorLastModificationDate:(id)arg25;
- (bool)isArchived;
- (bool)isBlackholed;
- (bool)isBusinessChat;
- (bool)isEmergencyChat;
- (long long)isFiltered;
- (bool)isGroupChat;
- (bool)isNewerThan:(id)arg1;
- (bool)isOlderThan:(id)arg1;
- (bool)isSMS;
- (bool)isSMSSpam;
- (bool)isUnnamedChat;
- (bool)isiMessageSpam;
- (id)lastAddressedLocalHandle;
- (id)lastAddressedSIMID;
- (id)lastMessage;
- (long long)lastMessageTimeStampOnLoad;
- (long long)lastReadMessageTimeStamp;
- (id)lastSeenMessageGUID;
- (id)lastSeenMessageGuid;
- (id)lastSentMessageDate;
- (id)lastTUConversationCreatedDate;
- (id)lastTranslatableMessageGUIDWithLanguageCode:(id)arg1;
- (void)meCardHasUpdated;
- (bool)meCardUpdated;
- (int)messageHandshakeState;
- (id)nicknamesForParticipants;
- (unsigned long long)numMessagesSent;
- (id)originalGroupID;
- (id)participantHandles;
- (id)participants;
- (bool)pendingENGroupParticipantUpdate;
- (id)persistentID;
- (id)personCentricID;
- (id)pinningIdentifier;
- (unsigned long long)powerLogConversationType;
- (id)pronunciationHint;
- (id)properties;
- (bool)receivedBlackholeError;
- (id)recordName;
- (void)recoverParticipantsIfNeeded;
- (bool)removeParticipant:(id)arg1;
- (bool)removeParticipants:(id)arg1;
- (void)resetCKSyncState;
- (void)resetParticipants:(id)arg1;
- (id)roomName;
- (long long)rowID;
- (id)serverChangeToken;
- (id)service;
- (id)serviceName;
- (id)serviceSession;
- (void)setAccountID:(id)arg1;
- (bool)setAutoDonationBehavior:(long long)arg1 lastModificationDate:(id)arg2;
- (void)setChatIdentifier:(id)arg1;
- (void)setCloudKitRecordID:(id)arg1;
- (void)setCloudKitSyncState:(long long)arg1;
- (void)setCreateEngramGroupOnMessageSend:(bool)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setEngramID:(id)arg1;
- (void)setGroupID:(id)arg1;
- (void)setGuid:(id)arg1;
- (void)setHasHadSuccessfulQuery:(bool)arg1;
- (void)setIsBlackholed:(bool)arg1;
- (void)setIsFiltered:(long long)arg1;
- (void)setLastAddressedLocalHandle:(id)arg1;
- (void)setLastAddressedSIMID:(id)arg1;
- (void)setLastMessage:(id)arg1;
- (void)setLastMessageTimeStampOnLoad:(long long)arg1;
- (void)setLastReadMessageTimeStamp:(long long)arg1;
- (void)setLastSentMessageDate:(id)arg1;
- (void)setLastTUConversationCreatedDate:(id)arg1;
- (void)setMeCardUpdated:(bool)arg1;
- (void)setNumMessagesSent:(unsigned long long)arg1;
- (void)setOriginalGroupID:(id)arg1;
- (void)setParticipants:(id)arg1;
- (void)setPendingENGroupParticipantUpdate:(bool)arg1;
- (void)setProperties:(id)arg1;
- (void)setRoomName:(id)arg1;
- (void)setServerChangeToken:(id)arg1;
- (void)setServiceName:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setStyle:(unsigned char)arg1;
- (void)setWasReportedAsJunk:(bool)arg1;
- (int)smsHandshakeState;
- (id)spokenPhrase;
- (long long)state;
- (void)storeAndBroadcastChatChanges;
- (unsigned char)style;
- (void)tearDownToneNotificationSessionIfNeeded;
- (unsigned long long)unreadCount;
- (void)updateCloudKitRecordID:(id)arg1;
- (void)updateCloudKitSyncState:(long long)arg1;
- (void)updateCollaborationMetadata:(id)arg1 forMessageGUID:(id)arg2;
- (void)updateDisplayName:(id)arg1;
- (void)updateDisplayName:(id)arg1 sender:(id)arg2;
- (bool)updateDonationStateWithSyndicationAction:(id)arg1;
- (void)updateEngramID:(id)arg1;
- (void)updateEngroupCreationDate:(long long)arg1;
- (void)updateGroupID:(id)arg1;
- (void)updateGroupPhotoGuid:(id)arg1;
- (void)updateGroupPhotoUploadFailureCount:(id)arg1;
- (void)updateHasHadSuccessfulQuery:(bool)arg1;
- (void)updateIsBlackholed:(bool)arg1;
- (void)updateIsEmergencyChat:(bool)arg1;
- (void)updateIsFiltered:(long long)arg1;
- (void)updateIsiMessageSpam:(bool)arg1;
- (void)updateLastAddressedHandle:(id)arg1;
- (void)updateLastAddressedHandle:(id)arg1 forceUpdate:(bool)arg2;
- (void)updateLastAddressedSIMID:(id)arg1;
- (void)updateLastMessageGUID:(id)arg1 forLanguageCode:(id)arg2;
- (void)updateLastReadMessageTimeStampIfNeeded:(long long)arg1;
- (void)updateLastSeenMessageGuidIfNeeded:(id)arg1;
- (void)updateMessageHandshakeState:(int)arg1;
- (void)updateNicknamesForParticipants:(id)arg1;
- (void)updateNumberOfTimesRespondedToThread;
- (void)updateOriginalGroupID:(id)arg1;
- (void)updateProperties:(id)arg1;
- (void)updateReceivedBlackholeError:(bool)arg1;
- (void)updateSMSCategory:(long long)arg1 subCategory:(long long)arg2;
- (void)updateSMSHandshakeState:(int)arg1;
- (void)updateSMSSpamExtensionNameChatProperty:(id)arg1;
- (void)updateServerChangeToken:(id)arg1;
- (void)updateShouldForceToSMS:(bool)arg1;
- (id)vocabularyIdentifier;
- (bool)wasReportedAsJunk;

@end