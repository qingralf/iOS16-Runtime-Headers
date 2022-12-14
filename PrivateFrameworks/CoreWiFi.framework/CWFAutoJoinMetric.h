/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
 */

@interface CWFAutoJoinMetric : NSObject <CWFJSONEncodable, NSCopying, NSSecureCoding> {
    unsigned long long  _GASQueryDuration;
    NSArray * _GASQueryErrors;
    NSArray * _GASQueryNetworks;
    unsigned long long  _autoHotspotBrowseDuration;
    NSError * _autoHotspotBrowseError;
    unsigned long long  _autoHotspotDuration;
    NSError * _autoHotspotError;
    unsigned long long  _autoHotspotJoinDuration;
    NSArray * _autoHotspotJoinErrors;
    long long  _autoHotspotMode;
    bool  _autoHotspotResult;
    bool  _autoHotspotWasAborted;
    bool  _autoHotspotWasAttempted;
    CWFAutoJoinParameters * _autoJoinParameters;
    bool  _didDeferJoinToDiscoverMorePreferredNetwork;
    bool  _didDetectColocatedNetworkEnvironment;
    bool  _didFallbackToJoinLessPreferredNetwork;
    bool  _didUseLocationOptimizedChannelList;
    unsigned long long  _duration;
    unsigned long long  _durationFromDeviceUnlockTrigger;
    unsigned long long  _durationFromDisplayOnTrigger;
    unsigned long long  _durationFromLinkDownTrigger;
    unsigned long long  _durationFromNonRetryAutoJoinTrigger;
    unsigned long long  _durationFromWiFiPowerOnTrigger;
    NSError * _error;
    SFRemoteHotspotDevice * _hotspot;
    unsigned long long  _joinDuration;
    NSArray * _joinErrors;
    CWFScanResult * _network;
    NSArray * _optimizedChannelList;
    NSArray * _preAssociationScanChannels;
    unsigned long long  _preAssociationScanDuration;
    long long  _previousNonRetryAutoJoinTrigger;
    bool  _result;
    long long  _retrySchedule;
    unsigned long long  _retryScheduleIndex;
    NSArray * _scanChannels;
    unsigned long long  _scanDuration;
    NSArray * _scanErrors;
    bool  _wasAborted;
    bool  _wasAlreadyAssociated;
    bool  _wasCancelled;
}

@property (nonatomic) unsigned long long GASQueryDuration;
@property (nonatomic, copy) NSArray *GASQueryErrors;
@property (nonatomic, copy) NSArray *GASQueryNetworks;
@property (nonatomic) unsigned long long autoHotspotBrowseDuration;
@property (nonatomic, copy) NSError *autoHotspotBrowseError;
@property (nonatomic) unsigned long long autoHotspotDuration;
@property (nonatomic, copy) NSError *autoHotspotError;
@property (nonatomic) unsigned long long autoHotspotJoinDuration;
@property (nonatomic, copy) NSArray *autoHotspotJoinErrors;
@property (nonatomic) long long autoHotspotMode;
@property (nonatomic) bool autoHotspotResult;
@property (nonatomic) bool autoHotspotWasAborted;
@property (nonatomic) bool autoHotspotWasAttempted;
@property (nonatomic, copy) CWFAutoJoinParameters *autoJoinParameters;
@property (readonly) NSString *coreAnalyticsEventName;
@property (readonly) NSDictionary *coreAnalyticsEventPayload;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didDeferJoinToDiscoverMorePreferredNetwork;
@property (nonatomic) bool didDetectColocatedNetworkEnvironment;
@property (nonatomic) bool didFallbackToJoinLessPreferredNetwork;
@property (nonatomic) bool didUseLocationOptimizedChannelList;
@property (nonatomic) unsigned long long duration;
@property (nonatomic) unsigned long long durationFromDeviceUnlockTrigger;
@property (nonatomic) unsigned long long durationFromDisplayOnTrigger;
@property (nonatomic) unsigned long long durationFromLinkDownTrigger;
@property (nonatomic) unsigned long long durationFromNonRetryAutoJoinTrigger;
@property (nonatomic) unsigned long long durationFromWiFiPowerOnTrigger;
@property (nonatomic, copy) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SFRemoteHotspotDevice *hotspot;
@property (nonatomic) unsigned long long joinDuration;
@property (nonatomic, copy) NSArray *joinErrors;
@property (nonatomic, copy) CWFScanResult *network;
@property (nonatomic, copy) NSArray *optimizedChannelList;
@property (nonatomic, copy) NSArray *preAssociationScanChannels;
@property (nonatomic) unsigned long long preAssociationScanDuration;
@property (nonatomic) long long previousNonRetryAutoJoinTrigger;
@property (nonatomic) bool result;
@property (nonatomic) long long retrySchedule;
@property (nonatomic) unsigned long long retryScheduleIndex;
@property (nonatomic, copy) NSArray *scanChannels;
@property (nonatomic) unsigned long long scanDuration;
@property (nonatomic, copy) NSArray *scanErrors;
@property (readonly) Class superclass;
@property (nonatomic) bool wasAborted;
@property (nonatomic) bool wasAlreadyAssociated;
@property (nonatomic) bool wasCancelled;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)GASQueryDuration;
- (id)GASQueryErrors;
- (id)GASQueryNetworks;
- (id)JSONCompatibleKeyValueMap;
- (id)__descriptionForError:(id)arg1;
- (unsigned long long)autoHotspotBrowseDuration;
- (id)autoHotspotBrowseError;
- (unsigned long long)autoHotspotDuration;
- (id)autoHotspotError;
- (unsigned long long)autoHotspotJoinDuration;
- (id)autoHotspotJoinErrors;
- (long long)autoHotspotMode;
- (bool)autoHotspotResult;
- (bool)autoHotspotWasAborted;
- (bool)autoHotspotWasAttempted;
- (id)autoJoinParameters;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)coreAnalyticsEventName;
- (id)coreAnalyticsEventPayload;
- (id)description;
- (bool)didDeferJoinToDiscoverMorePreferredNetwork;
- (bool)didDetectColocatedNetworkEnvironment;
- (bool)didFallbackToJoinLessPreferredNetwork;
- (bool)didUseLocationOptimizedChannelList;
- (unsigned long long)duration;
- (unsigned long long)durationFromDeviceUnlockTrigger;
- (unsigned long long)durationFromDisplayOnTrigger;
- (unsigned long long)durationFromLinkDownTrigger;
- (unsigned long long)durationFromNonRetryAutoJoinTrigger;
- (unsigned long long)durationFromWiFiPowerOnTrigger;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (unsigned long long)hash;
- (id)hotspot;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAutoJoinMetric:(id)arg1;
- (unsigned long long)joinDuration;
- (id)joinErrors;
- (id)network;
- (id)optimizedChannelList;
- (id)preAssociationScanChannels;
- (unsigned long long)preAssociationScanDuration;
- (long long)previousNonRetryAutoJoinTrigger;
- (bool)result;
- (long long)retrySchedule;
- (unsigned long long)retryScheduleIndex;
- (id)scanChannels;
- (unsigned long long)scanDuration;
- (id)scanErrors;
- (void)setAutoHotspotBrowseDuration:(unsigned long long)arg1;
- (void)setAutoHotspotBrowseError:(id)arg1;
- (void)setAutoHotspotDuration:(unsigned long long)arg1;
- (void)setAutoHotspotError:(id)arg1;
- (void)setAutoHotspotJoinDuration:(unsigned long long)arg1;
- (void)setAutoHotspotJoinErrors:(id)arg1;
- (void)setAutoHotspotMode:(long long)arg1;
- (void)setAutoHotspotResult:(bool)arg1;
- (void)setAutoHotspotWasAborted:(bool)arg1;
- (void)setAutoHotspotWasAttempted:(bool)arg1;
- (void)setAutoJoinParameters:(id)arg1;
- (void)setDidDeferJoinToDiscoverMorePreferredNetwork:(bool)arg1;
- (void)setDidDetectColocatedNetworkEnvironment:(bool)arg1;
- (void)setDidFallbackToJoinLessPreferredNetwork:(bool)arg1;
- (void)setDidUseLocationOptimizedChannelList:(bool)arg1;
- (void)setDuration:(unsigned long long)arg1;
- (void)setDurationFromDeviceUnlockTrigger:(unsigned long long)arg1;
- (void)setDurationFromDisplayOnTrigger:(unsigned long long)arg1;
- (void)setDurationFromLinkDownTrigger:(unsigned long long)arg1;
- (void)setDurationFromNonRetryAutoJoinTrigger:(unsigned long long)arg1;
- (void)setDurationFromWiFiPowerOnTrigger:(unsigned long long)arg1;
- (void)setError:(id)arg1;
- (void)setGASQueryDuration:(unsigned long long)arg1;
- (void)setGASQueryErrors:(id)arg1;
- (void)setGASQueryNetworks:(id)arg1;
- (void)setHotspot:(id)arg1;
- (void)setJoinDuration:(unsigned long long)arg1;
- (void)setJoinErrors:(id)arg1;
- (void)setNetwork:(id)arg1;
- (void)setOptimizedChannelList:(id)arg1;
- (void)setPreAssociationScanChannels:(id)arg1;
- (void)setPreAssociationScanDuration:(unsigned long long)arg1;
- (void)setPreviousNonRetryAutoJoinTrigger:(long long)arg1;
- (void)setResult:(bool)arg1;
- (void)setRetrySchedule:(long long)arg1;
- (void)setRetryScheduleIndex:(unsigned long long)arg1;
- (void)setScanChannels:(id)arg1;
- (void)setScanDuration:(unsigned long long)arg1;
- (void)setScanErrors:(id)arg1;
- (void)setWasAborted:(bool)arg1;
- (void)setWasAlreadyAssociated:(bool)arg1;
- (void)setWasCancelled:(bool)arg1;
- (bool)wasAborted;
- (bool)wasAlreadyAssociated;
- (bool)wasCancelled;

@end
