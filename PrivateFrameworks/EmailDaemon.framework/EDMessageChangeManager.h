/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

@interface EDMessageChangeManager : NSObject <EFLoggable> {
    EDBIMIManager * _bimiManager;
    EDPersistenceDatabase * _database;
    <EDMessageChangeHookResponder> * _hookResponder;
    EDLocalActionPersistence * _localActionPersistence;
    NSObject<OS_dispatch_queue> * _markAllWorkQueue;
    EDMessagePersistence * _messagePersistence;
    EDReadLaterPersistence * _readLaterPersistence;
    EDServerMessagePersistenceFactory * _serverMessagePersistenceFactory;
}

@property (nonatomic, readonly) EDBIMIManager *bimiManager;
@property (nonatomic, readonly) EDPersistenceDatabase *database;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <EDMessageChangeHookResponder> *hookResponder;
@property (nonatomic, readonly) EDLocalActionPersistence *localActionPersistence;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *markAllWorkQueue;
@property (nonatomic, readonly) EDMessagePersistence *messagePersistence;
@property (nonatomic, readonly) EDReadLaterPersistence *readLaterPersistence;
@property (nonatomic, readonly) EDServerMessagePersistenceFactory *serverMessagePersistenceFactory;
@property (readonly) Class superclass;

+ (id)log;
+ (id)signpostLog;

- (void).cxx_destruct;
- (id)_applyReadLaterDate:(id)arg1 toMessages:(id)arg2 changeIsRemote:(bool)arg3;
- (id)_applyReadLaterDate:(id)arg1 toMessages:(id)arg2 changeIsRemote:(bool)arg3 hookResponder:(id)arg4;
- (void)_clearFollowUpsFromThreadsForMessages:(id)arg1;
- (void)_deleteDestinationMessagesFromCompletedItems:(id)arg1 notInServerMessages:(id)arg2;
- (id)_findDestinationMessagesFromCompletedItems:(id)arg1 notInServerMessages:(id)arg2;
- (id)_handleDuplicateServerMessage:(id)arg1 serverMessagePersistence:(id)arg2;
- (void)_handleFailedCopyItems:(id)arg1 transferAction:(id)arg2 generationWindow:(id)arg3;
- (void)_handleFailedDownload:(id)arg1 generationWindow:(id)arg2;
- (bool)_hookResponderRespondsToRequiredMethods:(id)arg1;
- (bool)_needToStoreServerMessagesForMailboxURL:(id)arg1;
- (bool)_persistFlagChangeResults:(id)arg1 forFlagChangeAction:(id)arg2;
- (bool)_persistResults:(id)arg1 forFlagChangeAction:(id)arg2;
- (bool)_persistResults:(id)arg1 forLabelChangeAction:(id)arg2;
- (bool)_persistResults:(id)arg1 forTransferAction:(id)arg2;
- (void)_reflectFlagChanges:(id)arg1 messages:(id)arg2 remoteIDs:(id)arg3 mailboxURL:(id)arg4;
- (void)_resetLocalFlagsToServerFlagsForMessagesWithRemoteIDs:(id)arg1 mailboxURL:(id)arg2;
- (void)_resetLocalLabelsToServerLabelsForMessagesWithRemoteIDs:(id)arg1 mailboxURL:(id)arg2;
- (void)_storeServerMessages:(id)arg1 mailboxURL:(id)arg2 generationWindow:(id)arg3;
- (id)_truncateReadLaterDate:(id)arg1;
- (id)accountForMailboxURL:(id)arg1;
- (id)addLabels:(id)arg1 removeLabels:(id)arg2 forMessages:(id)arg3;
- (id)addNewMessages:(id)arg1 mailboxURL:(id)arg2 userInitiated:(bool)arg3;
- (void)applyFlagChange:(id)arg1 toAllMessagesFromMailboxes:(id)arg2 exceptMessages:(id)arg3;
- (id)applyFlagChange:(id)arg1 toMessages:(id)arg2;
- (void)applyFollowUp:(id)arg1 toMessages:(id)arg2;
- (void)applyFollowUp:(id)arg1 toMessages:(id)arg2 withNegativeFeedbackForSuggestions:(bool)arg3;
- (id)applyReadLaterDate:(id)arg1 toMessages:(id)arg2;
- (void)applyVIPStatus:(bool)arg1 forMessages:(id)arg2;
- (id)bimiManager;
- (id)copyMessages:(id)arg1 destinationMailboxURL:(id)arg2 userInitiated:(bool)arg3;
- (id)database;
- (void)deleteAllMessageFromMailboxes:(id)arg1 exceptMessages:(id)arg2;
- (void)deleteMessages:(id)arg1;
- (void)didFinishPersistenceDidAddMessages:(id)arg1;
- (void)didReflectNewMessages:(id)arg1;
- (id)hookResponder;
- (id)init;
- (id)initWithDatabase:(id)arg1 localActionPersistence:(id)arg2 messagePersistence:(id)arg3 serverMessagePersistenceFactory:(id)arg4 readLaterPersistence:(id)arg5 bimiManager:(id)arg6 hookResponder:(id)arg7 hookRegistry:(id)arg8;
- (id)localActionPersistence;
- (bool)mailboxURL:(id)arg1 isInSameAccountAsMailboxURL:(id)arg2;
- (bool)mailboxURLIsInRemoteAccount:(id)arg1;
- (id)markAllWorkQueue;
- (id)messagePersistence;
- (id)messagesToJournalForMessages:(id)arg1 inMailbox:(id)arg2;
- (id)moveMessages:(id)arg1 destinationMailboxURL:(id)arg2 userInitiated:(bool)arg3;
- (bool)persistResults:(id)arg1 forAction:(id)arg2;
- (id)readLaterPersistence;
- (void)reflectAddedLabels:(id)arg1 removedLabels:(id)arg2 forMessagesWithRemoteIDs:(id)arg3 mailboxURL:(id)arg4;
- (void)reflectAllMessagesDeletedInMailboxURL:(id)arg1;
- (void)reflectDeletedAllClearedMessagesInMailboxURL:(id)arg1;
- (void)reflectDeletedMessages:(id)arg1;
- (void)reflectDeletedMessagesWithRemoteIDs:(id)arg1 mailboxURL:(id)arg2;
- (void)reflectFlagChanges:(id)arg1 forMessages:(id)arg2;
- (void)reflectFlagChanges:(id)arg1 forMessagesWithRemoteIDs:(id)arg2 mailboxURL:(id)arg3;
- (id)reflectNewMessages:(id)arg1 mailboxURL:(id)arg2;
- (void)reflectSortedFlagChanges:(id)arg1 mailboxURL:(id)arg2;
- (void)remindMeCloudStorageChangedWithAddedOrChangedItems:(id)arg1 deletedItems:(id)arg2;
- (id)serverMessagePersistenceFactory;
- (void)setMarkAllWorkQueue:(id)arg1;
- (unsigned long long)signpostID;
- (void)test_tearDown;
- (void)transferAllMessagesFromMailboxes:(id)arg1 exceptMessages:(id)arg2 transferType:(long long)arg3 destinationMailboxURL:(id)arg4 userInitiated:(bool)arg5;
- (id)transferMessages:(id)arg1 transferType:(long long)arg2 destinationMailboxURL:(id)arg3 userInitiated:(bool)arg4;
- (void)transferMessages:(id)arg1 transferType:(long long)arg2 destinationMailboxURL:(id)arg3 userInitiated:(bool)arg4 oldMessagesByNewMessage:(id)arg5;
- (void)willStartPersistenceDidAddMessages:(id)arg1;

@end