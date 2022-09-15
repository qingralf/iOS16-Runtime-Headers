/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOArrivalRegion : PBCodable <NSCopying> {
    GEOMapRegion * _arrivalRegion;
    int  _arrivalRegionAction;
    unsigned int  _endNavigationTimeoutThreshold;
    struct { 
        unsigned int has_arrivalRegionAction : 1; 
        unsigned int has_endNavigationTimeoutThreshold : 1; 
    }  _flags;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOMapRegion *arrivalRegion;
@property (nonatomic) int arrivalRegionAction;
@property (nonatomic) unsigned int endNavigationTimeoutThreshold;
@property (nonatomic, readonly) bool hasArrivalRegion;
@property (nonatomic) bool hasArrivalRegionAction;
@property (nonatomic) bool hasEndNavigationTimeoutThreshold;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsArrivalRegionAction:(id)arg1;
- (id)arrivalRegion;
- (int)arrivalRegionAction;
- (id)arrivalRegionActionAsString:(int)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)endNavigationTimeoutThreshold;
- (bool)hasArrivalRegion;
- (bool)hasArrivalRegionAction;
- (bool)hasEndNavigationTimeoutThreshold;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setArrivalRegion:(id)arg1;
- (void)setArrivalRegionAction:(int)arg1;
- (void)setEndNavigationTimeoutThreshold:(unsigned int)arg1;
- (void)setHasArrivalRegionAction:(bool)arg1;
- (void)setHasEndNavigationTimeoutThreshold:(bool)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end