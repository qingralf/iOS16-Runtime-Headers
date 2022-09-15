/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VisionKitCore.framework/VisionKitCore
 */

@interface VKKeyboardCameraViewController : VKCaptureVideoPreviewViewController <VKCaptureTextAnalysisRequestDelegate, VKTextLiftingViewDelegate, VKVideoTextRecognizerDelegate> {
    VKKeyboardCameraCloseButton * _closeButton;
    VKVideoTextRecognizerItem * _closestItem;
    NSMutableArray * _dataForRadar;
    unsigned long long  _dataTypes;
    <VKKeyboardCameraViewControllerDelegate> * _delegate;
    bool  _didDismiss;
    bool  _didOverrideComparisonPoint;
    bool  _didSetInitialComparisonPoint;
    VKFeedbackProvider * _feedbackProvider;
    VKKeyboardCameraGuidanceView * _guidanceView;
    UIView * _hitTestView;
    double  _initialPinchZoom;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _initialRecordingTimestamp;
    VKKeyboardCameraInsertButton * _insertButton;
    bool  _isPinchToZoomInProgress;
    bool  _isTextLifted;
    VKImageAnalysisButton * _liftTextButton;
    NSString * _liftedString;
    UIPinchGestureRecognizer * _pinchGestureRecognizer;
    NSString * _previousString;
    bool  _recording;
    VKKeyboardCameraReticleView * _reticleView;
    UITapGestureRecognizer * _tapGestureRecognizer;
    UIButton * _tapToRadarButton;
    VKCaptureTextAnalyzer * _textAnalyzer;
    VKTextLiftingView * _textLiftingView;
    VKVideoTextRecognizer * _textRecognizer;
    NSTimer * _timeWithoutTextTimer;
    AVAssetWriter * _videoWriter;
    AVAssetWriterInput * _videoWriterInput;
}

@property (nonatomic, retain) VKKeyboardCameraCloseButton *closeButton;
@property (nonatomic, retain) VKVideoTextRecognizerItem *closestItem;
@property (nonatomic, retain) NSMutableArray *dataForRadar;
@property (nonatomic) unsigned long long dataTypes;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VKKeyboardCameraViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didDismiss;
@property (nonatomic) bool didOverrideComparisonPoint;
@property (nonatomic) bool didSetInitialComparisonPoint;
@property (nonatomic, retain) VKFeedbackProvider *feedbackProvider;
@property (nonatomic, retain) VKKeyboardCameraGuidanceView *guidanceView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *hitTestView;
@property (nonatomic) double initialPinchZoom;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } initialRecordingTimestamp;
@property (nonatomic, retain) VKKeyboardCameraInsertButton *insertButton;
@property (nonatomic) bool isPinchToZoomInProgress;
@property (nonatomic) bool isTextLifted;
@property (nonatomic, retain) VKImageAnalysisButton *liftTextButton;
@property (nonatomic, retain) NSString *liftedString;
@property (nonatomic, retain) UIPinchGestureRecognizer *pinchGestureRecognizer;
@property (nonatomic, retain) NSString *previousString;
@property (getter=isRecording, nonatomic) bool recording;
@property (nonatomic, retain) VKKeyboardCameraReticleView *reticleView;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITapGestureRecognizer *tapGestureRecognizer;
@property (nonatomic, retain) UIButton *tapToRadarButton;
@property (nonatomic, retain) VKCaptureTextAnalyzer *textAnalyzer;
@property (nonatomic, retain) VKTextLiftingView *textLiftingView;
@property (nonatomic, retain) VKVideoTextRecognizer *textRecognizer;
@property (nonatomic, retain) NSTimer *timeWithoutTextTimer;
@property (nonatomic, retain) AVAssetWriter *videoWriter;
@property (nonatomic, retain) AVAssetWriterInput *videoWriterInput;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)addButtons;
- (void)addTapToRadarButtonIfNeeded;
- (void)animate:(id /* block */)arg1;
- (void)animateAlongsideFadeOutForTextLiftingView:(id)arg1;
- (void)animateAlongsideTextLiftingForView:(id)arg1;
- (id)arrayToJSON:(id)arg1;
- (void)cancelTimeWithoutTextTimer;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 fromConnection:(id)arg3;
- (void)clearFoundItemAndRemoveLiftTextButton:(bool)arg1;
- (id)closeButton;
- (id)closestItem;
- (void)configureConstraints;
- (id)dataForRadar;
- (unsigned long long)dataTypes;
- (void)dealloc;
- (id)delegate;
- (id)desiredDeviceTypes;
- (void)didChangeRegionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)didDismiss;
- (void)didEndPinchToZoom;
- (bool)didOverrideComparisonPoint;
- (bool)didSetInitialComparisonPoint;
- (void)dismissLiftedText;
- (void)fadeOutAnimationDidEndForView:(id)arg1;
- (id)feedbackProvider;
- (id)findTextLocalizedStringKey;
- (id)guidanceView;
- (id)hitTestView;
- (double)initialPinchZoom;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })initialRecordingTimestamp;
- (id)insertButton;
- (bool)isPinchToZoomInProgress;
- (bool)isRecording;
- (bool)isTextLifted;
- (id)liftTextButton;
- (void)liftTextIfPossible;
- (void)liftTextWithCompletion:(id /* block */)arg1;
- (void)liftTextWithSnapshot:(id)arg1;
- (id)liftedString;
- (void)onCancel;
- (void)onInsert;
- (void)onLiftTextButton:(id)arg1;
- (void)onPinch:(id)arg1;
- (void)onSelectionChanged:(id)arg1;
- (void)onTap:(id)arg1;
- (void)onTapToRadarButton;
- (id)pinchGestureRecognizer;
- (id)previousString;
- (void)request:(id)arg1 didDetectTextWithResult:(id)arg2;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)request:(id)arg1 didRecgonizeTextWithAnalysis:(id)arg2;
- (void)requestDidCancel:(id)arg1;
- (void)resetToDefaultComparisonPoint;
- (id)reticleView;
- (void)sendRadarWithVideo;
- (void)setCloseButton:(id)arg1;
- (void)setClosestItem:(id)arg1;
- (void)setDataForRadar:(id)arg1;
- (void)setDataTypes:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidDismiss:(bool)arg1;
- (void)setDidOverrideComparisonPoint:(bool)arg1;
- (void)setDidSetInitialComparisonPoint:(bool)arg1;
- (void)setFeedbackProvider:(id)arg1;
- (void)setGuidanceView:(id)arg1;
- (void)setHitTestView:(id)arg1;
- (void)setInitialPinchZoom:(double)arg1;
- (void)setInitialRecordingTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setInsertButton:(id)arg1;
- (void)setIsPinchToZoomInProgress:(bool)arg1;
- (void)setIsTextLifted:(bool)arg1;
- (void)setLiftTextButton:(id)arg1;
- (void)setLiftedString:(id)arg1;
- (void)setPinchGestureRecognizer:(id)arg1;
- (void)setPreviousString:(id)arg1;
- (void)setRecording:(bool)arg1;
- (void)setReticleView:(id)arg1;
- (void)setTapGestureRecognizer:(id)arg1;
- (void)setTapToRadarButton:(id)arg1;
- (void)setTextAnalyzer:(id)arg1;
- (void)setTextLiftingView:(id)arg1;
- (void)setTextRecognizer:(id)arg1;
- (void)setTimeWithoutTextTimer:(id)arg1;
- (void)setVideoWriter:(id)arg1;
- (void)setVideoWriterInput:(id)arg1;
- (void)startRecordingForTapToRadarAtTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)startTimeWithoutTextTimer;
- (void)stopRecordingForTapToRadar;
- (id)tapGestureRecognizer;
- (id)tapToRadarButton;
- (id)textAnalyzer;
- (void)textLiftingAnimationDidEndForView:(id)arg1;
- (id)textLiftingView;
- (id)textRecognizer;
- (id)timeWithoutTextTimer;
- (void)updateInsertButtonWithRecognizedString:(id)arg1;
- (void)videoTextRecognizer:(id)arg1 added:(id)arg2 updated:(id)arg3 removed:(id)arg4;
- (void)videoTextRecognizer:(id)arg1 added:(id)arg2 updated:(id)arg3 removed:(id)arg4 bufferTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg5;
- (void)videoTextRecognizer:(id)arg1 didChangeStability:(unsigned long long)arg2;
- (id)videoWriter;
- (id)videoWriterInput;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (bool)wantsRegionOfInterest;
- (void)willBeginPinchToZoom;

@end