/* Generated by RuntimeBrowser
   Image: /usr/lib/libnfshared.dylib
 */

@interface AWDNFCCardIngestionSessionStateChangeEvent : PBCodable <NSCopying> {
    unsigned int  _cardValidationStatus;
    unsigned int  _currentBatteryLevel;
    struct { 
        unsigned int timeDeltaFromReference : 1; 
        unsigned int timestamp : 1; 
        unsigned int cardValidationStatus : 1; 
        unsigned int currentBatteryLevel : 1; 
        unsigned int sPID : 1; 
        unsigned int sessionStatus : 1; 
        unsigned int spStatusCode : 1; 
        unsigned int state : 1; 
        unsigned int technology : 1; 
    }  _has;
    unsigned int  _sPID;
    unsigned int  _sessionStatus;
    unsigned int  _spStatusCode;
    unsigned int  _state;
    unsigned int  _technology;
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
