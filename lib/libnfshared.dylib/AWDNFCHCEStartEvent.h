/* Generated by RuntimeBrowser
   Image: /usr/lib/libnfshared.dylib
 */

@interface AWDNFCHCEStartEvent : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int messageSize : 1; 
        unsigned int messageType : 1; 
        unsigned int type : 1; 
    }  _has;
    unsigned int  _messageSize;
    unsigned int  _messageType;
    unsigned long long  _timestamp;
    unsigned int  _type;
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
