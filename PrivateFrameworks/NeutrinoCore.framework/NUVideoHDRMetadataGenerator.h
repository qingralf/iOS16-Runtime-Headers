/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUVideoHDRMetadataGenerator : NSObject {
    struct opaqueVTHDRImageStatisticsGenerationSession { } * _hdrImageStatisticsSession;
    struct OpaqueVTHDRMetadataGenerationSession { } * _hdrMetadataSession;
    struct CGSize { 
        double width; 
        double height; 
    }  _sessionBufferSize;
}

+ (void)resetHDRMetadataForBuffer:(struct __CVBuffer { }*)arg1;

- (int)allocateSessions;
- (int)attachGeneratedHDRMetadataToBuffer:(struct __CVBuffer { }*)arg1 framesPerSecond:(float)arg2 playbackRate:(float)arg3;
- (void)dealloc;
- (void)releaseSessions;

@end