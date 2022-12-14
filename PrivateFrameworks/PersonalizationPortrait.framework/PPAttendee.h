/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

@interface PPAttendee : NSObject <NSCopying, NSSecureCoding> {
    NSString * _emailAddress;
    bool  _isCurrentUser;
    NSString * _name;
    unsigned char  _status;
    NSURL * _url;
}

@property (nonatomic, readonly) NSString *emailAddress;
@property (nonatomic, readonly) bool isCurrentUser;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned char status;
@property (nonatomic, readonly) NSURL *url;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)emailAddress;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithEKParticipant:(id)arg1;
- (id)initWithName:(id)arg1 emailAddress:(id)arg2 url:(id)arg3 isCurrentUser:(bool)arg4 status:(unsigned char)arg5;
- (bool)isCurrentUser;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAttendee:(id)arg1;
- (id)name;
- (unsigned char)status;
- (id)url;

@end
