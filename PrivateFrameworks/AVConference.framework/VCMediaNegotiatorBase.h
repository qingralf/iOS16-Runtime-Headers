/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCMediaNegotiatorBase : NSObject <VCMediaNegotiatorProtocol> {
    VCMediaNegotiatorLocalConfiguration * _localSettings;
    VCMediaNegotiatorResultsAudio * _negotiatedAudioSettings;
    VCMediaNegotiatorResultsFaceTimeSettings * _negotiatedFaceTimeSettings;
    VCMediaNegotiatorResultsMoments * _negotiatedMomentsSettings;
    VCMediaNegotiatorResultsVideo * _negotiatedScreenSettings;
    VCMediaNegotiatorResults * _negotiatedSettings;
    NSMutableArray * _negotiatedStreamGroups;
    VCMediaNegotiatorResultsVideo * _negotiatedVideoSettings;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) VCMediaNegotiatorLocalConfiguration *localSettings;
@property (nonatomic, readonly) VCMediaNegotiatorResultsAudio *negotiatedAudioSettings;
@property (nonatomic, readonly) VCMediaNegotiatorResultsFaceTimeSettings *negotiatedFaceTimeSettings;
@property (nonatomic, readonly) VCMediaNegotiatorResultsMoments *negotiatedMomentsSettings;
@property (nonatomic, readonly) VCMediaNegotiatorResultsVideo *negotiatedScreenSettings;
@property (nonatomic, readonly) VCMediaNegotiatorResults *negotiatedSettings;
@property (nonatomic, readonly) NSArray *negotiatedStreamGroups;
@property (nonatomic, readonly) VCMediaNegotiatorResultsVideo *negotiatedVideoSettings;
@property (readonly) Class superclass;

+ (bool)initializeLocalConfiguration:(id)arg1 negotiationData:(id)arg2 deviceRole:(int)arg3 preferredAudioPayload:(int)arg4;
+ (id)streamGroupIDsWithMediaBlob:(id)arg1;

- (void)dealloc;
- (id)getPreferredVideoPayloadList:(id)arg1;
- (id)initWithLocalSettings:(id)arg1;
- (id)localSettings;
- (id)negotiatedAudioSettings;
- (id)negotiatedFaceTimeSettings;
- (id)negotiatedMomentsSettings;
- (id)negotiatedScreenSettings;
- (id)negotiatedSettings;
- (id)negotiatedStreamGroups;
- (id)negotiatedVideoSettings;
- (id)negotiationData;
- (bool)processRemoteNegotiationData:(id)arg1;
- (unsigned int)remoteMaxBandwidthForOperatingMode:(int)arg1 connectionType:(int)arg2;

@end
