/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableAllergyRecord : PBCodable <HDDecoding, NSCopying> {
    HDCodableMedicalCodingList * _allergyCodingCollection;
    HDCodableMedicalCoding * _allergyTypeCoding;
    NSString * _asserter;
    HDCodableMedicalCoding * _categoryCoding;
    HDCodableMedicalCoding * _clinicalStatusCoding;
    HDCodableMedicalCoding * _criticalityCoding;
    NSData * _lastOccurrenceDate;
    HDCodableMedicalRecord * _medicalRecord;
    NSData * _onsetDate;
    HDCodableAllergyReactionList * _reactions;
    NSData * _recordedDate;
    HDCodableMedicalCoding * _verificationStatusCoding;
}

@property (nonatomic, retain) HDCodableMedicalCodingList *allergyCodingCollection;
@property (nonatomic, retain) HDCodableMedicalCoding *allergyTypeCoding;
@property (nonatomic, retain) NSString *asserter;
@property (nonatomic, retain) HDCodableMedicalCoding *categoryCoding;
@property (nonatomic, retain) HDCodableMedicalCoding *clinicalStatusCoding;
@property (nonatomic, retain) HDCodableMedicalCoding *criticalityCoding;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasAllergyCodingCollection;
@property (nonatomic, readonly) bool hasAllergyTypeCoding;
@property (nonatomic, readonly) bool hasAsserter;
@property (nonatomic, readonly) bool hasCategoryCoding;
@property (nonatomic, readonly) bool hasClinicalStatusCoding;
@property (nonatomic, readonly) bool hasCriticalityCoding;
@property (nonatomic, readonly) bool hasLastOccurrenceDate;
@property (nonatomic, readonly) bool hasMedicalRecord;
@property (nonatomic, readonly) bool hasOnsetDate;
@property (nonatomic, readonly) bool hasReactions;
@property (nonatomic, readonly) bool hasRecordedDate;
@property (nonatomic, readonly) bool hasVerificationStatusCoding;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSData *lastOccurrenceDate;
@property (nonatomic, retain) HDCodableMedicalRecord *medicalRecord;
@property (nonatomic, retain) NSData *onsetDate;
@property (nonatomic, retain) HDCodableAllergyReactionList *reactions;
@property (nonatomic, retain) NSData *recordedDate;
@property (readonly) Class superclass;
@property (nonatomic, retain) HDCodableMedicalCoding *verificationStatusCoding;

- (void).cxx_destruct;
- (id)allergyCodingCollection;
- (id)allergyTypeCoding;
- (bool)applyToObject:(id)arg1;
- (bool)applyToObject:(id)arg1 error:(out id*)arg2;
- (id)asserter;
- (id)categoryCoding;
- (id)clinicalStatusCoding;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)criticalityCoding;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAllergyCodingCollection;
- (bool)hasAllergyTypeCoding;
- (bool)hasAsserter;
- (bool)hasCategoryCoding;
- (bool)hasClinicalStatusCoding;
- (bool)hasCriticalityCoding;
- (bool)hasLastOccurrenceDate;
- (bool)hasMedicalRecord;
- (bool)hasOnsetDate;
- (bool)hasReactions;
- (bool)hasRecordedDate;
- (bool)hasVerificationStatusCoding;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)lastOccurrenceDate;
- (id)medicalRecord;
- (void)mergeFrom:(id)arg1;
- (id)onsetDate;
- (id)reactions;
- (bool)readFrom:(id)arg1;
- (id)recordedDate;
- (void)setAllergyCodingCollection:(id)arg1;
- (void)setAllergyTypeCoding:(id)arg1;
- (void)setAsserter:(id)arg1;
- (void)setCategoryCoding:(id)arg1;
- (void)setClinicalStatusCoding:(id)arg1;
- (void)setCriticalityCoding:(id)arg1;
- (void)setLastOccurrenceDate:(id)arg1;
- (void)setMedicalRecord:(id)arg1;
- (void)setOnsetDate:(id)arg1;
- (void)setReactions:(id)arg1;
- (void)setRecordedDate:(id)arg1;
- (void)setVerificationStatusCoding:(id)arg1;
- (id)verificationStatusCoding;
- (void)writeTo:(id)arg1;

@end
