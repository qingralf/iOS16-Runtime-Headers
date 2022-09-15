/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NSPCandidateProxyPath : NSObject <NSCopying, NSSecureCoding> {
    NSData * _domainFilter;
    NSPProxyTokenInfo * _egressProxy;
    NSPProxyTokenInfo * _ingressProxy;
    NSString * _preferredPathConfigURI;
    unsigned long long  _proxyPathWeight;
}

@property (nonatomic, retain) NSData *domainFilter;
@property (nonatomic, retain) NSPProxyTokenInfo *egressProxy;
@property (nonatomic, retain) NSPProxyTokenInfo *ingressProxy;
@property (nonatomic, retain) NSString *preferredPathConfigURI;
@property (nonatomic) unsigned long long proxyPathWeight;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)domainFilter;
- (id)egressProxy;
- (void)encodeWithCoder:(id)arg1;
- (void)fetchDomainFilter:(id /* block */)arg1;
- (id)ingressProxy;
- (id)initWithCoder:(id)arg1;
- (id)initWithIngressProxy:(id)arg1 egressProxy:(id)arg2 proxyPathWeight:(unsigned long long)arg3 preferredPathConfigURI:(id)arg4;
- (bool)matchEgress:(id)arg1;
- (bool)matchIngress:(id)arg1;
- (id)preferredPathConfigURI;
- (bool)proxyPathReady;
- (unsigned long long)proxyPathWeight;
- (void)setDomainFilter:(id)arg1;
- (void)setEgressProxy:(id)arg1;
- (void)setIngressProxy:(id)arg1;
- (void)setPreferredPathConfigURI:(id)arg1;
- (void)setProxyPathWeight:(unsigned long long)arg1;

@end