/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAHighlightEnrichmentTask : PHAEnrichmentTask {
    unsigned long long  _tailorOptions;
}

@property (nonatomic) unsigned long long tailorOptions;

- (bool)currentPlatformIsSupported;
- (double)period;
- (bool)runWithGraphManager:(id)arg1 progressReporter:(id)arg2 error:(id*)arg3;
- (void)setTailorOptions:(unsigned long long)arg1;
- (unsigned long long)tailorOptions;

@end