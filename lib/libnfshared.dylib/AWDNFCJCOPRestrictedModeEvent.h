/* Generated by RuntimeBrowser
   Image: /usr/lib/libnfshared.dylib
 */

@interface AWDNFCJCOPRestrictedModeEvent : PBCodable <NSCopying> {
    bool  _contactless;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int contactless : 1; 
    }  _has;
    NSData * _log;
    unsigned long long  _timestamp;
    NSData * _uuidReference;
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