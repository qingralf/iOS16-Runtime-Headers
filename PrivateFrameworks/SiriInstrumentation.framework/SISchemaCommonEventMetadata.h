/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface SISchemaCommonEventMetadata : SISchemaInstrumentationMessage {
    bool  _hasTestFingerprint;
    bool  _hasTimestamp;
    SISchemaUUID * _testFingerprint;
    SISchemaLogicalTimestamp * _timestamp;
}

@property (nonatomic) bool hasTestFingerprint;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *testFingerprint;
@property (nonatomic, retain) SISchemaLogicalTimestamp *timestamp;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteTestFingerprint;
- (void)deleteTimestamp;
- (id)dictionaryRepresentation;
- (bool)hasTestFingerprint;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasTestFingerprint:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTestFingerprint:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)testFingerprint;
- (id)timestamp;
- (void)writeTo:(id)arg1;

@end
