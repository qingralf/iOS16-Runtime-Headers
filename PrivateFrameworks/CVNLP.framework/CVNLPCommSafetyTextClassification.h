/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CVNLP.framework/CVNLP
 */

@interface CVNLPCommSafetyTextClassification : NSObject <NSCopying, NSSecureCoding> {
    NSString * _conversationIdentifier;
    NSDate * _endDate;
    long long  _result;
    NSDate * _startDate;
}

@property (nonatomic, readonly, copy) NSString *conversationIdentifier;
@property (nonatomic, readonly, copy) NSDate *endDate;
@property (nonatomic, readonly) long long result;
@property (nonatomic, readonly, copy) NSDate *startDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)conversationIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithConversationIdentifier:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 result:(long long)arg4;
- (bool)isEqual:(id)arg1;
- (long long)result;
- (id)startDate;

@end
