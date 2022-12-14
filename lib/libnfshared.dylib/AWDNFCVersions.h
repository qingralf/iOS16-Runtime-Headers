/* Generated by RuntimeBrowser
   Image: /usr/lib/libnfshared.dylib
 */

@interface AWDNFCVersions : PBCodable <NSCopying> {
    unsigned int  _hardwareType;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int hardwareType : 1; 
        unsigned int middlewareVersion : 1; 
        unsigned int nfccFWRevision : 1; 
        unsigned int nfccFWVersion : 1; 
        unsigned int nfccHWVersion : 1; 
        unsigned int nfccROMVersion : 1; 
        unsigned int seAvailableIndices : 1; 
        unsigned int seDeviceType : 1; 
        unsigned int seFWVersion : 1; 
        unsigned int seHWVersion : 1; 
        unsigned int seMigrationInst : 1; 
        unsigned int seMigrationPkgs : 1; 
        unsigned int seMigrationState : 1; 
        unsigned int seOSMode : 1; 
        unsigned int seReferenceCounter : 1; 
        unsigned int seRestrictedMode : 1; 
        unsigned int seSequenceCounter : 1; 
        unsigned int seSignKeyType : 1; 
        unsigned int seTotalIndices : 1; 
        unsigned int seTransientDeselect : 1; 
        unsigned int seTransientPersistent : 1; 
        unsigned int seTransientReset : 1; 
        unsigned int seosHWVersion : 1; 
        unsigned int seosMigrationState : 1; 
        unsigned int seosOSMode : 1; 
        unsigned int seosOSVersion : 1; 
        unsigned int seosSignKeyType : 1; 
        unsigned int seosTransientDeselect : 1; 
        unsigned int seosTransientPersistent : 1; 
        unsigned int seosTransientReset : 1; 
    }  _has;
    unsigned int  _middlewareVersion;
    unsigned int  _nfccFWRevision;
    unsigned int  _nfccFWVersion;
    unsigned int  _nfccHWVersion;
    unsigned int  _nfccROMVersion;
    NSString * _platformVersion;
    unsigned int  _seAvailableIndices;
    unsigned int  _seDeviceType;
    unsigned int  _seFWVersion;
    unsigned int  _seHWVersion;
    unsigned int  _seMigrationInst;
    unsigned int  _seMigrationPkgs;
    unsigned int  _seMigrationState;
    unsigned int  _seOSMode;
    unsigned int  _seReferenceCounter;
    unsigned int  _seRestrictedMode;
    unsigned int  _seSequenceCounter;
    unsigned int  _seSignKeyType;
    unsigned int  _seTotalIndices;
    unsigned int  _seTransientDeselect;
    unsigned int  _seTransientPersistent;
    unsigned int  _seTransientReset;
    unsigned int  _seosHWVersion;
    unsigned int  _seosMigrationState;
    unsigned int  _seosOSMode;
    unsigned int  _seosOSVersion;
    NSString * _seosPlatformID;
    unsigned int  _seosSignKeyType;
    unsigned int  _seosTransientDeselect;
    unsigned int  _seosTransientPersistent;
    unsigned int  _seosTransientReset;
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
