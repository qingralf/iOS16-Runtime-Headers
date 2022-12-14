/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface FigCaptureMicSourcePipeline : FigCaptureSourcePipeline {
    unsigned int  _nextOutputIndexByMicSourcePosition;
    BWAudioSourceNode * _sourceNode;
    BWFanOutNode * _splitterNodesByMicSourcePosition;
    BWZoomCommandHandler * _zoomCommandHandlerForStereoAudioCapture;
}

+ (void)initialize;

- (void)dealloc;

@end
