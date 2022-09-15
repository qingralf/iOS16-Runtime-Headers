/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

@interface CLSTabooEventModel : NSObject <CLSClassificationBasedSignalModel> {
    CLSSignalNode * _bloodNode;
    CLSSignalNode * _demonstrationNode;
    CLSSignalNode * _destructionNode;
    CLSSignalNode * _fireDevastationNode;
    CLSSignalNode * _floodDevastationNode;
    CLSSignalNode * _funeralNode;
    CLSSignalNode * _hospitalNode;
    CLSSignalNode * _religiousSettingNode;
    CLSSignalNode * _vehicleCrashNode;
    unsigned long long  _version;
    CLSSignalNode * _warNode;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) unsigned long long version;

+ (unsigned long long)baseSceneAnalysisVersionWithSceneAnalysisVersion:(unsigned long long)arg1;
+ (unsigned long long)currentAnalyzerVersion;
+ (unsigned long long)latestVersion;
+ (id)name;

- (void).cxx_destruct;
- (id)initForTesting;
- (id)initWithSceneAnalysisVersion:(unsigned long long)arg1;
- (bool)isResponsibleForSignalIdentifier:(unsigned long long)arg1;
- (id)modelInfo;
- (id)nodeForSignalIdentifier:(unsigned long long)arg1;
- (void)processSignals:(id)arg1 intoProcessedSignals:(id)arg2;
- (void)setupVersion32;
- (void)setupVersion33;
- (void)setupVersion50_4;
- (void)setupVersion85;
- (unsigned long long)version;

@end