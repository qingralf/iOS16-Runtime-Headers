/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNImageBufferManager : NSObject {
    NSHashTable * activeImageBuffers;
    NSLock * bufferTableLock;
    NSLock * ciContextLock;
    CIContext * lowPriorityCIContext;
    <MTLDevice> * lowPriorityCIContextMetalDevice;
    CIContext * mainCIContext;
    <MTLDevice> * mainCIContextMetalDevice;
}

+ (id)manager;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)purgeAllCaches;
- (id)sharedCIContextWithOptions:(id)arg1;

@end