/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWMetadataTimeMachineMetadataRequest : BWMetadataTimeMachineRequest {
    NSArray * _metadataForPTSRange;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  _ptsRange;
}

- (void)dealloc;
- (id)description;

@end
