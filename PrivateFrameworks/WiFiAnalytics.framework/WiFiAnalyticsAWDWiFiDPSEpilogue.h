/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
 */

@interface WiFiAnalyticsAWDWiFiDPSEpilogue : PBCodable <NSCopying> {
    NSMutableArray * _accessPointInfos;
    int  _action;
    unsigned int  _actionIntVal;
    int  _afterRecommendedAction;
    NSMutableArray * _associationChanges;
    int  _beforeAction;
    WiFiAnalyticsAWDWADiagnosisActionAssociationDifferences * _changes;
    WiFiAnalyticsAWDWAPeerDiscoveryInfo * _discoveredPeerInfo;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int action : 1; 
        unsigned int actionIntVal : 1; 
        unsigned int afterRecommendedAction : 1; 
        unsigned int beforeAction : 1; 
        unsigned int studyType : 1; 
        unsigned int isAssociatedAtStudyEnd : 1; 
    }  _has;
    bool  _isAssociatedAtStudyEnd;
    WiFiAnalyticsAWDWAQuickDpsStats * _qDpsStats;
    int  _studyType;
    WiFiAnalyticsAWDWASymptomsDnsStats * _symptomsDnsStats;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) NSMutableArray *accessPointInfos;
@property (nonatomic) int action;
@property (nonatomic) unsigned int actionIntVal;
@property (nonatomic) int afterRecommendedAction;
@property (nonatomic, retain) NSMutableArray *associationChanges;
@property (nonatomic) int beforeAction;
@property (nonatomic, retain) WiFiAnalyticsAWDWADiagnosisActionAssociationDifferences *changes;
@property (nonatomic, retain) WiFiAnalyticsAWDWAPeerDiscoveryInfo *discoveredPeerInfo;
@property (nonatomic) bool hasAction;
@property (nonatomic) bool hasActionIntVal;
@property (nonatomic) bool hasAfterRecommendedAction;
@property (nonatomic) bool hasBeforeAction;
@property (nonatomic, readonly) bool hasChanges;
@property (nonatomic, readonly) bool hasDiscoveredPeerInfo;
@property (nonatomic) bool hasIsAssociatedAtStudyEnd;
@property (nonatomic, readonly) bool hasQDpsStats;
@property (nonatomic) bool hasStudyType;
@property (nonatomic, readonly) bool hasSymptomsDnsStats;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool isAssociatedAtStudyEnd;
@property (nonatomic, retain) WiFiAnalyticsAWDWAQuickDpsStats *qDpsStats;
@property (nonatomic) int studyType;
@property (nonatomic, retain) WiFiAnalyticsAWDWASymptomsDnsStats *symptomsDnsStats;
@property (nonatomic) unsigned long long timestamp;

+ (Class)accessPointInfoType;
+ (Class)associationChangesType;

- (void).cxx_destruct;
- (int)StringAsAction:(id)arg1;
- (int)StringAsAfterRecommendedAction:(id)arg1;
- (int)StringAsBeforeAction:(id)arg1;
- (int)StringAsStudyType:(id)arg1;
- (id)accessPointInfoAtIndex:(unsigned long long)arg1;
- (id)accessPointInfos;
- (unsigned long long)accessPointInfosCount;
- (int)action;
- (id)actionAsString:(int)arg1;
- (unsigned int)actionIntVal;
- (void)addAccessPointInfo:(id)arg1;
- (void)addAssociationChanges:(id)arg1;
- (int)afterRecommendedAction;
- (id)afterRecommendedActionAsString:(int)arg1;
- (id)associationChanges;
- (id)associationChangesAtIndex:(unsigned long long)arg1;
- (unsigned long long)associationChangesCount;
- (int)beforeAction;
- (id)beforeActionAsString:(int)arg1;
- (id)changes;
- (void)clearAccessPointInfos;
- (void)clearAssociationChanges;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)discoveredPeerInfo;
- (bool)hasAction;
- (bool)hasActionIntVal;
- (bool)hasAfterRecommendedAction;
- (bool)hasBeforeAction;
- (bool)hasChanges;
- (bool)hasDiscoveredPeerInfo;
- (bool)hasIsAssociatedAtStudyEnd;
- (bool)hasQDpsStats;
- (bool)hasStudyType;
- (bool)hasSymptomsDnsStats;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isAssociatedAtStudyEnd;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)qDpsStats;
- (bool)readFrom:(id)arg1;
- (void)setAccessPointInfos:(id)arg1;
- (void)setAction:(int)arg1;
- (void)setActionIntVal:(unsigned int)arg1;
- (void)setAfterRecommendedAction:(int)arg1;
- (void)setAssociationChanges:(id)arg1;
- (void)setBeforeAction:(int)arg1;
- (void)setChanges:(id)arg1;
- (void)setDiscoveredPeerInfo:(id)arg1;
- (void)setHasAction:(bool)arg1;
- (void)setHasActionIntVal:(bool)arg1;
- (void)setHasAfterRecommendedAction:(bool)arg1;
- (void)setHasBeforeAction:(bool)arg1;
- (void)setHasIsAssociatedAtStudyEnd:(bool)arg1;
- (void)setHasStudyType:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setIsAssociatedAtStudyEnd:(bool)arg1;
- (void)setQDpsStats:(id)arg1;
- (void)setStudyType:(int)arg1;
- (void)setSymptomsDnsStats:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (int)studyType;
- (id)studyTypeAsString:(int)arg1;
- (id)symptomsDnsStats;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end