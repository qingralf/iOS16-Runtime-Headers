/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUDevice_iOS : NUDevice {
    NURenderer * _renderer;
}

- (void).cxx_destruct;
- (id)_lowPriorityRenderer:(out id*)arg1;
- (id)_newLowPriorityLowMemoryRendererWithoutIntermediateCaching:(out id*)arg1;
- (id)_newLowPriorityNoIntermediatesRenderer:(out id*)arg1;
- (id)_newMetalRendererWithOptions:(id)arg1;
- (id)_newNoIntermediatesRenderer:(out id*)arg1;
- (id)_newRenderer:(out id*)arg1;
- (id)_newRendererWithOptions:(id)arg1 error:(out id*)arg2;
- (long long)_preferredSampleMode;
- (id)debugDescription;
- (unsigned long long)family;
- (id)initWithName:(id)arg1;

@end