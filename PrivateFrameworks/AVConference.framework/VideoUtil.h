/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VideoUtil : NSObject

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })adjustFaceBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromOriginalBufferSize:(struct CGSize { double x1; double x2; })arg2 toCroppedBufferSize:(struct CGSize { double x1; double x2; })arg3;
+ (void)adjustFaceMetadataForPixelBuffer:(struct __CVBuffer { }*)arg1 originalWidth:(unsigned long long)arg2 originalHeight:(unsigned long long)arg3;
+ (void)attachMetadata:(id)arg1 toCVPixelBuffer:(struct __CVBuffer { }*)arg2;
+ (long long)compareVideoAspectRatioSizeA:(struct CGSize { double x1; double x2; })arg1 toSizeB:(struct CGSize { double x1; double x2; })arg2;
+ (struct CGSize { double x1; double x2; })computeVisibleAspectRatioWithRemoteScreenAspectRatio:(struct CGSize { double x1; double x2; })arg1 remoteExpectedAspectRatio:(struct CGSize { double x1; double x2; })arg2 encodeWidth:(int)arg3 encodeHeight:(int)arg4;
+ (id)convertPixelBuffer:(struct __CVBuffer { }*)arg1 toImageType:(int)arg2 withAssetIdentifier:(id)arg3 cameraStatusBits:(unsigned char)arg4 allowTimeMetaData:(bool)arg5;
+ (struct CGSize { double x1; double x2; })getBestCaptureSizeForEncodingSize:(struct CGSize { double x1; double x2; })arg1;
+ (int)setupBufferPool:(struct __CVPixelBufferPool {}**)arg1 width:(double)arg2 height:(double)arg3;
+ (struct CGSize { double x1; double x2; })sizeForVideoResolution:(long long)arg1;
+ (struct __CFString { }*)typeIdentifierForImageType:(int)arg1;
+ (unsigned int)videoCodecForPayload:(int)arg1;
+ (long long)videoResolutionForWidth:(int)arg1 height:(int)arg2;

@end
