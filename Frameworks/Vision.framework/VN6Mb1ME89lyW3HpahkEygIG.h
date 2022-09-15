/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VN6Mb1ME89lyW3HpahkEygIG : VNImageBasedRequest

@property unsigned long long imageCropAndScaleOption;
@property (readonly, copy) NSArray *results;

// Image: /System/Library/Frameworks/Vision.framework/Vision

+ (Class)configurationClass;
+ (id)descriptionForPrivateRevision:(unsigned long long)arg1;
+ (id)knownClassificationsForRevision:(unsigned long long)arg1 error:(id*)arg2;
+ (const struct { unsigned long long x1; struct { int x_2_1_1; int x_2_1_2; } x2; struct { int x_3_1_1; int x_3_1_2; } x3; struct { int x_4_1_1; int x_4_1_2; } x4; }*)revisionAvailability;
+ (id)supportedPrivateRevisions;

- (id)applicableDetectorTypeForRevision:(unsigned long long)arg1 error:(id*)arg2;
- (unsigned long long)imageCropAndScaleOption;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2;
- (void)setImageCropAndScaleOption:(unsigned long long)arg1;
- (id)supportedIdentifiersAndReturnError:(id*)arg1;
- (bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MediaAnalysis.framework/MediaAnalysis

+ (id)vcp_sceneRequest;

@end