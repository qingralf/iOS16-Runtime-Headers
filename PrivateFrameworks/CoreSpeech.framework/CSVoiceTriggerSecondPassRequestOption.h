/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSVoiceTriggerSecondPassRequestOption : NSObject {
    NSString * _audioProviderUUID;
    NSString * _deviceId;
    unsigned long long  _firstPassSource;
    NSDictionary * _firstPassTriggerInfo;
    CSVoiceTriggerFirstPassMetrics * _firstpassMetrics;
    bool  _isSecondChanceRun;
    NSUUID * _rejectionMHUUID;
}

@property (nonatomic, readonly) NSString *audioProviderUUID;
@property (nonatomic, readonly) NSString *deviceId;
@property (nonatomic, readonly) unsigned long long firstPassSource;
@property (nonatomic, readonly) NSDictionary *firstPassTriggerInfo;
@property (nonatomic, readonly) CSVoiceTriggerFirstPassMetrics *firstpassMetrics;
@property (nonatomic, readonly) bool isSecondChanceRun;
@property (nonatomic, readonly) NSUUID *rejectionMHUUID;

- (void).cxx_destruct;
- (id)audioProviderUUID;
- (id)deviceId;
- (unsigned long long)firstPassSource;
- (id)firstPassTriggerInfo;
- (id)firstpassMetrics;
- (id)initWithFirstPassSource:(unsigned long long)arg1 deviceId:(id)arg2 audioProviderUUID:(id)arg3 firstPassInfo:(id)arg4 rejectionMHUUID:(id)arg5 isSecondChanceRun:(bool)arg6 firstpassMetrics:(id)arg7;
- (bool)isSecondChanceRun;
- (id)rejectionMHUUID;

@end
