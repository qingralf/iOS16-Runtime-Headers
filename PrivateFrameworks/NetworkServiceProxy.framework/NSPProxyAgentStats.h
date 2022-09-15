/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NSPProxyAgentStats : NSPProxyAnalytics {
    unsigned long long  _egressProxyLowWaterMarkHitCount;
    unsigned long long  _egressProxyTokensAdded;
    unsigned long long  _ingressProxyLowWaterMarkHitCount;
    unsigned long long  _ingressProxyTokensAdded;
    NSString * _tierType;
}

@property (nonatomic) unsigned long long egressProxyLowWaterMarkHitCount;
@property (nonatomic) unsigned long long egressProxyTokensAdded;
@property (nonatomic) unsigned long long ingressProxyLowWaterMarkHitCount;
@property (nonatomic) unsigned long long ingressProxyTokensAdded;
@property (nonatomic, retain) NSString *tierType;

- (void).cxx_destruct;
- (id)analyticsDict;
- (unsigned long long)egressProxyLowWaterMarkHitCount;
- (unsigned long long)egressProxyTokensAdded;
- (id)eventName;
- (unsigned long long)ingressProxyLowWaterMarkHitCount;
- (unsigned long long)ingressProxyTokensAdded;
- (void)setEgressProxyLowWaterMarkHitCount:(unsigned long long)arg1;
- (void)setEgressProxyTokensAdded:(unsigned long long)arg1;
- (void)setIngressProxyLowWaterMarkHitCount:(unsigned long long)arg1;
- (void)setIngressProxyTokensAdded:(unsigned long long)arg1;
- (void)setTierType:(id)arg1;
- (id)tierType;

@end