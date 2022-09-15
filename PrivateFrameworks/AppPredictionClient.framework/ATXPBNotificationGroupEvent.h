/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
 */

@interface ATXPBNotificationGroupEvent : PBCodable <NSCopying> {
    int  _eventType;
    struct { 
        unsigned int secondsSinceReferenceDate : 1; 
        unsigned int eventType : 1; 
    }  _has;
    double  _secondsSinceReferenceDate;
    NSString * _uuid;
}

@property (nonatomic) int eventType;
@property (nonatomic) bool hasEventType;
@property (nonatomic) bool hasSecondsSinceReferenceDate;
@property (nonatomic, readonly) bool hasUuid;
@property (nonatomic) double secondsSinceReferenceDate;
@property (nonatomic, retain) NSString *uuid;

- (void).cxx_destruct;
- (int)StringAsEventType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)eventType;
- (id)eventTypeAsString:(int)arg1;
- (bool)hasEventType;
- (bool)hasSecondsSinceReferenceDate;
- (bool)hasUuid;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (double)secondsSinceReferenceDate;
- (void)setEventType:(int)arg1;
- (void)setHasEventType:(bool)arg1;
- (void)setHasSecondsSinceReferenceDate:(bool)arg1;
- (void)setSecondsSinceReferenceDate:(double)arg1;
- (void)setUuid:(id)arg1;
- (id)uuid;
- (void)writeTo:(id)arg1;

@end