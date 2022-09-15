/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

@interface PISegmentationContextInfo : NSObject {
    long long  _infillAlgorithm;
    <PFParallaxLayoutConfiguration> * _layoutConfiguration;
    bool  _segmentationDisabled;
    long long  _sourceMode;
    NSString * _systemBuildVersion;
    NSString * _systemName;
    NSString * _systemVersion;
    unsigned long long  _version;
}

@property (nonatomic) long long infillAlgorithm;
@property (nonatomic, retain) <PFParallaxLayoutConfiguration> *layoutConfiguration;
@property (nonatomic) bool segmentationDisabled;
@property (nonatomic) long long sourceMode;
@property (nonatomic, copy) NSString *systemBuildVersion;
@property (nonatomic, copy) NSString *systemName;
@property (nonatomic, copy) NSString *systemVersion;
@property (nonatomic) unsigned long long version;

+ (id)currentContextInfo;

- (void).cxx_destruct;
- (long long)infillAlgorithm;
- (id)layoutConfiguration;
- (bool)segmentationDisabled;
- (void)setInfillAlgorithm:(long long)arg1;
- (void)setLayoutConfiguration:(id)arg1;
- (void)setSegmentationDisabled:(bool)arg1;
- (void)setSourceMode:(long long)arg1;
- (void)setSystemBuildVersion:(id)arg1;
- (void)setSystemName:(id)arg1;
- (void)setSystemVersion:(id)arg1;
- (void)setVersion:(unsigned long long)arg1;
- (long long)sourceMode;
- (id)systemBuildVersion;
- (id)systemName;
- (id)systemVersion;
- (unsigned long long)version;

@end