/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

@interface _EDMessageDuplicateInfo : NSObject {
    NSMutableArray * _dates;
    NSMutableArray * _flags;
    EDMailboxProvider * _mailboxProvider;
    NSMutableSet * _mailboxes;
    NSMutableArray * _senderBuckets;
}

@property (nonatomic, retain) NSMutableArray *dates;
@property (nonatomic, retain) NSMutableArray *flags;
@property (nonatomic, retain) EDMailboxProvider *mailboxProvider;
@property (nonatomic, retain) NSMutableSet *mailboxes;
@property (nonatomic, retain) NSMutableArray *senderBuckets;

- (void).cxx_destruct;
- (void)addMessage:(id)arg1;
- (id)combinedDate;
- (id)combinedMailboxes;
- (id)combinedMessageFlags;
- (long long)combinedSenderBucket;
- (id)dates;
- (id)flags;
- (id)initWithMailboxProvider:(id)arg1;
- (id)mailboxProvider;
- (id)mailboxes;
- (id)senderBuckets;
- (void)setDates:(id)arg1;
- (void)setFlags:(id)arg1;
- (void)setMailboxProvider:(id)arg1;
- (void)setMailboxes:(id)arg1;
- (void)setSenderBuckets:(id)arg1;

@end
