/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraColorProcessing.framework/CameraColorProcessing
 */

@interface LTMStatsCompute : NSObject <LTMAlgorithmBase> {
    <MTLComputePipelineState> * _calcLTMStatisticsPipelineState;
    <MTLComputePipelineState> * _calcLocalHistogramShift;
    <MTLComputePipelineState> * _collectLocalHistKernelPipelineState;
    <MTLComputePipelineState> * _globalHistKernelPipelineState;
    <MTLComputePipelineState> * _localHistAndThumKernelPipelineState;
    <MTLBuffer> * _localHistTmpBuffer;
    FigMetalContext * _metalContext;
    struct { 
        unsigned long long width; 
        unsigned long long height; 
        unsigned long long depth; 
    }  _threadgroupSize;
}

- (void).cxx_destruct;
- (int)allocateResources;
- (float)calcExposureRatio:(const struct sRefDriverInputs { bool x1; unsigned short x2; unsigned int x3; union uBTColorEntry16 { unsigned short x_4_1_1; struct uBT88 { unsigned char x_2_2_1; unsigned char x_2_2_2; } x_4_1_2; } x4; union uBTColorEntry16 { unsigned short x_5_1_1; struct uBT88 { unsigned char x_2_2_1; unsigned char x_2_2_2; } x_5_1_2; } x5; float x6; float x7; unsigned short x8; unsigned short x9; unsigned short x10; unsigned short x11; unsigned int x12; float x13; unsigned short x14; bool x15; unsigned char x16; unsigned char x17; unsigned int x18; union uBTColorEntry16 { unsigned short x_19_1_1; struct uBT88 { unsigned char x_2_2_1; unsigned char x_2_2_2; } x_19_1_2; } x19; float x20; bool x21; unsigned char x22; bool x23; bool x24; float x25; float x26; float x27; float x28; unsigned short x29[512]; float x30; struct sBTRect { int x_31_1_1; int x_31_1_2; unsigned int x_31_1_3; unsigned int x_31_1_4; } x31; struct sAWBColorCorrectionMatrix_local { union uBTColorEntry16 { unsigned short x_1_2_1; struct uBT88 { unsigned char x_2_3_1; unsigned char x_2_3_2; } x_1_2_2; } x_32_1_1[9]; } x32; }*)arg1;
- (void)computeInputParametersForImageWidth:(id)arg1 calcGlobalHistOnROI:(bool)arg2 with:(struct sRefDriverInputs { bool x1; unsigned short x2; unsigned int x3; union uBTColorEntry16 { unsigned short x_4_1_1; struct uBT88 { unsigned char x_2_2_1; unsigned char x_2_2_2; } x_4_1_2; } x4; union uBTColorEntry16 { unsigned short x_5_1_1; struct uBT88 { unsigned char x_2_2_1; unsigned char x_2_2_2; } x_5_1_2; } x5; float x6; float x7; unsigned short x8; unsigned short x9; unsigned short x10; unsigned short x11; unsigned int x12; float x13; unsigned short x14; bool x15; unsigned char x16; unsigned char x17; unsigned int x18; union uBTColorEntry16 { unsigned short x_19_1_1; struct uBT88 { unsigned char x_2_2_1; unsigned char x_2_2_2; } x_19_1_2; } x19; float x20; bool x21; unsigned char x22; bool x23; bool x24; float x25; float x26; float x27; float x28; unsigned short x29[512]; float x30; struct sBTRect { int x_31_1_1; int x_31_1_2; unsigned int x_31_1_3; unsigned int x_31_1_4; } x31; struct sAWBColorCorrectionMatrix_local { union uBTColorEntry16 { unsigned short x_1_2_1; struct uBT88 { unsigned char x_2_3_1; unsigned char x_2_3_2; } x_1_2_2; } x_32_1_1[9]; } x32; }*)arg3 to:(struct { struct { unsigned short x_1_1_1; unsigned int x_1_1_2[3]; unsigned int x_1_1_3[3]; unsigned short x_1_1_4; } x1; struct { bool x_2_1_1; unsigned short x_2_1_2; unsigned int x_2_1_3; unsigned int x_2_1_4; unsigned int x_2_1_5; unsigned int x_2_1_6; unsigned int x_2_1_7[4]; float x_2_1_8[4]; } x2; struct { bool x_3_1_1; unsigned int x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; unsigned int x_3_1_6; unsigned int x_3_1_7; unsigned int x_3_1_8; unsigned int x_3_1_9; unsigned int x_3_1_10; unsigned int x_3_1_11; unsigned int x_3_1_12; unsigned int x_3_1_13; unsigned int x_3_1_14; unsigned int x_3_1_15; } x3; struct { unsigned int x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; unsigned int x_4_1_4; unsigned int x_4_1_5; unsigned int x_4_1_6; unsigned int x_4_1_7; unsigned int x_4_1_8; int x_4_1_9; unsigned int x_4_1_10; } x4; }*)arg4;
- (int)createShaders:(id)arg1;
- (void)dealloc;
- (int)encodeLTMStatisticsCalculationOptimized:(id)arg1 params:(struct { struct { unsigned short x_1_1_1; unsigned int x_1_1_2[3]; unsigned int x_1_1_3[3]; unsigned short x_1_1_4; } x1; struct { bool x_2_1_1; unsigned short x_2_1_2; unsigned int x_2_1_3; unsigned int x_2_1_4; unsigned int x_2_1_5; unsigned int x_2_1_6; unsigned int x_2_1_7[4]; float x_2_1_8[4]; } x2; struct { bool x_3_1_1; unsigned int x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; unsigned int x_3_1_6; unsigned int x_3_1_7; unsigned int x_3_1_8; unsigned int x_3_1_9; unsigned int x_3_1_10; unsigned int x_3_1_11; unsigned int x_3_1_12; unsigned int x_3_1_13; unsigned int x_3_1_14; unsigned int x_3_1_15; } x3; struct { unsigned int x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; unsigned int x_4_1_4; unsigned int x_4_1_5; unsigned int x_4_1_6; unsigned int x_4_1_7; unsigned int x_4_1_8; int x_4_1_9; unsigned int x_4_1_10; } x4; }*)arg2 globalHistogram:(id)arg3 localHistogram:(id)arg4 thumbnail:(id)arg5;
- (int)encodeLTMStatisticsCalculationPrecise:(id)arg1 paramsGlobalHist:(struct { struct { unsigned short x_1_1_1; unsigned int x_1_1_2[3]; unsigned int x_1_1_3[3]; unsigned short x_1_1_4; } x1; struct { bool x_2_1_1; unsigned short x_2_1_2; unsigned int x_2_1_3; unsigned int x_2_1_4; unsigned int x_2_1_5; unsigned int x_2_1_6; unsigned int x_2_1_7[4]; float x_2_1_8[4]; } x2; struct { bool x_3_1_1; unsigned int x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; unsigned int x_3_1_6; unsigned int x_3_1_7; unsigned int x_3_1_8; unsigned int x_3_1_9; unsigned int x_3_1_10; unsigned int x_3_1_11; unsigned int x_3_1_12; unsigned int x_3_1_13; unsigned int x_3_1_14; unsigned int x_3_1_15; } x3; struct { unsigned int x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; unsigned int x_4_1_4; unsigned int x_4_1_5; unsigned int x_4_1_6; unsigned int x_4_1_7; unsigned int x_4_1_8; int x_4_1_9; unsigned int x_4_1_10; } x4; }*)arg2 globalHistogram:(id)arg3 localHistogram:(id)arg4 thumbnail:(id)arg5;
- (id)initWithMetalContext:(id)arg1;
- (int)prewarmShaders;
- (int)purgeResources;

@end
