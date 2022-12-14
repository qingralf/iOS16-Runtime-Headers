/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ObjectUnderstanding.framework/ObjectUnderstanding
 */

@interface OU3DObject : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary * _boxesDict;
    NSMutableArray * _corners_history;
    NSMutableDictionary * _groups;
    NSMutableArray * _refined_box_history;
    void color;
    float  confidence;
    NSArray * corners_status;
    NSString * detection_source;
    NSArray * edges_status;
    NSArray * faces_status;
    NSUUID * identifier;
    NSArray * logits;
    bool  status;
    NSString * type;
}

@property (nonatomic, readonly) NSDictionary *boxesDict;
@property (nonatomic) void color;
@property (nonatomic) float confidence;
@property (retain) NSArray *corners_history;
@property (nonatomic, retain) NSArray *corners_status;
@property (retain) NSString *detection_source;
@property (nonatomic, readonly) void dimensions;
@property (nonatomic, retain) NSArray *edges_status;
@property (retain) NSArray *faces_status;
@property (nonatomic, readonly) NSDictionary *groups;
@property (nonatomic, retain) NSUUID *identifier;
@property (nonatomic, retain) NSArray *logits;
@property (retain) NSArray *refined_box_history;
@property (nonatomic) bool status;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } transform;
@property (nonatomic, retain) NSString *type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addBoxesDict:(const struct box3d { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[8]; }*)arg1 forDictKey:(id)arg2;
- (void)addGroupId:(int)arg1 forGroupType:(id)arg2;
- (void)addRefinedBoxToHistory:(id)arg1;
- (id)boxesDict;
- (void)clearGroupInfo:(id)arg1;
- (void)color;
- (float)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)corners_history;
- (id)corners_status;
- (id)description;
- (id)detection_source;
- (id)dictionaryRepresentation;
- (void)dimensions;
- (id)edges_status;
- (void)encodeWithCoder:(id)arg1;
- (id)faces_status;
- (bool)getDimension:(id)arg1 dim:(/* Warning: Unrecognized filer type: '2' using 'void*' */ void**)arg2;
- (int)getFrameIndexOfLastRefine;
- (bool)getTransform:(id)arg1 transform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)arg2;
- (id)groups;
- (bool)hasBoxesDict:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)logits;
- (id)refined_box_history;
- (void)removeBoxesDict:(id)arg1;
- (bool)runIsValidType:(id)arg1;
- (void)setColor;
- (void)setConfidence:(float)arg1;
- (void)setCorners_history:(id)arg1;
- (void)setCorners_status:(id)arg1;
- (void)setDetection_source:(id)arg1;
- (void)setEdges_status:(id)arg1;
- (void)setFaces_status:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLogits:(id)arg1;
- (void)setRefined_box_history:(id)arg1;
- (void)setStatus:(bool)arg1;
- (void)setType:(id)arg1;
- (bool)status;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })transform;
- (id)type;

@end
