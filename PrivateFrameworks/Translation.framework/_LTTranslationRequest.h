/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Translation.framework/Translation
 */

@interface _LTTranslationRequest : NSObject <_LTSpeechTranslationDelegate> {
    bool  __forcedOnlineTranslation;
    long long  __mtConfidenceThreshold;
    NSURL * __offlineMTModelURL;
    NSString * _appIdentifier;
    unsigned int  _audioSessionID;
    bool  _autodetectLanguage;
    bool  _censorSpeech;
    bool  _forcedOfflineTranslation;
    _LTLocalePair * _localePair;
    NSString * _logIdentifier;
    NSURL * _outputFileURL;
    NSString * _sessionID;
    long long  _sourceOrigin;
    long long  _taskHint;
    NSString * _uniqueID;
}

@property (nonatomic) bool _forcedOnlineTranslation;
@property (nonatomic) long long _mtConfidenceThreshold;
@property (nonatomic, retain) NSURL *_offlineMTModelURL;
@property (nonatomic, copy) NSString *appIdentifier;
@property (nonatomic) unsigned int audioSessionID;
@property (nonatomic) bool autodetectLanguage;
@property (nonatomic) bool censorSpeech;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool forcedOfflineTranslation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) _LTLocalePair *localePair;
@property (nonatomic, copy) NSString *logIdentifier;
@property (nonatomic, readonly) NSString *loggingType;
@property (nonatomic, retain) NSURL *outputFileURL;
@property (nonatomic, copy) NSString *sessionID;
@property (nonatomic) long long sourceOrigin;
@property (readonly) Class superclass;
@property (nonatomic) long long taskHint;
@property (nonatomic, copy) NSString *uniqueID;

- (void).cxx_destruct;
- (bool)_canUseTextService;
- (bool)_forcedOnlineTranslation;
- (long long)_mtConfidenceThreshold;
- (id)_offlineMTModelURL;
- (void)_startTranslationWithService:(id)arg1 done:(id /* block */)arg2;
- (void)_startTranslationWithTextService:(id)arg1 done:(id /* block */)arg2;
- (void)_translationFailedWithError:(id)arg1;
- (id)appIdentifier;
- (unsigned int)audioSessionID;
- (bool)autodetectLanguage;
- (bool)censorSpeech;
- (bool)forcedOfflineTranslation;
- (id)initWithLocalePair:(id)arg1;
- (id)initWithSourceLocale:(id)arg1 targetLocale:(id)arg2;
- (id)localePair;
- (id)logIdentifier;
- (id)loggingType;
- (id)outputFileURL;
- (id)requestContext;
- (id)serviceDelegate;
- (id)sessionID;
- (void)setAppIdentifier:(id)arg1;
- (void)setAudioSessionID:(unsigned int)arg1;
- (void)setAutodetectLanguage:(bool)arg1;
- (void)setCensorSpeech:(bool)arg1;
- (void)setForcedOfflineTranslation:(bool)arg1;
- (void)setLogIdentifier:(id)arg1;
- (void)setOutputFileURL:(id)arg1;
- (void)setSessionID:(id)arg1;
- (void)setSourceOrigin:(long long)arg1;
- (void)setTaskHint:(long long)arg1;
- (void)setUniqueID:(id)arg1;
- (void)set_forcedOnlineTranslation:(bool)arg1;
- (void)set_mtConfidenceThreshold:(long long)arg1;
- (void)set_offlineMTModelURL:(id)arg1;
- (long long)sourceOrigin;
- (long long)taskHint;
- (id)uniqueID;

@end