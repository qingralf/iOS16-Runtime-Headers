/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@interface VTKeywordDetectorContext : NSObject {
    NSString * _assetPath;
    unsigned long long  _audioSourceOption;
    NSString * _categoryKey;
    bool  _isMultiPhraseVTEnabled;
    NSString * _locale;
}

@property (nonatomic, readonly) NSString *assetPath;
@property (nonatomic, readonly) unsigned long long audioSourceOption;
@property (nonatomic, readonly) NSString *categoryKey;
@property (nonatomic, readonly) bool isMultiPhraseVTEnabled;
@property (nonatomic, readonly) NSString *locale;

- (void).cxx_destruct;
- (id)assetPath;
- (unsigned long long)audioSourceOption;
- (id)categoryKey;
- (id)initWithVTContext:(id)arg1 error:(id*)arg2;
- (bool)isMultiPhraseVTEnabled;
- (id)locale;

@end