/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CinematicFraming.framework/CinematicFraming
 */

@interface CinematicFramingSessionOptions : NSObject {
    float  considerStationaryAfterThresholdSeconds;
    float  deadbandRecenteringDurationSec;
    float  deadbandRecenteringIdleDurationSec;
    float  deadbandRecenteringInitialDelaySec;
    long long  framingStyle;
    float  horizontalAccelerationMultiplier;
    float  horizontalSpeedMultiplier;
    float  minCropFovRad;
    float  movementThresholdMetersPerSecond;
    CinematicFramingSessionFramingParameters * multiPersonFramingParameters;
    float  noPeopleDelayBeforeReturningHomeSec;
    float  noPeopleReturningHomeDurationSec;
    float  recenterAfterDriftDurationThreshold;
    bool  recenterAfterDriftEnabled;
    float  recenterAfterDriftOffsetThreshold;
    bool  shouldDisableTransitions;
    bool  shouldVisualizeCrop;
    bool  shouldVisualizeDeadband;
    bool  shouldVisualizeDetections;
    CinematicFramingSessionFramingParameters * singlePersonFramingParameters;
    float  subjectMovementTolerance;
    float  tinyHeadMaxValue;
    float  tinyHeadMinValue;
    float  verticalAccelerationMultiplier;
    float  verticalSpeedMultiplier;
    float  viewportScaleMultiplierLandscape;
    float  viewportScaleMultiplierPortrait;
    float  xEaseInCurveA;
    float  xEaseInCurveB;
    float  yEaseInCurveA;
    float  yEaseInCurveB;
    float  zoomAccelerationMultiplier;
    float  zoomEaseInCurveA;
    float  zoomEaseInCurveB;
    float  zoomInSpeedMultiplier;
    float  zoomOutSpeedMultiplier;
}

@property (nonatomic) float considerStationaryAfterThresholdSeconds;
@property (nonatomic) float deadbandRecenteringDurationSec;
@property (nonatomic) float deadbandRecenteringIdleDurationSec;
@property (nonatomic) float deadbandRecenteringInitialDelaySec;
@property (nonatomic) long long framingStyle;
@property (nonatomic) float horizontalAccelerationMultiplier;
@property (nonatomic) float horizontalSpeedMultiplier;
@property (nonatomic) float minCropFovRad;
@property (nonatomic) float movementThresholdMetersPerSecond;
@property (nonatomic, retain) CinematicFramingSessionFramingParameters *multiPersonFramingParameters;
@property (nonatomic) float noPeopleDelayBeforeReturningHomeSec;
@property (nonatomic) float noPeopleReturningHomeDurationSec;
@property (nonatomic) float recenterAfterDriftDurationThreshold;
@property (nonatomic) bool recenterAfterDriftEnabled;
@property (nonatomic) float recenterAfterDriftOffsetThreshold;
@property (nonatomic) bool shouldDisableTransitions;
@property (nonatomic) bool shouldVisualizeCrop;
@property (nonatomic) bool shouldVisualizeDeadband;
@property (nonatomic) bool shouldVisualizeDetections;
@property (nonatomic, retain) CinematicFramingSessionFramingParameters *singlePersonFramingParameters;
@property (nonatomic) float subjectMovementTolerance;
@property (nonatomic) float tinyHeadMaxValue;
@property (nonatomic) float tinyHeadMinValue;
@property (nonatomic) float verticalAccelerationMultiplier;
@property (nonatomic) float verticalSpeedMultiplier;
@property (nonatomic) float viewportScaleMultiplierLandscape;
@property (nonatomic) float viewportScaleMultiplierPortrait;
@property (nonatomic) float xEaseInCurveA;
@property (nonatomic) float xEaseInCurveB;
@property (nonatomic) float yEaseInCurveA;
@property (nonatomic) float yEaseInCurveB;
@property (nonatomic) float zoomAccelerationMultiplier;
@property (nonatomic) float zoomEaseInCurveA;
@property (nonatomic) float zoomEaseInCurveB;
@property (nonatomic) float zoomInSpeedMultiplier;
@property (nonatomic) float zoomOutSpeedMultiplier;

- (void).cxx_destruct;
- (id)asPlist;
- (float)considerStationaryAfterThresholdSeconds;
- (float)deadbandRecenteringDurationSec;
- (float)deadbandRecenteringIdleDurationSec;
- (float)deadbandRecenteringInitialDelaySec;
- (long long)framingStyle;
- (float)horizontalAccelerationMultiplier;
- (float)horizontalSpeedMultiplier;
- (id)initWithPlist:(id)arg1;
- (id)initWithPlistPath:(id)arg1;
- (float)minCropFovRad;
- (float)movementThresholdMetersPerSecond;
- (id)multiPersonFramingParameters;
- (float)noPeopleDelayBeforeReturningHomeSec;
- (float)noPeopleReturningHomeDurationSec;
- (float)recenterAfterDriftDurationThreshold;
- (bool)recenterAfterDriftEnabled;
- (float)recenterAfterDriftOffsetThreshold;
- (void)setConsiderStationaryAfterThresholdSeconds:(float)arg1;
- (void)setDeadbandRecenteringDurationSec:(float)arg1;
- (void)setDeadbandRecenteringIdleDurationSec:(float)arg1;
- (void)setDeadbandRecenteringInitialDelaySec:(float)arg1;
- (void)setFramingStyle:(long long)arg1;
- (void)setHorizontalAccelerationMultiplier:(float)arg1;
- (void)setHorizontalSpeedMultiplier:(float)arg1;
- (void)setMinCropFovRad:(float)arg1;
- (void)setMovementThresholdMetersPerSecond:(float)arg1;
- (void)setMultiPersonFramingParameters:(id)arg1;
- (void)setNoPeopleDelayBeforeReturningHomeSec:(float)arg1;
- (void)setNoPeopleReturningHomeDurationSec:(float)arg1;
- (void)setRecenterAfterDriftDurationThreshold:(float)arg1;
- (void)setRecenterAfterDriftEnabled:(bool)arg1;
- (void)setRecenterAfterDriftOffsetThreshold:(float)arg1;
- (void)setShouldDisableTransitions:(bool)arg1;
- (void)setShouldVisualizeCrop:(bool)arg1;
- (void)setShouldVisualizeDeadband:(bool)arg1;
- (void)setShouldVisualizeDetections:(bool)arg1;
- (void)setSinglePersonFramingParameters:(id)arg1;
- (void)setSubjectMovementTolerance:(float)arg1;
- (void)setTinyHeadMaxValue:(float)arg1;
- (void)setTinyHeadMinValue:(float)arg1;
- (void)setVerticalAccelerationMultiplier:(float)arg1;
- (void)setVerticalSpeedMultiplier:(float)arg1;
- (void)setViewportScaleMultiplierLandscape:(float)arg1;
- (void)setViewportScaleMultiplierPortrait:(float)arg1;
- (void)setXEaseInCurveA:(float)arg1;
- (void)setXEaseInCurveB:(float)arg1;
- (void)setYEaseInCurveA:(float)arg1;
- (void)setYEaseInCurveB:(float)arg1;
- (void)setZoomAccelerationMultiplier:(float)arg1;
- (void)setZoomEaseInCurveA:(float)arg1;
- (void)setZoomEaseInCurveB:(float)arg1;
- (void)setZoomInSpeedMultiplier:(float)arg1;
- (void)setZoomOutSpeedMultiplier:(float)arg1;
- (bool)shouldDisableTransitions;
- (bool)shouldVisualizeCrop;
- (bool)shouldVisualizeDeadband;
- (bool)shouldVisualizeDetections;
- (id)singlePersonFramingParameters;
- (float)subjectMovementTolerance;
- (float)tinyHeadMaxValue;
- (float)tinyHeadMinValue;
- (float)verticalAccelerationMultiplier;
- (float)verticalSpeedMultiplier;
- (float)viewportScaleMultiplierLandscape;
- (float)viewportScaleMultiplierPortrait;
- (float)xEaseInCurveA;
- (float)xEaseInCurveB;
- (float)yEaseInCurveA;
- (float)yEaseInCurveB;
- (float)zoomAccelerationMultiplier;
- (float)zoomEaseInCurveA;
- (float)zoomEaseInCurveB;
- (float)zoomInSpeedMultiplier;
- (float)zoomOutSpeedMultiplier;

@end