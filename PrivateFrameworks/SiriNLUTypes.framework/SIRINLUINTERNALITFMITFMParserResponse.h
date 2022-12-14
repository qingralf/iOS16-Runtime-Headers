/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriNLUTypes.framework/SiriNLUTypes
 */

@interface SIRINLUINTERNALITFMITFMParserResponse : PBCodable <NSCopying> {
    bool  _classificationLabel;
    float  _classificationProbability;
    struct { 
        unsigned int classificationProbability : 1; 
        unsigned int classificationLabel : 1; 
    }  _has;
    SIRINLUEXTERNALParser * _parser;
}

@property (nonatomic) bool classificationLabel;
@property (nonatomic) float classificationProbability;
@property (nonatomic) bool hasClassificationLabel;
@property (nonatomic) bool hasClassificationProbability;
@property (nonatomic, readonly) bool hasParser;
@property (nonatomic, retain) SIRINLUEXTERNALParser *parser;

- (void).cxx_destruct;
- (bool)classificationLabel;
- (float)classificationProbability;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasClassificationLabel;
- (bool)hasClassificationProbability;
- (bool)hasParser;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)parser;
- (bool)readFrom:(id)arg1;
- (void)setClassificationLabel:(bool)arg1;
- (void)setClassificationProbability:(float)arg1;
- (void)setHasClassificationLabel:(bool)arg1;
- (void)setHasClassificationProbability:(bool)arg1;
- (void)setParser:(id)arg1;
- (void)writeTo:(id)arg1;

@end
