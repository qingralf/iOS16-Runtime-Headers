/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

@interface WiFiUsagePrivacyFilter : NSObject

+ (id)bandAsString:(int)arg1;
+ (int)bandFrom:(id)arg1 Or:(id)arg2;
+ (bool)canPerformActionWithSampleRate:(unsigned long long)arg1;
+ (id)getBinEvery10Over100:(unsigned long long)arg1 As:(unsigned long long)arg2;
+ (id)getBinFor:(long long)arg1 In:(id)arg2 WithLowestEdge:(id)arg3 As:(unsigned long long)arg4;
+ (id)getBinTimeInterval:(double)arg1 As:(unsigned long long)arg2;
+ (id)getHumanSeconds:(id)arg1;
+ (id)getLabelForBandUsageDuration:(struct { double x1[2]; bool x2[2]; })arg1 overTotalDuration:(double)arg2;
+ (id)getLabelForIntegerByBand:(struct { long long x1[2]; bool x2[2]; })arg1;
+ (id)getLabelForIntegerByBand:(struct { long long x1[2]; bool x2[2]; })arg1 In:(id)arg2 WithLowestEdge:(id)arg3 As:(unsigned long long)arg4;
+ (id)getLabelForIntegerByBand:(struct { long long x1[2]; bool x2[2]; })arg1 withCap:(bool)arg2;
+ (id)getLabelForIntegerByBandTransition:(struct { long long x1[2][2]; bool x2[2][2]; })arg1 In:(id)arg2 WithLowestEdge:(id)arg3 As:(unsigned long long)arg4;
+ (id)getLabelForNeighborsByBand:(id)arg1;
+ (id)getLabelForPercIntegerByBand:(struct { long long x1[2]; bool x2[2]; })arg1;
+ (id)getLabelForRssiByBand:(struct { long long x1[2]; bool x2[2]; })arg1;
+ (id)getLabelForRssiDeltaByBand:(struct { long long x1[2]; bool x2[2]; })arg1;
+ (id)getLabelForRssiDeltaByBandTransition:(struct { long long x1[2][2]; bool x2[2][2]; })arg1;
+ (struct { long long x1[2]; bool x2[2]; })getModeCountersByCandidatesByBand:(id)arg1;
+ (struct { long long x1[2]; bool x2[2]; })getPercForFloatByBand:(struct { double x1[2]; bool x2[2]; })arg1 Over:(double)arg2;
+ (struct { long long x1[2]; bool x2[2]; })getPercForIntegerByBand:(struct { long long x1[2]; bool x2[2]; })arg1 Over:(unsigned long long)arg2;
+ (long long)getSumAllBands:(struct { long long x1[2]; bool x2[2]; })arg1;
+ (id)getSumArrayCountAllBand:(id)arg1;
+ (void)initialize;
+ (bool)isInternalInstall;
+ (id)localTimestamp:(id)arg1;
+ (id)numberWithByteCount:(unsigned long long)arg1;
+ (id)numberWithDuration:(double)arg1;
+ (id)numberWithDurationMillisecond:(double)arg1;
+ (id)numberWithFrameCount:(unsigned long long)arg1;
+ (id)numberWithInstances:(unsigned long long)arg1;
+ (id)oui:(id)arg1;
+ (id)reformatMACAddress:(id)arg1;
+ (id)sanitizedOUI:(id)arg1;
+ (id)timePercentage:(double)arg1 overTotalDuration:(double)arg2;
+ (id)toHEXString:(char *)arg1 length:(unsigned long long)arg2;
+ (id)twoSigFig:(unsigned long long)arg1;

@end
