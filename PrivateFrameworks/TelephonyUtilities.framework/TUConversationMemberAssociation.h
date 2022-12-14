/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUConversationMemberAssociation : NSObject <NSCopying, NSSecureCoding> {
    NSString * _avcIdentifier;
    TUHandle * _handle;
    unsigned long long  _identifier;
    bool  _primary;
    long long  _type;
}

@property (nonatomic, copy) NSString *avcIdentifier;
@property (nonatomic, retain) TUHandle *handle;
@property (nonatomic) unsigned long long identifier;
@property (getter=isPrimary, nonatomic) bool primary;
@property (nonatomic) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)avcIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)handle;
- (unsigned long long)hash;
- (unsigned long long)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithHandle:(id)arg1 type:(long long)arg2 primary:(bool)arg3;
- (id)initWithMemberAssociation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAssociation:(id)arg1;
- (bool)isPrimary;
- (void)setAvcIdentifier:(id)arg1;
- (void)setHandle:(id)arg1;
- (void)setIdentifier:(unsigned long long)arg1;
- (void)setPrimary:(bool)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
