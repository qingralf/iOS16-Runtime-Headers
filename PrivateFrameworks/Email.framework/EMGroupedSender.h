/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

@interface EMGroupedSender : EMRepositoryObject <EMMessageListItem, NSCopying, NSSecureCoding> {
    ECEmailAddress * _emailAddress;
    bool  _isCCMe;
    unsigned long long  _isEditable;
    bool  _isToMe;
    NSMutableArray * _messages;
    NSArray * _sortDescriptors;
}

@property (nonatomic, readonly) NSURL *brandIndicatorLocation;
@property (readonly, copy) NSArray *ccList;
@property (readonly) long long conversationID;
@property (readonly) long long conversationNotificationLevel;
@property (readonly) unsigned long long count;
@property (readonly) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) bool deleteMovesToTrash;
@property (readonly, copy) NSString *description;
@property (readonly) NSDate *displayDate;
@property (readonly) EFFuture *displayMessage;
@property (readonly) <EMCollectionItemID> *displayMessageItemID;
@property (readonly) EMObjectID *displayMessageObjectID;
@property (nonatomic, readonly, copy) NSString *ef_publicDescription;
@property (nonatomic, retain) ECEmailAddress *emailAddress;
@property (readonly, copy) NSIndexSet *flagColors;
@property (readonly) ECMessageFlags *flags;
@property (readonly) EMFollowUp *followUp;
@property (nonatomic, readonly, copy) EMGroupedSenderObjectID *groupedSenderObjectID;
@property (readonly) bool hasAttachments;
@property (readonly) bool hasUnflagged;
@property (readonly) bool hasUnscreenedSender;
@property (readonly) unsigned long long hash;
@property (readonly) bool isBlocked;
@property (readonly) bool isCCMe;
@property (readonly) bool isEditable;
@property (readonly) bool isToMe;
@property (readonly) bool isVIP;
@property (nonatomic, readonly) <EMCollectionItemID> *itemID;
@property (readonly, copy) NSArray *mailboxObjectIDs;
@property (readonly, copy) NSArray *mailboxes;
@property (readonly, copy) NSArray *mailboxesIfAvailable;
@property (nonatomic, readonly, copy) NSArray *messages;
@property (nonatomic, readonly) EMMessage *newestMessage;
@property (nonatomic, readonly, copy) EMObjectID *objectID;
@property (readonly) EMReadLater *readLater;
@property (readonly) NSDate *sendLaterDate;
@property (readonly) long long senderBucket;
@property (readonly, copy) NSArray *senderList;
@property (readonly) bool shouldArchiveByDefault;
@property (nonatomic, retain) NSArray *sortDescriptors;
@property (readonly) ECSubject *subject;
@property (readonly, copy) NSString *summary;
@property (readonly) Class superclass;
@property (readonly) bool supportsArchiving;
@property (readonly, copy) NSArray *toList;
@property (readonly) long long unsubscribeType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)addMessages:(id)arg1;
- (id)brandIndicatorLocation;
- (id)ccList;
- (id)changeKeyPaths:(id)arg1 forMessages:(id)arg2;
- (long long)conversationID;
- (long long)conversationNotificationLevel;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)date;
- (bool)deleteMovesToTrash;
- (id)displayDate;
- (id)displayMessage;
- (id)displayMessageItemID;
- (id)displayMessageObjectID;
- (id)ef_publicDescription;
- (id)emailAddress;
- (void)encodeWithCoder:(id)arg1;
- (id)flagColors;
- (id)flags;
- (id)followUp;
- (id)groupedSenderObjectID;
- (bool)hasAttachments;
- (bool)hasUnflagged;
- (bool)hasUnscreenedSender;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjectID:(id)arg1 emailAddress:(id)arg2 messages:(id)arg3 sortDescriptors:(id)arg4;
- (id)initWithSimpleAddress:(id)arg1 messages:(id)arg2 originatingQuery:(id)arg3;
- (bool)isBlocked;
- (bool)isCCMe;
- (bool)isEditable;
- (bool)isToMe;
- (bool)isVIP;
- (id)itemID;
- (id)mailboxObjectIDs;
- (id)mailboxes;
- (id)mailboxesIfAvailable;
- (id)messages;
- (id)newestMessage;
- (id)readLater;
- (id)removeMessages:(id)arg1 isGroupEmpty:(bool*)arg2;
- (id)sendLaterDate;
- (long long)senderBucket;
- (id)senderList;
- (void)setEmailAddress:(id)arg1;
- (void)setSortDescriptors:(id)arg1;
- (bool)shouldArchiveByDefault;
- (id)sortDescriptors;
- (id)subject;
- (id)summary;
- (bool)supportsArchiving;
- (id)toList;
- (long long)unsubscribeType;

@end
