/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMDPersistence.framework/IMDPersistence
 */

@interface IMDMessageRecord : IMDRecord <IMDBridgedRecord>

@property (getter=isAssociatedMessage, nonatomic, readonly) bool associatedMessage;
@property (nonatomic, readonly, copy) NSString *associatedMessageGUID;
@property (nonatomic, readonly) long long associatedMessageType;
@property (nonatomic, readonly) NSArray *attachmentRecords;
@property (nonatomic, readonly, copy) NSData *attributedBodyData;
@property (nonatomic, readonly, copy) NSAttributedString *attributedBodyText;
@property (nonatomic, readonly) IMDChatRecord *chatRecord;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSDate *dateDelivered;
@property (nonatomic, readonly) NSDate *dateEdited;
@property (nonatomic, readonly) NSDate *dateRead;
@property (getter=isFromMe, nonatomic, readonly) bool fromMe;
@property (nonatomic, readonly, copy) NSString *guid;
@property (nonatomic, readonly) IMDHandleRecord *handleRecord;
@property (nonatomic, readonly) long long itemType;
@property (nonatomic, readonly) long long rawDate;
@property (nonatomic, readonly) long long rawDateDelivered;
@property (nonatomic, readonly) long long rawDateRead;
@property (getter=isReply, nonatomic, readonly) bool reply;
@property (nonatomic, readonly) long long rowID;
@property (nonatomic, readonly, copy) NSString *text;
@property (nonatomic, readonly) NSString *threadOriginatorGUID;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)keyPathsToColumns;

- (unsigned long long)_cfTypeID;
- (void*)_fetchUpdatedRecord;
- (struct __CFArray { }*)_localCache;
- (struct { char *x1; long long x2; struct { /* ? */ } *x3; unsigned int x4; void *x5; })_propertyDescriptorForProperty:(long long)arg1;
- (int)_propertyIDForProperty:(long long)arg1;
- (id)associatedMessageGUID;
- (long long)associatedMessageType;
- (id)attachmentRecords;
- (id)attributedBodyData;
- (id)attributedBodyText;
- (struct _IMDMessageRecordStruct { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; long long x2; struct __CFArray {} *x3; struct _IMDHandleRecordStruct {} *x4; struct _IMDHandleRecordStruct {} *x5; struct __CFArray {} *x6; struct __CFDictionary {} *x7; }*)cfMessageRecord;
- (id)chatRecord;
- (id)date;
- (id)dateDelivered;
- (id)dateEdited;
- (id)dateRead;
- (id)guid;
- (id)handleRecord;
- (id)init;
- (id)initWithItemType:(long long)arg1 text:(id)arg2 date:(long long)arg3 dateRead:(long long)arg4 dateDelivered:(long long)arg5 datePlayed:(long long)arg6 error:(long long)arg7 type:(long long)arg8 replaceID:(long long)arg9 flags:(id)arg10 guid:(id)arg11 attributedBody:(id)arg12 service:(id)arg13 account:(id)arg14 accountGUID:(id)arg15 subject:(id)arg16 handleID:(id)arg17 countryCode:(id)arg18 unformattedID:(id)arg19 otherHandleID:(id)arg20 groupTitle:(id)arg21 groupActionType:(long long)arg22 shareStatus:(long long)arg23 shareDirection:(long long)arg24 expireState:(long long)arg25 messageActionType:(long long)arg26 associatedMessageGUID:(id)arg27 associatedMessageType:(long long)arg28 associatedMessageRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg29 balloonBundleID:(id)arg30 payloadData:(id)arg31 expressiveSendStyleID:(id)arg32 timeExpressiveSendPlayed:(long long)arg33 messageSummaryInfo:(id)arg34 cloudKitSyncState:(long long)arg35 cloudKitRecordID:(id)arg36 cloudKitServerChangeTokenBlob:(id)arg37 cloudKitRecordChangeTag:(id)arg38 dataDetectorsInfo:(id)arg39 destinationCallerID:(id)arg40 replyToGUID:(id)arg41 sortID:(long long)arg42 threadOriginatorGUID:(id)arg43 threadOriginatorPart:(id)arg44 syndicationRanges:(id)arg45 syncedSyndicationRanges:(id)arg46 partCount:(long long)arg47 dateEdited:(long long)arg48;
- (bool)isAssociatedMessage;
- (bool)isFromMe;
- (bool)isReply;
- (long long)itemType;
- (long long)rawDate;
- (long long)rawDateDelivered;
- (long long)rawDateEdited;
- (long long)rawDateRead;
- (long long)rowID;
- (id)text;
- (id)threadOriginatorGUID;

@end
