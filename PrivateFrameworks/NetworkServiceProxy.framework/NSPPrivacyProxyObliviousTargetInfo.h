/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NSPPrivacyProxyObliviousTargetInfo : PBCodable <NSCopying> {
    struct { 
        unsigned int proxyIndex : 1; 
    }  _has;
    unsigned int  _proxyIndex;
    NSString * _proxyURLPath;
    NSString * _targetHost;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end