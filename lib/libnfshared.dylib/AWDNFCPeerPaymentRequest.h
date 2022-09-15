/* Generated by RuntimeBrowser
   Image: /usr/lib/libnfshared.dylib
 */

@interface AWDNFCPeerPaymentRequest : PBRequest <NSCopying> {
    unsigned long long  _duration;
    unsigned int  _errorCode;
    unsigned int  _errorStep;
    struct { 
        unsigned int duration : 1; 
        unsigned int timestamp : 1; 
        unsigned int errorCode : 1; 
        unsigned int errorStep : 1; 
        unsigned int type : 1; 
    }  _has;
    unsigned long long  _timestamp;
    unsigned int  _type;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end