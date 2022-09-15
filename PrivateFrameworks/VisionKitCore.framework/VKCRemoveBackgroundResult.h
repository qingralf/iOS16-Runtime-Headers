/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VisionKitCore.framework/VisionKitCore
 */

@interface VKCRemoveBackgroundResult : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cropRect;
    struct CGImage { } * _maskImage;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _normalizedCropRect;
    struct CGImage { } * _orientedMaskImage;
    struct __CVBuffer { } * _pixelBuffer;
    VKCRemoveBackgroundRequest * _request;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cropRect;
@property (nonatomic, readonly) long long imageOrientation;
@property (nonatomic) struct CGImage { }*maskImage;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } normalizedCropRect;
@property (nonatomic) struct CGImage { }*orientedMaskImage;
@property (nonatomic, readonly) struct __CVBuffer { }*pixelBuffer;
@property (nonatomic, readonly) VKCRemoveBackgroundRequest *request;

- (void).cxx_destruct;
- (struct CGImage { }*)createCGImage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cropRect;
- (void)dealloc;
- (void)generateImageMaskIfNecessaryWithContext:(id)arg1;
- (long long)imageOrientation;
- (id)initWithMADResult:(id)arg1 request:(id)arg2;
- (struct CGImage { }*)maskImage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedCropRect;
- (struct CGImage { }*)orientedMaskImage;
- (struct __CVBuffer { }*)pixelBuffer;
- (id)request;
- (void)setMaskImage:(struct CGImage { }*)arg1;
- (void)setOrientedMaskImage:(struct CGImage { }*)arg1;

@end