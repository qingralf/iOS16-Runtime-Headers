/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMMessageStatusChatItem : IMTranscriptChatItem <IMChatTranscriptStatusItem> {
    unsigned long long  _count;
    long long  _expireStatusType;
    long long  _statusType;
    NSDate * _time;
    NSDate * _timeAdded;
    NSDate * _timeStale;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) NSDate *dateOfStatus;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *errorText;
@property (nonatomic, readonly) long long expireStatusType;
@property (getter=isFromMe, nonatomic, readonly) bool fromMe;
@property (nonatomic, readonly) IMHandle *handle;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isFromMe;
@property (nonatomic, readonly) long long messageStatusType;
@property (nonatomic, readonly) IMServiceImpl *service;
@property (nonatomic, readonly) long long statusType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDate *time;
@property (nonatomic, readonly) NSDate *timeAdded;
@property (nonatomic, readonly) NSDate *timeStale;
@property (nonatomic, readonly) NSDate *transcriptDate;
@property (nonatomic, readonly, copy) NSAttributedString *transcriptText;
@property (nonatomic, readonly) bool wantsTail;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (void).cxx_destruct;
- (id)_initWithItem:(id)arg1 expireStatusType:(long long)arg2 count:(unsigned long long)arg3;
- (id)_initWithItem:(id)arg1 statusType:(long long)arg2 time:(id)arg3 count:(unsigned long long)arg4;
- (id)_initWithItem:(id)arg1 statusType:(long long)arg2 time:(id)arg3 count:(unsigned long long)arg4 expireStatusType:(long long)arg5;
- (void)_setTimeAdded:(id)arg1;
- (id)_timeAdded;
- (id)_timeStale;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)dateOfStatus;
- (id)description;
- (id)errorText;
- (long long)expireStatusType;
- (bool)isFromMe;
- (long long)messageStatusType;
- (long long)statusType;
- (id)time;
- (id)timeAdded;
- (id)timeStale;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (Class)__ck_chatItemClass;

@end
