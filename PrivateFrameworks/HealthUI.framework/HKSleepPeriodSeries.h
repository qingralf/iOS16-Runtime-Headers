/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKSleepPeriodSeries : HKGraphSeries {
    struct CGSize { 
        double width; 
        double height; 
    }  _cornerRadii;
    struct CGSize { 
        double width; 
        double height; 
    }  _cornerRadiiStorage;
    NSArray * _defaultFillStylesStorage;
    HKStrokeStyle * _goalLineStrokeStyleStorage;
    NSArray * _highlightedFillStylesStorage;
    NSArray * _inactiveFillStylesStorage;
    HKLineSeriesPointMarkerStyle * _lowerGoalLineMarkerStyleStorage;
    NSLock * _seriesMutableStateLock;
    id /* block */  _startOfDayTransformStorage;
    HKStrokeStyle * _strokeStyleStorage;
    HKStrokeStyle * _tiledStrokeStyleStorage;
    HKLineSeriesPointMarkerStyle * _upperGoalLineMarkerStyleStorage;
}

@property (nonatomic) struct CGSize { double x1; double x2; } cornerRadii;
@property (nonatomic) struct CGSize { double x1; double x2; } cornerRadiiStorage;
@property (nonatomic, copy) NSArray *defaultFillStyles;
@property (nonatomic, copy) NSArray *defaultFillStylesStorage;
@property (nonatomic, copy) HKStrokeStyle *goalLineStrokeStyle;
@property (nonatomic, copy) HKStrokeStyle *goalLineStrokeStyleStorage;
@property (nonatomic, copy) NSArray *highlightedFillStyles;
@property (nonatomic, copy) NSArray *highlightedFillStylesStorage;
@property (nonatomic, copy) NSArray *inactiveFillStyles;
@property (nonatomic, copy) NSArray *inactiveFillStylesStorage;
@property (nonatomic, retain) HKLineSeriesPointMarkerStyle *lowerGoalLineMarkerStyle;
@property (nonatomic, retain) HKLineSeriesPointMarkerStyle *lowerGoalLineMarkerStyleStorage;
@property (nonatomic, readonly) NSLock *seriesMutableStateLock;
@property (nonatomic, copy) id /* block */ startOfDayTransform;
@property (nonatomic, copy) id /* block */ startOfDayTransformStorage;
@property (nonatomic, copy) HKStrokeStyle *strokeStyle;
@property (nonatomic, copy) HKStrokeStyle *strokeStyleStorage;
@property (nonatomic, copy) HKStrokeStyle *tiledStrokeStyle;
@property (nonatomic, copy) HKStrokeStyle *tiledStrokeStyleStorage;
@property (nonatomic, retain) HKLineSeriesPointMarkerStyle *upperGoalLineMarkerStyle;
@property (nonatomic, retain) HKLineSeriesPointMarkerStyle *upperGoalLineMarkerStyleStorage;

+ (id)_sleepCircleImageWithWidth:(double)arg1 diameter:(double)arg2 color:(id)arg3;
+ (id)asleepImageCompatibleWithFont:(id)arg1 withColor:(id)arg2;
+ (id)inBedImageCompatibleWithFont:(id)arg1 withColor:(id)arg2;

- (void).cxx_destruct;
- (void)_assertCoordinateCompatibility:(id)arg1;
- (id)_attributedAxisString:(id)arg1;
- (void)_drawWithBlockCoordinates:(id)arg1 visibleBarCount:(long long)arg2 pointTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 context:(struct CGContext { }*)arg4 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 axisResolution:(double)arg6 seriesRenderingDelegate:(id)arg7;
- (double)_maximumYForCoordinate:(id)arg1;
- (double)_minimumYForCoordinate:(id)arg1;
- (id)_stringFromTimeSinceNoon:(id)arg1;
- (void)addAnnotationForValue:(double)arg1 axisAnnotationDelegate:(id)arg2;
- (void)addGoalLinePathsToCoordinate:(id)arg1 upperGoalLinePath:(id)arg2 upperGoalMarkerPoints:(id)arg3 previousUpperGoalLinePoint:(id)arg4 lowerGoalLinePath:(id)arg5 lowerGoalMarkerPoints:(id)arg6 previousLowerGoalLinePoint:(id)arg7 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg8;
- (double)barWidthForVisibleBarCount:(long long)arg1 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 minimumSpacing:(double)arg3;
- (bool)blockCoordinate:(id)arg1 greaterThan:(id)arg2;
- (bool)blockCoordinate:(id)arg1 lessThan:(id)arg2;
- (bool)blockCoordinateIsVisibleInsideOfChartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 blockCoordinate:(id)arg2;
- (void)clearCaches;
- (id)coordinatesForBlock:(id)arg1 blockPath:(struct { long long x1; long long x2; })arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (struct CGSize { double x1; double x2; })cornerRadii;
- (struct CGSize { double x1; double x2; })cornerRadiiStorage;
- (id)defaultFillStyles;
- (id)defaultFillStylesStorage;
- (double)distanceFromPoint:(struct CGPoint { double x1; double x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)drawGoalLinePath:(id)arg1 goalMarkerPoints:(id)arg2 markerImage:(id)arg3 context:(struct CGContext { }*)arg4;
- (void)drawPaths:(id)arg1 withFillStyles:(id)arg2 strokeStyle:(id)arg3 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 context:(struct CGContext { }*)arg5;
- (void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4 renderContext:(struct CGContext { }*)arg5 secondaryRenderContext:(id)arg6 seriesRenderingDelegate:(id)arg7;
- (id)goalLineStrokeStyle;
- (id)goalLineStrokeStyleStorage;
- (id)highlightedFillStyles;
- (id)highlightedFillStylesStorage;
- (id)inactiveFillStyles;
- (id)inactiveFillStylesStorage;
- (id)init;
- (id)lowerGoalLineMarkerStyle;
- (id)lowerGoalLineMarkerStyleStorage;
- (id)marginsForYAxis:(id)arg1 xAxisRange:(id)arg2 zoomLevel:(long long)arg3 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (id)seriesMutableStateLock;
- (void)setCornerRadii:(struct CGSize { double x1; double x2; })arg1;
- (void)setCornerRadiiStorage:(struct CGSize { double x1; double x2; })arg1;
- (void)setDefaultFillStyles:(id)arg1;
- (void)setDefaultFillStylesStorage:(id)arg1;
- (void)setGoalLineStrokeStyle:(id)arg1;
- (void)setGoalLineStrokeStyleStorage:(id)arg1;
- (void)setHighlightedFillStyles:(id)arg1;
- (void)setHighlightedFillStylesStorage:(id)arg1;
- (void)setInactiveFillStyles:(id)arg1;
- (void)setInactiveFillStylesStorage:(id)arg1;
- (void)setLowerGoalLineMarkerStyle:(id)arg1;
- (void)setLowerGoalLineMarkerStyleStorage:(id)arg1;
- (void)setStartOfDayTransform:(id /* block */)arg1;
- (void)setStartOfDayTransformStorage:(id /* block */)arg1;
- (void)setStrokeStyle:(id)arg1;
- (void)setStrokeStyleStorage:(id)arg1;
- (void)setTiledStrokeStyle:(id)arg1;
- (void)setTiledStrokeStyleStorage:(id)arg1;
- (void)setUpperGoalLineMarkerStyle:(id)arg1;
- (void)setUpperGoalLineMarkerStyleStorage:(id)arg1;
- (bool)shouldInvertAxis;
- (id /* block */)startOfDayTransform;
- (id /* block */)startOfDayTransformStorage;
- (id)strokeStyle;
- (id)strokeStyleStorage;
- (bool)supportsMultiTouchSelection;
- (id)tiledStrokeStyle;
- (id)tiledStrokeStyleStorage;
- (id)upperGoalLineMarkerStyle;
- (id)upperGoalLineMarkerStyleStorage;
- (long long)visibleBarCountWithZoomLevelConfiguration:(id)arg1;
- (double)xAxisDistanceFromPoint:(struct CGPoint { double x1; double x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (double)yAxisDifferenceToPoint:(struct CGPoint { double x1; double x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;

@end