/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NSPOutageReasonStats : NSPProxyAnalytics <NSCopying, NSSecureCoding> {
    NSString * _fallbackEgressProxy;
    NSString * _fallbackIngressProxy;
    NSString * _odohProxy;
    NSString * _outageReasonSubType;
    NSString * _outageReasonType;
    NSString * _primaryEgressProxy;
    NSString * _primaryIngressProxy;
    NSString * _tierType;
    NSString * _tokenProxy;
}

@property (nonatomic, retain) NSString *fallbackEgressProxy;
@property (nonatomic, retain) NSString *fallbackIngressProxy;
@property (nonatomic, retain) NSString *odohProxy;
@property (nonatomic, retain) NSString *outageReasonSubType;
@property (nonatomic, retain) NSString *outageReasonType;
@property (nonatomic, retain) NSString *primaryEgressProxy;
@property (nonatomic, retain) NSString *primaryIngressProxy;
@property (nonatomic, retain) NSString *tierType;
@property (nonatomic, retain) NSString *tokenProxy;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)analyticsDict;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)eventName;
- (id)fallbackEgressProxy;
- (id)fallbackIngressProxy;
- (id)initWithCoder:(id)arg1;
- (id)odohProxy;
- (id)outageReasonSubType;
- (id)outageReasonType;
- (id)primaryEgressProxy;
- (id)primaryIngressProxy;
- (void)setFallbackEgressProxy:(id)arg1;
- (void)setFallbackIngressProxy:(id)arg1;
- (void)setOdohProxy:(id)arg1;
- (void)setOutageReasonSubType:(id)arg1;
- (void)setOutageReasonType:(id)arg1;
- (void)setPrimaryEgressProxy:(id)arg1;
- (void)setPrimaryIngressProxy:(id)arg1;
- (void)setTierType:(id)arg1;
- (void)setTokenProxy:(id)arg1;
- (id)tierType;
- (id)tokenProxy;

@end
