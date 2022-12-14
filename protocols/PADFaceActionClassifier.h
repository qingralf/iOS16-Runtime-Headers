/* Generated by RuntimeBrowser.
 */

@protocol PADFaceActionClassifier <PADFrameMonitor>

@required

- (NSNumber *)assessment;
- (<PADFaceActionModuleDelegate> *)delegate;
- (NSArray *)faceprintsID;
- (long long)gesture;
- (bool)idMatchingFramesSelected;
- (void)restart;
- (void)setDelegate:(id <PADFaceActionModuleDelegate>)arg1;
- (void)setFACOption:(long long)arg1;
- (NSArray *)timestampsFAC;
- (NSArray *)timestampsID;
- (NSArray *)timestampsReferenceFAC;

@end
