/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoCreateFidoKeyResponse : PBCodable <NSCopying> {
    NSData * _errorData;
    NSData * _fidoAttestation;
    NSData * _fidoKeyHash;
}

@property (nonatomic, retain) NSData *errorData;
@property (nonatomic, retain) NSData *fidoAttestation;
@property (nonatomic, retain) NSData *fidoKeyHash;
@property (nonatomic, readonly) bool hasErrorData;
@property (nonatomic, readonly) bool hasFidoAttestation;
@property (nonatomic, readonly) bool hasFidoKeyHash;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)errorData;
- (id)fidoAttestation;
- (id)fidoKeyHash;
- (bool)hasErrorData;
- (bool)hasFidoAttestation;
- (bool)hasFidoKeyHash;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setErrorData:(id)arg1;
- (void)setFidoAttestation:(id)arg1;
- (void)setFidoKeyHash:(id)arg1;
- (void)writeTo:(id)arg1;

@end
