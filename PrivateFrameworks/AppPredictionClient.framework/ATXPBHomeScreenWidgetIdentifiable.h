/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
 */

@interface ATXPBHomeScreenWidgetIdentifiable : PBCodable <NSCopying> {
    NSString * _appBundleId;
    NSString * _extensionBundleId;
    struct { 
        unsigned int score : 1; 
        unsigned int size : 1; 
        unsigned int onboardingWidget : 1; 
        unsigned int suggestedWidget : 1; 
    }  _has;
    NSData * _intent;
    bool  _onboardingWidget;
    NSString * _predictionSource;
    double  _score;
    int  _size;
    bool  _suggestedWidget;
    NSString * _widgetKind;
    NSString * _widgetUniqueId;
}

@property (nonatomic, retain) NSString *appBundleId;
@property (nonatomic, retain) NSString *extensionBundleId;
@property (nonatomic, readonly) bool hasAppBundleId;
@property (nonatomic, readonly) bool hasExtensionBundleId;
@property (nonatomic, readonly) bool hasIntent;
@property (nonatomic) bool hasOnboardingWidget;
@property (nonatomic, readonly) bool hasPredictionSource;
@property (nonatomic) bool hasScore;
@property (nonatomic) bool hasSize;
@property (nonatomic) bool hasSuggestedWidget;
@property (nonatomic, readonly) bool hasWidgetKind;
@property (nonatomic, readonly) bool hasWidgetUniqueId;
@property (nonatomic, retain) NSData *intent;
@property (nonatomic) bool onboardingWidget;
@property (nonatomic, retain) NSString *predictionSource;
@property (nonatomic) double score;
@property (nonatomic) int size;
@property (nonatomic) bool suggestedWidget;
@property (nonatomic, retain) NSString *widgetKind;
@property (nonatomic, retain) NSString *widgetUniqueId;

- (void).cxx_destruct;
- (int)StringAsSize:(id)arg1;
- (id)appBundleId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)extensionBundleId;
- (bool)hasAppBundleId;
- (bool)hasExtensionBundleId;
- (bool)hasIntent;
- (bool)hasOnboardingWidget;
- (bool)hasPredictionSource;
- (bool)hasScore;
- (bool)hasSize;
- (bool)hasSuggestedWidget;
- (bool)hasWidgetKind;
- (bool)hasWidgetUniqueId;
- (unsigned long long)hash;
- (id)intent;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)onboardingWidget;
- (id)predictionSource;
- (bool)readFrom:(id)arg1;
- (double)score;
- (void)setAppBundleId:(id)arg1;
- (void)setExtensionBundleId:(id)arg1;
- (void)setHasOnboardingWidget:(bool)arg1;
- (void)setHasScore:(bool)arg1;
- (void)setHasSize:(bool)arg1;
- (void)setHasSuggestedWidget:(bool)arg1;
- (void)setIntent:(id)arg1;
- (void)setOnboardingWidget:(bool)arg1;
- (void)setPredictionSource:(id)arg1;
- (void)setScore:(double)arg1;
- (void)setSize:(int)arg1;
- (void)setSuggestedWidget:(bool)arg1;
- (void)setWidgetKind:(id)arg1;
- (void)setWidgetUniqueId:(id)arg1;
- (int)size;
- (id)sizeAsString:(int)arg1;
- (bool)suggestedWidget;
- (id)widgetKind;
- (id)widgetUniqueId;
- (void)writeTo:(id)arg1;

@end