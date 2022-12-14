/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFActivityMonitor : EFPriorityDesignator <EFCancelable> {
    NSMutableSet * _associatedCancelables;
    unsigned long long  _bytesRead;
    unsigned long long  _bytesWritten;
    unsigned int  _canCancel;
    unsigned long long  _currentCount;
    NSString * _displayName;
    MFError * _error;
    unsigned long long  _expectedLength;
    unsigned long long  _gotNewMessagesState;
    unsigned int  _isActive;
    bool  _isRemoteSearch;
    unsigned int  _key;
    double  _lastTime;
    MFMailboxUid * _mailbox;
    unsigned long long  _maxCount;
    double  _percentDone;
    NSMutableSet * _reasons;
    NSThread * _runningThread;
    unsigned int  _shouldCancel;
    double  _startTime;
    id /* block */  _startedFetch;
    NSString * _statusMessage;
    long long  _transportType;
}

@property (nonatomic, readonly) unsigned long long bytesRead;
@property (nonatomic, readonly) unsigned long long bytesWritten;
@property (nonatomic) bool canBeCancelled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) MFError *error;
@property (nonatomic) unsigned long long expectedLength;
@property (nonatomic) unsigned long long gotNewMessagesState;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isRemoteSearch;
@property (retain) MFMailboxUid *mailbox;
@property (nonatomic) double percentDone;
@property (nonatomic) bool shouldCancel;
@property (nonatomic, readonly) double startTime;
@property (copy) id /* block */ startedFetch;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long transportType;

+ (id)currentMonitor;
+ (void)destroyMonitor;
+ (id)pushNewMonitor;

- (void).cxx_destruct;
- (void)_cancelAssociatedCancelables;
- (void)_didChange;
- (id)_ntsThrottledUserInfoDict;
- (int)acquireExclusiveAccessKey;
- (void)addCancelable:(id)arg1;
- (void)addReason:(id)arg1;
- (unsigned long long)bytesRead;
- (unsigned long long)bytesWritten;
- (bool)canBeCancelled;
- (void)cancel;
- (void)cancelMessage;
- (id)error;
- (unsigned long long)expectedLength;
- (void)finishedActivity:(id)arg1;
- (unsigned long long)gotNewMessagesState;
- (id)init;
- (bool)isActive;
- (bool)isRemoteSearch;
- (id)mailbox;
- (double)percentDone;
- (void)postActivityFinished:(id)arg1;
- (void)postActivityStarting;
- (void)postDidChangeWithUserInfo:(id)arg1;
- (id)reasons;
- (void)recordBytesRead:(unsigned long long)arg1;
- (void)recordBytesWritten:(unsigned long long)arg1;
- (void)recordTransportType:(long long)arg1;
- (void)relinquishExclusiveAccessKey:(int)arg1;
- (void)removeCancelable:(id)arg1;
- (void)reset;
- (void)resetConnectionStats;
- (void)setCanBeCancelled:(bool)arg1;
- (void)setCurrentCount:(unsigned long long)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setDisplayName:(id)arg1 maxCount:(unsigned long long)arg2;
- (void)setError:(id)arg1;
- (void)setExpectedLength:(unsigned long long)arg1;
- (void)setGotNewMessagesState:(unsigned long long)arg1;
- (void)setIsRemoteSearch:(bool)arg1;
- (void)setMailbox:(id)arg1;
- (void)setPercentDone:(double)arg1;
- (void)setPercentDone:(double)arg1 withKey:(int)arg2;
- (void)setPercentDoneOfCurrentItem:(double)arg1;
- (void)setShouldCancel:(bool)arg1;
- (void)setStartedFetch:(id /* block */)arg1;
- (void)setStatusMessage:(id)arg1 percentDone:(double)arg2;
- (void)setStatusMessage:(id)arg1 percentDone:(double)arg2 withKey:(int)arg3;
- (void)setStatusMessage:(id)arg1 withKey:(int)arg2;
- (bool)shouldCancel;
- (void)startActivity;
- (double)startTime;
- (id /* block */)startedFetch;
- (long long)transportType;
- (id)userInfoForNotification;

@end
