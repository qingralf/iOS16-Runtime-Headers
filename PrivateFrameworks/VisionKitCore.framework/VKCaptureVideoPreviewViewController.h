/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VisionKitCore.framework/VisionKitCore
 */

@interface VKCaptureVideoPreviewViewController : UIViewController <AVCaptureVideoDataOutputSampleBufferDelegate, BKSAccelerometerDelegate> {
    BKSAccelerometer * _accelerometer;
    NSObject<OS_dispatch_queue> * _avCaptureQueue;
    AVCaptureDevice * _captureDevice;
    AVCaptureSession * _captureSession;
    AVCaptureConnection * _connection;
    struct CGSize { 
        double width; 
        double height; 
    }  _dimensions;
    long long  _orientation;
    NSObject<OS_dispatch_queue> * _sampleBufferQueue;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _transform;
    NSDictionary * _videoSettings;
    bool  _viewDidAppear;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _visionRegionOfInterest;
    bool  _wantsRegionOfInterest;
}

@property (nonatomic, retain) BKSAccelerometer *accelerometer;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *avCaptureQueue;
@property (nonatomic, retain) AVCaptureDevice *captureDevice;
@property (nonatomic, retain) AVCaptureSession *captureSession;
@property (nonatomic, retain) AVCaptureConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGSize { double x1; double x2; } dimensions;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long orientation;
@property (nonatomic, readonly) VKCaptureVideoPreviewView *previewView;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } regionOfInterest;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *sampleBufferQueue;
@property (readonly) Class superclass;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transform;
@property (nonatomic, readonly) long long videoOrientation;
@property (nonatomic, retain) NSDictionary *videoSettings;
@property (nonatomic) bool viewDidAppear;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visionRegionOfInterest;
@property (nonatomic, readonly) bool wantsRegionOfInterest;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)accelerometer;
- (void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6;
- (void)accelerometer:(id)arg1 didChangeDeviceOrientation:(long long)arg2;
- (id)avCaptureQueue;
- (id)captureDevice;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 fromConnection:(id)arg3;
- (id)captureSession;
- (void)changeToZoomFactor:(double)arg1;
- (void)configureCamera;
- (id)connection;
- (void)dealloc;
- (id)desiredDeviceTypes;
- (void)didChangeRegionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })dimensions;
- (id)init;
- (struct CGPoint { double x1; double x2; })layerPointFromVisionPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)loadView;
- (void)needsRegionOfInterestUpdate;
- (long long)orientation;
- (id)previewView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })regionOfInterest;
- (id)sampleBufferQueue;
- (void)sessionRuntimeError:(id)arg1;
- (void)setAccelerometer:(id)arg1;
- (void)setAvCaptureQueue:(id)arg1;
- (void)setCaptureDevice:(id)arg1;
- (void)setCaptureSession:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setDimensions:(struct CGSize { double x1; double x2; })arg1;
- (void)setOrientation:(long long)arg1;
- (void)setSampleBufferQueue:(id)arg1;
- (void)setTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setVideoSettings:(id)arg1;
- (void)setViewDidAppear:(bool)arg1;
- (void)setVisionRegionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)startSessionIfReady;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform;
- (void)updateDimensionsAndTransform;
- (long long)videoOrientation;
- (id)videoSettings;
- (bool)viewDidAppear;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (struct CGPoint { double x1; double x2; })visionPointFromLayerPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visionRegionOfInterest;
- (bool)wantsRegionOfInterest;

@end