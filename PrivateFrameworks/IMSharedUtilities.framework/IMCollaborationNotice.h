/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@interface IMCollaborationNotice : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _date;
    NSString * _guidString;
    IMCollaborationNoticeMetadata * _metadata;
    NSString * _senderHandle;
}

@property (nonatomic, retain) NSDate *date;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, retain) NSString *guidString;
@property (nonatomic, retain) IMCollaborationNoticeMetadata *metadata;
@property (nonatomic, retain) NSString *senderHandle;

// Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities

+ (id)noticeWithGUIDString:(id)arg1 sender:(id)arg2 metadata:(id)arg3 date:(id)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (void)encodeWithCoder:(id)arg1;
- (id)guidString;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithGUIDString:(id)arg1 sender:(id)arg2 metadata:(id)arg3 date:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)metadata;
- (id)senderHandle;
- (void)setDate:(id)arg1;
- (void)setGuidString:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setSenderHandle:(id)arg1;
- (bool)wantsEphemeralDismissal;

// Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore

- (id)description;

@end
