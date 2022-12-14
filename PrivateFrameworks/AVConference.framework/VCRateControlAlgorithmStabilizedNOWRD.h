/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCRateControlAlgorithmStabilizedNOWRD : VCRateControlAlgorithmBase {
    bool  _abnormalNetworkDetected;
    bool  _basebandAdaptationEnabled;
    int  _basebandAdditionalTiersForRampUp;
    unsigned int  _basebandAverageBitrate;
    double  _basebandExpectedQueuingDelay;
    double  _basebandLTEOrGreaterRATSwitchTime;
    double  _basebandNormalizedBDCD;
    double  _basebandNormalizedQueuingDelay;
    double  _basebandNotificationArrivalTime;
    int  _basebandRadioTechnology;
    unsigned int  _basebandTotalQueueDepth;
    int  _currentHistoryIndex;
    int  _currentHistorySize;
    unsigned short  _echoedTimestamp;
    double  _extendedRampUpFrozenExitTime;
    unsigned int  _fastRampDownBitrateRange;
    double  _firstOWRDFrozenTime;
    struct { 
        double owrd; 
        double roundTripTime; 
        double roundTripTimeMinEnvelope; 
        double packetLossRate; 
        int tierIndex; 
    }  _history;
    double  _inAudioBitrate;
    double  _inVideoBitrate;
    bool  _isRampUpSettling;
    bool  _isRemoteBandwidthEstimationStable;
    bool  _isStable;
    bool  _isWaitingForBasebandRampDown;
    double  _lastAllowRampUpTime;
    double  _lastBasebandRampDownTime;
    double  _lastHighNBDCDTime;
    double  _lastNetworkUnstableTime;
    double  _lastPositiveOWRDTime;
    unsigned int  _lastRateChangeCounter;
    unsigned int  _newOWRDSampleCollected;
    double  _outAudioBitrate;
    double  _outVideoBitrate;
    unsigned int  _packetBurstLoss;
    unsigned int  _packetReceivedVideo;
    double  _previousNOWRD;
    double  _previousRoundTripTime;
    unsigned short  _previousTimestamp;
    unsigned short  _queuingDelayTimestamp;
    unsigned int  _rampDownSuppressionBitrateThreshold;
    double  _rampUpFrozenDuration;
    double  _rampUpSettleDuration;
    double  _rateChangeSystemTime;
    unsigned int  _receiveTimestamp;
    double  _roundTripTimeMinEnvelope;
    unsigned int  _roundTripTimeTick;
    double  _sendBitrateLimitedStartTime;
    bool  _shouldSuppressRampDown;
    double  _stabilizationTime;
    unsigned int  _timestampWrapAroundCounter;
    bool  _withBTCoex;
}

- (int)basebandAdditionalTiersForRampUp;
- (void)calculateCongestionMetricsFromOWRD:(double)arg1 time:(double)arg2;
- (void)calculatePacketLossWithReceivedPacketCount:(unsigned int)arg1 receivedPacketCountVideo:(unsigned int)arg2 packetBurstLoss:(unsigned short)arg3 packetLossSample:(double)arg4;
- (void)calculateRoundTripTimeWithSample:(double)arg1;
- (void)checkAbnormalNetworkCondition;
- (void)checkCongestionStatus;
- (void)checkMediaQueueBitrates;
- (bool)checkNetworkSaturationWithRoundTripTime:(double)arg1 minRoundTripTime:(double)arg2 packetLossRate:(double)arg3 owrd:(double)arg4;
- (void)checkStabilizationWithEchoedTimestamp:(unsigned short)arg1 queuingDelay:(unsigned short)arg2;
- (void)configure:(struct VCRateControlAlgorithmConfig { unsigned int x1; unsigned int *x2; int x3; int x4; int x5; int x6[2]; int x7; int x8; int x9; int x10; int x11; int x12; int x13; int x14; int x15; int x16; int x17; double x18; double x19; double x20; double x21; double x22; double x23; double x24; double x25; double x26; double x27; double x28; double x29; double x30; double x31; int x32; int x33; int x34; double x35; double x36; double x37; double x38; double x39; double x40; double x41; double x42; double x43; double x44; double x45; unsigned int x46; unsigned int x47; unsigned int x48; unsigned int x49; unsigned int x50; bool x51; bool x52; bool x53; bool x54; bool x55; bool x56; bool x57; bool x58; bool x59; bool x60; bool x61; int x62; bool x63; double x64; double x65; int x66; double x67; int x68; double x69; double x70; double x71; int x72; double x73; int x74; int x75; double x76; double x77; int x78; double x79; double x80; double x81; double x82; double x83; double x84; double x85; double x86; double x87; double x88; double x89; double x90; double x91; })arg1 restartRequired:(bool)arg2;
- (bool)doRateControlWithBasebandStatistics:(struct { int x1; int x2; double x3; bool x4; bool x5; bool x6; bool x7; union { struct { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; unsigned int x_1_2_6; double x_1_2_7; double x_1_2_8; double x_1_2_9; double x_1_2_10; double x_1_2_11; BOOL x_1_2_12[64]; int x_1_2_13; } x_8_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; unsigned int x_2_2_4; unsigned int x_2_2_5; unsigned int x_2_2_6; unsigned int x_2_2_7; unsigned int x_2_2_8; unsigned int x_2_2_9; unsigned int x_2_2_10; unsigned int x_2_2_11; unsigned int x_2_2_12; double x_2_2_13; double x_2_2_14; unsigned int x_2_2_15; unsigned int x_2_2_16; double x_2_2_17; unsigned int x_2_2_18; bool x_2_2_19; struct { int x_20_3_1; unsigned int x_20_3_2; unsigned int x_20_3_3; unsigned int x_20_3_4; double x_20_3_5; double x_20_3_6; double x_20_3_7; unsigned int x_20_3_8; unsigned int x_20_3_9; } x_2_2_20; struct { unsigned short x_21_3_1; bool x_21_3_2; bool x_21_3_3; unsigned int x_21_3_4; } x_2_2_21; } x_8_1_2; struct { double x_3_2_1; double x_3_2_2; double x_3_2_3; unsigned int x_3_2_4; unsigned int x_3_2_5; unsigned int x_3_2_6; unsigned int x_3_2_7; unsigned int x_3_2_8; unsigned long long x_3_2_9; unsigned int x_3_2_10; } x_8_1_3; } x8; })arg1;
- (bool)doRateControlWithNWStatistics:(struct { int x1; int x2; double x3; bool x4; bool x5; bool x6; bool x7; union { struct { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; unsigned int x_1_2_6; double x_1_2_7; double x_1_2_8; double x_1_2_9; double x_1_2_10; double x_1_2_11; BOOL x_1_2_12[64]; int x_1_2_13; } x_8_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; unsigned int x_2_2_4; unsigned int x_2_2_5; unsigned int x_2_2_6; unsigned int x_2_2_7; unsigned int x_2_2_8; unsigned int x_2_2_9; unsigned int x_2_2_10; unsigned int x_2_2_11; unsigned int x_2_2_12; double x_2_2_13; double x_2_2_14; unsigned int x_2_2_15; unsigned int x_2_2_16; double x_2_2_17; unsigned int x_2_2_18; bool x_2_2_19; struct { int x_20_3_1; unsigned int x_20_3_2; unsigned int x_20_3_3; unsigned int x_20_3_4; double x_20_3_5; double x_20_3_6; double x_20_3_7; unsigned int x_20_3_8; unsigned int x_20_3_9; } x_2_2_20; struct { unsigned short x_21_3_1; bool x_21_3_2; bool x_21_3_3; unsigned int x_21_3_4; } x_2_2_21; } x_8_1_2; struct { double x_3_2_1; double x_3_2_2; double x_3_2_3; unsigned int x_3_2_4; unsigned int x_3_2_5; unsigned int x_3_2_6; unsigned int x_3_2_7; unsigned int x_3_2_8; unsigned long long x_3_2_9; unsigned int x_3_2_10; } x_8_1_3; } x8; })arg1;
- (bool)doRateControlWithStatistics:(struct { int x1; int x2; double x3; bool x4; bool x5; bool x6; bool x7; union { struct { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; unsigned int x_1_2_6; double x_1_2_7; double x_1_2_8; double x_1_2_9; double x_1_2_10; double x_1_2_11; BOOL x_1_2_12[64]; int x_1_2_13; } x_8_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; unsigned int x_2_2_4; unsigned int x_2_2_5; unsigned int x_2_2_6; unsigned int x_2_2_7; unsigned int x_2_2_8; unsigned int x_2_2_9; unsigned int x_2_2_10; unsigned int x_2_2_11; unsigned int x_2_2_12; double x_2_2_13; double x_2_2_14; unsigned int x_2_2_15; unsigned int x_2_2_16; double x_2_2_17; unsigned int x_2_2_18; bool x_2_2_19; struct { int x_20_3_1; unsigned int x_20_3_2; unsigned int x_20_3_3; unsigned int x_20_3_4; double x_20_3_5; double x_20_3_6; double x_20_3_7; unsigned int x_20_3_8; unsigned int x_20_3_9; } x_2_2_20; struct { unsigned short x_21_3_1; bool x_21_3_2; bool x_21_3_3; unsigned int x_21_3_4; } x_2_2_21; } x_8_1_2; struct { double x_3_2_1; double x_3_2_2; double x_3_2_3; unsigned int x_3_2_4; unsigned int x_3_2_5; unsigned int x_3_2_6; unsigned int x_3_2_7; unsigned int x_3_2_8; unsigned long long x_3_2_9; unsigned int x_3_2_10; } x_8_1_3; } x8; })arg1;
- (bool)doRateControlWithVCRCStatistics:(struct { int x1; int x2; double x3; bool x4; bool x5; bool x6; bool x7; union { struct { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; unsigned int x_1_2_6; double x_1_2_7; double x_1_2_8; double x_1_2_9; double x_1_2_10; double x_1_2_11; BOOL x_1_2_12[64]; int x_1_2_13; } x_8_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; unsigned int x_2_2_4; unsigned int x_2_2_5; unsigned int x_2_2_6; unsigned int x_2_2_7; unsigned int x_2_2_8; unsigned int x_2_2_9; unsigned int x_2_2_10; unsigned int x_2_2_11; unsigned int x_2_2_12; double x_2_2_13; double x_2_2_14; unsigned int x_2_2_15; unsigned int x_2_2_16; double x_2_2_17; unsigned int x_2_2_18; bool x_2_2_19; struct { int x_20_3_1; unsigned int x_20_3_2; unsigned int x_20_3_3; unsigned int x_20_3_4; double x_20_3_5; double x_20_3_6; double x_20_3_7; unsigned int x_20_3_8; unsigned int x_20_3_9; } x_2_2_20; struct { unsigned short x_21_3_1; bool x_21_3_2; bool x_21_3_3; unsigned int x_21_3_4; } x_2_2_21; } x_8_1_2; struct { double x_3_2_1; double x_3_2_2; double x_3_2_3; unsigned int x_3_2_4; unsigned int x_3_2_5; unsigned int x_3_2_6; unsigned int x_3_2_7; unsigned int x_3_2_8; unsigned long long x_3_2_9; unsigned int x_3_2_10; } x_8_1_3; } x8; })arg1;
- (unsigned int)getRampDownSuppressionBitrateThresholdWithRTT;
- (double)getRampUpFrozenDuration;
- (double)getRampUpSettleDuration;
- (id)init;
- (bool)isBasebandNotificationOutOfKeyFrameCoolDownTime;
- (bool)isBasebandRATGreaterOrSameAsLTE:(int)arg1;
- (bool)isBitrateOscillatingWithCurrentTierIndex:(int)arg1;
- (bool)isNetworkSaturated;
- (bool)isRoundTripTimeDecreasingOrLessThanMinEnvelope;
- (void)printRateControlInfoToLogDump;
- (int)rampDownTier;
- (int)rampDownTierDueToBaseband:(double)arg1;
- (int)rampUpTier;
- (void)resetRampingStatus;
- (void)runRateControlStateTransition;
- (void)setBitrateUnstable;
- (void)setLocalBandwidthEstimation:(unsigned int)arg1;
- (bool)shouldBlockRampUpDueToNetworkUnstable;
- (bool)shouldEnableBasebandAdaptationWithBasebandStatistics:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; double x7; double x8; double x9; double x10; double x11; BOOL x12[64]; int x13; })arg1 previousBasebandRAT:(int)arg2;
- (bool)shouldFastRampUp;
- (bool)shouldRampDown;
- (bool)shouldRampDownDueToBaseband;
- (bool)shouldRampDownDueToNOWRD;
- (bool)shouldRampDownDueToNOWRDAcc;
- (bool)shouldRampUp;
- (bool)shouldRampUpDueToBaseband;
- (bool)shouldUnblockRampUpAfterTimeOut;
- (void)stateEnter;
- (void)stateExit;
- (bool)updateInternalStatistics:(struct { int x1; int x2; double x3; bool x4; bool x5; bool x6; bool x7; union { struct { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; unsigned int x_1_2_6; double x_1_2_7; double x_1_2_8; double x_1_2_9; double x_1_2_10; double x_1_2_11; BOOL x_1_2_12[64]; int x_1_2_13; } x_8_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; unsigned int x_2_2_4; unsigned int x_2_2_5; unsigned int x_2_2_6; unsigned int x_2_2_7; unsigned int x_2_2_8; unsigned int x_2_2_9; unsigned int x_2_2_10; unsigned int x_2_2_11; unsigned int x_2_2_12; double x_2_2_13; double x_2_2_14; unsigned int x_2_2_15; unsigned int x_2_2_16; double x_2_2_17; unsigned int x_2_2_18; bool x_2_2_19; struct { int x_20_3_1; unsigned int x_20_3_2; unsigned int x_20_3_3; unsigned int x_20_3_4; double x_20_3_5; double x_20_3_6; double x_20_3_7; unsigned int x_20_3_8; unsigned int x_20_3_9; } x_2_2_20; struct { unsigned short x_21_3_1; bool x_21_3_2; bool x_21_3_3; unsigned int x_21_3_4; } x_2_2_21; } x_8_1_2; struct { double x_3_2_1; double x_3_2_2; double x_3_2_3; unsigned int x_3_2_4; unsigned int x_3_2_5; unsigned int x_3_2_6; unsigned int x_3_2_7; unsigned int x_3_2_8; unsigned long long x_3_2_9; unsigned int x_3_2_10; } x_8_1_3; } x8; })arg1;
- (void)updateInternalStatus;
- (bool)updateParametersForRampDownSuppression;
- (void)updateVCRateControlHistory;
- (unsigned int)worstRecentBurstLoss;
- (double)worstRecentRoundTripTime;

@end
