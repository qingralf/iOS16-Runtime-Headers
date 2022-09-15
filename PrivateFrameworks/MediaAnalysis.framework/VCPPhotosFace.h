/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaAnalysis.framework/MediaAnalysis
 */

@interface VCPPhotosFace : NSObject <PFPhotosFaceRepresentation> {
    NSString * _adjustmentVersion;
    unsigned short  _ageType;
    unsigned long long  _algorithmVersion;
    double  _blurScore;
    double  _bodyCenterX;
    double  _bodyCenterY;
    double  _bodyHeight;
    double  _bodyWidth;
    double  _centerX;
    double  _centerY;
    long long  _clusterSequenceNumber;
    short  _detectionType;
    unsigned short  _ethnicityType;
    double  _exposureScore;
    unsigned short  _expressionType;
    unsigned short  _eyesState;
    unsigned short  _facialHairType;
    double  _gazeCenterX;
    double  _gazeCenterY;
    unsigned short  _gazeType;
    unsigned short  _glassesType;
    NSString * _groupingIdentifier;
    unsigned short  _hairColorType;
    unsigned short  _hairType;
    bool  _hasFaceMask;
    bool  _hasSmile;
    unsigned short  _headgearType;
    bool  _hidden;
    VCPVNImageprintWrapper * _imageprintWrapper;
    bool  _isInTrash;
    bool  _isLeftEyeClosed;
    bool  _isRightEyeClosed;
    bool  _isTooSmall;
    NSString * _localIdentifier;
    bool  _manual;
    long long  _nameSource;
    NSString * _personLocalIdentifier;
    unsigned short  _poseType;
    double  _poseYaw;
    double  _quality;
    long long  _qualityMeasure;
    double  _roll;
    unsigned short  _sexType;
    double  _size;
    unsigned short  _skintoneType;
    unsigned short  _smileType;
    long long  _sourceHeight;
    long long  _sourceWidth;
    int  _trainingType;
}

@property (nonatomic, copy) NSString *adjustmentVersion;
@property (nonatomic) unsigned short ageType;
@property (nonatomic) unsigned long long algorithmVersion;
@property (nonatomic) double blurScore;
@property (nonatomic) double bodyCenterX;
@property (nonatomic) double bodyCenterY;
@property (nonatomic) double bodyHeight;
@property (nonatomic) double bodyWidth;
@property (nonatomic) double centerX;
@property (nonatomic) double centerY;
@property (nonatomic) long long clusterSequenceNumber;
@property (nonatomic) short detectionType;
@property (nonatomic) unsigned short ethnicityType;
@property (nonatomic) double exposureScore;
@property (nonatomic) unsigned short expressionType;
@property (nonatomic) unsigned short eyesState;
@property (nonatomic) unsigned short facialHairType;
@property (nonatomic) double gazeCenterX;
@property (nonatomic) double gazeCenterY;
@property (nonatomic) unsigned short gazeType;
@property (nonatomic) unsigned short glassesType;
@property (nonatomic, copy) NSString *groupingIdentifier;
@property (nonatomic) unsigned short hairColorType;
@property (nonatomic) unsigned short hairType;
@property (nonatomic) bool hasFaceMask;
@property (nonatomic) bool hasSmile;
@property (nonatomic) unsigned short headgearType;
@property (nonatomic) bool hidden;
@property (nonatomic, retain) VCPVNImageprintWrapper *imageprintWrapper;
@property (nonatomic) bool isInTrash;
@property (nonatomic) bool isLeftEyeClosed;
@property (nonatomic) bool isRightEyeClosed;
@property (nonatomic) bool isTooSmall;
@property (nonatomic, readonly, copy) NSString *localIdentifier;
@property (nonatomic) bool manual;
@property (nonatomic) long long nameSource;
@property (nonatomic, copy) NSString *personLocalIdentifier;
@property (nonatomic) unsigned short poseType;
@property (nonatomic) double poseYaw;
@property (nonatomic) double quality;
@property (nonatomic) long long qualityMeasure;
@property (nonatomic) double roll;
@property (nonatomic) unsigned short sexType;
@property (nonatomic) double size;
@property (nonatomic) unsigned short skintoneType;
@property (nonatomic) unsigned short smileType;
@property (nonatomic) long long sourceHeight;
@property (nonatomic) long long sourceWidth;
@property (nonatomic) int trainingType;

+ (double)_calculateIoUBetweenObservation:(id)arg1 andObservation:(id)arg2;
+ (double)_calculateOverlappingBetweenFaceObservation:(id)arg1 andHumanObservation:(id)arg2;
+ (bool)_isColocatingAnimalObservation:(id)arg1 withFaceObservations:(id)arg2 orTorsoObservations:(id)arg3;
+ (id)faceFromFaceObservation:(id)arg1 humanObservation:(id)arg2 sourceWidth:(unsigned long long)arg3 sourceHeight:(unsigned long long)arg4 visionRequests:(id)arg5 processingVersion:(int)arg6 force:(bool)arg7 andError:(id*)arg8;
+ (id)faceFromPHFace:(id)arg1 copyOption:(long long)arg2;
+ (id)faceWithLocalIdentifier:(id)arg1;
+ (id)facesFromFaceObservations:(id)arg1 humanObservations:(id)arg2 animalObservations:(id)arg3 sourceWidth:(unsigned long long)arg4 sourceHeight:(unsigned long long)arg5 visionRequests:(id)arg6 blurScorePerFace:(id)arg7 exposureScorePerFace:(id)arg8 tooSmallFaceObservations:(id)arg9 processingVersion:(int)arg10;
+ (id)facesFromPHFetchResult:(id)arg1 copyOption:(long long)arg2;

- (void).cxx_destruct;
- (id)adjustmentVersion;
- (unsigned short)ageType;
- (unsigned long long)algorithmVersion;
- (double)blurScore;
- (double)bodyCenterX;
- (double)bodyCenterY;
- (double)bodyHeight;
- (double)bodyWidth;
- (double)centerX;
- (double)centerY;
- (long long)clusterSequenceNumber;
- (short)detectionType;
- (unsigned short)ethnicityType;
- (double)exposureScore;
- (unsigned short)expressionType;
- (unsigned short)eyesState;
- (unsigned short)facialHairType;
- (double)gazeCenterX;
- (double)gazeCenterY;
- (unsigned short)gazeType;
- (id)gist;
- (unsigned short)glassesType;
- (id)groupingIdentifier;
- (unsigned short)hairColorType;
- (unsigned short)hairType;
- (bool)hasFaceMask;
- (bool)hasSmile;
- (unsigned short)headgearType;
- (bool)hidden;
- (id)imageprintWrapper;
- (id)initWithLocalIdentifier:(id)arg1;
- (bool)isInTrash;
- (bool)isLeftEyeClosed;
- (bool)isRightEyeClosed;
- (bool)isTooSmall;
- (id)localIdentifier;
- (bool)manual;
- (long long)nameSource;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedFaceRect;
- (id)personLocalIdentifier;
- (double)photosFaceRepresentationBlurScore;
- (double)photosFaceRepresentationCenterX;
- (double)photosFaceRepresentationCenterY;
- (long long)photosFaceRepresentationClusterSequenceNumber;
- (bool)photosFaceRepresentationHasSmile;
- (bool)photosFaceRepresentationIsLeftEyeClosed;
- (bool)photosFaceRepresentationIsRightEyeClosed;
- (id)photosFaceRepresentationLocalIdentifier;
- (double)photosFaceRepresentationQuality;
- (long long)photosFaceRepresentationQualityMeasure;
- (double)photosFaceRepresentationRoll;
- (double)photosFaceRepresentationSize;
- (long long)photosFaceRepresentationSourceHeight;
- (long long)photosFaceRepresentationSourceWidth;
- (unsigned short)poseType;
- (double)poseYaw;
- (double)quality;
- (long long)qualityMeasure;
- (long long)qualityMeasureWithCountOfFacesOnAsset:(unsigned long long)arg1;
- (void)replaceCoordinatesAndFeaturesFromDetectedFace:(id)arg1;
- (double)roll;
- (void)setAdjustmentVersion:(id)arg1;
- (void)setAgeType:(unsigned short)arg1;
- (void)setAlgorithmVersion:(unsigned long long)arg1;
- (void)setBlurScore:(double)arg1;
- (void)setBodyCenterX:(double)arg1;
- (void)setBodyCenterY:(double)arg1;
- (void)setBodyHeight:(double)arg1;
- (void)setBodyWidth:(double)arg1;
- (bool)setCenterAndSizeFromNormalizedFaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCenterX:(double)arg1;
- (void)setCenterY:(double)arg1;
- (void)setClusterSequenceNumber:(long long)arg1;
- (void)setDetectionType:(short)arg1;
- (void)setEthnicityType:(unsigned short)arg1;
- (void)setExposureScore:(double)arg1;
- (void)setExpressionType:(unsigned short)arg1;
- (void)setEyesState:(unsigned short)arg1;
- (void)setFacialHairType:(unsigned short)arg1;
- (void)setGazeCenterX:(double)arg1;
- (void)setGazeCenterY:(double)arg1;
- (void)setGazeType:(unsigned short)arg1;
- (void)setGlassesType:(unsigned short)arg1;
- (void)setGroupingIdentifier:(id)arg1;
- (void)setHairColorType:(unsigned short)arg1;
- (void)setHairType:(unsigned short)arg1;
- (void)setHasFaceMask:(bool)arg1;
- (void)setHasSmile:(bool)arg1;
- (void)setHeadgearType:(unsigned short)arg1;
- (void)setHidden:(bool)arg1;
- (void)setImageprintWrapper:(id)arg1;
- (void)setIsInTrash:(bool)arg1;
- (void)setIsLeftEyeClosed:(bool)arg1;
- (void)setIsRightEyeClosed:(bool)arg1;
- (void)setIsTooSmall:(bool)arg1;
- (void)setManual:(bool)arg1;
- (void)setNameSource:(long long)arg1;
- (void)setPersonLocalIdentifier:(id)arg1;
- (void)setPoseType:(unsigned short)arg1;
- (void)setPoseYaw:(double)arg1;
- (void)setQuality:(double)arg1;
- (void)setQualityMeasure:(long long)arg1;
- (void)setRoll:(double)arg1;
- (void)setSexType:(unsigned short)arg1;
- (void)setSize:(double)arg1;
- (void)setSkintoneType:(unsigned short)arg1;
- (void)setSmileType:(unsigned short)arg1;
- (void)setSourceHeight:(long long)arg1;
- (void)setSourceWidth:(long long)arg1;
- (void)setTrainingType:(int)arg1;
- (unsigned short)sexType;
- (double)size;
- (unsigned short)skintoneType;
- (unsigned short)smileType;
- (long long)sourceHeight;
- (long long)sourceWidth;
- (int)trainingType;

@end