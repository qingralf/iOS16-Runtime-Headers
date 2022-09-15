/* Generated by RuntimeBrowser
   Image: /usr/lib/libnfshared.dylib
 */

@interface AWDNFCSECRSAuthorize : PBCodable <NSCopying> {
    bool  _activated;
    NSData * _aid;
    struct { 
        unsigned int timeDeltaFromReference : 1; 
        unsigned int timestamp : 1; 
        unsigned int method : 1; 
        unsigned int status : 1; 
        unsigned int activated : 1; 
    }  _has;
    unsigned int  _method;
    unsigned int  _status;
    unsigned long long  _timeDeltaFromReference;
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