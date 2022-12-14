/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

@interface NFFieldNotificationECP2_0 : NFFieldNotification {
    NSData * _homeKitSchemeDataPayload;
    bool  _odaRequired;
    NSData * _openLoopSchemeBitfield;
    unsigned int  _pairingMode;
    NSData * _readerIdentifier;
    NSArray * _tciArray;
    unsigned char  _terminalSubType;
    unsigned long long  _terminalType;
}

@property (readonly, retain) NSData *homeKitSchemeDataPayload;
@property (readonly) bool odaRequired;
@property (readonly, retain) NSData *openLoopSchemeBitfield;
@property (nonatomic, readonly) unsigned int pairingMode;
@property (nonatomic, readonly) NSData *readerIdentifier;
@property (readonly, retain) NSArray *tciArray;
@property (readonly) unsigned char terminalSubType;
@property (readonly) unsigned long long terminalType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)homeKitSchemeDataPayload;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)odaRequired;
- (id)openLoopSchemeBitfield;
- (unsigned int)pairingMode;
- (id)readerIdentifier;
- (id)tciArray;
- (unsigned char)terminalSubType;
- (unsigned long long)terminalType;

@end
