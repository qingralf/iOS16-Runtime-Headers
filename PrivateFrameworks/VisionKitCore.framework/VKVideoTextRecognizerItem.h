/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VisionKitCore.framework/VisionKitCore
 */

@interface VKVideoTextRecognizerItem : NSObject {
    VKQuad * _boundingQuad;
    VKQuad * _originalBoundingQuad;
    NSArray * _originalPoints;
    NSArray * _points;
    NSMutableDictionary * _strings;
    NSUUID * _uuid;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _warpTransform;
}

@property (nonatomic, retain) VKQuad *boundingQuad;
@property (nonatomic, retain) VKQuad *originalBoundingQuad;
@property (nonatomic, retain) NSArray *originalPoints;
@property (nonatomic, retain) NSArray *points;
@property (nonatomic, readonly) NSString *string;
@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } warpTransform;

- (void).cxx_destruct;
- (id)boundingQuad;
- (id)description;
- (id)dictionaryRepresentation;
- (void)didRecognizeString:(id)arg1;
- (id)init;
- (id)matrix3x3TransformToDictionaryRepresentation:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
- (id)originalBoundingQuad;
- (id)originalPoints;
- (id)points;
- (id)pointsToDictionaryRepresentation:(id)arg1;
- (void)setBoundingQuad:(id)arg1;
- (void)setOriginalBoundingQuad:(id)arg1;
- (void)setOriginalPoints:(id)arg1;
- (void)setPoints:(id)arg1;
- (void)setWarpTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
- (id)string;
- (id)uuid;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })warpTransform;

@end