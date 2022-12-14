/* Generated by RuntimeBrowser.
 */

@protocol PGHighlightModel <NSObject>

@required

+ (NSArray *)fetchParentDayGroupHighlightsForDayHighlights:(NSArray *)arg1;

- (PHAssetCollection *)assetCollection;
- (<PGHighlightModelChangeRequest> *)changeRequest;
- (unsigned short)enrichmentState;
- (double)faceAnalysisProgressForPhotoLibrary:(PHPhotoLibrary *)arg1;
- (bool)isGroup;
- (bool)isRecent;
- (bool)isUpToDate;
- (double)nonDefaultCurationScorePercentageForPhotoLibrary:(PHPhotoLibrary *)arg1;
- (double)sceneAnalysisProgressForPhotoLibrary:(PHPhotoLibrary *)arg1;
- (void)setEnrichmentState:(unsigned short)arg1;
- (void)setType:(unsigned short)arg1;
- (unsigned short)sharingComposition;
- (unsigned short)type;
- (NSString *)uuid;

@end
