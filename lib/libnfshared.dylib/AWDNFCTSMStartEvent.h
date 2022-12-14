/* Generated by RuntimeBrowser
   Image: /usr/lib/libnfshared.dylib
 */

@interface AWDNFCTSMStartEvent : PBCodable <NSCopying> {
    struct { 
        unsigned int timeDeltaFromReference : 1; 
        unsigned int timestamp : 1; 
        unsigned int idxTableAvail : 1; 
        unsigned int persistentAvail : 1; 
        unsigned int transientDeselectAvail : 1; 
        unsigned int transientResetAvail : 1; 
    }  _has;
    unsigned int  _idxTableAvail;
    unsigned int  _persistentAvail;
    unsigned long long  _timeDeltaFromReference;
    unsigned long long  _timestamp;
    unsigned int  _transientDeselectAvail;
    unsigned int  _transientResetAvail;
    NSString * _url;
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
