/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriReferenceResolution.framework/SiriReferenceResolution
 */

@interface RRSchemaProvisionalPullerContextEvent : SISchemaTopLevelUnionType {
    bool  _hasPullerContext;
    RRSchemaProvisionalPullerContext * _pullerContext;
    unsigned long long  _whichEvent_Type;
}

@property (nonatomic) bool hasPullerContext;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) RRSchemaProvisionalPullerContext *pullerContext;
@property (nonatomic, readonly) unsigned long long whichEvent_Type;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (int)getAnyEventType;
- (id)getTypeId;
- (id)getVersion;
- (bool)hasPullerContext;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isProvisional;
- (id)jsonData;
- (id)pullerContext;
- (id)qualifiedMessageName;
- (bool)readFrom:(id)arg1;
- (void)setHasPullerContext:(bool)arg1;
- (void)setPullerContext:(id)arg1;
- (unsigned long long)whichEvent_Type;
- (void)writeTo:(id)arg1;

@end
