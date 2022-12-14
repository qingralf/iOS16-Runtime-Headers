/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
 */

@interface ATXPBAppDirectoryEventMetadata : PBCodable <NSCopying> {
    bool  _bundleIdInTopAppsVisible;
    struct { 
        unsigned int bundleIdInTopAppsVisible : 1; 
        unsigned int userLaunchedAppBeforeLeaving : 1; 
    }  _has;
    bool  _userLaunchedAppBeforeLeaving;
}

@property (nonatomic) bool bundleIdInTopAppsVisible;
@property (nonatomic) bool hasBundleIdInTopAppsVisible;
@property (nonatomic) bool hasUserLaunchedAppBeforeLeaving;
@property (nonatomic) bool userLaunchedAppBeforeLeaving;

- (bool)bundleIdInTopAppsVisible;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBundleIdInTopAppsVisible;
- (bool)hasUserLaunchedAppBeforeLeaving;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBundleIdInTopAppsVisible:(bool)arg1;
- (void)setHasBundleIdInTopAppsVisible:(bool)arg1;
- (void)setHasUserLaunchedAppBeforeLeaving:(bool)arg1;
- (void)setUserLaunchedAppBeforeLeaving:(bool)arg1;
- (bool)userLaunchedAppBeforeLeaving;
- (void)writeTo:(id)arg1;

@end
