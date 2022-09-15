/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFLibraryMessage : MFMailMessage <EDPersistedMessage, MFIMAPMessage> {
    NSData * _brandIndicator;
    NSURL * _brandIndicatorLocation;
    _Atomic unsigned long long  _conversationFlags;
    NSDictionary * _dataDetectionAttributes;
    NSDate * _displayDate;
    EMFollowUp * _followUp;
    long long  _libraryID;
    long long  _mailboxID;
    NSString * _messageID;
    long long  _originalMailboxID;
    EMReadLater * _readLater;
    NSArray * _references;
    NSArray * _remoteContentLinks;
    NSString * _remoteID;
    NSDate * _sendLaterDate;
    _Atomic long long  _senderBucket;
    unsigned long long  _size;
    unsigned int  _uid;
    unsigned long long  _uniqueRemoteId;
    _Atomic long long  _unsubscribeType;
}

@property (nonatomic, readonly) MailAccount *account;
@property (nonatomic, readonly) <EDAccount> *accountForSender;
@property (nonatomic, readonly) NSURL *basePath;
@property (nonatomic, readonly, copy) NSArray *bcc;
@property (readonly, copy) NSArray *bccIfAvailable;
@property (nonatomic, readonly) NSData *brandIndicator;
@property (nonatomic, retain) NSURL *brandIndicatorLocation;
@property (nonatomic, readonly, copy) NSArray *cc;
@property (readonly) unsigned long long conversationFlags;
@property (nonatomic, readonly) long long conversationID;
@property (nonatomic, readonly, copy) NSDictionary *dataDetectionAttributes;
@property (readonly) NSDate *date;
@property (nonatomic, readonly) NSDate *dateReceived;
@property (nonatomic, readonly) NSDate *dateSent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSDate *displayDate;
@property (nonatomic, readonly, copy) NSUUID *documentID;
@property (nonatomic, readonly) unsigned long long fileSize;
@property (nonatomic, readonly) ECMessageFlags *flags;
@property (nonatomic, retain) EMFollowUp *followUp;
@property (nonatomic, readonly, copy) NSArray *from;
@property (nonatomic, readonly) long long globalMessageID;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MFMessageHeaders *headers;
@property (nonatomic, readonly, copy) NSDictionary *headersDictionary;
@property (nonatomic) bool isPartial;
@property (nonatomic, readonly) bool isServerSearchResult;
@property (readonly) NSSet *labels;
@property (nonatomic, readonly) long long libraryID;
@property (nonatomic, readonly) ECAngleBracketIDHash *listIDHash;
@property (nonatomic, readonly, copy) NSArray *listUnsubscribe;
@property (nonatomic, readonly) MFMailboxUid *mailbox;
@property (nonatomic) long long mailboxID;
@property (nonatomic, readonly, copy) NSString *messageIDHeader;
@property (nonatomic, readonly) ECAngleBracketIDHash *messageIDHeaderHash;
@property (nonatomic, retain) MFLibraryStore *messageStore;
@property (nonatomic, readonly) <ECMimeBody> *mimeBody;
@property (nonatomic, readonly) unsigned long long numberOfAttachments;
@property (nonatomic) long long originalMailboxID;
@property (getter=isPartOfExistingThread, nonatomic, readonly) bool partOfExistingThread;
@property (nonatomic, readonly) long long persistedMessageID;
@property (nonatomic, readonly, copy) NSString *persistentID;
@property (retain) EMReadLater *readLater;
@property (nonatomic, copy) NSArray *references;
@property (copy) NSArray *remoteContentLinks;
@property (nonatomic, copy) NSString *remoteID;
@property (retain) NSDate *sendLaterDate;
@property (nonatomic) long long senderBucket;
@property (nonatomic, readonly, copy) NSArray *senders;
@property (nonatomic, readonly, copy) ECSubject *subject;
@property (nonatomic, readonly, copy) NSString *summary;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *to;
@property (nonatomic) unsigned int uid;
@property (nonatomic) unsigned long long uniqueRemoteId;
@property (nonatomic, readonly) long long unsubscribeType;

+ (id)log;
+ (id)messageWithLibraryID:(long long)arg1;

- (void).cxx_destruct;
- (void)_forceLoadOfMessageSummaryFromProtectedStore;
- (id)_privacySafeDescription;
- (void)_updateUID;
- (id)account;
- (id)accountForSender;
- (id)basePath;
- (id)brandIndicator;
- (id)brandIndicatorLocation;
- (void)commit;
- (long long)compareByUidWithMessage:(id)arg1;
- (unsigned long long)conversationFlags;
- (id)dataConsumerForMimePart:(id)arg1;
- (id)dataDetectionAttributes;
- (id)dataPathForMimePart:(id)arg1;
- (id)displayDate;
- (unsigned long long)fileSize;
- (id)followUp;
- (bool)hasTemporaryUid;
- (unsigned long long)hash;
- (id)initWithLibraryID:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isLibraryMessage;
- (bool)isMessageContentsLocallyAvailable;
- (bool)isPartial;
- (id)library;
- (long long)libraryID;
- (void)loadCachedHeaderValuesFromHeaders:(id)arg1;
- (id)mailbox;
- (long long)mailboxID;
- (id)mailboxName;
- (void)markAsFlagged;
- (void)markAsForwarded;
- (void)markAsNotFlagged;
- (void)markAsNotViewed;
- (void)markAsReplied;
- (void)markAsViewed;
- (id)messageID;
- (unsigned long long)messageSize;
- (id)messageStore;
- (long long)originalMailboxID;
- (id)originalMailboxURL;
- (id)path;
- (long long)persistedMessageID;
- (id)persistentID;
- (id)preferredAccountToUseForReplying;
- (id)readLater;
- (id)references;
- (id)remoteContentLinks;
- (id)remoteID;
- (id)sendLaterDate;
- (long long)senderBucket;
- (void)setBrandIndicatorLocation:(id)arg1;
- (void)setBrandIndicatorLocation:(id)arg1 andData:(id)arg2;
- (void)setConversationFlags:(unsigned long long)arg1;
- (void)setDataDetectionAttributes;
- (void)setDisplayDate:(id)arg1;
- (void)setFlags:(unsigned long long)arg1;
- (void)setFollowUp:(id)arg1;
- (void)setHasTemporaryUid:(bool)arg1;
- (void)setIsPartial:(bool)arg1;
- (void)setMailboxID:(long long)arg1;
- (void)setMessageData:(id)arg1 isPartial:(bool)arg2;
- (void)setMessageFlags:(unsigned long long)arg1;
- (void)setMessageFlagsWithoutCommitting:(unsigned long long)arg1;
- (void)setMessageSize:(unsigned long long)arg1;
- (void)setMutableInfoFromMessage:(id)arg1;
- (void)setOriginalMailboxID:(long long)arg1;
- (void)setPreferredEncoding:(unsigned int)arg1;
- (void)setReadLater:(id)arg1;
- (void)setReadLaterDate:(id)arg1;
- (void)setReferences:(id)arg1;
- (void)setRemoteContentLinks:(id)arg1;
- (void)setRemoteID:(id)arg1;
- (void)setRemoteID:(id)arg1 flags:(unsigned long long)arg2 size:(unsigned int)arg3 mailboxID:(long long)arg4 originalMailboxID:(long long)arg5;
- (void)setSendLaterDate:(id)arg1;
- (void)setSenderBucket:(long long)arg1;
- (void)setSummary:(id)arg1;
- (void)setUid:(unsigned int)arg1;
- (void)setUniqueRemoteId:(unsigned long long)arg1;
- (void)setUnsubscribeType:(long long)arg1;
- (id)storageLocationForAttachment:(id)arg1;
- (unsigned int)uid;
- (unsigned long long)uniqueRemoteId;
- (long long)unsubscribeType;

@end