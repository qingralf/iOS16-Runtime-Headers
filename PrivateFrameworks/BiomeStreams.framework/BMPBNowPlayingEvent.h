/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
 */

@interface BMPBNowPlayingEvent : PBCodable <NSCopying> {
    double  _absoluteTimestamp;
    NSString * _album;
    NSString * _artist;
    NSString * _bundleId;
    unsigned int  _duration;
    unsigned int  _elapsed;
    NSString * _genre;
    struct { 
        unsigned int absoluteTimestamp : 1; 
        unsigned int duration : 1; 
        unsigned int elapsed : 1; 
        unsigned int playbackState : 1; 
        unsigned int isAirPlayVideo : 1; 
    }  _has;
    NSString * _iTunesStoreIdentifier;
    NSString * _iTunesSubscriptionIdentifier;
    bool  _isAirPlayVideo;
    NSString * _mediaType;
    NSMutableArray * _outputDevices;
    int  _playbackState;
    NSString * _title;
    NSString * _uniqueId;
}

@property (nonatomic) double absoluteTimestamp;
@property (nonatomic, retain) NSString *album;
@property (nonatomic, retain) NSString *artist;
@property (nonatomic, retain) NSString *bundleId;
@property (nonatomic) unsigned int duration;
@property (nonatomic) unsigned int elapsed;
@property (nonatomic, retain) NSString *genre;
@property (nonatomic) bool hasAbsoluteTimestamp;
@property (nonatomic, readonly) bool hasAlbum;
@property (nonatomic, readonly) bool hasArtist;
@property (nonatomic, readonly) bool hasBundleId;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasElapsed;
@property (nonatomic, readonly) bool hasGenre;
@property (nonatomic, readonly) bool hasITunesStoreIdentifier;
@property (nonatomic, readonly) bool hasITunesSubscriptionIdentifier;
@property (nonatomic) bool hasIsAirPlayVideo;
@property (nonatomic, readonly) bool hasMediaType;
@property (nonatomic) bool hasPlaybackState;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic, readonly) bool hasUniqueId;
@property (nonatomic, retain) NSString *iTunesStoreIdentifier;
@property (nonatomic, retain) NSString *iTunesSubscriptionIdentifier;
@property (nonatomic) bool isAirPlayVideo;
@property (nonatomic, retain) NSString *mediaType;
@property (nonatomic, retain) NSMutableArray *outputDevices;
@property (nonatomic) int playbackState;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSString *uniqueId;

+ (Class)outputDevicesType;

- (void).cxx_destruct;
- (int)StringAsPlaybackState:(id)arg1;
- (double)absoluteTimestamp;
- (void)addOutputDevices:(id)arg1;
- (id)album;
- (id)artist;
- (id)bundleId;
- (void)clearOutputDevices;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)duration;
- (unsigned int)elapsed;
- (id)genre;
- (bool)hasAbsoluteTimestamp;
- (bool)hasAlbum;
- (bool)hasArtist;
- (bool)hasBundleId;
- (bool)hasDuration;
- (bool)hasElapsed;
- (bool)hasGenre;
- (bool)hasITunesStoreIdentifier;
- (bool)hasITunesSubscriptionIdentifier;
- (bool)hasIsAirPlayVideo;
- (bool)hasMediaType;
- (bool)hasPlaybackState;
- (bool)hasTitle;
- (bool)hasUniqueId;
- (unsigned long long)hash;
- (id)iTunesStoreIdentifier;
- (id)iTunesSubscriptionIdentifier;
- (bool)isAirPlayVideo;
- (bool)isEqual:(id)arg1;
- (id)mediaType;
- (void)mergeFrom:(id)arg1;
- (id)outputDevices;
- (id)outputDevicesAtIndex:(unsigned long long)arg1;
- (unsigned long long)outputDevicesCount;
- (int)playbackState;
- (id)playbackStateAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAbsoluteTimestamp:(double)arg1;
- (void)setAlbum:(id)arg1;
- (void)setArtist:(id)arg1;
- (void)setBundleId:(id)arg1;
- (void)setDuration:(unsigned int)arg1;
- (void)setElapsed:(unsigned int)arg1;
- (void)setGenre:(id)arg1;
- (void)setHasAbsoluteTimestamp:(bool)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasElapsed:(bool)arg1;
- (void)setHasIsAirPlayVideo:(bool)arg1;
- (void)setHasPlaybackState:(bool)arg1;
- (void)setITunesStoreIdentifier:(id)arg1;
- (void)setITunesSubscriptionIdentifier:(id)arg1;
- (void)setIsAirPlayVideo:(bool)arg1;
- (void)setMediaType:(id)arg1;
- (void)setOutputDevices:(id)arg1;
- (void)setPlaybackState:(int)arg1;
- (void)setTitle:(id)arg1;
- (void)setUniqueId:(id)arg1;
- (id)title;
- (id)uniqueId;
- (void)writeTo:(id)arg1;

@end
