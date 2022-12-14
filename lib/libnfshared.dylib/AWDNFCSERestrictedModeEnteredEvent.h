/* Generated by RuntimeBrowser
   Image: /usr/lib/libnfshared.dylib
 */

@interface AWDNFCSERestrictedModeEnteredEvent : PBCodable <NSCopying> {
    NSData * _attackLog;
    bool  _contactless;
    unsigned int  _hardwareType;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int hardwareType : 1; 
        unsigned int contactless : 1; 
    }  _has;
    NSString * _platformIdentifier;
    NSData * _restrictedModeUUID;
    unsigned long long  _timestamp;
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
