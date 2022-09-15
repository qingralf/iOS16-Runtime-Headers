/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCAudioTier : NSObject {
    bool  _bundlingAppliedByCodec;
    unsigned int  audioCodecBitrate;
    unsigned int  networkBitrate;
    unsigned int  packetsPerBundle;
    VCAudioPayloadConfig * payloadConfig;
    unsigned int  redMaxDelay20ms;
    unsigned int  redNumPayloads;
}

@property (readonly) unsigned int audioCodecBitrate;
@property (readonly) unsigned int networkBitrate;
@property (readonly) unsigned int packetsPerBundle;
@property (readonly) VCAudioPayloadConfig *payloadConfig;
@property (readonly) unsigned int redMaxDelay20ms;
@property (readonly) unsigned int redNumPayloads;

+ (bool)bundlingAppliedByCodecForPayload:(int)arg1 mode:(int)arg2;
+ (id)newAudioTierForPayloadConfig:(id)arg1 bundlingAppliedByCodec:(bool)arg2 audioCodecBitrate:(unsigned int)arg3 packetsPerBundle:(unsigned int)arg4 redNumPayloads:(unsigned int)arg5 headerSize:(unsigned int)arg6;

- (unsigned int)audioCodecBitrate;
- (id)description;
- (id)dictionary;
- (id)initWithNetworkBitrate:(unsigned int)arg1 bundlingAppliedByCodec:(bool)arg2 audioCodecBitrate:(unsigned int)arg3 packetsPerBundle:(unsigned int)arg4 redNumPayloads:(unsigned int)arg5 payloadConfig:(id)arg6;
- (bool)isEqualTo:(id)arg1;
- (unsigned int)networkBitrate;
- (unsigned int)packetsPerBundle;
- (id)payloadConfig;
- (unsigned int)redMaxDelay20ms;
- (unsigned int)redNumPayloads;

@end