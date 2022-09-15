/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

@interface REMListChangeItem : NSObject <REMConflictResolving, REMExternalSyncMetadataWritableProviding, REMMergeableOrderingNode, REMSaveRequestTrackedValue, REMSupportedVersionProviding, REMSupportedVersionUpdating> {
    REMChangedKeysObserver * _changedKeysObserver;
    REMAccount * _parentAccount;
    REMSaveRequest * _saveRequest;
    REMListStorage * _storage;
}

@property (nonatomic, readonly) REMAccountCapabilities *accountCapabilities;
@property (nonatomic, retain) REMObjectID *accountID;
@property (nonatomic, readonly) REMListAppearanceContextChangeItem *appearanceContext;
@property (nonatomic, retain) NSString *badgeEmblem;
@property (nonatomic, readonly) REMListCalDAVNotificationContextChangeItem *calDAVNotificationContext;
@property (nonatomic, retain) NSArray *calDAVNotifications;
@property (nonatomic, readonly) bool canBeIncludedInGroup;
@property (nonatomic, retain) REMChangedKeysObserver *changedKeysObserver;
@property (nonatomic, retain) NSSet *childListIDsToUndelete;
@property (nonatomic, retain) NSSet *childSmartListIDsToUndelete;
@property (nonatomic, retain) REMColor *color;
@property (nonatomic, readonly) NSString *currentUserShareParticipantID;
@property (nonatomic, retain) NSDictionary *daBulkRequests;
@property (nonatomic) long long daDisplayOrder;
@property (nonatomic, retain) NSString *daExternalIdentificationTag;
@property (nonatomic) bool daIsEventOnlyContainer;
@property (nonatomic) bool daIsImmutable;
@property (nonatomic) bool daIsNotificationsCollection;
@property (nonatomic) bool daIsReadOnly;
@property (nonatomic, copy) NSString *daPushKey;
@property (nonatomic, copy) NSString *daSyncToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) long long effectiveMinimumSupportedVersion;
@property (nonatomic, copy) NSString *externalIdentifier;
@property (nonatomic, copy) NSString *externalModificationTag;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isGroup;
@property (nonatomic, readonly) bool isOwnedByMe;
@property (nonatomic) bool isPinned;
@property (nonatomic, readonly) bool isPlaceholder;
@property (nonatomic, readonly) bool isShared;
@property (nonatomic, readonly) bool isSharedToMe;
@property (nonatomic, copy) NSDate *lastUserAccessDate;
@property (nonatomic, readonly) long long minimumSupportedVersion;
@property (nonatomic, readonly) NSUUID *mostRecentTargetTemplateIdentifier;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) REMObjectID *objectID;
@property (nonatomic, readonly) REMAccount *parentAccount;
@property (nonatomic, retain) REMObjectID *parentAccountID;
@property (nonatomic, retain) REMObjectID *parentListID;
@property (nonatomic, retain) REMObjectID *parentOwnerID;
@property (nonatomic, retain) REMObjectID *parentSubContainerID;
@property (nonatomic, copy) NSDate *pinnedDate;
@property (nonatomic, readonly) REMObjectID *remObjectID;
@property (nonatomic, readonly) NSOrderedSet *reminderIDsMergeableOrdering;
@property (nonatomic, readonly) NSData *reminderIDsMergeableOrderingData;
@property (nonatomic, retain) NSDictionary *reminderIDsOrderingHints;
@property (nonatomic, retain) NSSet *reminderIDsToUndelete;
@property (nonatomic) bool remindersICSDisplayOrderChanged;
@property (nonatomic, retain) REMResolutionTokenMap *resolutionTokenMap;
@property (nonatomic, retain) NSData *resolutionTokenMapData;
@property (nonatomic, readonly) REMSaveRequest *saveRequest;
@property (nonatomic, copy) NSString *sharedOwnerAddress;
@property (nonatomic, retain) REMObjectID *sharedOwnerID;
@property (nonatomic, copy) NSString *sharedOwnerName;
@property (nonatomic, readonly) REMListShareeContextChangeItem *shareeContext;
@property (nonatomic, retain) NSArray *sharees;
@property (nonatomic) long long sharingStatus;
@property (nonatomic) bool showingLargeAttachments;
@property (nonatomic, copy) NSString *sortingStyle;
@property (nonatomic, readonly, copy) REMListStorage *storage;
@property (nonatomic, readonly) REMListSublistContextChangeItem *sublistContext;
@property (readonly) Class superclass;
@property (nonatomic, retain) REMObjectID *templateID;

+ (id)cdEntityName;
+ (void)initialize;
+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)arg1;

- (void).cxx_destruct;
- (void)_editReminderIDsOrderingUsingBlock:(id /* block */)arg1;
- (void)_lowLevelAddReminderChangeItemToOrdering:(id)arg1 atIndexOfSibling:(id)arg2 isAfter:(bool)arg3 withParent:(id)arg4;
- (bool)_lowLevelAddReminderIDToOrdering:(id)arg1 relativeToSiblingID:(id)arg2 isAfter:(bool)arg3;
- (void)_lowLevelApplyUndoToOrdering:(id)arg1;
- (void)_reassignReminderChangeItem:(id)arg1 withParentReminderChangeItem:(id)arg2;
- (id)_testingOnly_listShareeContextChangeItem;
- (void)_testingOnly_setReminderIDsMergeableOrder:(id)arg1;
- (id)accountCapabilities;
- (void)addReminderChangeItem:(id)arg1;
- (id)appearanceContext;
- (id)calDAVNotificationContext;
- (bool)canBeIncludedInGroup;
- (id)changedKeys;
- (id)changedKeysObserver;
- (void)copyListDataFrom:(id)arg1;
- (id)description;
- (id)ekColor;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithObjectID:(id)arg1 name:(id)arg2 insertIntoAccountChangeItem:(id)arg3;
- (id)initWithObjectID:(id)arg1 name:(id)arg2 insertIntoAccountChangeItem:(id)arg3 isGroup:(bool)arg4;
- (id)initWithObjectID:(id)arg1 name:(id)arg2 insertIntoAccountChangeItem:(id)arg3 isGroup:(bool)arg4 withParentList:(id)arg5;
- (id)initWithObjectID:(id)arg1 name:(id)arg2 insertIntoListSublistContextChangeItem:(id)arg3;
- (id)initWithSaveRequest:(id)arg1 storage:(id)arg2 accountCapabilities:(id)arg3 changedKeysObserver:(id)arg4;
- (id)initWithSaveRequest:(id)arg1 storage:(id)arg2 accountCapabilities:(id)arg3 observeInitialValues:(bool)arg4;
- (void)insertReminderChangeItem:(id)arg1 adjacentToReminderChangeItem:(id)arg2 isAfter:(bool)arg3 withParentReminderChangeItem:(id)arg4;
- (void)insertReminderChangeItem:(id)arg1 afterReminderChangeItem:(id)arg2;
- (void)insertReminderChangeItem:(id)arg1 beforeReminderChangeItem:(id)arg2;
- (bool)isOwnedByMe;
- (bool)isPinned;
- (bool)isShared;
- (bool)isSharedToMe;
- (bool)isSubContainer;
- (bool)isUnsupported;
- (void)lowLevelAddReminderIDToOrdering:(id)arg1 withParentReminderChangeItem:(id)arg2;
- (id)lowLevelRemoveReminderIDFromOrdering:(id)arg1;
- (bool)optimisticallyInsertReminderIDToOrderingForReminderChangeItemBeingSaved:(id)arg1;
- (id)parentAccount;
- (id)parentOwnerID;
- (id)parentSubContainerID;
- (id)removeFromAccountAllowingUndo;
- (void)removeFromParent;
- (id)removeFromParentAllowingUndo;
- (void)removeFromParentWithAccountChangeItem:(id)arg1;
- (id)resolutionTokenKeyForChangedKey:(id)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (id)saveRequest;
- (void)setChangedKeysObserver:(id)arg1;
- (void)setDaDisplayOrder:(long long)arg1;
- (void)setDaIsNotificationsCollection:(bool)arg1;
- (void)setIsPinned:(bool)arg1;
- (void)setParentOwnerID:(id)arg1;
- (void)setParentSubContainerID:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)shallowCopyWithSaveRequest:(id)arg1;
- (id)shareeContext;
- (id)storage;
- (id)sublistContext;
- (void)undeleteReminderWithID:(id)arg1 usingUndo:(id)arg2;
- (void)undeleteRemindersWithoutUndoWithIDs:(id)arg1 isCalDAV:(bool)arg2;
- (id)valueForUndefinedKey:(id)arg1;

@end